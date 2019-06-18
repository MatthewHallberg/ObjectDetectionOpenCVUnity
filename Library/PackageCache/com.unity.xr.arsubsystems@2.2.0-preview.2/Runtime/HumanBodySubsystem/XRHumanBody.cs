using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Container for the data representing a trackable human body.
    /// </summary>
    [StructLayout (LayoutKind.Sequential)]
    public struct XRHumanBody : IEquatable<XRHumanBody>, ITrackable
    {
        /// <summary>
        /// The trackable identifier for the human body.
        /// </summary>
        /// <value>
        /// The trackable identifier for the human body.
        /// </value>
        public TrackableId trackableId
        {
            get { return m_TrackableId; }
            private set { m_TrackableId = value; }
        }
        TrackableId m_TrackableId;

        /// <summary>
        /// The pose for the human body origin.
        /// </summary>
        /// <value>
        /// The pose for the human body origin.
        /// </value>
        public Pose pose
        {
            get { return m_Pose; }
            private set { m_Pose = value; }
        }
        Pose m_Pose;

        /// <summary>
        /// The tracking state for the human body.
        /// </summary>
        /// <value>
        /// The tracking state for the human body.
        /// </value>
        public TrackingState trackingState
        {
            get { return m_TrackingState; }
            private set { m_TrackingState = value; }
        }
        TrackingState m_TrackingState;

        /// <summary>
        /// The native pointer to implementation-specific human body.
        /// </summary>
        /// <value>
        /// The native pointer to implementation-specific human body.
        /// </value>
        public IntPtr nativePtr
        {
            get { return m_NativePtr; }
            private set { m_NativePtr = value; }
        }
        IntPtr m_NativePtr;

        /// <summary>
        /// Get the default human body data.
        /// </summary>
        /// <returns>
        /// The default human body data.
        /// </returns>
        internal static XRHumanBody GetDefault()
        {
            return new XRHumanBody
            {
                trackableId = TrackableId.invalidId,
                pose = Pose.identity,
                trackingState = TrackingState.None,
                nativePtr = IntPtr.Zero,
            };
        }

        public bool Equals(XRHumanBody other)
        {
            return m_TrackableId.Equals(other.m_TrackableId);
        }

        public override bool Equals(System.Object obj)
        {
            return ((obj is XRHumanBody) && Equals((XRHumanBody)obj));
        }

        public static bool operator ==(XRHumanBody lhs, XRHumanBody rhs)
        {
            return lhs.Equals(rhs);
        }

        public static bool operator !=(XRHumanBody lhs, XRHumanBody rhs)
        {
            return !lhs.Equals(rhs);
        }

        public override int GetHashCode()
        {
            return m_TrackableId.GetHashCode();
        }
    }
}
