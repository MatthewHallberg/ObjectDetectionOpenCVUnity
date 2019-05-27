using UnityEngine;
using UnityEngine.UI;
using System.Runtime.InteropServices;
using System;


public class OpenCV : MonoBehaviour {
    void Awake() {
    }

    void Update() {
        Debug.LogWarning("Test Value in C++ is " + NativeLibAdapter.Test());
    }
}