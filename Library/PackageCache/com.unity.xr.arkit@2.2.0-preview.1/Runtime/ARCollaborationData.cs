using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Represents the Objective-C type ARCollaborationData.
    /// </summary>
    /// <remarks>
    /// <para>
    /// This struct mirrors the Objective-C type ARCollaborationData. Because it
    /// represents a native resource, it must be explicitly disposed when no
    /// longer needed.
    /// </para><para>
    /// ARCollaborationData can be constructed from a byte array, or from
    /// <see cref="ARKitSessionSubsystem.DequeueCollaborationData"/>.
    /// </para><para>
    /// This struct is not thread-safe, but it may be constructed and disposed on any thread.
    /// </para>
    /// </remarks>
    public struct ARCollaborationData : IDisposable, IEquatable<ARCollaborationData>
    {
        /// <summary>
        /// Constructs an ARCollaborationData from a byte array. You can obtain
        /// a serialized version of ARCollaborationData with the <see cref="bytes"/> property.
        /// Check <see cref="valid"/> after construction to ensure <paramref name="bytes"/> was successfully deserialized.
        /// </summary>
        /// <exception cref="System.ArgumentNullException">Thrown if <paramref name="bytes"/> is null.</exception>
        public unsafe ARCollaborationData(byte[] bytes)
        {
            if (bytes == null)
                throw new ArgumentNullException("bytes");

            fixed(byte* ptr = bytes)
            {
                m_Data = UnityARKit_session_convertBytesToCollaborationData(ptr, bytes.Length);
            }
        }

        /// <summary>
        /// Constructs an ARCollaborationData from a byte <c>NativeArray</c>. You can obtain
        /// a serialized version of ARCollaborationData with the <see cref="bytes"/> property.
        /// Check <see cref="valid"/> after construction to ensure <paramref name="bytes"/> was successfully deserialized.
        /// </summary>
        /// <exception cref="System.ArgumentException">Thrown if <paramref name="bytes"/><c>.IsCreated</c> is false.</exception>
        public unsafe ARCollaborationData(NativeArray<byte> bytes)
        {
            if (!bytes.IsCreated)
                throw new ArgumentException("Invalid byte array.", "bytes");

            m_Data = UnityARKit_session_convertBytesToCollaborationData(bytes.GetUnsafePtr(), bytes.Length);
        }

        /// <summary>
        /// True if the data is valid. The data may be invalid if this object was constructed
        /// with an invalid byte array, or if it has been disposed.
        /// </summary>
        public bool valid
        {
            get
            {
                return (m_Data != IntPtr.Zero);
            }
        }

        /// <summary>
        /// Dispose the native ARCollaborationData. <see cref="valid"/> will be false after disposal.
        /// It is safe to dispose an invalid or already disposed ARCollaborationData.
        /// </summary>
        public void Dispose()
        {
            UnityARKit_CFRelease(m_Data);
            m_Data = IntPtr.Zero;
        }

        /// <summary>
        /// Get a NativeArray of bytes representing the serialized ARCollaborationData. This can
        /// be used at a later time to construct a new ARCollaborationData. A common use case
        /// would be to send these bytes to another device over a network.
        /// </summary>
        /// <exception cref="System.InvalidOperationException">Thrown if <see cref="valid"/> is false.</exception>
        public unsafe NativeArray<byte> bytes
        {
            get
            {
                ValidateAndThrow();

                IntPtr bytes;
                int length;
                UnityARKit_session_getCollaborationDataBytes(m_Data, out bytes, out length);
                return NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<byte>(
                    (void*)bytes, length, Allocator.None);
            }
        }

        public override int GetHashCode()
        {
            unchecked
            {
                return m_Data.GetHashCode();
            }
        }

        public override bool Equals(object obj)
        {
            if (!(obj is ARCollaborationData))
                return false;

            return Equals((ARCollaborationData)obj);
        }

        public bool Equals(ARCollaborationData other)
        {
            return (m_Data == other.m_Data);
        }

        public static bool operator ==(ARCollaborationData lhs, ARCollaborationData rhs)
        {
            return lhs.Equals(rhs);
        }

        public static bool operator !=(ARCollaborationData lhs, ARCollaborationData rhs)
        {
            return !lhs.Equals(rhs);
        }

        internal ARCollaborationData(IntPtr data)
        {
            m_Data = data;
        }

        void ValidateAndThrow()
        {
            if (!valid)
                throw new InvalidOperationException("ARCollaborationData has already been disposed.");
        }

        [DllImport("__Internal")]
        static extern void UnityARKit_session_getCollaborationDataBytes(IntPtr data, out IntPtr buffer, out int length);

        [DllImport("__Internal")]
        static extern void UnityARKit_CFRelease(IntPtr ptr);

        [DllImport("__Internal")]
        static extern unsafe IntPtr UnityARKit_session_convertBytesToCollaborationData(void* bytes, int length);

        internal IntPtr m_Data;
    }
}
