using System;
using System.Collections.Generic;
using Unity.Collections;

#if !UNITY_2019_2_OR_NEWER
using UnityEngine.Experimental;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Defines an interface for interacting with human body functionality.
    /// </summary>
    public abstract class XRHumanBodySubsystem : TrackingSubsystem<XRHumanBody, XRHumanBodySubsystemDescriptor>
    {
        /// <summary>
        /// The implementation specific provider of human body functionality.
        /// </summary>
        /// <value>
        /// The implementation specific provider of human body functionality.
        /// </value>
        IProvider m_Provider;

        /// <summary>
        /// Whether human body pose estimation is enabled.
        /// </summary>
        /// <value>
        /// <c>true</c> if human body pose estimation is enabled. Otherwise, <c>false</c>.
        /// </value>
        /// <remarks>
        /// Current restrictions limit either human body pose estimation to be enabled or human segmentation images to
        /// be enabled. At this time, these features are mutually exclusive.
        /// </remarks>
        public bool humanBodyPoseEstimationEnabled
        {
            get { return m_HumanBodyPoseEstimationEnabled; }
            set
            {
                if (value)
                {
                    if (humanSegmentationStencilMode.Enabled())
                    {
                        Debug.LogWarning("Warning: Disabling human segmentation stencil mode because human body pose "
                                         + "estimation and human segmentation stencil mode may not be both enabled "
                                         + "simultaneously");
                        humanSegmentationStencilMode = HumanSegmentationMode.Disabled;
                    }

                    if (humanSegmentationDepthMode.Enabled())
                    {
                        Debug.LogWarning("Warning: Disabling human segmentation depth mode because human body pose "
                                         + "estimation and human segmentation depth mode may not be both enabled "
                                         + "simultaneously");
                        humanSegmentationDepthMode = HumanSegmentationMode.Disabled;
                    }
                }

                if ((m_HumanBodyPoseEstimationEnabled != value)
                    && m_Provider.TrySetHumanBodyPoseEstimationEnabled(value))
                {
                    m_HumanBodyPoseEstimationEnabled = value;
                }
            }
        }
        bool m_HumanBodyPoseEstimationEnabled = false;

        /// <summary>
        /// Specifies the human segmentation stencil mode.
        /// </summary>
        /// <value>
        /// The human segmentation stencil mode.
        /// </value>
        /// <remarks>
        /// Current restrictions limit either human body pose estimation to be enabled or human segmentation images to
        /// be enabled. At this time, these features are mutually exclusive.
        /// </remarks>
        /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation stencil mode to
        /// enabled if the implementation does not support human segmentation.</exception>
        public HumanSegmentationMode humanSegmentationStencilMode
        {
            get { return m_HumanSegmentationStencilMode; }
            set
            {
                if (value.Enabled() && humanBodyPoseEstimationEnabled)
                {
                    Debug.LogWarning("Warning: Disabling human body pose estimation because human body pose estimation "
                                     + "and human segmentation stencil mode may not be both enabled simultaneously");
                    humanBodyPoseEstimationEnabled = false;
                }

                if ((m_HumanSegmentationStencilMode != value)
                    && m_Provider.TrySetHumanSegmentationStencilMode(value))
                {
                    m_HumanSegmentationStencilMode = value;
                }
            }
        }
        HumanSegmentationMode m_HumanSegmentationStencilMode = HumanSegmentationMode.Disabled;

        /// <summary>
        /// Specifies the human segmentation depth mode.
        /// </summary>
        /// <value>
        /// The human segmentation depth mode.
        /// </value>
        /// <remarks>
        /// Current restrictions limit either human body pose estimation to be enabled or human segmentation images to
        /// be enabled. At this time, these features are mutually exclusive.
        /// </remarks>
        /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation depth mode to
        /// enabled if the implementation does not support human segmentation.</exception>
        public HumanSegmentationMode humanSegmentationDepthMode
        {
            get { return m_HumanSegmentationDepthMode; }
            set
            {
                if (value.Enabled() && humanBodyPoseEstimationEnabled)
                {
                    Debug.LogWarning("Warning: Disabling human body pose estimation because human body pose estimation "
                                     + "and human segmentation depth mode may not be both enabled simultaneously");
                    humanBodyPoseEstimationEnabled = false;
                }

                if ((m_HumanSegmentationDepthMode != value)
                    && m_Provider.TrySetHumanSegmentationDepthMode(value))
                {
                    m_HumanSegmentationDepthMode = value;
                }
            }
        }
        HumanSegmentationMode m_HumanSegmentationDepthMode = HumanSegmentationMode.Disabled;

        /// <summary>
        /// Construct the subsystem by creating the functionality provider.
        /// </summary>
        public XRHumanBodySubsystem()
        {
            m_Provider = CreateProvider();
        }

        /// <summary>
        /// Start the subsystem by starting the provider.
        /// </summary>
        public override void Start()
        {
            if (!m_Running)
            {
                m_Provider.Start();
                m_Running = true;
            }
        }

        /// <summary>
        /// Stop the subsystem by stopping the provider.
        /// </summary>
        public override void Stop()
        {
            if (m_Running)
            {
                m_Provider.Stop();
                m_Running = false;
            }
        }

        /// <summary>
        /// Destroy the subsystem by desstroying the provider.
        /// </summary>
        public override void Destroy()
        {
            Stop();
            m_Provider.Destroy();
        }

        /// <summary>
        /// Query the provider for the trackable changes.
        /// </summary>
        /// <param name="allocator">The memory allocator to use for allocating the arrays.</param>
        /// <returns>
        /// The trackable human body changes.
        /// </returns>
        public override TrackableChanges<XRHumanBody> GetChanges(Allocator allocator)
        {
            return m_Provider.GetChanges(XRHumanBody.GetDefault(), allocator);
        }

        /// <summary>
        /// Query the provider for the skeleton joints for the requested trackable identifier.
        /// </summary>
        /// <param name="trackableId">The human body trackable identifier for which to query.</param>
        /// <param name="allocator">The memory allocator to use for the returned arrays.</param>
        /// <param name="skeleton">The array of skeleton joints to update and returns.</param>
        public void GetSkeleton(TrackableId trackableId, Allocator allocator, ref NativeArray<XRHumanBodyJoint> skeleton)
        {
            m_Provider.GetSkeleton(trackableId, allocator, ref skeleton);
        }

        /// <summary>
        /// Gets the human body pose 2D joints for the current frame.
        /// </summary>
        /// <param name="allocator">The allocator to use for the returned array memory.</param>
        /// <returns>
        /// The array of body pose 2D joints.
        /// </returns>
        /// <remarks>
        /// The returned array may be empty if the system is not enabled for human body pose 2D or if the system
        /// does not detect a human in the camera image.
        /// </remarks>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human body
        /// pose 2D.</exception>
        public NativeArray<XRHumanBodyPose2DJoint> GetHumanBodyPose2DJoints(Allocator allocator)
        {
            return m_Provider.GetHumanBodyPose2DJoints(default(XRHumanBodyPose2DJoint), Screen.orientation, allocator);
        }

        /// <summary>
        /// Gets the human stencil texture descriptor.
        /// </summary>
        /// <param name="humanStencilDescriptor">The human stencil texture descriptor to be populated, if available
        /// from the provider.</param>
        /// <returns>
        /// <c>true</c> if the human stencil texture descriptor is available and is returned. Otherwise, <c>false</c>.
        /// </returns>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human stencil
        /// texture.</exception>
        public bool TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor)
        {
            return m_Provider.TryGetHumanStencil(out humanStencilDescriptor);
        }

        /// <summary>
        /// Gets the human depth texture descriptor.
        /// </summary>
        /// <param name="humanDepthDescriptor">The human depth texture descriptor to be populated, if available from
        /// the provider.</param>
        /// <returns>
        /// <c>true</c> if the human depth texture descriptor is available and is returned. Otherwise, <c>false</c>.
        /// </returns>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human depth
        /// texture.</exception>
        public bool TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor)
        {
            return m_Provider.TryGetHumanDepth(out humanDepthDescriptor);
        }

        /// <summary>
        /// Create the implementation specific functionality provider.
        /// </summary>
        /// <returns>
        /// The implementation specific functionality provider.
        /// </returns>
        protected abstract IProvider CreateProvider();

        /// <summary>
        /// Register the descriptor for the human body subsystem implementation.
        /// </summary>
        /// <param name="humanBodySubsystemCinfo">The human body subsystem implementation construction information.
        /// </param>
        /// <returns>
        /// <c>true</c> if the descriptor was registered. Otherwise, <c>false</c>.
        /// </returns>
        public static bool Register(XRHumanBodySubsystemCinfo humanBodySubsystemCinfo)
        {
            XRHumanBodySubsystemDescriptor humanBodySubsystemDescriptor = XRHumanBodySubsystemDescriptor.Create(humanBodySubsystemCinfo);

            return SubsystemRegistration.CreateDescriptor(humanBodySubsystemDescriptor);
        }

        protected abstract class IProvider
        {
            /// <summary>
            /// Method to be implemented by the provider to start the functionality.
            /// </summary>
            public virtual void Start()
            {
            }

            /// <summary>
            /// Method to be implemented by the provider to stop the functionality.
            /// </summary>
            public virtual void Stop()
            {
            }

            /// <summary>
            /// Method to be implemented by the provider to destroy itself and release any resources.
            /// </summary>
            public virtual void Destroy()
            {
            }

            /// <summary>
            /// Method to be implemented by the provider to sets whether human body pose estimation is enabled.
            /// </summary>
            /// <param name="humanBodyPoseEstimationEnabled">Whether the human body pose estimation should be enabled.
            /// </param>
            /// <returns>
            /// <c>true</c> if the human body pose estimation is set to the given value. Otherwise, <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown when setting the human body pose estimation to
            /// <c>true if the implementation does not support human body pose estimation.</exception>
            public virtual bool TrySetHumanBodyPoseEstimationEnabled(bool humanBodyPoseEstimationEnabled)
            {
                if (humanBodyPoseEstimationEnabled)
                {
                    throw new NotSupportedException("Setting human body pose estimation to enabled is not supported "
                                                    + "by this implementation");
                }

                return false;
            }

            /// <summary>
            /// Method to be implemented by the provider to set the human segmentation stencil mode.
            /// </summary>
            /// <param name="humanSegmentationStencilMode">The mode for the human segmentation stencil.</param>
            /// <returns>
            /// <c>true</c> if the method successfully set the human segmentation stencil mode. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation stencil mode
            /// to enabled if the implementation does not support human segmentation.</exception>
            public virtual bool TrySetHumanSegmentationStencilMode(HumanSegmentationMode humanSegmentationStencilMode)
            {
                if (humanSegmentationStencilMode.Enabled())
                {
                    throw new NotSupportedException("Setting human segmentation stencil to enabled is not supported "
                                                    + "by this implementation");
                }

                return false;
            }

            /// <summary>
            /// Method to be implemented by the provider to set the human segmentation depth mode.
            /// </summary>
            /// <param name="humanSegmentationDepthMode">The mode for the human segmentation depth.</param>
            /// <returns>
            /// <c>true</c> if the method successfully set the human segmentation depth mode. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation depth mode to
            /// enabled if the implementation does not support human segmentation.</exception>
            public virtual bool TrySetHumanSegmentationDepthMode(HumanSegmentationMode humanSegmentationDepthMode)
            {
                if (humanSegmentationDepthMode.Enabled())
                {
                    throw new NotSupportedException("Setting human segmentation depth to enabled is not supported by "
                                                    + "this implementation");
                }

                return false;
            }

            /// <summary>
            /// Method to be implemented by the provider to query for the set of human body changes.
            /// </summary>
            /// <param name="defaultHumanBody">The default human body.</param>
            /// <param name="allocator">The memory allocator to use for the returns trackable changes.</param>
            /// <returns>
            /// The set of human body changes.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown for platforms not supporting human body pose
            /// estimation.</exception>
            public virtual TrackableChanges<XRHumanBody> GetChanges(XRHumanBody defaultHumanBody, Allocator allocator)
            {
                throw new NotSupportedException("Body pose estimation not supported by this implementation.");
            }

            /// <summary>
            /// Method to be implemented by the provider to get the skeleton joints for the requested trackable identifier.
            /// </summary>
            /// <param name="trackableId">The human body trackable identifier for which to query.</param>
            /// <param name="allocator">The memory allocator to use for the returned arrays.</param>
            /// <param name="skeleton">The array of skeleton joints to update and returns.</param>
            /// <exception cref="System.NotSupportedException">Thrown for platforms not supporting human body pose
            /// estimation.</exception>
            public virtual void GetSkeleton(TrackableId trackableId, Allocator allocator, ref NativeArray<XRHumanBodyJoint> skeleton)
            {
                throw new NotSupportedException("Skeletons are not supported by this implementation.");
            }

            /// <summary>
            /// Method to be implemented by the provider to get the human body pose 2D joints for the current frame.
            /// </summary>
            /// <param name="defaultBody2DJoint">The default value for the body pose 2D joint.</param>
            /// <param name="screenOrientation">The orientation of the device so that the joint positions may be
            /// adjusted as required.</param>
            /// <param name="allocator">The allocator to use for the returned array memory.</param>
            /// <returns>
            /// The array of body pose 2D joints.
            /// </returns>
            /// <remarks>
            /// The returned array may be empty if the system is not enabled for human body pose 2D or if the system
            /// does not detect a human in the camera image.
            /// </remarks>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human body
            /// pose 2D.</exception>
            public virtual NativeArray<XRHumanBodyPose2DJoint> GetHumanBodyPose2DJoints(XRHumanBodyPose2DJoint defaultHumanBodyPose2DJoint,
                                                                                        ScreenOrientation screenOrientation,
                                                                                        Allocator allocator)
            {
                throw new NotSupportedException("human body pose 2D is not supported by this implementation");
            }

            /// <summary>
            /// Method to be implemented by the provider to gets the human stencil texture descriptor.
            /// </summary>
            /// <param name="humanStencilDescriptor">The human stencil texture descriptor to be populated, if
            /// available.</param>
            /// <returns>
            /// <c>true</c> if the human stencil texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human
            /// stencil texture.</exception>
            public virtual bool TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor)
            {
                throw new NotSupportedException("human stencil texture is not supported by this implementation");
            }

            /// <summary>
            /// Method to be implemented by the provider to get the human depth texture descriptor.
            /// </summary>
            /// <param name="humanDepthDescriptor">The human depth texture descriptor to be populated, if available
            /// </param>
            /// <returns>
            /// <c>true</c> if the human depth texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human
            /// depth texture.</exception>
            public virtual bool TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor)
            {
                throw new NotSupportedException("human depth texture is not supported by this implementation");
            }
        }
    }
}
