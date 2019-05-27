using System.Runtime.InteropServices;

public class NativeLibAdapter {
#if !UNITY_EDITOR
    /*
        [DllImport("native-lib")]
        private static extern int TestFunction_Internal();
    */
#elif UNITY_EDITOR
    [DllImport("OpenCVPlugin")]
    private static extern int TestFunction_Internal();
#endif


    public static int Test() {
#if !UNITY_EDITOR
            return TestFunction_Internal();
#elif UNITY_EDITOR
        return TestFunction_Internal();
#else
            return -1;
#endif
    }
}