using System;
using System.Collections;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Use this to construct an <see cref="ARCollaborationData"/> incrementally from serialized bytes.
    /// </summary>
    /// <remarks>
    /// This struct may be useful if you receive data through a stream. If you already have all
    /// the bytes, use a <see cref="ARCollaborationData"/> constructor instead.
    /// This struct represents a native resource and must be explicitly disposed when no longer needed.
    /// While this struct is not thread safe, you may construct, Dispose, and Append from any thread.
    /// </remarks>
    public struct ARCollaborationDataBuilder : IDisposable, IEquatable<ARCollaborationDataBuilder>
    {
        /// <summary>
        /// Whether the <see cref="ARCollaborationDataBuilder"/> has allocated any data. If <c>true</c>,
        /// this struct must be disposed to avoid leaking native resources. If <c>false</c>, this struct
        /// either never allocated memory
        /// (with <see cref="Append(byte[], int)"/> or <see cref="Append(NativeArray{byte}, int)"/>)
        /// or it has already been <see cref="Dispose"/>d.
        /// </summary>
        public bool hasData
        {
            get
            {
                return m_NSMutableData != IntPtr.Zero;
            }
        }

        /// <summary>
        /// The number of bytes owned by this struct.
        /// </summary>
        /// <seealso cref="Append(byte[], int)"/>
        /// <seealso cref="Append(NativeArray{byte}, int)"/>.
        public int count
        {
            get
            {
                if (m_NSMutableData != IntPtr.Zero)
                {
                    return UnityARKit_NSMutableData_getLength(m_NSMutableData);
                }
                else
                {
                    return 0;
                }
            }
        }

        /// <summary>
        /// Converts the bytes accumulated through calls to Append to an <see cref="ARCollaborationData"/>.
        /// </summary>
        /// <exception cref="System.NotSupportedException">Thrown if ARCollaborationData is not supported.
        /// Check for support with <see cref="ARKitSessionSubsystem.supportsCollaboration"/>.</exception>
        /// <exception cref="System.InvalidOperationException">Thrown if <see cref="hasData"/> is false.</exception>
        public ARCollaborationData ToCollaborationData()
        {
            if (!ARKitSessionSubsystem.supportsCollaboration)
                throw new NotSupportedException("ARCollaborationData is not supported by this version of iOS.");

            if (!hasData)
                throw new InvalidOperationException("No data to convert to ARCollaborationData.");

            return new ARCollaborationData(UnityARKit_session_collaborationDataFromNSData(m_NSMutableData));
        }

        /// <summary>
        /// Appends <paramref name="bytes"/> to an existing array of bytes.
        /// </summary>
        public unsafe void Append(byte[] bytes, int length)
        {
            if (bytes == null)
                throw new ArgumentNullException("bytes");

            if (bytes.Length < length)
                throw new ArgumentException("'length' cannot be greater than the size of the byte array.", "length");

            fixed (byte* ptr = bytes)
            {
                Append(ptr, length);
            }
        }

        /// <summary>
        /// Appends <paramref name="bytes"/> to an existing array of bytes.
        /// </summary>
        public unsafe void Append(NativeArray<byte> bytes, int length)
        {
            if (!bytes.IsCreated)
                throw new ArgumentException("'bytes' has not been created, or has been disposed.", "bytes");

            if (bytes.Length < length)
                throw new ArgumentException("'length' cannot be greater than the size of the byte array.", "length");

            Append((byte*)bytes.GetUnsafePtr(), bytes.Length);
        }

        /// <summary>
        /// Releases the native resource.
        /// </summary>
        public void Dispose()
        {
            UnityARKit_CFRelease(m_NSMutableData);
            m_NSMutableData = IntPtr.Zero;
        }

        /// <summary>
        /// Appends data to the underlying NSMutableData array.
        /// </summary>
        unsafe void Append(byte* bytes, int length)
        {
            if (m_NSMutableData == IntPtr.Zero)
            {
                m_NSMutableData = UnityARKit_NSMutableData_createWithBytes(bytes, length);
            }
            else
            {
                UnityARKit_NSMutableData_append(m_NSMutableData, bytes, length);
            }
        }

        /// <summary>
        /// Computes a hash code suitable for use in a <c>Dictionary</c> or <c>HashSet</c>.
        /// </summary>
        /// <returns>A hash code suitable for use in a <c>Dictionary</c> or <c>HashSet</c>.</returns>
        public override int GetHashCode()
        {
            unchecked
            {
                return m_NSMutableData.GetHashCode();
            }
        }

        /// <summary>
        /// IEquatable interface. Compares for equality.
        /// </summary>
        /// <param name="obj">The object to compare for equality.</param>
        /// <returns><c>true</c> if <paramref name="obj"/> is of type <see cref="ARCollaborationDataBuilder"/> and compares equal with <see cref="Equals(ARCollaborationDataBuilder)"/>.</returns>
        public override bool Equals(object obj)
        {
            if (!(obj is ARCollaborationDataBuilder))
                return false;

            return Equals((ARCollaborationDataBuilder)obj);
        }

        /// <summary>
        /// IEquatable interface. Compares for equality.
        /// </summary>
        /// <param name="other">The <see cref="ARCollaborationDataBuilder"/> to compare against.</param>
        /// <returns><c>true</c> if all fields of this <see cref="ARCollaborationDataBuilder"/> compare equal to <paramref name="other"/>.</returns>
        public bool Equals(ARCollaborationDataBuilder other)
        {
            return (m_NSMutableData == other.m_NSMutableData);
        }

        /// <summary>
        /// Compares for equality. Same as <see cref="Equals(ARCollaborationDataBuilder)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns><c>true</c> if all fields of this <see cref="ARCollaborationDataBuilder"/> compare equal to <paramref name="other"/>.</returns>
        public static bool operator ==(ARCollaborationDataBuilder lhs, ARCollaborationDataBuilder rhs)
        {
            return lhs.Equals(rhs);
        }

        /// <summary>
        /// Compares for inequality. Same as <c>!</c><see cref="Equals(ARCollaborationDataBuilder)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns><c>true</c> if any of the fields of this <see cref="ARCollaborationDataBuilder"/> are not equal to <paramref name="other"/>.</returns>
        public static bool operator !=(ARCollaborationDataBuilder lhs, ARCollaborationDataBuilder rhs)
        {
            return !lhs.Equals(rhs);
        }

        [DllImport("__Internal")]
        static extern void UnityARKit_CFRelease(IntPtr ptr);

        [DllImport("__Internal")]
        static extern unsafe void UnityARKit_NSMutableData_append(
            IntPtr nsdata,
            byte* bytes,
            int length);

        [DllImport("__Internal")]
        static extern unsafe IntPtr UnityARKit_NSMutableData_create();

        [DllImport("__Internal")]
        static extern unsafe IntPtr UnityARKit_NSMutableData_createWithBytes(
            byte* bytes,
            int length);

        [DllImport("__Internal")]
        static extern IntPtr UnityARKit_session_collaborationDataFromNSData(IntPtr nsdata);

        [DllImport("__Internal")]
        static extern int UnityARKit_NSMutableData_getLength(IntPtr nsdata);

        internal IntPtr m_NSMutableData;
    }
}
