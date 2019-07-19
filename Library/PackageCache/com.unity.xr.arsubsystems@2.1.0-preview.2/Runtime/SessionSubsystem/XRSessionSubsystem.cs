using System;

#if !UNITY_2019_2_OR_NEWER
using UnityEngine.Experimental;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// This subsystem controls the lifecycle of an XR session. Some platforms,
    /// particularly those that have non-XR modes, need to be able to turn the
    /// session on and off to enter and exit XR mode(s) of operation.
    /// </summary>
    public abstract class XRSessionSubsystem : Subsystem<XRSessionSubsystemDescriptor>
    {
        /// <summary>
        /// Whether the session is currently running.
        /// </summary>
#if UNITY_2019_2_OR_NEWER
        public override bool running
#else
        public bool running
#endif
        { 
            get { return m_Running; } 
        }

        /// <summary>
        /// Implementing classes must set this value to reflect the running state of the subsystem
        /// </summary>
        protected bool m_Running;

        /// <summary>
        /// Returns an implementation-defined pointer associated with the session.
        /// </summary>
        public IntPtr nativePtr
        {
            get { return m_Provider.nativePtr; }
        }

        /// <summary>
        /// Asynchronously retrieves the <see cref="SessionAvailability"/>. Used to determine whether
        /// the current device supports XR and if the necessary software is installed.
        /// </summary>
        /// <remarks>
        /// This platform-agnostic method is typically implemented by a platform-specific package.
        /// </remarks>
        /// <returns>A <see cref="Promise{SessionAvailability}"/> which can be used to determine when the
        /// availability has been determined and retrieve the result.</returns>
        public Promise<SessionAvailability> GetAvailabilityAsync()
        {
            return m_Provider.GetAvailabilityAsync();
        }

        /// <summary>
        /// Asynchronously attempts to install XR software on the current device.
        /// Throws if <see cref="XRSessionSubsystemDescriptor.supportsInstall"/> is <c>false</c>.
        /// </summary>
        /// <remarks>
        /// This platform-agnostic method is typically implemented by a platform-specific package.
        /// </remarks>
        /// <returns>A <see cref="Promise{SessionInstallationStatus}"/> which can be used to determine when the
        /// installation completes and retrieve the result.</returns>
        public Promise<SessionInstallationStatus> InstallAsync()
        {
            if (!SubsystemDescriptor.supportsInstall)
                throw new NotSupportedException("InstallAsync is not supported on this platform.");

            return m_Provider.InstallAsync();
        }

        /// <summary>
        /// Do not call this directly. Call create on a valid <see cref="XRSessionSubsystemDescriptor"/> instead.
        /// </summary>
        public XRSessionSubsystem()
        {
            m_Provider = CreateProvider();
        }

        /// <summary>
        /// Starts or resumes the session.
        /// </summary>
        public override void Start()
        {
            if (!m_Running)
                m_Provider.Resume();

            m_Running = true;
        }

        /// <summary>
        /// Restarts a session. <see cref="Stop"/> and <see cref="Start"/> pause and resume
        /// a session, respectively. <c>Restart</c> resets the session state and clears
        /// and any detected trackables.
        /// </summary>
        public void Reset()
        {
            m_Provider.Reset();
        }

        /// <summary>
        /// Pauses the session.
        /// </summary>
        public override void Stop()
        {
            if (m_Running)
                m_Provider.Pause();

            m_Running = false;
        }

        /// <summary>
        /// Destroys the session.
        /// </summary>
        public override void Destroy()
        {
            Stop();
            m_Provider.Destroy();
        }

        /// <summary>
        /// Trigger the session's update loop.
        /// </summary>
        /// <param name="updateParams">Data needed by the session to perform its update.</param>
        public void Update(XRSessionUpdateParams updateParams)
        {
            m_Provider.Update(updateParams);
        }

        /// <summary>
        /// Should be invoked when the application is paused.
        /// </summary>
        public void OnApplicationPause()
        {
            m_Provider.OnApplicationPause();
        }

        /// <summary>
        /// Should be invoked when the application is resumed.
        /// </summary>
        public void OnApplicationResume()
        {
            m_Provider.OnApplicationResume();
        }

        /// <summary>
        /// Gets the <see cref="TrackingState"/> for the session.
        /// </summary>
        public TrackingState trackingState
        {
            get { return m_Provider.trackingState; }
        }

        /// <summary>
        /// Implement this to provide this class with an interface to
        /// platform specific implementations.
        /// </summary>
        /// <returns>An implementation specific provider.</returns>
        protected abstract IProvider CreateProvider();

        /// <summary>
        /// The API this subsystem uses to interop with
        /// different provider implementations.
        /// </summary>
        protected class IProvider
        {
            /// <summary>
            /// Invoked to start or resume a session. This is different from <see cref="OnApplicationResume"/>.
            /// </summary>
            public virtual void Resume()
            { }

            /// <summary>
            /// Invoked to pause a running session. This is different from <see cref="OnApplicationPause"/>.
            /// </summary>
            public virtual void Pause()
            { }

            /// <summary>
            /// Perform any per-frame update logic here.
            /// </summary>
            /// <param name="updateParams">Paramters about the current state that may be needed to inform the session.</param>
            public virtual void Update(XRSessionUpdateParams updateParams)
            { }

            /// <summary>
            /// Stop the session and destroy all associated resources.
            /// </summary>
            public virtual void Destroy()
            { }

            /// <summary>
            /// Reset the session. The behavior should be equivalent to destroying and recreating the session.
            /// </summary>
            public virtual void Reset()
            { }

            /// <summary>
            /// Invoked when the application is paused.
            /// </summary>
            public virtual void OnApplicationPause()
            { }

            /// <summary>
            /// Invoked when the application is resumed.
            /// </summary>
            public virtual void OnApplicationResume()
            { }

            /// <summary>
            /// Get a pointer to an object associated with the session.
            /// Callers should be able to manipulate the session in their own code using this.
            /// </summary>
            public virtual IntPtr nativePtr
            {
                get { return IntPtr.Zero; }
            }

            /// <summary>
            /// Get the session's availability, such as whether the platform supports XR.
            /// </summary>
            /// <returns>A <see cref="Promise{T}"/> that the caller can yield on until availability is determined.</returns>
            public virtual Promise<SessionAvailability> GetAvailabilityAsync()
            {
                return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
            }

            /// <summary>
            /// Attempt to update or install necessary XR software. Will only be called if
            /// <see cref="XRSessionSubsystemDescriptor.supportsInstall"/> is true.
            /// </summary>
            /// <returns></returns>
            public virtual Promise<SessionInstallationStatus> InstallAsync()
            {
                return Promise<SessionInstallationStatus>.CreateResolvedPromise(SessionInstallationStatus.ErrorInstallNotSupported);
            }

            /// <summary>
            /// Get the <see cref="TrackingState"/> for the session.
            /// </summary>
            public virtual TrackingState trackingState
            {
                get { return TrackingState.None; }
            }
        }

        IProvider m_Provider;
    }
}
