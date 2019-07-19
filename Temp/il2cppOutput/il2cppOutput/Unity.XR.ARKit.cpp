#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E;
// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct List_1_t13506773B6C03CE4C5D47127B81B3031675EE51F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider
struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider
struct Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider
struct Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider
struct Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3;
// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem
struct ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017;
// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider
struct Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider
struct Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider
struct Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70;
// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem
struct ARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F;
// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider
struct Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider
struct Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider
struct IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi
struct IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider
struct IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider
struct IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t6E47CA43558F7A63B8C1337C02CAA423E8DBE760;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/IProvider
struct IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider
struct IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider
struct IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;

IL2CPP_EXTERN_C RuntimeClass* ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00EDFBC4EFCE3A9F974CEABCD51DE2609B2A1AE5;
IL2CPP_EXTERN_C String_t* _stringLiteral01A8E649C2EE0F2F0E7111E059615E0D2F569454;
IL2CPP_EXTERN_C String_t* _stringLiteral04B1631028D1B854A9842CEE0FA6FDA32C86BDF7;
IL2CPP_EXTERN_C String_t* _stringLiteral07FEA96DBE8894801F7F1DB849C8EB8A0629F092;
IL2CPP_EXTERN_C String_t* _stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF;
IL2CPP_EXTERN_C String_t* _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8;
IL2CPP_EXTERN_C String_t* _stringLiteral21E7ADB5BD97C82496FD88B2FC35C83E90C194C2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F55B0C1BFA41292D9F913CC9A02B09149B75EE0;
IL2CPP_EXTERN_C String_t* _stringLiteral33ABE3E9D8C2CC615BBDC88213E6BE6A384D6805;
IL2CPP_EXTERN_C String_t* _stringLiteral33E23C61A9793B5149A92E13F9B9FBF25F22A9C4;
IL2CPP_EXTERN_C String_t* _stringLiteral48A46231AB256292293A3DC6088329E7F3D1D3E2;
IL2CPP_EXTERN_C String_t* _stringLiteral6D98C8D7890DFF942CB1E4191D406AF6C4D35C13;
IL2CPP_EXTERN_C String_t* _stringLiteral71A7CA855F38BC559D0FCE6727C7E2D8ADA99FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral7A8B65F874DC7CED255B42A3E1902A95424561FF;
IL2CPP_EXTERN_C String_t* _stringLiteral88B278F8C073484F344DEB91FB390AF9B6EDF210;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDBB76624EE55213F2601C8BA2B94F9F24E23EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC6E02E34BDC35D11B42F798B00A990953D7586;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0959A1FA0165C9EB07D89FE0FBBAA26CD9E529;
IL2CPP_EXTERN_C String_t* _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424;
IL2CPP_EXTERN_C String_t* _stringLiteralE6D22A5FC2DF7DE0E66AA5E8A59E79BFA1B877F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF79EA505459F01F984988600F23CC4756E4537;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m256C940F2F70AEED1DF6591DE26BE8F69FEC1CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m88647CCCBABD19CC080F76236852D605EED69254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_mBBBDB4FA3D09A902B47C60B410595BACD14CADE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m210E53B1CB8C3CA56CD640E245C9EB56CF33E38E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m670C8FB2EA08BD79FA732EDD0DE2605ED72FC2D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m73313D354D78EEAD4D2A4BE94C71DA1E27CC23C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m07E8EBC4A1B72472F1B0E4F2371A0DD18A9853AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0B2A29CF09B246A970F611ED54F5171F709E2DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_imageLibrary_mB0D7593A3A8063BBB8DB5DFC5108CFE53AF5CB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_library_mB44EC11C3838D90058CC033AE1808F2B01993351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mD80CE5C5275FD5AEE0186147CC2A21C03131FA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mADB00C553552FC16B6924C45F0485EA1A574825A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F_m3F2BA9FC69F63C533C496DF25976430BA68F2D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5DE6A0F5DFE6A17E8E3036DA1B69DF0FD3AAF644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_Register_m3D8A7915373F1DA0A6314C400B037FEA2248888E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeRegistration_Register_mE0C8F72802522D990C90CB7786A831F09A172C11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeRegistration__cctor_mC8E8858D4FFFCABFFB87886C2876BCC9FC0E3A2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeSubsystem_CreateProvider_m734B041E08091395C665D21150F3728493C2A746_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitImageTrackingSubsystem_CreateProvider_m5411943AF1A08EF9D30E950EA921F0B3855F8217_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitImageTrackingSubsystem_RegisterDescriptor_mD119C6E8F9DC7EEA796524E60E445A34AEF42814_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_RegisterDescriptor_m3C04FEF3B986B37DA138B88077A49EF11177C5C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitReferencePointSubsystem_RegisterDescriptor_m5CBBC49AAEEE95C8881F77ED5961E7462C16A7C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_RegisterDescriptor_mCCA118F936A334DE404EBCA2795CB53E4EC22A67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem__cctor_m22FC887F2A8E048696D465D457F3F1ADA3BAE7F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_RegisterDescriptor_m972EAC5A226DB4FB874CD7DFB0B835DDB08912C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRObjectTrackingSubsystem_CreateProvider_m96251D43EA6E645DCABC51FC850A6E3ACB07DC17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRObjectTrackingSubsystem_RegisterDescriptor_m5B34B84FFB7A7CE55B60B5BAC366CEA7070B1625_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_RegisterDescriptor_m001CE02AF166B4240843E41B740CE3B36CF56B41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion_Equals_m1624E9E89A35B70CCA34158360E2BDB0290F6FA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion_ToString_m3A709D674A58700A1798C6F71B4F374826F996D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnAsyncConversionCompleteDelegate_BeginInvoke_m8E7181CF93E60C8234DA520737051AFFE5716061_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetAvailabilityAsync_m3A9AC0788CC5F34ECD2ADB5D406C8087FBF60991_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetBoundary_m2688A84B253737695A37C60DD45FD7441F6D5864_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m1180227923E6905E3CA3F9CEF8BA80C58E7B760E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m1B8C9B35C5FB039958F5161AE9392270D6B4D1C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m26E082A5D0B91535BD7201C3AFAFA220CC61F006_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m3D875DA71FE758D7F6D0BBD275DDA6D771475AEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m6ACC32D7B8FF8B2AE977BEE37D81AB5D7141B7F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m75E7B2593157502CFDB28052BBF58338E6CD6B9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetConfigurations_m4D9FC2BA19A3649FD8A38FB6125B77916FD4A71B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetPointCloudData_mCCC7D65910FD1989B92913813B111A78CBFA5200_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetTextureDescriptors_m9CECC57BD95307B36CC3F27C9CFBBACC92836DCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_Raycast_m1B485E19859E6EB636FB7E7934E316820C5EEEB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider__cctor_m4E1CA25EC70EA527EB9FA3F8865E66590E4A135C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_currentConfiguration_m427069F7AD3E78EB1AFBFB5D03ADABA45E9BE2E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_shaderName_mE4633567C3028E6020BD15D6A08C22FC3AF384C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_imageLibrary_mB0D7593A3A8063BBB8DB5DFC5108CFE53AF5CB77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_library_mB44EC11C3838D90058CC033AE1808F2B01993351_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.Subsystem
struct  Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi
struct  NativeApi_tAC74EBF9B7EAB0504916300254C661F63CF9173A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration
struct  ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757  : public RuntimeObject
{
public:

public:
};

struct ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_StaticFields
{
public:
	// System.String UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration::k_SubsystemId
	String_t* ___k_SubsystemId_0;

public:
	inline static int32_t get_offset_of_k_SubsystemId_0() { return static_cast<int32_t>(offsetof(ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_StaticFields, ___k_SubsystemId_0)); }
	inline String_t* get_k_SubsystemId_0() const { return ___k_SubsystemId_0; }
	inline String_t** get_address_of_k_SubsystemId_0() { return &___k_SubsystemId_0; }
	inline void set_k_SubsystemId_0(String_t* value)
	{
		___k_SubsystemId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SubsystemId_0), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem_NativeApi
struct  NativeApi_tB7917295BEDEB8E60FC3C8181CFDEB126B4DDB2A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi
struct  NativeApi_t164DECAC3F6004936824870871CC817A16AC9050  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions
struct  ARWorldMapRequestStatusExtensions_t8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.Api
struct  Api_t4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.EnvironmentProbeApi
struct  EnvironmentProbeApi_t7835EE6A5EB5249E9C0ED63CD4AC8AA1B21D76D8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_IProvider
struct  IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_IDepthApi
struct  IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_IProvider
struct  IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_IProvider
struct  IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem_IProvider
struct  IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider
struct  IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider
struct  IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider
struct  IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider
struct  IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct  Subsystem_1_tD50C9182647817E2B669F50DE7F92167C75DD52F  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  Subsystem_1_tC858FB8A173FE66E4825248BD7D6CFEB152A2FF7  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct  Subsystem_1_tA4286EFE19C38F088E94F2C28510A7E0146806B8  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct  Subsystem_1_tC1D092A41F919B743080F469FDB5690DA55488C7  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>
struct  Subsystem_1_t1D7FF5E4289A56CC8C708CBBDFF00482A7E04C6B  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  Subsystem_1_tA80E63F4E3ED973F7E4926636F00EEF1AC454773  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct  Subsystem_1_t00819BE303296B2D37C33D5F40D0A442A26C6849  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct  Subsystem_1_t35AA453451CA1D5D679E6EBF39EBDA236764F5E2  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.RectInt
struct  RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider
struct  Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E  : public IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C
{
public:

public:
};

struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::k_TextureYPropertyNameId
	int32_t ___k_TextureYPropertyNameId_0;
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::k_TextureCbCrPropertyNameId
	int32_t ___k_TextureCbCrPropertyNameId_1;

public:
	inline static int32_t get_offset_of_k_TextureYPropertyNameId_0() { return static_cast<int32_t>(offsetof(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields, ___k_TextureYPropertyNameId_0)); }
	inline int32_t get_k_TextureYPropertyNameId_0() const { return ___k_TextureYPropertyNameId_0; }
	inline int32_t* get_address_of_k_TextureYPropertyNameId_0() { return &___k_TextureYPropertyNameId_0; }
	inline void set_k_TextureYPropertyNameId_0(int32_t value)
	{
		___k_TextureYPropertyNameId_0 = value;
	}

	inline static int32_t get_offset_of_k_TextureCbCrPropertyNameId_1() { return static_cast<int32_t>(offsetof(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields, ___k_TextureCbCrPropertyNameId_1)); }
	inline int32_t get_k_TextureCbCrPropertyNameId_1() const { return ___k_TextureCbCrPropertyNameId_1; }
	inline int32_t* get_address_of_k_TextureCbCrPropertyNameId_1() { return &___k_TextureCbCrPropertyNameId_1; }
	inline void set_k_TextureCbCrPropertyNameId_1(int32_t value)
	{
		___k_TextureCbCrPropertyNameId_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider
struct  Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91  : public IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_Provider
struct  Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46  : public IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem_Provider
struct  Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3  : public IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider
struct  Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986  : public IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider
struct  Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B  : public IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider
struct  Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70  : public IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider
struct  Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194  : public IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider
struct  Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A  : public IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMap
struct  ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE, ___U3CnativeHandleU3Ek__BackingField_0)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_0() const { return ___U3CnativeHandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_0() { return &___U3CnativeHandleU3Ek__BackingField_0; }
	inline void set_U3CnativeHandleU3Ek__BackingField_0(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.ARKit.OSVersion
struct  OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<major>k__BackingField
	int32_t ___U3CmajorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<minor>k__BackingField
	int32_t ___U3CminorU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<point>k__BackingField
	int32_t ___U3CpointU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmajorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA, ___U3CmajorU3Ek__BackingField_0)); }
	inline int32_t get_U3CmajorU3Ek__BackingField_0() const { return ___U3CmajorU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CmajorU3Ek__BackingField_0() { return &___U3CmajorU3Ek__BackingField_0; }
	inline void set_U3CmajorU3Ek__BackingField_0(int32_t value)
	{
		___U3CmajorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CminorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA, ___U3CminorU3Ek__BackingField_1)); }
	inline int32_t get_U3CminorU3Ek__BackingField_1() const { return ___U3CminorU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CminorU3Ek__BackingField_1() { return &___U3CminorU3Ek__BackingField_1; }
	inline void set_U3CminorU3Ek__BackingField_1(int32_t value)
	{
		___U3CminorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA, ___U3CpointU3Ek__BackingField_2)); }
	inline int32_t get_U3CpointU3Ek__BackingField_2() const { return ___U3CpointU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpointU3Ek__BackingField_2() { return &___U3CpointU3Ek__BackingField_2; }
	inline void set_U3CpointU3Ek__BackingField_2(int32_t value)
	{
		___U3CpointU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct  XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsAverageBrightnessU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_2() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsColorCorrectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsColorCorrectionU3Ek__BackingField_4() const { return ___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return &___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsColorCorrectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsColorCorrectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsDisplayMatrixU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_5() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsProjectionMatrixU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_6() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsTimestampU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_7() const { return ___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_7() { return &___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() const { return ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() { return &___U3CsupportsCameraConfigurationsU3Ek__BackingField_8; }
	inline void set_U3CsupportsCameraConfigurationsU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsCameraConfigurationsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraImageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsCameraImageU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsCameraImageU3Ek__BackingField_9() const { return ___U3CsupportsCameraImageU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsCameraImageU3Ek__BackingField_9() { return &___U3CsupportsCameraImageU3Ek__BackingField_9; }
	inline void set_U3CsupportsCameraImageU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsCameraImageU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_9;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_9;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct  XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsManualPlacement>k__BackingField
	bool ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfManual>k__BackingField
	bool ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsAutomaticPlacement>k__BackingField
	bool ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfAutomatic>k__BackingField
	bool ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTexture>k__BackingField
	bool ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsManualPlacementU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsManualPlacementU3Ek__BackingField_2() const { return ___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return &___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline void set_U3CsupportsManualPlacementU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsManualPlacementU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsRemovalOfManualU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsRemovalOfManualU3Ek__BackingField_3() const { return ___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return &___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline void set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsRemovalOfManualU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() const { return ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return &___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline void set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsAutomaticPlacementU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() const { return ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return &___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline void set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() const { return ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return &___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline void set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsEnvironmentTextureU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo
struct  Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor_Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106, ___U3CsupportsMovingImagesU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_2() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return &___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor_Capabilities
struct  Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo
struct  Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo
struct  Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo
struct  Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CidU3Ek__BackingField_1)); }
	inline String_t* get_U3CidU3Ek__BackingField_1() const { return ___U3CidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_1() { return &___U3CidU3Ek__BackingField_1; }
	inline void set_U3CidU3Ek__BackingField_1(String_t* value)
	{
		___U3CidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_2() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_2() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_2; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	char* ___U3CidU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	Il2CppChar* ___U3CidU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_2;
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_CameraConfigurationResult
struct  CameraConfigurationResult_t9C60CF43473AF56020CB8D7C0A2ED101B8B52D33 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_CameraConfigurationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigurationResult_t9C60CF43473AF56020CB8D7C0A2ED101B8B52D33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability
struct  Availability_tFD76A2177DDFE5A5A8CDB75EB9CF784CDD9A7487 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Availability_tFD76A2177DDFE5A5A8CDB75EB9CF784CDD9A7487, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.SetReferenceLibraryResult
struct  SetReferenceLibraryResult_t60A3252A5AE8F09F503ABF5103B415DED845A779 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.SetReferenceLibraryResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SetReferenceLibraryResult_t60A3252A5AE8F09F503ABF5103B415DED845A779, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct  CameraFocusMode_t004A78F37B73E0A13307FBF88BF32191115F1B28 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t004A78F37B73E0A13307FBF88BF32191115F1B28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraImageFormat
struct  CameraImageFormat_t6EC146C99F9FFEB0021560550350562050312BD9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraImageFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageFormat_t6EC146C99F9FFEB0021560550350562050312BD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraImageTransformation
struct  CameraImageTransformation_t89BD7FC86526C731D32C36190C5317C9A7E1D24C 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraImageTransformation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageTransformation_t89BD7FC86526C731D32C36190C5317C9A7E1D24C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct  LightEstimationMode_t313B5D9CF8DC78254E7E237F9F66E05D174CA9C9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_t313B5D9CF8DC78254E7E237F9F66E05D174CA9C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct  PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389  : public Subsystem_1_tA80E63F4E3ED973F7E4926636F00EEF1AC454773
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct  TrackingSubsystem_2_tCB3B250EE7E4D50152E3AA72833BCB4C636B99A6  : public Subsystem_1_tA4286EFE19C38F088E94F2C28510A7E0146806B8
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tCB3B250EE7E4D50152E3AA72833BCB4C636B99A6, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C  : public Subsystem_1_tC858FB8A173FE66E4825248BD7D6CFEB152A2FF7
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct  TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899  : public Subsystem_1_t35AA453451CA1D5D679E6EBF39EBDA236764F5E2
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct  TrackingSubsystem_2_tCF858475272A4880E6335A2B92788052D333E1E8  : public Subsystem_1_tC1D092A41F919B743080F469FDB5690DA55488C7
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tCF858475272A4880E6335A2B92788052D333E1E8, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>
struct  TrackingSubsystem_2_t01D8290598680BCC343614A243F7C70EE530D3ED  : public Subsystem_1_t1D7FF5E4289A56CC8C708CBBDFF00482A7E04C6B
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t01D8290598680BCC343614A243F7C70EE530D3ED, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct  XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Resolution_0)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties
struct  XRCameraFrameProperties_t258272982186CE40619F50B2609728E31DD7649F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraFrameProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRCameraFrameProperties_t258272982186CE40619F50B2609728E31DD7649F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics
struct  XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_FocalLength
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_PrincipalPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01, ___m_FocalLength_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01, ___m_PrincipalPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01, ___m_Resolution_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities
struct  Capabilities_t4BAC3FA7758E1334A38C073AB595944DAE05308E 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t4BAC3FA7758E1334A38C073AB595944DAE05308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_2)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E 
{
public:
	// T System.Nullable`1::value
	XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E, ___value_0)); }
	inline XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  get_value_0() const { return ___value_0; }
	inline XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct  NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<System.UInt64>
struct  NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct  NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct  NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct  ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A  : public XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0
{
public:

public:
};

struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * ___s_OnAsyncWorldMapCompleted_3;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_3() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields, ___s_OnAsyncWorldMapCompleted_3)); }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * get_s_OnAsyncWorldMapCompleted_3() const { return ___s_OnAsyncWorldMapCompleted_3; }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF ** get_address_of_s_OnAsyncWorldMapCompleted_3() { return &___s_OnAsyncWorldMapCompleted_3; }
	inline void set_s_OnAsyncWorldMapCompleted_3(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * value)
	{
		___s_OnAsyncWorldMapCompleted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_1() const { return ___m_SubsumedById_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_1() { return &___m_SubsumedById_1; }
	inline void set_m_SubsumedById_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_5)); }
	inline int32_t get_m_Alignment_5() const { return ___m_Alignment_5; }
	inline int32_t* get_address_of_m_Alignment_5() { return &___m_Alignment_5; }
	inline void set_m_Alignment_5(int32_t value)
	{
		___m_Alignment_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct  XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 
{
public:
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;

public:
	inline static int32_t get_offset_of_m_TimestampNs_0() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_TimestampNs_0)); }
	inline int64_t get_m_TimestampNs_0() const { return ___m_TimestampNs_0; }
	inline int64_t* get_address_of_m_TimestampNs_0() { return &___m_TimestampNs_0; }
	inline void set_m_TimestampNs_0(int64_t value)
	{
		___m_TimestampNs_0 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_1() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_AverageBrightness_1)); }
	inline float get_m_AverageBrightness_1() const { return ___m_AverageBrightness_1; }
	inline float* get_address_of_m_AverageBrightness_1() { return &___m_AverageBrightness_1; }
	inline void set_m_AverageBrightness_1(float value)
	{
		___m_AverageBrightness_1 = value;
	}

	inline static int32_t get_offset_of_m_AverageColorTemperature_2() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_AverageColorTemperature_2)); }
	inline float get_m_AverageColorTemperature_2() const { return ___m_AverageColorTemperature_2; }
	inline float* get_address_of_m_AverageColorTemperature_2() { return &___m_AverageColorTemperature_2; }
	inline void set_m_AverageColorTemperature_2(float value)
	{
		___m_AverageColorTemperature_2 = value;
	}

	inline static int32_t get_offset_of_m_ColorCorrection_3() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_ColorCorrection_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_ColorCorrection_3() const { return ___m_ColorCorrection_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_ColorCorrection_3() { return &___m_ColorCorrection_3; }
	inline void set_m_ColorCorrection_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_ColorCorrection_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_DisplayMatrix_5() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_DisplayMatrix_5)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_DisplayMatrix_5() const { return ___m_DisplayMatrix_5; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_DisplayMatrix_5() { return &___m_DisplayMatrix_5; }
	inline void set_m_DisplayMatrix_5(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_DisplayMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}

	inline static int32_t get_offset_of_m_Properties_8() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_Properties_8)); }
	inline int32_t get_m_Properties_8() const { return ___m_Properties_8; }
	inline int32_t* get_address_of_m_Properties_8() { return &___m_Properties_8; }
	inline void set_m_Properties_8(int32_t value)
	{
		___m_Properties_8 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams
struct  XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5 
{
public:
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_InputRect
	RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_OutputDimensions
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.CameraImageTransformation UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams::m_Transformation
	int32_t ___m_Transformation_3;

public:
	inline static int32_t get_offset_of_m_InputRect_0() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5, ___m_InputRect_0)); }
	inline RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  get_m_InputRect_0() const { return ___m_InputRect_0; }
	inline RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A * get_address_of_m_InputRect_0() { return &___m_InputRect_0; }
	inline void set_m_InputRect_0(RectInt_t595A63F7EE2BC91A4D2DE5403C5FE94D3C3A6F7A  value)
	{
		___m_InputRect_0 = value;
	}

	inline static int32_t get_offset_of_m_OutputDimensions_1() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5, ___m_OutputDimensions_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_OutputDimensions_1() const { return ___m_OutputDimensions_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_OutputDimensions_1() { return &___m_OutputDimensions_1; }
	inline void set_m_OutputDimensions_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_OutputDimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_Format_2() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5, ___m_Format_2)); }
	inline int32_t get_m_Format_2() const { return ___m_Format_2; }
	inline int32_t* get_address_of_m_Format_2() { return &___m_Format_2; }
	inline void set_m_Format_2(int32_t value)
	{
		___m_Format_2 = value;
	}

	inline static int32_t get_offset_of_m_Transformation_3() { return static_cast<int32_t>(offsetof(XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5, ___m_Transformation_3)); }
	inline int32_t get_m_Transformation_3() const { return ___m_Transformation_3; }
	inline int32_t* get_address_of_m_Transformation_3() { return &___m_Transformation_3; }
	inline void set_m_Transformation_3(int32_t value)
	{
		___m_Transformation_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraParams
struct  XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B 
{
public:
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;

public:
	inline static int32_t get_offset_of_m_ZNear_0() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ZNear_0)); }
	inline float get_m_ZNear_0() const { return ___m_ZNear_0; }
	inline float* get_address_of_m_ZNear_0() { return &___m_ZNear_0; }
	inline void set_m_ZNear_0(float value)
	{
		___m_ZNear_0 = value;
	}

	inline static int32_t get_offset_of_m_ZFar_1() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ZFar_1)); }
	inline float get_m_ZFar_1() const { return ___m_ZFar_1; }
	inline float* get_address_of_m_ZFar_1() { return &___m_ZFar_1; }
	inline void set_m_ZFar_1(float value)
	{
		___m_ZFar_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenWidth_2() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ScreenWidth_2)); }
	inline float get_m_ScreenWidth_2() const { return ___m_ScreenWidth_2; }
	inline float* get_address_of_m_ScreenWidth_2() { return &___m_ScreenWidth_2; }
	inline void set_m_ScreenWidth_2(float value)
	{
		___m_ScreenWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenHeight_3() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ScreenHeight_3)); }
	inline float get_m_ScreenHeight_3() const { return ___m_ScreenHeight_3; }
	inline float* get_address_of_m_ScreenHeight_3() { return &___m_ScreenHeight_3; }
	inline void set_m_ScreenHeight_3(float value)
	{
		___m_ScreenHeight_3 = value;
	}

	inline static int32_t get_offset_of_m_ScreenOrientation_4() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ScreenOrientation_4)); }
	inline int32_t get_m_ScreenOrientation_4() const { return ___m_ScreenOrientation_4; }
	inline int32_t* get_address_of_m_ScreenOrientation_4() { return &___m_ScreenOrientation_4; }
	inline void set_m_ScreenOrientation_4(int32_t value)
	{
		___m_ScreenOrientation_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct  XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF  : public Subsystem_1_tD50C9182647817E2B669F50DE7F92167C75DD52F
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_Provider
	IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_FocusMode
	int32_t ___m_FocusMode_3;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_4;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_Provider_2)); }
	inline IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusMode_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_FocusMode_3)); }
	inline int32_t get_m_FocusMode_3() const { return ___m_FocusMode_3; }
	inline int32_t* get_address_of_m_FocusMode_3() { return &___m_FocusMode_3; }
	inline void set_m_FocusMode_3(int32_t value)
	{
		___m_FocusMode_3 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_LightEstimationMode_4)); }
	inline int32_t get_m_LightEstimationMode_4() const { return ___m_LightEstimationMode_4; }
	inline int32_t* get_address_of_m_LightEstimationMode_4() { return &___m_LightEstimationMode_4; }
	inline void set_m_LightEstimationMode_4(int32_t value)
	{
		___m_LightEstimationMode_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo
struct  CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_Dimensions
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Dimensions_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_PlaneCount
	int32_t ___m_PlaneCount_2;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_Timestamp
	double ___m_Timestamp_3;
	// UnityEngine.XR.ARSubsystems.CameraImageFormat UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfo::m_Format
	int32_t ___m_Format_4;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Dimensions_1() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_Dimensions_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Dimensions_1() const { return ___m_Dimensions_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Dimensions_1() { return &___m_Dimensions_1; }
	inline void set_m_Dimensions_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Dimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_PlaneCount_2() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_PlaneCount_2)); }
	inline int32_t get_m_PlaneCount_2() const { return ___m_PlaneCount_2; }
	inline int32_t* get_address_of_m_PlaneCount_2() { return &___m_PlaneCount_2; }
	inline void set_m_PlaneCount_2(int32_t value)
	{
		___m_PlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Timestamp_3() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_Timestamp_3)); }
	inline double get_m_Timestamp_3() const { return ___m_Timestamp_3; }
	inline double* get_address_of_m_Timestamp_3() { return &___m_Timestamp_3; }
	inline void set_m_Timestamp_3(double value)
	{
		___m_Timestamp_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo
struct  Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::implementationType
	Type_t * ___implementationType_1;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct  XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34  : public TrackingSubsystem_2_tCB3B250EE7E4D50152E3AA72833BCB4C636B99A6
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::m_AutomaticPlacement
	bool ___m_AutomaticPlacement_2;
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_IProvider UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::m_Provider
	IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * ___m_Provider_3;

public:
	inline static int32_t get_offset_of_m_AutomaticPlacement_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34, ___m_AutomaticPlacement_2)); }
	inline bool get_m_AutomaticPlacement_2() const { return ___m_AutomaticPlacement_2; }
	inline bool* get_address_of_m_AutomaticPlacement_2() { return &___m_AutomaticPlacement_2; }
	inline void set_m_AutomaticPlacement_2(bool value)
	{
		___m_AutomaticPlacement_2 = value;
	}

	inline static int32_t get_offset_of_m_Provider_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34, ___m_Provider_3)); }
	inline IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * get_m_Provider_3() const { return ___m_Provider_3; }
	inline IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 ** get_address_of_m_Provider_3() { return &___m_Provider_3; }
	inline void set_m_Provider_3(IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * value)
	{
		___m_Provider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct  XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5  : public TrackingSubsystem_2_tCF858475272A4880E6335A2B92788052D333E1E8
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_ImageLibrary
	XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * ___m_ImageLibrary_2;
	// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_Provider
	IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * ___m_Provider_3;

public:
	inline static int32_t get_offset_of_m_ImageLibrary_2() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5, ___m_ImageLibrary_2)); }
	inline XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * get_m_ImageLibrary_2() const { return ___m_ImageLibrary_2; }
	inline XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F ** get_address_of_m_ImageLibrary_2() { return &___m_ImageLibrary_2; }
	inline void set_m_ImageLibrary_2(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * value)
	{
		___m_ImageLibrary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImageLibrary_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Provider_3() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5, ___m_Provider_3)); }
	inline IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * get_m_Provider_3() const { return ___m_Provider_3; }
	inline IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 ** get_address_of_m_Provider_3() { return &___m_Provider_3; }
	inline void set_m_Provider_3(IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * value)
	{
		___m_Provider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct  XRObjectTrackingSubsystem_t6E47CA43558F7A63B8C1337C02CAA423E8DBE760  : public TrackingSubsystem_2_t01D8290598680BCC343614A243F7C70EE530D3ED
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * ___m_Library_2;
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Provider
	IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F * ___m_Provider_3;

public:
	inline static int32_t get_offset_of_m_Library_2() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystem_t6E47CA43558F7A63B8C1337C02CAA423E8DBE760, ___m_Library_2)); }
	inline XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * get_m_Library_2() const { return ___m_Library_2; }
	inline XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 ** get_address_of_m_Library_2() { return &___m_Library_2; }
	inline void set_m_Library_2(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * value)
	{
		___m_Library_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Library_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Provider_3() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystem_t6E47CA43558F7A63B8C1337C02CAA423E8DBE760, ___m_Provider_3)); }
	inline IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F * get_m_Provider_3() const { return ___m_Provider_3; }
	inline IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F ** get_address_of_m_Provider_3() { return &___m_Provider_3; }
	inline void set_m_Provider_3(IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F * value)
	{
		___m_Provider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_2;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_HitType_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_HitType_3)); }
	inline int32_t get_m_HitType_3() const { return ___m_HitType_3; }
	inline int32_t* get_address_of_m_HitType_3() { return &___m_HitType_3; }
	inline void set_m_HitType_3(int32_t value)
	{
		___m_HitType_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo
struct  Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportedTrackableTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_4() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_4;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_5;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_SourceImageId_1)); }
	inline Guid_t  get_m_SourceImageId_1() const { return ___m_SourceImageId_1; }
	inline Guid_t * get_address_of_m_SourceImageId_1() { return &___m_SourceImageId_1; }
	inline void set_m_SourceImageId_1(Guid_t  value)
	{
		___m_SourceImageId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Size_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_TrackingState_4)); }
	inline int32_t get_m_TrackingState_4() const { return ___m_TrackingState_4; }
	inline int32_t* get_address_of_m_TrackingState_4() { return &___m_TrackingState_4; }
	inline void set_m_TrackingState_4(int32_t value)
	{
		___m_TrackingState_4 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_NativePtr_5)); }
	inline intptr_t get_m_NativePtr_5() const { return ___m_NativePtr_5; }
	inline intptr_t* get_address_of_m_NativePtr_5() { return &___m_NativePtr_5; }
	inline void set_m_NativePtr_5(intptr_t value)
	{
		___m_NativePtr_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct  XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::k_Default
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields, ___k_Default_5)); }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  get_k_Default_5() const { return ___k_Default_5; }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  value)
	{
		___k_Default_5 = value;
	}
};


// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct  Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct  ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614  : public XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct  ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE  : public XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct  ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960  : public XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate
struct  OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob
struct  TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsIn
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsOut
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsIn_0)); }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsOut_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___positionsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;
};

// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem
struct  ARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F  : public XRObjectTrackingSubsystem_t6E47CA43558F7A63B8C1337C02CAA423E8DBE760
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_FlipBoundaryWindingJob::positions
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312, ___positions_0)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positions_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob
struct  TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A, ___positionsIn_0)); }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A, ___positionsOut_1)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positionsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Added_1)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Updated_2)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Added_1)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Updated_2)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Added_1)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Updated_2)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Added_1)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Updated_2)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___m_Added_1)); }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___m_Updated_2)); }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct  XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7  : public TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C
{
public:
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_IDepthApi UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_Interface
	IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * ___m_Interface_2;
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_DefaultPointCloud
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___m_DefaultPointCloud_3;

public:
	inline static int32_t get_offset_of_m_Interface_2() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7, ___m_Interface_2)); }
	inline IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * get_m_Interface_2() const { return ___m_Interface_2; }
	inline IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 ** get_address_of_m_Interface_2() { return &___m_Interface_2; }
	inline void set_m_Interface_2(IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * value)
	{
		___m_Interface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPointCloud_3() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7, ___m_DefaultPointCloud_3)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_m_DefaultPointCloud_3() const { return ___m_DefaultPointCloud_3; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_m_DefaultPointCloud_3() { return &___m_DefaultPointCloud_3; }
	inline void set_m_DefaultPointCloud_3(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___m_DefaultPointCloud_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___m_TextureDescriptor_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Scale_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Scale_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_1() const { return ___m_Scale_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_1() { return &___m_Scale_1; }
	inline void set_m_Scale_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Size_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TextureDescriptor_4)); }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  get_m_TextureDescriptor_4() const { return ___m_TextureDescriptor_4; }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * get_address_of_m_TextureDescriptor_4() { return &___m_TextureDescriptor_4; }
	inline void set_m_TextureDescriptor_4(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  value)
	{
		___m_TextureDescriptor_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909  : public TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389
{
public:
	// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_Provider
	IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_DefaultPlane
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___m_DefaultPlane_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_Provider_2)); }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPlane_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_DefaultPlane_3)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_m_DefaultPlane_3() const { return ___m_DefaultPlane_3; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_m_DefaultPlane_3() { return &___m_DefaultPlane_3; }
	inline void set_m_DefaultPlane_3(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___m_DefaultPlane_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct  XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  ___m_Identifiers_2;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA, ___m_Positions_0)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_m_Positions_0() const { return ___m_Positions_0; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___m_Positions_0 = value;
	}

	inline static int32_t get_offset_of_m_ConfidenceValues_1() { return static_cast<int32_t>(offsetof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA, ___m_ConfidenceValues_1)); }
	inline NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  get_m_ConfidenceValues_1() const { return ___m_ConfidenceValues_1; }
	inline NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 * get_address_of_m_ConfidenceValues_1() { return &___m_ConfidenceValues_1; }
	inline void set_m_ConfidenceValues_1(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  value)
	{
		___m_ConfidenceValues_1 = value;
	}

	inline static int32_t get_offset_of_m_Identifiers_2() { return static_cast<int32_t>(offsetof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA, ___m_Identifiers_2)); }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  get_m_Identifiers_2() const { return ___m_Identifiers_2; }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * get_address_of_m_Identifiers_2() { return &___m_Identifiers_2; }
	inline void set_m_Identifiers_2(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  value)
	{
		___m_Identifiers_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA_marshaled_pinvoke
{
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Positions_0;
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  ___m_ConfidenceValues_1;
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  ___m_Identifiers_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA_marshaled_com
{
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Positions_0;
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  ___m_ConfidenceValues_1;
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  ___m_Identifiers_2;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct  XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20  : public Subsystem_1_t00819BE303296B2D37C33D5F40D0A442A26C6849
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Provider
	IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_DefaultRaycastHit
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_DefaultRaycastHit_3;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Provider_2)); }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultRaycastHit_3() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_DefaultRaycastHit_3)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_m_DefaultRaycastHit_3() const { return ___m_DefaultRaycastHit_3; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_m_DefaultRaycastHit_3() { return &___m_DefaultRaycastHit_3; }
	inline void set_m_DefaultRaycastHit_3(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___m_DefaultRaycastHit_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct  XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_Images
	List_1_t13506773B6C03CE4C5D47127B81B3031675EE51F * ___m_Images_6;

public:
	inline static int32_t get_offset_of_m_GuidLow_4() { return static_cast<int32_t>(offsetof(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F, ___m_GuidLow_4)); }
	inline uint64_t get_m_GuidLow_4() const { return ___m_GuidLow_4; }
	inline uint64_t* get_address_of_m_GuidLow_4() { return &___m_GuidLow_4; }
	inline void set_m_GuidLow_4(uint64_t value)
	{
		___m_GuidLow_4 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_5() { return static_cast<int32_t>(offsetof(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F, ___m_GuidHigh_5)); }
	inline uint64_t get_m_GuidHigh_5() const { return ___m_GuidHigh_5; }
	inline uint64_t* get_address_of_m_GuidHigh_5() { return &___m_GuidHigh_5; }
	inline void set_m_GuidHigh_5(uint64_t value)
	{
		___m_GuidHigh_5 = value;
	}

	inline static int32_t get_offset_of_m_Images_6() { return static_cast<int32_t>(offsetof(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F, ___m_Images_6)); }
	inline List_1_t13506773B6C03CE4C5D47127B81B3031675EE51F * get_m_Images_6() const { return ___m_Images_6; }
	inline List_1_t13506773B6C03CE4C5D47127B81B3031675EE51F ** get_address_of_m_Images_6() { return &___m_Images_6; }
	inline void set_m_Images_6(List_1_t13506773B6C03CE4C5D47127B81B3031675EE51F * value)
	{
		___m_Images_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Images_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct  XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_ReferenceObjects
	List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * ___m_ReferenceObjects_6;

public:
	inline static int32_t get_offset_of_m_GuidLow_4() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260, ___m_GuidLow_4)); }
	inline uint64_t get_m_GuidLow_4() const { return ___m_GuidLow_4; }
	inline uint64_t* get_address_of_m_GuidLow_4() { return &___m_GuidLow_4; }
	inline void set_m_GuidLow_4(uint64_t value)
	{
		___m_GuidLow_4 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_5() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260, ___m_GuidHigh_5)); }
	inline uint64_t get_m_GuidHigh_5() const { return ___m_GuidHigh_5; }
	inline uint64_t* get_address_of_m_GuidHigh_5() { return &___m_GuidHigh_5; }
	inline void set_m_GuidHigh_5(uint64_t value)
	{
		___m_GuidHigh_5 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjects_6() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260, ___m_ReferenceObjects_6)); }
	inline List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * get_m_ReferenceObjects_6() const { return ___m_ReferenceObjects_6; }
	inline List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 ** get_address_of_m_ReferenceObjects_6() { return &___m_ReferenceObjects_6; }
	inline void set_m_ReferenceObjects_6(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * value)
	{
		___m_ReferenceObjects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReferenceObjects_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3  : public TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_Provider
	IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_DefaultReferencePoint
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___m_DefaultReferencePoint_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_Provider_2)); }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultReferencePoint_3() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_DefaultReferencePoint_3)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_m_DefaultReferencePoint_3() const { return ___m_DefaultReferencePoint_3; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_m_DefaultReferencePoint_3() { return &___m_DefaultReferencePoint_3; }
	inline void set_m_DefaultReferencePoint_3(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___m_DefaultReferencePoint_3 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct  ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09  : public XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem
struct  ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017  : public XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct  ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501  : public XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct  ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A  : public XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C_gshared (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  p0, void* p1, int32_t p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m07E8EBC4A1B72472F1B0E4F2371A0DD18A9853AC_gshared (Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E * __this, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  p0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  Nullable_1_get_Value_m0B2A29CF09B246A970F611ED54F5171F709E2DBF_gshared (Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA_gshared (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  p0, void* p1, int32_t p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  p6, int32_t p7, int32_t p8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  p6, int32_t p7, int32_t p8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m670C8FB2EA08BD79FA732EDD0DE2605ED72FC2D7_gshared (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mD80CE5C5275FD5AEE0186147CC2A21C03131FA3A_gshared (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * p0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mADB00C553552FC16B6924C45F0485EA1A574825A_gshared (const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m88647CCCBABD19CC080F76236852D605EED69254_gshared (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  p6, int32_t p7, int32_t p8, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m514AB5C30ECAB1DFA1C2D1430759E7EF343E4756_gshared (Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E * __this, int32_t p0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  p1, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  p6, int32_t p7, int32_t p8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m73313D354D78EEAD4D2A4BE94C71DA1E27CC23C8_gshared (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB_gshared (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  p0, int32_t p1, int32_t p2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  p3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m210E53B1CB8C3CA56CD640E245C9EB56CF33E38E_gshared (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_mBBBDB4FA3D09A902B47C60B410595BACD14CADE1_gshared (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * __this, NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_m359392799432D015C5174589C1E5703C839FFE05_gshared (String_t* p0, Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  p6, int32_t p7, int32_t p8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5DE6A0F5DFE6A17E8E3036DA1B69DF0FD3AAF644_gshared (int32_t p0, int32_t p1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * p2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F_gshared (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m256C940F2F70AEED1DF6591DE26BE8F69FEC1CCD_gshared (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  p0, int32_t p1, int32_t p2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  p3, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob>(!!0,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_gshared (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  p0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  p6, int32_t p7, int32_t p8, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m559DBD38CBD75958E02AF1F62D676E431F661520 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, String_t* p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m49F9345BCD43251FFDC4DD68E1C006AFB98E3634 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_m2F3DA568B12203F175FEAF777DA8753394F4780B (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m697272008DF9F4DA4287992BF6968433A46FD977 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m021F469C4BE1CF91484A2C483102FED9D650EB49 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m15E696085A5B470BC086F59B6EB2B4ED67E6BC6E (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m392F1AA0BE94C4F9BE41B4B501373769BC32BBE3 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mC0811CD8D662F79DA2C8144617A3C4B3F57475CD (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mE52728D3658A16E910A5290A1F13A3B49716A86E (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_mAB3557E5539DCFAEE89775A5A7A768EF9AFC18B2 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m703AA08482A5B9AFE8DCCCC33CF7D65BA4B56508 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m494821143D51BD2028BDC82ED7FCFACAD928B92D (XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_IsCameraPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_m6D1CF8FB30243CE041FEE4ED7786B3C2C9D0EEB8 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m150A5C3918FBAF3A786015108195701F3DC66999 (IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_mAC435246B997078CC1067CD3DE5A83BCD111B42D (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Start_m11A0DF3B944B94EBD383F38C61F7025DFED164DD (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Stop_m0C3C7AA9C3FE13E05FD828A4FCECD11392EA231B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Destruct_m7B85548098982ACC0732EAF66AF39AAACDDFAB2E (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetFrame_mEF897494370B6E4832A9CCFCFECD356F47C2D7EC (XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  ___cameraParams0, XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * ___cameraFrame1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetFocusMode_mC8B707933DC311675B76FB4CCE5DE00097A6951A (int32_t ___cameraFocusMode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetLightEstimationMode_m5829F08084B5ADCD174E01D8E71343B4255E22BA (int32_t ___lightEstimationMode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetIntrinsics_mEFEC80F689D45F330A2B9F020E1F5907E0944C60 (XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * ___cameraIntrinsics0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireConfigurations(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Camera_AcquireConfigurations_mB156924D3A2622EC1C561F7C5EE410B65821D59B (int32_t* ___configurationsCount0, int32_t* ___configurationSize1, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  p0, void* p1, int32_t p2, int32_t p3, int32_t p4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  (*) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C_gshared)(p0, p1, p2, p3, p4, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseConfigurations(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseConfigurations_m62F6CDFBF114826842EBCDDD8AD698914F4A273A (intptr_t ___configurations0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m68EB786D4436F0087A5CBDF657A23A9B51F1EB85 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 * ___cameraConfiguration0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
inline void Nullable_1__ctor_m07E8EBC4A1B72472F1B0E4F2371A0DD18A9853AC (Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E * __this, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E *, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , const RuntimeMethod*))Nullable_1__ctor_m07E8EBC4A1B72472F1B0E4F2371A0DD18A9853AC_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Value()
inline XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  Nullable_1_get_Value_m0B2A29CF09B246A970F611ED54F5171F709E2DBF (Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E * __this, const RuntimeMethod* method)
{
	return ((  XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  (*) (Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E *, const RuntimeMethod*))Nullable_1_get_Value_m0B2A29CF09B246A970F611ED54F5171F709E2DBF_gshared)(__this, method);
}
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_m10852C9A985C98A1BF729D17027BE7B96C9FB673 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___cameraConfiguration0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireTextureDescriptors(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_m7FF049D63401A0256E6F31352E664897ADFE296A (int32_t* ___length0, int32_t* ___elementSize1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  p0, void* p1, int32_t p2, int32_t p3, int32_t p4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  (*) (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA_gshared)(p0, p1, p2, p3, p4, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseTextureDescriptors(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m8B5EE88F8D4CF31503E5EBACF063CF5904CC0108 (void* ___descriptors0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryAcquireLatestImage_m9174F7405E1162DF108D1DB316933A92C9420A11 (CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * ___cameraImageCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_DisposeImage_m22DC931E2C8FA2223BE52A6D988CB2FB4676B28D (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_HandleValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_HandleValid_mD27B3477A5E0E9C91151FD31AC2EC784F9260636 (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetConvertedDataSize_m6D2C5713839DF1EA0F50808DDE8691A316A287BA (int32_t ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryConvert(System.Int32,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryConvert_mE2D42671304E461935D38632A325B1C6BC989FF7 (int32_t ___nativeHandle0, XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5  ___conversionParams1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_mC04469DE2280532DA98230C42D293A40E73870EE (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_mC5DFD8692500C7513DE3AC48BDE90AB5CE9D1AF9 (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m82BD1C3FA4706E2EC81E6B8CF2D9804FA75BD391 (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m99273CA85107749AF9914F38B1B944660E5C0860 (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mCF993333DFF9094801678045C101EAC59D6A0A55 (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_mB19AC789CAA508C4AB003E575CDD69692B7974D8 (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_m6DCBFAB057A1C98762332AB4E661C056ECD574FC (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::Register(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystem_Register_m0701E0648B078B75B6DC47AED942AEA83B986E11 (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mF9FFA75EC353920D21EB5925F9B77B7151F1D031 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystem__ctor_mD5858B70AAE45F8F825E8C0D6E980C8DCD8A7E33 (XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m446030A8409CE9817C39EAEF7FB26A4D40BDD578 (IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_mB1A76F99A1F487057DB73DE1F2894F0ECABE7A9D (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mB31EA6EC8C10E5D2A9A930132567A50218154B3F (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_m3596D2DEC9169DCA2DE920322A9BCDCA78ADEFEA (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Destruct_mD60199075F71F9CF628D7088DA446DAB90D3C78A (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled_mFF94AD80C6CD73CAF10CD8D5461C6D5C49174B24 (bool ___enabled0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbe&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe_m8B00E37BCB84ADBB92DC2D032CB7BA51FADF116D (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size2, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * ___environmentProbe3, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe_mB570ADDE5DFD7D17F597D86A705AE02EEEDAF181 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_AcquireChanges(System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mDE946366F47873F8E48456391F34309FF7DA3555 (int32_t* ___numAddedEnvironmentProbes0, intptr_t* ___addedEnvironmentProbes1, int32_t* ___numUpdatedEnvironmentProbes2, intptr_t* ___updatedEnvironmentProbes3, int32_t* ___numRemovedEnvironmentProbeIds4, intptr_t* ___removedEnvironmentProbeIds5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  p6, int32_t p7, int32_t p8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, void*, int32_t, void*, int32_t, void*, int32_t, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared)(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_ReleaseChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m91EDC854866ADB48A88A94473BE0BFD3744C8B0E (intptr_t ___context0, const RuntimeMethod* method);
// System.String UnityEngine.iOS.Device::get_systemVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_systemVersion_m2FAF59069686B57244F90EFBAA9E5042301C716E (const RuntimeMethod* method);
// UnityEngine.XR.ARKit.OSVersion UnityEngine.XR.ARKit.OSVersion::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  OSVersion_Parse_m929598188AC75E645CC97C238D345C43CF0C5C7A (String_t* ___version0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_LessThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_LessThan_m39B925981F048AA224715F46DC3BA657B66B09EC (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mF18B67F52DD34A8CD8A718ED36CB4651873B3EE0 (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9045C99491613E201755F5A363F9CC5978740E59 (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThanOrEqual(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThanOrEqual_m5E830944BCF108C97082C47CFEDC3FC94BA0BB95 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m7045441CA2E8CC03F2CD60BA03C8066095684F96 (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_Create_mADB63232DFEE95AA44F52496B7289C8469E118B9 (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m215AC16894DD532CA1F62AD7E25E46EDC3ACE984 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem__ctor_m32B2EFB936DCAB4D5B7DC15C0A993C1F1736A4EF (XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_stop_mD8D7055B7ACAEDBE7C7469E78BFF69253E5C06A7 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  XRReferenceImageLibrary_get_guid_mAE3BC056A0B6817FD14E09D150B561CB468EFCDC (XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_trySetReferenceLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitImageTrackingSubsystem_UnityARKit_imageTracking_trySetReferenceLibrary_m585448B3C88CC61683B98B46792A5AD22AA18F3C (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitImageTrackingSubsystem_UnityARKit_imageTracking_acquireChanges_m6C484280B6C18DCFBC41D80316FAA35F6FDC27C8 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  p6, int32_t p7, int32_t p8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared)(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_releaseChanges_mE162E5898540557FC3C8C2E02A6D9FA24E7851B4 (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_destroy_mAE726843825430D49145185B62FA03A0B3875F24 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_setMaximumNumberOfTrackedImages_m22852DC2DEBBF2F8740E980F2CEFBBA12D1FCD69 (int32_t ___maxNumTrackedImages0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m8878ACB17D3928A9027D475E105BD2F0E87CB2E5 (IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8813B5E5B04EA6294D09901E7526D8A32D1D7416 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mFFFBB447D6D0DF4A27428D414FE23BCCB16D78D1 (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m00E3D77F5C33C670222169A514C9804886D4FD72 (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mBA63D727FCB8E5FE2EF1BD5CA2192B54768DEF0D (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_mDDA30FB5ADF2800F44467B727F19668AAE05AFEF (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m91638341F04B3BC3688660AFFE66308C19B13C6B (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mFA32B9879B902AA46943CF8809094299062A41DB (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_raycast_acquireHitResults(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_acquireHitResults_m47A2ADBB07C85B568F704891A057A9C830E0B351 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint0, int32_t ___filter1, void** ___hitResults2, int32_t* ___hitCount3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m670C8FB2EA08BD79FA732EDD0DE2605ED72FC2D7 (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m670C8FB2EA08BD79FA732EDD0DE2605ED72FC2D7_gshared)(__this, p0, p1, p2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(!!0&)
inline void* UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mD80CE5C5275FD5AEE0186147CC2A21C03131FA3A (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * p0, const RuntimeMethod* method)
{
	return ((  void* (*) (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *, const RuntimeMethod*))UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mD80CE5C5275FD5AEE0186147CC2A21C03131FA3A_gshared)(p0, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
inline int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mADB00C553552FC16B6924C45F0485EA1A574825A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mADB00C553552FC16B6924C45F0485EA1A574825A_gshared)(method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m88647CCCBABD19CC080F76236852D605EED69254 (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  p0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m88647CCCBABD19CC080F76236852D605EED69254_gshared)(p0, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_raycast_copyAndReleaseHitResults(System.Void*,System.Int32,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_copyAndReleaseHitResults_m4ED586E6E2901CF58EA5A2A748C76A4CE9E78C8D (void* ___defaultHit0, int32_t ___stride1, void* ___hitResults2, void* ___dstBuffer3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_mC08FB7162685B068A1CA780F9AB010796EA6F83D (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m59EBC1836CDC7E93309447E51535B4F742DBC5D7 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStart_m1715BC863506C0C114B7FD9E6EF059235E61E25E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStop_m9840E08DB6A6A6AFD72F9361414FFCCB47CB6CB7 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onDestroy_mFB7AB013CB3BCF1C0F94D61F7D978C94F7FDCEC4 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_refPoints_acquireChanges_mA253751695B837A25CA8EC7870F9F9C124ED7759 (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  p6, int32_t p7, int32_t p8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, void*, int32_t, void*, int32_t, void*, int32_t, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared)(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_releaseChanges_m7F10E7582E85B42E1DB8D2FA63B77B7B66E4A3E3 (void* ___changes0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryAdd(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAdd_m90F3CD59462F734718E6A30D7C8F994E065AA2B7 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryAttach(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAttach_mC90D01B49327E81DC435A27D5E3192519BDCDD6D (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryRemove(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryRemove_m99402EBE00CC43D58C8A49CBBBA2B0F1047F0433 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m56C9E2DB691648499825B3D03C0FCD6B534FE641 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508 (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4FF36D4AB8AF605DF92F850550BFF7620C0EEBAC (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m570D55848E9206E726B14940CACD652E67157CF3 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t p0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
inline void Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435 (Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * __this, int32_t p0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A *, int32_t, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE , const RuntimeMethod*))Action_2_Invoke_m514AB5C30ECAB1DFA1C2D1430759E7EF343E4756_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m7CBD7C46ACF50FF49255251388ED6E6D1F3233DB (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mC863967FCF8BA090EE1CCF7E4B8A4EAF81675C03 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_resume_m6870764F4652F7134887194DC2AC1895AE989A47 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_pause_mA6AB3E2F050C1CE2767C623421D325B16140056D (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_update_m500719C8DA68C6CBCD7F0E40825D0BB2318AF2EB (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_destroy_m31AEC4F335BDB95463A762D06197969894402AA4 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_reset_mC7A38D34BC9EE9C284D66AFDAC08400E452C4205 (const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getAvailability_m99887277747C2AAD5A630BF058000B82B97F844D (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(!0)
inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D (int32_t p0, const RuntimeMethod* method)
{
	return ((  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(p0, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getTrackingState_mC556510D36A2A09FD80AB564EF433A9740EEEF60 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m87E63C927C7DD687F02E114B2EF261E9ADB60751 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_m05831EFF5A03CCC424A2DB1E8C8460E54385E798 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m2FCA1C93FDE8DC5DC4A553F9EF32E399844C0F79 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mE8AA1B05D64ABF1690D4B30E5C245B9A923A9116 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_m53237B806014993075B559C44D9A743DB447154F (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_m1374F0D0EDEA230229CC5ADFF30647B3D2D100D3 (XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7 * __this, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquireChanges_mEED8F1E4A474DD6D117353FCC49DD925FE27CA1F (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  p6, int32_t p7, int32_t p8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared)(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releaseChanges_m8D8D9E87B5FE56716FC1A35FFBDF684B025B5FBA (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_destroy_m442CB44634225EA99ABC9FE541C9126D5AC66A3B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_start_m3EE773D0DDB95DC993772CE93D8BC29BE90DF7B3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_stop_m2152DE5E9156ED8602B853E9D822AC0F00C21E65 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_acquirePointCloud(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquirePointCloud_m68FF9ADD5F7499B55531D5031301A8EF0ADEA365 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___positionsPtr1, void** ___identifiersPtr2, int32_t* ___numPoints3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m73313D354D78EEAD4D2A4BE94C71DA1E27CC23C8 (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m73313D354D78EEAD4D2A4BE94C71DA1E27CC23C8_gshared)(__this, p0, p1, p2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1 (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1_gshared)(p0, p1, p2, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  p0, int32_t p1, int32_t p2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  p3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB_gshared)(p0, p1, p2, p3, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m210E53B1CB8C3CA56CD640E245C9EB56CF33E38E (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m210E53B1CB8C3CA56CD640E245C9EB56CF33E38E_gshared)(__this, p0, p1, p2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA_gshared)(p0, p1, p2, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
inline void NativeArray_1_CopyFrom_mBBBDB4FA3D09A902B47C60B410595BACD14CADE1 (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * __this, NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  p0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C *, NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C , const RuntimeMethod*))NativeArray_1_CopyFrom_mBBBDB4FA3D09A902B47C60B410595BACD14CADE1_gshared)(__this, p0, method);
}
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797 (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPointCloudData::set_positions(Unity.Collections.NativeArray`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPointCloudData_set_positions_m78BB0E1E2A5860DAC6F60D6C9A6A37544FF9880E (XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA * __this, NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPointCloudData::set_identifiers(Unity.Collections.NativeArray`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPointCloudData_set_identifiers_m550B2B8C6EF821D5BBD47C066FF6C961EF0CA562 (XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA * __this, NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_releasePointCloud(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releasePointCloud_mD8EB249E84A48351D532E93FA52EA5AFA542C95D (void* ___pointCloud0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDepthApi__ctor_m6DB7AD960B45DEAB48C7EC9034864A61D180D90F (IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformPositionsJob_Execute_m599A8FB62D88B510B5BDC79C59E095B336DE2CFD (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m3DE9C72A4052053EC572E128E559431E3E26B2CF (Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
inline void XRObjectTrackingSubsystem_Register_TisARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F_m3F2BA9FC69F63C533C496DF25976430BA68F2D83 (String_t* p0, Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597  p1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597 , const RuntimeMethod*))XRObjectTrackingSubsystem_Register_TisRuntimeObject_m359392799432D015C5174589C1E5703C839FFE05_gshared)(p0, p1, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem__ctor_m76F90C34C8D522DB4C6F2943BF5B74076DFC464A (XRObjectTrackingSubsystem_t6E47CA43558F7A63B8C1337C02CAA423E8DBE760 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::UnityARKit_ObjectTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_Stop_m662EA8DB1E9F06942C3A341AB9D8B4A2E22A5185 (const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  XRReferenceObjectLibrary_get_guid_mC10138A0A17DF18E104F14079063BA1C12A3DF87 (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::UnityARKit_ObjectTracking_TrySetLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_UnityARKit_ObjectTracking_TrySetLibrary_mF7FE59E19D1BBB5E97350E5D214E7D602D3EF5A5 (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::UnityARKit_ObjectTracking_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_ObjectTracking_AcquireChanges_m907CBF7D3E8F7024232247E67427F36AF5AA5FC9 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  p6, int32_t p7, int32_t p8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_gshared)(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::UnityARKit_ObjectTracking_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_ReleaseChanges_mE84A1B723AC388B973163129AA169C161DF8040A (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::UnityARKit_ObjectTracking_Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_Shutdown_m8E71AFD99A675158E721B8C364317A5E5532C822 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m699F75E3895ABB6AFEC48297ECB6696C4D68DAF7 (IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/Provider::UnityARKit_ObjectTracking_Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_Initialize_m5F43213D1DF7B5D49490F9A2C4DAE71FC05EC2FE (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m216F6FEB7AB12FABB6D18E68C41988A1CE553D52 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mB3D68A1AEE80E5941EBE7DEFFFB34AC44AB92A8E (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mDACCFA76DE27D24DAD241496ABCE1606EA51E97C (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m03E0099B1BAC214B26A2F4D476DA2A7D5AE01EF9 (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m3F6EDFE99022E0D214BEAD727F1AB7A77370DBF4 (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m26BE6DBE028AC98927B6E9349599DAF9E4213D18 (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m8B0526794B4738A739CD44345ACBA74639B0F1F5 (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_m3C5EB6950F78DFA4DEF405243ED67F0CBE2110CA (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809 (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_shutdown_m54960A63D70869C221AB82FAEDC984A0C3279BC6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_start_m6732C584BCDC6CB0EA4D1C5AC94E5AEC4E562269 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_stop_mD20CEA039A2F7B2FE79929CBAECDC0DC47DEEAD3 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_acquireBoundary(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireBoundary_mDC818B78E72A725BB6CD81F7C8379A72FB3FEDE4 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___verticiesPtr1, int32_t* ___numPoints2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
inline void XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5DE6A0F5DFE6A17E8E3036DA1B69DF0FD3AAF644 (int32_t p0, int32_t p1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * p2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *, const RuntimeMethod*))XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5DE6A0F5DFE6A17E8E3036DA1B69DF0FD3AAF644_gshared)(p0, p1, p2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F (void* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F_gshared)(p0, p1, p2, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m256C940F2F70AEED1DF6591DE26BE8F69FEC1CCD (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  p0, int32_t p1, int32_t p2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  p3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m256C940F2F70AEED1DF6591DE26BE8F69FEC1CCD_gshared)(p0, p1, p2, p3, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob>(!!0,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  p0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  p1, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 , JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_gshared)(p0, p1, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_releaseBoundary(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseBoundary_mDF8D388C215579B65EF0120CD557D476209D2004 (void* ___boundary0, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireChanges_m30A108B0FBCF6EAE989B0462F09AF692D75B60D4 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202 (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* p0, int32_t p1, void* p2, int32_t p3, void* p4, int32_t p5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  p6, int32_t p7, int32_t p8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, void*, int32_t, void*, int32_t, void*, int32_t, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared)(__this, p0, p1, p2, p3, p4, p5, p6, p7, p8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseChanges_mA13358A540B33FBF2B5B00726820AB76D41A6CD1 (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_setPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_setPlaneDetectionMode_m4B0EB74C051796FA002FF4DC1C31826087F01D91 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m4A9509E28D15EA223DA0EB272B727A5740A9CBBE (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipBoundaryWindingJob_Execute_m1164EDF77F444E6520B7B88D0FC969F61F916DFA (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformBoundaryPositionsJob_Execute_mC801350B6F6FA5E3FD72A6D31186C32DE072AC49 (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_major()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_major(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_major_m2BBD576ABA767AF7A56BC7935B00F544276C669B (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_minor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_minor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_minor_m98BB0F36791CA8BBCB7CC7B3371F0EAFDEED9C9C (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_point(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_point_m88D63B4665E0DA4CDEC0F1D1EA0B52B4F2C41094 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::IndexOfFirstDigit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_IndexOfFirstDigit_mC9C3927F500AACD5DA119CE2F295F244DA8F7500 (String_t* ___version0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::ParseNextComponent(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_ParseNextComponent_mBA8396A52E8546F92829B6AF99A3B4C75D6DBDD0 (String_t* ___version0, int32_t* ___index1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_GetHashCode_m9B4220E819BA4F8752E3A5C23367BA042CFEB048 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThan_m40CC33419D6999FC4FFF3C0A09646A1A354316B9 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::CompareTo(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_CompareTo_m7772F845922168E82D07D54EAC7EB16435679E82 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___version0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m66F4AB01179637130816E822264745850F4E98EE (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m1624E9E89A35B70CCA34158360E2BDB0290F6FA4 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_Equality(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_Equality_m3E4A3FAE79B6553BA2AD8CC58CFB7BA729EE793B (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARKit.OSVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSVersion_ToString_m3A709D674A58700A1798C6F71B4F374826F996D7 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem_Register_m3D8A7915373F1DA0A6314C400B037FEA2248888E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_Register_m3D8A7915373F1DA0A6314C400B037FEA2248888E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC ));
		XRCameraSubsystemCinfo_set_id_m559DBD38CBD75958E02AF1F62D676E431F661520((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_implementationType_m49F9345BCD43251FFDC4DD68E1C006AFB98E3634((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), L_1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageBrightness_m2F3DA568B12203F175FEAF777DA8753394F4780B((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m697272008DF9F4DA4287992BF6968433A46FD977((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsColorCorrection_m021F469C4BE1CF91484A2C483102FED9D650EB49((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m15E696085A5B470BC086F59B6EB2B4ED67E6BC6E((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m392F1AA0BE94C4F9BE41B4B501373769BC32BBE3((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsTimestamp_mC0811CD8D662F79DA2C8144617A3C4B3F57475CD((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mE52728D3658A16E910A5290A1F13A3B49716A86E((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraImage_mAB3557E5539DCFAEE89775A5A7A768EF9AFC18B2((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  L_2 = V_0;
		bool L_3 = XRCameraSubsystem_Register_m703AA08482A5B9AFE8DCCCC33CF7D65BA4B56508(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0085;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424, L_5, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_IProvider UnityEngine.XR.ARKit.ARKitCameraSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987 (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * L_0 = (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E *)il2cpp_codegen_object_new(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var);
		Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__ctor_m275098DB546565F2F505C5229244BC965D532B89 (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614 * __this, const RuntimeMethod* method)
{
	{
		XRCameraSubsystem__ctor_m494821143D51BD2028BDC82ED7FCFACAD928B92D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Construct(int32_t, int32_t);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_mAC435246B997078CC1067CD3DE5A83BCD111B42D (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Construct)(___textureYPropertyNameId0, ___textureCbCrPropertyNameId1);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Destruct();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Destruct_m7B85548098982ACC0732EAF66AF39AAACDDFAB2E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Destruct)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Start();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Start_m11A0DF3B944B94EBD383F38C61F7025DFED164DD (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Start)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Stop();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Stop_m0C3C7AA9C3FE13E05FD828A4FCECD11392EA231B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Stop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetFrame(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B , XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrameU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetFrame_mEF897494370B6E4832A9CCFCFECD356F47C2D7EC (XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  ___cameraParams0, XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * ___cameraFrame1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B , XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetFrame)(___cameraParams0, ___cameraFrame1);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetFocusMode(int32_t);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TrySetFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetFocusMode_mC8B707933DC311675B76FB4CCE5DE00097A6951A (int32_t ___cameraFocusMode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetFocusMode)(___cameraFocusMode0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetLightEstimationMode(int32_t);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetLightEstimationMode_m5829F08084B5ADCD174E01D8E71343B4255E22BA (int32_t ___lightEstimationMode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetLightEstimationMode)(___lightEstimationMode0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetIntrinsics(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsicsU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetIntrinsics_mEFEC80F689D45F330A2B9F020E1F5907E0944C60 (XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetIntrinsics)(___cameraIntrinsics0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_IsCameraPermissionGranted();
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_IsCameraPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_m6D1CF8FB30243CE041FEE4ED7786B3C2C9D0EEB8 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_IsCameraPermissionGranted)();

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Camera_AcquireConfigurations(int32_t*, int32_t*);
#endif
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_AcquireConfigurations(System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Camera_AcquireConfigurations_mB156924D3A2622EC1C561F7C5EE410B65821D59B (int32_t* ___configurationsCount0, int32_t* ___configurationSize1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_AcquireConfigurations)(___configurationsCount0, ___configurationSize1);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_ReleaseConfigurations(intptr_t);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_ReleaseConfigurations(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseConfigurations_m62F6CDFBF114826842EBCDDD8AD698914F4A273A (intptr_t ___configurations0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_ReleaseConfigurations)(___configurations0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetCurrentConfiguration(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TryGetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfigurationU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m68EB786D4436F0087A5CBDF657A23A9B51F1EB85 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 * ___cameraConfiguration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetCurrentConfiguration)(___cameraConfiguration0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetCurrentConfiguration(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 );
#endif
// UnityEngine.XR.ARKit.ARKitCameraSubsystem_CameraConfigurationResult UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TrySetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_m10852C9A985C98A1BF729D17027BE7B96C9FB673 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___cameraConfiguration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetCurrentConfiguration)(___cameraConfiguration0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_Camera_AcquireTextureDescriptors(int32_t*, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_AcquireTextureDescriptors(System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_m7FF049D63401A0256E6F31352E664897ADFE296A (int32_t* ___length0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_AcquireTextureDescriptors)(___length0, ___elementSize1);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_ReleaseTextureDescriptors(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_ReleaseTextureDescriptors(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m8B5EE88F8D4CF31503E5EBACF063CF5904CC0108 (void* ___descriptors0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_ReleaseTextureDescriptors)(___descriptors0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryAcquireLatestImage(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfoU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryAcquireLatestImage_m9174F7405E1162DF108D1DB316933A92C9420A11 (CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * ___cameraImageCinfo0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryAcquireLatestImage)(___cameraImageCinfo0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_DisposeImage(int32_t);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_DisposeImage_m22DC931E2C8FA2223BE52A6D988CB2FB4676B28D (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_DisposeImage)(___nativeHandle0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_HandleValid(int32_t);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_HandleValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_HandleValid_mD27B3477A5E0E9C91151FD31AC2EC784F9260636 (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_HandleValid)(___nativeHandle0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetConvertedDataSize(int32_t, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 , int32_t, int32_t*);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetConvertedDataSize_m6D2C5713839DF1EA0F50808DDE8691A316A287BA (int32_t ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 , int32_t, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetConvertedDataSize)(___nativeHandle0, ___dimensions1, ___format2, ___size3);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryConvert(int32_t, XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5 , intptr_t, int32_t);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_TryConvert(System.Int32,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryConvert_mE2D42671304E461935D38632A325B1C6BC989FF7 (int32_t ___nativeHandle0, XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5  ___conversionParams1, intptr_t ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5 , intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryConvert)(___nativeHandle0, ___conversionParams1, ___buffer2, ___bufferLength3);

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::get_shaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Provider_get_shaderName_mE4633567C3028E6020BD15D6A08C22FC3AF384C9 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_shaderName_mE4633567C3028E6020BD15D6A08C22FC3AF384C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral33E23C61A9793B5149A92E13F9B9FBF25F22A9C4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::get_permissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_permissionGranted_mDAF888D5A4DF04BBACA0B5409CFF8586D8E28247 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_m6D1CF8FB30243CE041FEE4ED7786B3C2C9D0EEB8(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IProvider__ctor_m150A5C3918FBAF3A786015108195701F3DC66999(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->get_k_TextureYPropertyNameId_0();
		int32_t L_1 = ((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->get_k_TextureCbCrPropertyNameId_1();
		NativeApi_UnityARKit_Camera_Construct_mAC435246B997078CC1067CD3DE5A83BCD111B42D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mD5B6664CB58C834E9AD891AFFD88126D960A796D (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_Camera_Start_m11A0DF3B944B94EBD383F38C61F7025DFED164DD(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m577AC20E5265E49E85F02B9CF0271E51F497210A (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_Camera_Stop_m0C3C7AA9C3FE13E05FD828A4FCECD11392EA231B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mEE53649A3BD773C3A329AE3B41B9666CB1F64CA9 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_Camera_Destruct_m7B85548098982ACC0732EAF66AF39AAACDDFAB2E(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrameU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetFrame_mE6B1DE80B72594C6443284E82BAE9BAADC3A6F97 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  ___cameraParams0, XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * ___cameraFrame1, const RuntimeMethod* method)
{
	{
		XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  L_0 = ___cameraParams0;
		XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * L_1 = ___cameraFrame1;
		bool L_2 = NativeApi_UnityARKit_Camera_TryGetFrame_mEF897494370B6E4832A9CCFCFECD356F47C2D7EC(L_0, (XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TrySetFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TrySetFocusMode_m75D5752E0B9B07F9B272EB2BDC5A670BEFD207C0 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___cameraFocusMode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___cameraFocusMode0;
		bool L_1 = NativeApi_UnityARKit_Camera_TrySetFocusMode_mC8B707933DC311675B76FB4CCE5DE00097A6951A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TrySetLightEstimationMode_m12CCE4034A74BB0751BDC0C9587CDC4C70244131 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___lightEstimationMode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___lightEstimationMode0;
		bool L_1 = NativeApi_UnityARKit_Camera_TrySetLightEstimationMode_m5829F08084B5ADCD174E01D8E71343B4255E22BA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsicsU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetIntrinsics_m87231B275B9522B64C16A7A51DE6C07D63F5D481 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	{
		XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * L_0 = ___cameraIntrinsics0;
		bool L_1 = NativeApi_UnityARKit_Camera_TryGetIntrinsics_mEFEC80F689D45F330A2B9F020E1F5907E0944C60((XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::GetConfigurations(UnityEngine.XR.ARSubsystems.XRCameraConfiguration,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  Provider_GetConfigurations_m4D9FC2BA19A3649FD8A38FB6125B77916FD4A71B (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___defaultCameraConfiguration0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetConfigurations_m4D9FC2BA19A3649FD8A38FB6125B77916FD4A71B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		intptr_t L_0 = NativeApi_UnityARKit_Camera_AcquireConfigurations_mB156924D3A2622EC1C561F7C5EE410B65821D59B((int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_1 = ___defaultCameraConfiguration0;
		intptr_t L_2 = V_2;
		void* L_3 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___allocator1;
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_7 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C(L_1, (void*)(void*)L_3, L_4, L_5, L_6, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C_RuntimeMethod_var);
		V_3 = L_7;
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		intptr_t L_8 = V_2;
		NativeApi_UnityARKit_Camera_ReleaseConfigurations_m62F6CDFBF114826842EBCDDD8AD698914F4A273A((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x23);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0023:
	{
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_9 = V_3;
		return L_9;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E  Provider_get_currentConfiguration_m427069F7AD3E78EB1AFBFB5D03ADABA45E9BE2E4 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_currentConfiguration_m427069F7AD3E78EB1AFBFB5D03ADABA45E9BE2E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m68EB786D4436F0087A5CBDF657A23A9B51F1EB85((XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_1 = V_0;
		Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m07E8EBC4A1B72472F1B0E4F2371A0DD18A9853AC((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m07E8EBC4A1B72472F1B0E4F2371A0DD18A9853AC_RuntimeMethod_var);
		return L_2;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E ));
		Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E  L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_0 = Nullable_1_get_Value_m0B2A29CF09B246A970F611ED54F5171F709E2DBF((Nullable_1_t57FFF3CD6F8E155CAF4DF68AB91837D7503B5A7E *)(&___value0), /*hidden argument*/Nullable_1_get_Value_m0B2A29CF09B246A970F611ED54F5171F709E2DBF_RuntimeMethod_var);
		int32_t L_1 = NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_m10852C9A985C98A1BF729D17027BE7B96C9FB673(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_0025:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral48A46231AB256292293A3DC6088329E7F3D1D3E2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_RuntimeMethod_var);
	}

IL_0030:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_4, _stringLiteral00EDFBC4EFCE3A9F974CEABCD51DE2609B2A1AE5, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_RuntimeMethod_var);
	}

IL_0040:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, _stringLiteral07FEA96DBE8894801F7F1DB849C8EB8A0629F092, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_RuntimeMethod_var);
	}

IL_004b:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteral33ABE3E9D8C2CC615BBDC88213E6BE6A384D6805, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Provider_set_currentConfiguration_m0598EB4F4EFC8CC3A23C3C2ABC299622D64F4759_RuntimeMethod_var);
	}

IL_0056:
	{
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor> UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::GetTextureDescriptors(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  Provider_GetTextureDescriptors_m9CECC57BD95307B36CC3F27C9CFBBACC92836DCC (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___defaultDescriptor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetTextureDescriptors_m9CECC57BD95307B36CC3F27C9CFBBACC92836DCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		void* L_0 = NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_m7FF049D63401A0256E6F31352E664897ADFE296A((int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (void*)L_0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_1 = ___defaultDescriptor0;
		void* L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___allocator1;
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_6 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA(L_1, (void*)(void*)L_2, L_3, L_4, L_5, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA_RuntimeMethod_var);
		V_3 = L_6;
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		void* L_7 = V_2;
		NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m8B5EE88F8D4CF31503E5EBACF063CF5904CC0108((void*)(void*)L_7, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x1E);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001e:
	{
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_8 = V_3;
		return L_8;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem_CameraImageCinfoU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireLatestImage_m36480B58DC7C1DB4D6F57AFCD94AC043A976EC8A (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * ___cameraImageCinfo0, const RuntimeMethod* method)
{
	{
		CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * L_0 = ___cameraImageCinfo0;
		bool L_1 = NativeApi_UnityARKit_Camera_TryAcquireLatestImage_m9174F7405E1162DF108D1DB316933A92C9420A11((CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_DisposeImage_m0FE7A83ADDE64DDE7A21893352658FFC65DE7AEF (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		NativeApi_UnityARKit_Camera_DisposeImage_m22DC931E2C8FA2223BE52A6D988CB2FB4676B28D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::NativeHandleValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_NativeHandleValid_mD204608A43DB7140975855DA80FDA6EDE23C1809 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		bool L_1 = NativeApi_UnityARKit_Camera_HandleValid_mD27B3477A5E0E9C91151FD31AC2EC784F9260636(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TryGetConvertedDataSize(System.Int32,UnityEngine.Vector2Int,UnityEngine.TextureFormat,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetConvertedDataSize_m4F9A4DF8C8725E68B5BE2D2DDFF94CD79627D7C2 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___nativeHandle0, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___dimensions1, int32_t ___format2, int32_t* ___size3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_1 = ___dimensions1;
		int32_t L_2 = ___format2;
		int32_t* L_3 = ___size3;
		bool L_4 = NativeApi_UnityARKit_Camera_TryGetConvertedDataSize_m6D2C5713839DF1EA0F50808DDE8691A316A287BA(L_0, L_1, L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::TryConvert(System.Int32,UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryConvert_m4AD5A817689CAE787A81D040577DF3D8034DB456 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___nativeHandle0, XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5  ___conversionParams1, intptr_t ___destinationBuffer2, int32_t ___bufferLength3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		XRCameraImageConversionParams_t94D5A9992C6D9C03637B14C4399D4CAE35F899C5  L_1 = ___conversionParams1;
		intptr_t L_2 = ___destinationBuffer2;
		int32_t L_3 = ___bufferLength3;
		bool L_4 = NativeApi_UnityARKit_Camera_TryConvert_mE2D42671304E461935D38632A325B1C6BC989FF7(L_0, L_1, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__cctor_m4E1CA25EC70EA527EB9FA3F8865E66590E4A135C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider__cctor_m4E1CA25EC70EA527EB9FA3F8865E66590E4A135C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteralFCF79EA505459F01F984988600F23CC4756E4537, /*hidden argument*/NULL);
		((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->set_k_TextureYPropertyNameId_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D, /*hidden argument*/NULL);
		((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->set_k_TextureCbCrPropertyNameId_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeRegistration_Register_mE0C8F72802522D990C90CB7786A831F09A172C11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeRegistration_Register_mE0C8F72802522D990C90CB7786A831F09A172C11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A ));
		IL2CPP_RUNTIME_CLASS_INIT(ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_StaticFields*)il2cpp_codegen_static_fields_for(ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		XREnvironmentProbeSubsystemCinfo_set_id_mC04469DE2280532DA98230C42D293A40E73870EE((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_implementationType_mC5DFD8692500C7513DE3AC48BDE90AB5CE9D1AF9((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), L_2, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m82BD1C3FA4706E2EC81E6B8CF2D9804FA75BD391((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m99273CA85107749AF9914F38B1B944660E5C0860((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mCF993333DFF9094801678045C101EAC59D6A0A55((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_mB19AC789CAA508C4AB003E575CDD69692B7974D8((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_m6DCBFAB057A1C98762332AB4E661C056ECD574FC((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A  L_3 = V_0;
		bool L_4 = XREnvironmentProbeSubsystem_Register_m0701E0648B078B75B6DC47AED942AEA83B986E11(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_006d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_il2cpp_TypeInfo_var);
		String_t* L_7 = ((ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_StaticFields*)il2cpp_codegen_static_fields_for(ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_il2cpp_TypeInfo_var))->get_k_SubsystemId_0();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424, L_6, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeRegistration__cctor_mC8E8858D4FFFCABFFB87886C2876BCC9FC0E3A2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeRegistration__cctor_mC8E8858D4FFFCABFFB87886C2876BCC9FC0E3A2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_StaticFields*)il2cpp_codegen_static_fields_for(ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757_il2cpp_TypeInfo_var))->set_k_SubsystemId_0(_stringLiteralCE0959A1FA0165C9EB07D89FE0FBBAA26CD9E529);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem_IProvider UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * ARKitEnvironmentProbeSubsystem_CreateProvider_m734B041E08091395C665D21150F3728493C2A746 (ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeSubsystem_CreateProvider_m734B041E08091395C665D21150F3728493C2A746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * L_0 = (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 *)il2cpp_codegen_object_new(Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91_il2cpp_TypeInfo_var);
		Provider__ctor_mF9FFA75EC353920D21EB5925F9B77B7151F1D031(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeSubsystem__ctor_m2B720AA9571139B952927F47455614DA9EAEFB85 (ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE * __this, const RuntimeMethod* method)
{
	{
		XREnvironmentProbeSubsystem__ctor_mD5858B70AAE45F8F825E8C0D6E980C8DCD8A7E33(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mF9FFA75EC353920D21EB5925F9B77B7151F1D031 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m446030A8409CE9817C39EAEF7FB26A4D40BDD578(__this, /*hidden argument*/NULL);
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_mB1A76F99A1F487057DB73DE1F2894F0ECABE7A9D(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mDB87350F1025A603159D183194ED41A42FE6F2F5 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mB31EA6EC8C10E5D2A9A930132567A50218154B3F(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m16A5FB464B9C5361C09D731FAB04EB84264103F9 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_m3596D2DEC9169DCA2DE920322A9BCDCA78ADEFEA(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mFE6B34908A782556BB4237B444C43207E3C240E9 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Destruct_mD60199075F71F9CF628D7088DA446DAB90D3C78A(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::SetAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_SetAutomaticPlacement_m7B7158FFDC91D92307AE1F80DEF2447DCBB865ED (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled_mFF94AD80C6CD73CAF10CD8D5461C6D5C49174B24(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbeU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddEnvironmentProbe_m310D7824B10CEE50B2239692A6F7768F25F7BE43 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size2, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * ___environmentProbe3, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___pose0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___scale1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___size2;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * L_3 = ___environmentProbe3;
		bool L_4 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe_m8B00E37BCB84ADBB92DC2D032CB7BA51FADF116D(L_0, L_1, L_2, (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::RemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_RemoveEnvironmentProbe_m51519B0BBB5157EC6B26791EAC2D034B6C7150EA (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		bool L_1 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe_mB570ADDE5DFD7D17F597D86A705AE02EEEDAF181(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe> UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem_Provider::GetChanges(UnityEngine.XR.ARSubsystems.XREnvironmentProbe,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  Provider_GetChanges_m26E082A5D0B91535BD7201C3AFAFA220CC61F006 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultEnvironmentProbe0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m26E082A5D0B91535BD7201C3AFAFA220CC61F006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		intptr_t L_0 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mDE946366F47873F8E48456391F34309FF7DA3555((int32_t*)(&V_0), (intptr_t*)(&V_1), (int32_t*)(&V_2), (intptr_t*)(&V_3), (int32_t*)(&V_4), (intptr_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (intptr_t)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		intptr_t L_1 = V_1;
		void* L_2 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		intptr_t L_4 = V_3;
		void* L_5 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		intptr_t L_7 = V_5;
		void* L_8 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_4;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_10 = ___defaultEnvironmentProbe0;
		int32_t L_11 = V_6;
		int32_t L_12 = ___allocator1;
		TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  L_13;
		memset((&L_13), 0, sizeof(L_13));
		TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE((&L_13), (void*)(void*)L_2, L_3, (void*)(void*)L_5, L_6, (void*)(void*)L_8, L_9, L_10, L_11, L_12, /*hidden argument*/TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_RuntimeMethod_var);
		V_8 = L_13;
		IL2CPP_LEAVE(0x41, FINALLY_0039);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		intptr_t L_14 = V_7;
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m91EDC854866ADB48A88A94473BE0BFD3744C8B0E((intptr_t)L_14, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x41);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  L_15 = V_8;
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(int32_t);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_setMaximumNumberOfTrackedImages_m22852DC2DEBBF2F8740E980F2CEFBBA12D1FCD69 (int32_t ___maxNumTrackedImages0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_setMaximumNumberOfTrackedImages)(___maxNumTrackedImages0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_imageTracking_trySetReferenceLibrary(Il2CppChar*, int32_t, Guid_t );
#endif
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_trySetReferenceLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitImageTrackingSubsystem_UnityARKit_imageTracking_trySetReferenceLibrary_m585448B3C88CC61683B98B46792A5AD22AA18F3C (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t, Guid_t );

	// Marshaling of parameter U27___name0U27 to native representation
	Il2CppChar* ____name0_marshaled = NULL;
	if (___name0 != NULL)
	{
		____name0_marshaled = ___name0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_trySetReferenceLibrary)(____name0_marshaled, ___nameLength1, ___guid2);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_stop();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_stop_mD8D7055B7ACAEDBE7C7469E78BFF69253E5C06A7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_stop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_destroy();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_destroy_mAE726843825430D49145185B62FA03A0B3875F24 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_destroy)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_imageTracking_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_acquireChanges(System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitImageTrackingSubsystem_UnityARKit_imageTracking_acquireChanges_m6C484280B6C18DCFBC41D80316FAA35F6FDC27C8 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter U27___addedPtr0U27 to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter U27___updatedPtr2U27 to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter U27___removedPtr4U27 to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___stride6);

	// Marshaling of parameter U27___addedPtr0U27 back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___updatedPtr2U27 back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___removedPtr4U27 back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_releaseChanges(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_releaseChanges_mE162E5898540557FC3C8C2E02A6D9FA24E7851B4 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_releaseChanges)(___changes0);

}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_RegisterDescriptor_mD119C6E8F9DC7EEA796524E60E445A34AEF42814 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitImageTrackingSubsystem_RegisterDescriptor_mD119C6E8F9DC7EEA796524E60E445A34AEF42814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = Device_get_systemVersion_m2FAF59069686B57244F90EFBAA9E5042301C716E(/*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = OSVersion_Parse_m929598188AC75E645CC97C238D345C43CF0C5C7A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_2 = V_0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57((&L_3), ((int32_t)11), 3, 0, /*hidden argument*/NULL);
		bool L_4 = OSVersion_op_LessThan_m39B925981F048AA224715F46DC3BA657B66B09EC(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 ));
		Cinfo_set_id_mF18B67F52DD34A8CD8A718ED36CB4651873B3EE0((Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 *)(&V_1), _stringLiteral04B1631028D1B854A9842CEE0FA6FDA32C86BDF7, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m9045C99491613E201755F5A363F9CC5978740E59((Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 *)(&V_1), L_6, /*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_7 = V_0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_8;
		memset((&L_8), 0, sizeof(L_8));
		OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57((&L_8), ((int32_t)12), 0, 0, /*hidden argument*/NULL);
		bool L_9 = OSVersion_op_GreaterThanOrEqual_m5E830944BCF108C97082C47CFEDC3FC94BA0BB95(L_7, L_8, /*hidden argument*/NULL);
		Cinfo_set_supportsMovingImages_m7045441CA2E8CC03F2CD60BA03C8066095684F96((Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 *)(&V_1), L_9, /*hidden argument*/NULL);
		Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106  L_10 = V_1;
		XRImageTrackingSubsystemDescriptor_Create_mADB63232DFEE95AA44F52496B7289C8469E118B9(L_10, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem_IProvider UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * ARKitImageTrackingSubsystem_CreateProvider_m5411943AF1A08EF9D30E950EA921F0B3855F8217 (ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitImageTrackingSubsystem_CreateProvider_m5411943AF1A08EF9D30E950EA921F0B3855F8217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * L_0 = (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 *)il2cpp_codegen_object_new(Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46_il2cpp_TypeInfo_var);
		Provider__ctor_m215AC16894DD532CA1F62AD7E25E46EDC3ACE984(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem__ctor_mD3734C89FE086D446A645E708BA7B80C80822E4B (ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960 * __this, const RuntimeMethod* method)
{
	{
		XRImageTrackingSubsystem__ctor_m32B2EFB936DCAB4D5B7DC15C0A993C1F1736A4EF(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_Provider::set_imageLibrary(UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_imageLibrary_mB0D7593A3A8063BBB8DB5DFC5108CFE53AF5CB77 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_imageLibrary_mB0D7593A3A8063BBB8DB5DFC5108CFE53AF5CB77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_stop_mD8D7055B7ACAEDBE7C7469E78BFF69253E5C06A7(/*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_5, /*hidden argument*/NULL);
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_7 = ___value0;
		NullCheck(L_7);
		Guid_t  L_8 = XRReferenceImageLibrary_get_guid_mAE3BC056A0B6817FD14E09D150B561CB468EFCDC(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ARKitImageTrackingSubsystem_UnityARKit_imageTracking_trySetReferenceLibrary_m585448B3C88CC61683B98B46792A5AD22AA18F3C(L_3, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (L_10)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0056;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_11 = ___value0;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral2F55B0C1BFA41292D9F913CC9A02B09149B75EE0, L_12, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_14 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, Provider_set_imageLibrary_mB0D7593A3A8063BBB8DB5DFC5108CFE53AF5CB77_RuntimeMethod_var);
	}

IL_0056:
	{
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6D98C8D7890DFF942CB1E4191D406AF6C4D35C13, L_16, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_18 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, Provider_set_imageLibrary_mB0D7593A3A8063BBB8DB5DFC5108CFE53AF5CB77_RuntimeMethod_var);
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage> UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRTrackedImage,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  Provider_GetChanges_m1B8C9B35C5FB039958F5161AE9392270D6B4D1C1 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultTrackedImage0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m1B8C9B35C5FB039958F5161AE9392270D6B4D1C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		void* L_0 = ARKitImageTrackingSubsystem_UnityARKit_imageTracking_acquireChanges_m6C484280B6C18DCFBC41D80316FAA35F6FDC27C8((void**)(&V_0), (int32_t*)(&V_3), (void**)(&V_1), (int32_t*)(&V_4), (void**)(&V_2), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		void* L_1 = V_0;
		int32_t L_2 = V_3;
		void* L_3 = V_1;
		int32_t L_4 = V_4;
		void* L_5 = V_2;
		int32_t L_6 = V_5;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_7 = ___defaultTrackedImage0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		void* L_11 = V_7;
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_releaseChanges_mE162E5898540557FC3C8C2E02A6D9FA24E7851B4((void*)(void*)L_11, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x32);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0032:
	{
		TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mA1774BB7BA75E516A22C180270376762C09B46F2 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, const RuntimeMethod* method)
{
	{
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_destroy_mAE726843825430D49145185B62FA03A0B3875F24(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_Provider::set_maxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_maxNumberOfMovingImages_m9F3F29D7A9DC9FC7B3166708C16226F1628FF9E7 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_setMaximumNumberOfTrackedImages_m22852DC2DEBBF2F8740E980F2CEFBBA12D1FCD69(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m215AC16894DD532CA1F62AD7E25E46EDC3ACE984 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m8878ACB17D3928A9027D475E105BD2F0E87CB2E5(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider UnityEngine.XR.ARKit.ARKitRaycastSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3 (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * L_0 = (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 *)il2cpp_codegen_object_new(Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3_il2cpp_TypeInfo_var);
		Provider__ctor_m8813B5E5B04EA6294D09901E7526D8A32D1D7416(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem_RegisterDescriptor_m3C04FEF3B986B37DA138B88077A49EF11177C5C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_RegisterDescriptor_m3C04FEF3B986B37DA138B88077A49EF11177C5C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 ));
		Cinfo_set_id_mFFFBB447D6D0DF4A27428D414FE23BCCB16D78D1((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), _stringLiteral21E7ADB5BD97C82496FD88B2FC35C83E90C194C2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m00E3D77F5C33C670222169A514C9804886D4FD72((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsViewportBasedRaycast_mBA63D727FCB8E5FE2EF1BD5CA2192B54768DEF0D((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsWorldBasedRaycast_mDDA30FB5ADF2800F44467B727F19668AAE05AFEF((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportedTrackableTypes_m91638341F04B3BC3688660AFFE66308C19B13C6B((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), ((int32_t)31), /*hidden argument*/NULL);
		Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  L_2 = V_0;
		XRRaycastSubsystemDescriptor_RegisterDescriptor_mFA32B9879B902AA46943CF8809094299062A41DB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem__ctor_mDB78CC8D89B5216B41DB4D37FC41EDD0C7F44CC4 (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09 * __this, const RuntimeMethod* method)
{
	{
		XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_raycast_acquireHitResults(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , int32_t, void**, int32_t*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem_NativeApi::UnityARKit_raycast_acquireHitResults(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,System.Void*U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_acquireHitResults_m47A2ADBB07C85B568F704891A057A9C830E0B351 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint0, int32_t ___filter1, void** ___hitResults2, int32_t* ___hitCount3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , int32_t, void**, int32_t*);

	// Marshaling of parameter U27___hitResults2U27 to native representation
	void* ____hitResults2_empty = NULL;
	void** ____hitResults2_marshaled = &____hitResults2_empty;

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_raycast_acquireHitResults)(___screenPoint0, ___filter1, ____hitResults2_marshaled, ___hitCount3);

	// Marshaling of parameter U27___hitResults2U27 back from native representation
	void* _____hitResults2_marshaled_unmarshaled_dereferenced = NULL;
	_____hitResults2_marshaled_unmarshaled_dereferenced = *____hitResults2_marshaled;
	*___hitResults2 = _____hitResults2_marshaled_unmarshaled_dereferenced;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_raycast_copyAndReleaseHitResults(void*, int32_t, void*, void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem_NativeApi::UnityARKit_raycast_copyAndReleaseHitResults(System.Void*,System.Int32,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_copyAndReleaseHitResults_m4ED586E6E2901CF58EA5A2A748C76A4CE9E78C8D (void* ___defaultHit0, int32_t ___stride1, void* ___hitResults2, void* ___dstBuffer3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*, void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_raycast_copyAndReleaseHitResults)(___defaultHit0, ___stride1, ___hitResults2, ___dstBuffer3);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARKit.ARKitRaycastSubsystem_Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  Provider_Raycast_m1B485E19859E6EB636FB7E7934E316820C5EEEB6 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___defaultRaycastHit0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_Raycast_m1B485E19859E6EB636FB7E7934E316820C5EEEB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	int32_t V_1 = 0;
	NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___screenPoint1;
		int32_t L_1 = ___trackableTypeMask2;
		NativeApi_UnityARKit_raycast_acquireHitResults_m47A2ADBB07C85B568F704891A057A9C830E0B351(L_0, L_1, (void**)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		int32_t L_3 = ___allocator3;
		NativeArray_1__ctor_m670C8FB2EA08BD79FA732EDD0DE2605ED72FC2D7((NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 *)(&V_2), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m670C8FB2EA08BD79FA732EDD0DE2605ED72FC2D7_RuntimeMethod_var);
		void* L_4 = UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mD80CE5C5275FD5AEE0186147CC2A21C03131FA3A((XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)(&___defaultRaycastHit0), /*hidden argument*/UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mD80CE5C5275FD5AEE0186147CC2A21C03131FA3A_RuntimeMethod_var);
		int32_t L_5 = UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mADB00C553552FC16B6924C45F0485EA1A574825A(/*hidden argument*/UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_mADB00C553552FC16B6924C45F0485EA1A574825A_RuntimeMethod_var);
		void* L_6 = V_0;
		NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  L_7 = V_2;
		void* L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m88647CCCBABD19CC080F76236852D605EED69254(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m88647CCCBABD19CC080F76236852D605EED69254_RuntimeMethod_var);
		NativeApi_UnityARKit_raycast_copyAndReleaseHitResults_m4ED586E6E2901CF58EA5A2A748C76A4CE9E78C8D((void*)(void*)L_4, L_5, (void*)(void*)L_6, (void*)(void*)L_8, /*hidden argument*/NULL);
		NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8813B5E5B04EA6294D09901E7526D8A32D1D7416 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_mC08FB7162685B068A1CA780F9AB010796EA6F83D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09 (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * L_0 = (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 *)il2cpp_codegen_object_new(Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986_il2cpp_TypeInfo_var);
		Provider__ctor_m59EBC1836CDC7E93309447E51535B4F742DBC5D7(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitReferencePointSubsystem_RegisterDescriptor_m5CBBC49AAEEE95C8881F77ED5961E7462C16A7C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointSubsystem_RegisterDescriptor_m5CBBC49AAEEE95C8881F77ED5961E7462C16A7C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD ));
		Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_2 = V_0;
		XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitReferencePointSubsystem__ctor_mB1C5C4D1098E1B9264AC45C28561396DA90C5558 (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017 * __this, const RuntimeMethod* method)
{
	{
		XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mC53B4F521F049248E3EDF9E561C59FD0A8A60507 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_refPoints_onStart_m1715BC863506C0C114B7FD9E6EF059235E61E25E(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mEFA5A2E7A7C0DEDDD1B49B3515E3CD5A6A030849 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_refPoints_onStop_m9840E08DB6A6A6AFD72F9361414FFCCB47CB6CB7(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mCE36E4EEC5597BDBD59256E7423538E0D26B0D89 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_refPoints_onDestroy_mFB7AB013CB3BCF1C0F94D61F7D978C94F7FDCEC4(/*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint> UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRReferencePoint,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  Provider_GetChanges_m6ACC32D7B8FF8B2AE977BEE37D81AB5D7141B7F1 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultReferencePoint0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m6ACC32D7B8FF8B2AE977BEE37D81AB5D7141B7F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		void* L_0 = Provider_UnityARKit_refPoints_acquireChanges_mA253751695B837A25CA8EC7870F9F9C124ED7759((void**)(&V_0), (int32_t*)(&V_3), (void**)(&V_1), (int32_t*)(&V_4), (void**)(&V_2), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		void* L_1 = V_0;
		int32_t L_2 = V_3;
		void* L_3 = V_1;
		int32_t L_4 = V_4;
		void* L_5 = V_2;
		int32_t L_6 = V_5;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_7 = ___defaultReferencePoint0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		void* L_11 = V_7;
		Provider_UnityARKit_refPoints_releaseChanges_m7F10E7582E85B42E1DB8D2FA63B77B7B66E4A3E3((void*)(void*)L_11, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x32);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0032:
	{
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_12 = V_8;
		return L_12;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddReferencePoint_mB0AEF9B927A7254A90DB16BE96AB5039A82C4883 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___pose0;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_1 = ___referencePoint1;
		bool L_2 = Provider_UnityARKit_refPoints_tryAdd_m90F3CD59462F734718E6A30D7C8F994E065AA2B7(L_0, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachReferencePoint_m78B6B7E991510FF5446A763583529A8502FDA3B4 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableToAffix0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_2 = ___referencePoint2;
		bool L_3 = Provider_UnityARKit_refPoints_tryAttach_mC90D01B49327E81DC435A27D5E3192519BDCDD6D(L_0, L_1, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveReferencePoint_m1B19285823F512912B1EA83230EA330D7C9C555B (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___referencePointId0;
		bool L_1 = Provider_UnityARKit_refPoints_tryRemove_m99402EBE00CC43D58C8A49CBBBA2B0F1047F0433(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onStart();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStart_m1715BC863506C0C114B7FD9E6EF059235E61E25E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onStart)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onStop();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStop_m9840E08DB6A6A6AFD72F9361414FFCCB47CB6CB7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onStop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onDestroy();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onDestroy_mFB7AB013CB3BCF1C0F94D61F7D978C94F7FDCEC4 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onDestroy)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_refPoints_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_acquireChanges(System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_refPoints_acquireChanges_mA253751695B837A25CA8EC7870F9F9C124ED7759 (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter U27___addedPtr0U27 to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter U27___updatedPtr2U27 to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter U27___removedPtr4U27 to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_acquireChanges)(____addedPtr0_marshaled, ___addedCount1, ____updatedPtr2_marshaled, ___updatedCount3, ____removedPtr4_marshaled, ___removedCount5, ___elementSize6);

	// Marshaling of parameter U27___addedPtr0U27 back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___updatedPtr2U27 back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___removedPtr4U27 back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_releaseChanges(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_releaseChanges_m7F10E7582E85B42E1DB8D2FA63B77B7B66E4A3E3 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_releaseChanges)(___changes0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_refPoints_tryAdd(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_tryAdd(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAdd_m90F3CD59462F734718E6A30D7C8F994E065AA2B7 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_tryAdd)(___pose0, ___referencePoint1);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_refPoints_tryAttach(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_tryAttach(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAttach_mC90D01B49327E81DC435A27D5E3192519BDCDD6D (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_tryAttach)(___trackableToAffix0, ___pose1, ___referencePoint2);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_refPoints_tryRemove(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::UnityARKit_refPoints_tryRemove(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryRemove_m99402EBE00CC43D58C8A49CBBBA2B0F1047F0433 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_tryRemove)(___referencePointId0);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m59EBC1836CDC7E93309447E51535B4F742DBC5D7 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m56C9E2DB691648499825B3D03C0FCD6B534FE641(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508(___status0, ___worldMapId1, ___context2, NULL);

}
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARKit.ARKitSessionSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * L_0 = (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B *)il2cpp_codegen_object_new(Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B_il2cpp_TypeInfo_var);
		Provider__ctor_m4FF36D4AB8AF605DF92F850550BFF7620C0EEBAC(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__cctor_m22FC887F2A8E048696D465D457F3F1ADA3BAE7F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem__cctor_m22FC887F2A8E048696D465D457F3F1ADA3BAE7F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * L_0 = (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF *)il2cpp_codegen_object_new(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF_il2cpp_TypeInfo_var);
		OnAsyncConversionCompleteDelegate__ctor_m570D55848E9206E726B14940CACD652E67157CF3(L_0, NULL, (intptr_t)((intptr_t)ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_RuntimeMethod_var), /*hidden argument*/NULL);
		((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var))->set_s_OnAsyncWorldMapCompleted_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508 (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * V_1 = NULL;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		intptr_t L_0 = ___context2;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A *)CastclassSealed((RuntimeObject*)L_2, Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_il2cpp_TypeInfo_var));
		int32_t L_3 = ___status0;
		bool L_4 = ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * L_5 = V_1;
		int32_t L_6 = ___status0;
		il2cpp_codegen_initobj((&V_2), sizeof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE ));
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_7 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var);
		goto IL_003e;
	}

IL_002e:
	{
		int32_t L_8 = ___worldMapId1;
		ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&V_3), L_8, /*hidden argument*/NULL);
		Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * L_9 = V_1;
		int32_t L_10 = ___status0;
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_11 = V_3;
		NullCheck(L_9);
		Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var);
	}

IL_003e:
	{
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_RegisterDescriptor_mCCA118F936A334DE404EBCA2795CB53E4EC22A67 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_RegisterDescriptor_mCCA118F936A334DE404EBCA2795CB53E4EC22A67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A ));
		Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_2 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__ctor_mB2A7973492EA467AF55FD4D06330C69048B74C2B (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getAvailability();
#endif
// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_getAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getAvailability_m99887277747C2AAD5A630BF058000B82B97F844D (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getAvailability)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_update();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_update_m500719C8DA68C6CBCD7F0E40825D0BB2318AF2EB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_update)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_construct();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mC863967FCF8BA090EE1CCF7E4B8A4EAF81675C03 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_construct)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_destroy();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_destroy_m31AEC4F335BDB95463A762D06197969894402AA4 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_destroy)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_resume();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_resume_m6870764F4652F7134887194DC2AC1895AE989A47 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_resume)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_pause();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_pause_mA6AB3E2F050C1CE2767C623421D325B16140056D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_pause)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_reset();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_reset_mC7A38D34BC9EE9C284D66AFDAC08400E452C4205 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_reset)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getTrackingState();
#endif
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_getTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getTrackingState_mC556510D36A2A09FD80AB564EF433A9740EEEF60 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getTrackingState)();

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___worldMapId1, ___context2);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m570D55848E9206E726B14940CACD652E67157CF3 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::Invoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_Invoke_mF372DBFF4F533DE6A5150BDCF933B629C8A42B2E (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
					else
						VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::BeginInvoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAsyncConversionCompleteDelegate_BeginInvoke_m8E7181CF93E60C8234DA520737051AFFE5716061 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnAsyncConversionCompleteDelegate_BeginInvoke_m8E7181CF93E60C8234DA520737051AFFE5716061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___worldMapId1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_EndInvoke_m621CAD30EADED030F40CEE39E76F4C9DC70D2553 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4FF36D4AB8AF605DF92F850550BFF7620C0EEBAC (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m7CBD7C46ACF50FF49255251388ED6E6D1F3233DB(__this, /*hidden argument*/NULL);
		NativeApi_UnityARKit_session_construct_mC863967FCF8BA090EE1CCF7E4B8A4EAF81675C03(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Resume_m96DF0C5DB7AA19B5A3DA852AD104033B20F51A6A (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_session_resume_m6870764F4652F7134887194DC2AC1895AE989A47(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Pause_m7339AF4434E08DC2ED8D13232805607934AB613E (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_session_pause_mA6AB3E2F050C1CE2767C623421D325B16140056D(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m66B4F491997A27BC611965AD1DF809099C9ECF5C (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_session_update_m500719C8DA68C6CBCD7F0E40825D0BB2318AF2EB(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m3E64F762C87BFFF75A7339D9256EEC9C48CAC9A9 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_session_destroy_m31AEC4F335BDB95463A762D06197969894402AA4(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Reset_m8F07962F4A396C4032E8E67D8FEA86C1733C16D9 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		NativeApi_UnityARKit_session_reset_mC7A38D34BC9EE9C284D66AFDAC08400E452C4205(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_m0B00560EA5E95FD33FABEFF8AB38CAE5578661F8 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m88788C2E0187B27404A2EBEA75BDF64E6121918B (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Provider_GetAvailabilityAsync_m3A9AC0788CC5F34ECD2ADB5D406C8087FBF60991 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetAvailabilityAsync_m3A9AC0788CC5F34ECD2ADB5D406C8087FBF60991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = NativeApi_UnityARKit_session_getAvailability_m99887277747C2AAD5A630BF058000B82B97F844D(/*hidden argument*/NULL);
		V_0 = 0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		V_0 = 6;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_2 = Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D(L_1, /*hidden argument*/Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteral01A8E649C2EE0F2F0E7111E059615E0D2F569454, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_RuntimeMethod_var);
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m5A3E48A828426BF837B4714F24C0A6C3197CDDDF (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = NativeApi_UnityARKit_session_getTrackingState_mC556510D36A2A09FD80AB564EF433A9740EEEF60(/*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_IDepthApi UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::GetInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * L_0 = (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 *)il2cpp_codegen_object_new(Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70_il2cpp_TypeInfo_var);
		Provider__ctor_m87E63C927C7DD687F02E114B2EF261E9ADB60751(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem_RegisterDescriptor_m972EAC5A226DB4FB874CD7DFB0B835DDB08912C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_RegisterDescriptor_m972EAC5A226DB4FB874CD7DFB0B835DDB08912C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 ));
		(&V_0)->set_id_0(_stringLiteralAAC6E02E34BDC35D11B42F798B00A990953D7586);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		(&V_0)->set_implementationType_1(L_1);
		Cinfo_set_supportsFeaturePoints_m05831EFF5A03CCC424A2DB1E8C8460E54385E798((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsConfidence_m2FCA1C93FDE8DC5DC4A553F9EF32E399844C0F79((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsUniqueIds_mE8AA1B05D64ABF1690D4B30E5C245B9A923A9116((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  L_2 = V_0;
		XRDepthSubsystemDescriptor_RegisterDescriptor_m53237B806014993075B559C44D9A743DB447154F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem__ctor_mB3A0AA699984B24DDE1B60AA93B5DB332BF2AFC3 (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501 * __this, const RuntimeMethod* method)
{
	{
		XRDepthSubsystem__ctor_m1374F0D0EDEA230229CC5ADFF30647B3D2D100D3(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_destroy();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_destroy_m442CB44634225EA99ABC9FE541C9126D5AC66A3B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_destroy)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_start();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_start_m3EE773D0DDB95DC993772CE93D8BC29BE90DF7B3 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_start)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_stop();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_stop_m2152DE5E9156ED8602B853E9D822AC0F00C21E65 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_stop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_depth_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_acquireChanges(System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquireChanges_mEED8F1E4A474DD6D117353FCC49DD925FE27CA1F (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter U27___addedPtr0U27 to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter U27___updatedPtr2U27 to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter U27___removedPtr4U27 to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_depth_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter U27___addedPtr0U27 back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___updatedPtr2U27 back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___removedPtr4U27 back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_releaseChanges(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releaseChanges_m8D8D9E87B5FE56716FC1A35FFBDF684B025B5FBA (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_releaseChanges)(___changes0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_depth_acquirePointCloud(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, void**, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_acquirePointCloud(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*U26,System.Void*U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquirePointCloud_m68FF9ADD5F7499B55531D5031301A8EF0ADEA365 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___positionsPtr1, void** ___identifiersPtr2, int32_t* ___numPoints3, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, void**, int32_t*);

	// Marshaling of parameter U27___positionsPtr1U27 to native representation
	void* ____positionsPtr1_empty = NULL;
	void** ____positionsPtr1_marshaled = &____positionsPtr1_empty;

	// Marshaling of parameter U27___identifiersPtr2U27 to native representation
	void* ____identifiersPtr2_empty = NULL;
	void** ____identifiersPtr2_marshaled = &____identifiersPtr2_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_depth_acquirePointCloud)(___trackableId0, ____positionsPtr1_marshaled, ____identifiersPtr2_marshaled, ___numPoints3);

	// Marshaling of parameter U27___positionsPtr1U27 back from native representation
	void* _____positionsPtr1_marshaled_unmarshaled_dereferenced = NULL;
	_____positionsPtr1_marshaled_unmarshaled_dereferenced = *____positionsPtr1_marshaled;
	*___positionsPtr1 = _____positionsPtr1_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___identifiersPtr2U27 back from native representation
	void* _____identifiersPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____identifiersPtr2_marshaled_unmarshaled_dereferenced = *____identifiersPtr2_marshaled;
	*___identifiersPtr2 = _____identifiersPtr2_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_releasePointCloud(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::UnityARKit_depth_releasePointCloud(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releasePointCloud_mD8EB249E84A48351D532E93FA52EA5AFA542C95D (void* ___pointCloud0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_releasePointCloud)(___pointCloud0);

}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRPointCloud,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  Provider_GetChanges_m3D875DA71FE758D7F6D0BBD275DDA6D771475AEE (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultPointCloud0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m3D875DA71FE758D7F6D0BBD275DDA6D771475AEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		void* L_0 = Provider_UnityARKit_depth_acquireChanges_mEED8F1E4A474DD6D117353FCC49DD925FE27CA1F((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_7 = ___defaultPointCloud0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		void* L_11 = V_7;
		Provider_UnityARKit_depth_releaseChanges_m8D8D9E87B5FE56716FC1A35FFBDF684B025B5FBA((void*)(void*)L_11, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x32);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0032:
	{
		TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m223225DD92682BCB7898D9636C8792E56164A92B (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_depth_destroy_m442CB44634225EA99ABC9FE541C9126D5AC66A3B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m47B651FA51F6CAF08FDFDCEC0FA5ECF9F7A53C44 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_depth_start_m3EE773D0DDB95DC993772CE93D8BC29BE90DF7B3(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mEAE76FBC2A61AA97B5F6B70DA6910175B59ECA0E (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_depth_stop_m2152DE5E9156ED8602B853E9D822AC0F00C21E65(/*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRPointCloudData UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::GetPointCloudData(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  Provider_GetPointCloudData_mCCC7D65910FD1989B92913813B111A78CBFA5200 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetPointCloudData_mCCC7D65910FD1989B92913813B111A78CBFA5200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_4;
	memset((&V_4), 0, sizeof(V_4));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  V_7;
	memset((&V_7), 0, sizeof(V_7));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_8;
	memset((&V_8), 0, sizeof(V_8));
	XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		void* L_1 = Provider_UnityARKit_depth_acquirePointCloud_m68FF9ADD5F7499B55531D5031301A8EF0ADEA365(L_0, (void**)(&V_0), (void**)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_3 = (void*)L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		int32_t L_2 = V_2;
		int32_t L_3 = ___allocator1;
		NativeArray_1__ctor_m73313D354D78EEAD4D2A4BE94C71DA1E27CC23C8((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)(&V_4), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m73313D354D78EEAD4D2A4BE94C71DA1E27CC23C8_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_7), sizeof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 ));
		void* L_4 = V_0;
		int32_t L_5 = V_2;
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1((void*)(void*)L_4, L_5, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1_RuntimeMethod_var);
		(&V_7)->set_positionsIn_0(L_6);
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_7 = V_4;
		(&V_7)->set_positionsOut_1(L_7);
		TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  L_8 = V_7;
		int32_t L_9 = V_2;
		il2cpp_codegen_initobj((&V_8), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_10 = V_8;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_11 = IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB(L_8, L_9, ((int32_t)32), L_10, /*hidden argument*/IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB_RuntimeMethod_var);
		V_5 = L_11;
		int32_t L_12 = V_2;
		int32_t L_13 = ___allocator1;
		NativeArray_1__ctor_m210E53B1CB8C3CA56CD640E245C9EB56CF33E38E((NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C *)(&V_6), L_12, L_13, 1, /*hidden argument*/NativeArray_1__ctor_m210E53B1CB8C3CA56CD640E245C9EB56CF33E38E_RuntimeMethod_var);
		void* L_14 = V_1;
		int32_t L_15 = V_2;
		NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  L_16 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA((void*)(void*)L_14, L_15, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA_RuntimeMethod_var);
		NativeArray_1_CopyFrom_mBBBDB4FA3D09A902B47C60B410595BACD14CADE1((NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C *)(&V_6), L_16, /*hidden argument*/NativeArray_1_CopyFrom_mBBBDB4FA3D09A902B47C60B410595BACD14CADE1_RuntimeMethod_var);
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_5), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_9), sizeof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA ));
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_17 = V_4;
		XRPointCloudData_set_positions_m78BB0E1E2A5860DAC6F60D6C9A6A37544FF9880E((XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA *)(&V_9), L_17, /*hidden argument*/NULL);
		NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  L_18 = V_6;
		XRPointCloudData_set_identifiers_m550B2B8C6EF821D5BBD47C066FF6C961EF0CA562((XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA *)(&V_9), L_18, /*hidden argument*/NULL);
		XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  L_19 = V_9;
		V_9 = L_19;
		IL2CPP_LEAVE(0x94, FINALLY_008d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		void* L_20 = V_3;
		Provider_UnityARKit_depth_releasePointCloud_mD8EB249E84A48351D532E93FA52EA5AFA542C95D((void*)(void*)L_20, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x94);
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0094:
	{
		XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  L_21 = V_9;
		return L_21;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m87E63C927C7DD687F02E114B2EF261E9ADB60751 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		IDepthApi__ctor_m6DB7AD960B45DEAB48C7EC9034864A61D180D90F(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_pinvoke(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_pinvoke_back(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke& marshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_pinvoke_cleanup(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_com(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_com_back(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com& marshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_com_cleanup(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformPositionsJob_Execute_m599A8FB62D88B510B5BDC79C59E095B336DE2CFD (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * L_0 = __this->get_address_of_positionsOut_1();
		int32_t L_1 = ___index0;
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * L_2 = __this->get_address_of_positionsIn_0();
		int32_t L_3 = ___index0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , ((NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 *)L_2)->___m_Buffer_0, L_3);
		float L_5 = L_4.get_x_0();
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * L_6 = __this->get_address_of_positionsIn_0();
		int32_t L_7 = ___index0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , ((NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 *)L_6)->___m_Buffer_0, L_7);
		float L_9 = L_8.get_y_1();
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * L_10 = __this->get_address_of_positionsIn_0();
		int32_t L_11 = ___index0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , ((NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 *)L_10)->___m_Buffer_0, L_11);
		float L_13 = L_12.get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_5, L_9, ((-L_13)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , ((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)L_0)->___m_Buffer_0, L_1, L_14);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformPositionsJob_Execute_m599A8FB62D88B510B5BDC79C59E095B336DE2CFD_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 * _thisAdjusted = reinterpret_cast<TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *>(__this + 1);
	TransformPositionsJob_Execute_m599A8FB62D88B510B5BDC79C59E095B336DE2CFD(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem_IProvider UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t383E00C590DA7F3FC3B87452EEEF8DC03A283F4F * ARKitXRObjectTrackingSubsystem_CreateProvider_m96251D43EA6E645DCABC51FC850A6E3ACB07DC17 (ARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRObjectTrackingSubsystem_CreateProvider_m96251D43EA6E645DCABC51FC850A6E3ACB07DC17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 * L_0 = (Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 *)il2cpp_codegen_object_new(Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194_il2cpp_TypeInfo_var);
		Provider__ctor_m3DE9C72A4052053EC572E128E559431E3E26B2CF(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRObjectTrackingSubsystem_RegisterDescriptor_m5B34B84FFB7A7CE55B60B5BAC366CEA7070B1625 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRObjectTrackingSubsystem_RegisterDescriptor_m5B34B84FFB7A7CE55B60B5BAC366CEA7070B1625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = Device_get_systemVersion_m2FAF59069686B57244F90EFBAA9E5042301C716E(/*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = OSVersion_Parse_m929598188AC75E645CC97C238D345C43CF0C5C7A(L_0, /*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_2;
		memset((&L_2), 0, sizeof(L_2));
		OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57((&L_2), ((int32_t)12), 0, 0, /*hidden argument*/NULL);
		bool L_3 = OSVersion_op_LessThan_m39B925981F048AA224715F46DC3BA657B66B09EC(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597 ));
		Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597  L_4 = V_1;
		V_0 = L_4;
		Capabilities_t82792D0E12F92CCCC6E8B5819CCB492CF514A597  L_5 = V_0;
		XRObjectTrackingSubsystem_Register_TisARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F_m3F2BA9FC69F63C533C496DF25976430BA68F2D83(_stringLiteral88B278F8C073484F344DEB91FB390AF9B6EDF210, L_5, /*hidden argument*/XRObjectTrackingSubsystem_Register_TisARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F_m3F2BA9FC69F63C533C496DF25976430BA68F2D83_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRObjectTrackingSubsystem__ctor_m8B1E742041FB283F72AD1615D3BDE3C6685ED101 (ARKitXRObjectTrackingSubsystem_t5FBCF679942EA23452793E6D73AA0C335BAB126F * __this, const RuntimeMethod* method)
{
	{
		XRObjectTrackingSubsystem__ctor_m76F90C34C8D522DB4C6F2943BF5B74076DFC464A(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_Initialize();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::UnityARKit_ObjectTracking_Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_Initialize_m5F43213D1DF7B5D49490F9A2C4DAE71FC05EC2FE (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_Initialize)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_Shutdown();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::UnityARKit_ObjectTracking_Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_Shutdown_m8E71AFD99A675158E721B8C364317A5E5532C822 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_Shutdown)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_Stop();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::UnityARKit_ObjectTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_Stop_m662EA8DB1E9F06942C3A341AB9D8B4A2E22A5185 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_Stop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_ObjectTracking_TrySetLibrary(Il2CppChar*, int32_t, Guid_t );
#endif
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::UnityARKit_ObjectTracking_TrySetLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_UnityARKit_ObjectTracking_TrySetLibrary_mF7FE59E19D1BBB5E97350E5D214E7D602D3EF5A5 (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t, Guid_t );

	// Marshaling of parameter U27___name0U27 to native representation
	Il2CppChar* ____name0_marshaled = NULL;
	if (___name0 != NULL)
	{
		____name0_marshaled = ___name0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_TrySetLibrary)(____name0_marshaled, ___nameLength1, ___guid2);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_ObjectTracking_AcquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::UnityARKit_ObjectTracking_AcquireChanges(System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_ObjectTracking_AcquireChanges_m907CBF7D3E8F7024232247E67427F36AF5AA5FC9 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter U27___addedPtr0U27 to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter U27___updatedPtr2U27 to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter U27___removedPtr4U27 to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_AcquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter U27___addedPtr0U27 back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___updatedPtr2U27 back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___removedPtr4U27 back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_ReleaseChanges(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::UnityARKit_ObjectTracking_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_ObjectTracking_ReleaseChanges_mE84A1B723AC388B973163129AA169C161DF8040A (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_ReleaseChanges)(___changes0);

}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::set_library(UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_library_mB44EC11C3838D90058CC033AE1808F2B01993351 (Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 * __this, XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_library_mB44EC11C3838D90058CC033AE1808F2B01993351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Provider_UnityARKit_ObjectTracking_Stop_m662EA8DB1E9F06942C3A341AB9D8B4A2E22A5185(/*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_5, /*hidden argument*/NULL);
		XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * L_7 = ___value0;
		NullCheck(L_7);
		Guid_t  L_8 = XRReferenceObjectLibrary_get_guid_mC10138A0A17DF18E104F14079063BA1C12A3DF87(L_7, /*hidden argument*/NULL);
		int32_t L_9 = Provider_UnityARKit_ObjectTracking_TrySetLibrary_mF7FE59E19D1BBB5E97350E5D214E7D602D3EF5A5(L_3, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (L_10)
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0055;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * L_11 = ___value0;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7A8B65F874DC7CED255B42A3E1902A95424561FF, L_12, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_14 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, Provider_set_library_mB44EC11C3838D90058CC033AE1808F2B01993351_RuntimeMethod_var);
	}

IL_0055:
	{
		XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralE6D22A5FC2DF7DE0E66AA5E8A59E79BFA1B877F1, L_16, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_18 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, Provider_set_library_mB44EC11C3838D90058CC033AE1808F2B01993351_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject> UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRTrackedObject,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874  Provider_GetChanges_m75E7B2593157502CFDB28052BBF58338E6CD6B9B (Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 * __this, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultTrackedObject0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m75E7B2593157502CFDB28052BBF58338E6CD6B9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		void* L_0 = Provider_UnityARKit_ObjectTracking_AcquireChanges_m907CBF7D3E8F7024232247E67427F36AF5AA5FC9((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_7 = ___defaultTrackedObject0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		void* L_11 = V_7;
		Provider_UnityARKit_ObjectTracking_ReleaseChanges_mE84A1B723AC388B973163129AA169C161DF8040A((void*)(void*)L_11, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x32);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0032:
	{
		TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m866F1149FDE54930034054AE36180264A12E69BC (Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_ObjectTracking_Shutdown_m8E71AFD99A675158E721B8C364317A5E5532C822(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m3DE9C72A4052053EC572E128E559431E3E26B2CF (Provider_t618F44FD2A74346BA2B76FF1F8CCCF3FAEF88194 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m699F75E3895ABB6AFEC48297ECB6696C4D68DAF7(__this, /*hidden argument*/NULL);
		Provider_UnityARKit_ObjectTracking_Initialize_m5F43213D1DF7B5D49490F9A2C4DAE71FC05EC2FE(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212 (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * L_0 = (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A *)il2cpp_codegen_object_new(Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A_il2cpp_TypeInfo_var);
		Provider__ctor_m216F6FEB7AB12FABB6D18E68C41988A1CE553D52(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem_RegisterDescriptor_m001CE02AF166B4240843E41B740CE3B36CF56B41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_RegisterDescriptor_m001CE02AF166B4240843E41B740CE3B36CF56B41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 ));
		Cinfo_set_id_mB3D68A1AEE80E5941EBE7DEFFFB34AC44AB92A8E((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_mDACCFA76DE27D24DAD241496ABCE1606EA51E97C((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_m03E0099B1BAC214B26A2F4D476DA2A7D5AE01EF9((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_m3F6EDFE99022E0D214BEAD727F1AB7A77370DBF4((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m26BE6DBE028AC98927B6E9349599DAF9E4213D18((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_m8B0526794B4738A739CD44345ACBA74639B0F1F5((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  L_2 = V_0;
		XRPlaneSubsystemDescriptor_Create_m3C5EB6950F78DFA4DEF405243ED67F0CBE2110CA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem__ctor_m0D68D2EC3958ACBD3BA70622EE9A7C2AFD059C7B (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m04B16F29FD10202F1A184E68FABE48745C5D2057 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_planes_shutdown_m54960A63D70869C221AB82FAEDC984A0C3279BC6(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mA92B437C0C6E1A7677E1E2CBC7071D281CCA6435 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_planes_start_m6732C584BCDC6CB0EA4D1C5AC94E5AEC4E562269(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mE1707150FF67B97D449EDFEA9CEA263355F8FE88 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		Provider_UnityARKit_planes_stop_mD20CEA039A2F7B2FE79929CBAECDC0DC47DEEAD3(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_m2688A84B253737695A37C60DD45FD7441F6D5864 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, int32_t ___allocator1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetBoundary_m2688A84B253737695A37C60DD45FD7441F6D5864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	void* V_1 = NULL;
	void* V_2 = NULL;
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_5;
	memset((&V_5), 0, sizeof(V_5));
	FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		void* L_1 = Provider_UnityARKit_planes_acquireBoundary_mDC818B78E72A725BB6CD81F7C8379A72FB3FEDE4(L_0, (void**)(&V_1), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		int32_t L_2 = V_0;
		int32_t L_3 = ___allocator1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_4 = ___boundary2;
		XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5DE6A0F5DFE6A17E8E3036DA1B69DF0FD3AAF644(L_2, L_3, (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_4, /*hidden argument*/XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5DE6A0F5DFE6A17E8E3036DA1B69DF0FD3AAF644_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_4), sizeof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A ));
		void* L_5 = V_1;
		int32_t L_6 = V_0;
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F((void*)(void*)L_5, L_6, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F_RuntimeMethod_var);
		(&V_4)->set_positionsIn_0(L_7);
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_8 = ___boundary2;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_9 = (*(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_8);
		(&V_4)->set_positionsOut_1(L_9);
		TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  L_10 = V_4;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_12 = V_5;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_13 = IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m256C940F2F70AEED1DF6591DE26BE8F69FEC1CCD(L_10, L_11, 1, L_12, /*hidden argument*/IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m256C940F2F70AEED1DF6591DE26BE8F69FEC1CCD_RuntimeMethod_var);
		V_3 = L_13;
		il2cpp_codegen_initobj((&V_6), sizeof(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 ));
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_14 = ___boundary2;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_15 = (*(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_14);
		(&V_6)->set_positions_0(L_15);
		FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  L_16 = V_6;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_17 = V_3;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_18 = IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D(L_16, L_17, /*hidden argument*/IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_RuntimeMethod_var);
		V_5 = L_18;
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_5), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x7A, FINALLY_0073);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		void* L_19 = V_2;
		Provider_UnityARKit_planes_releaseBoundary_mDF8D388C215579B65EF0120CD557D476209D2004((void*)(void*)L_19, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x7A);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  Provider_GetChanges_m1180227923E6905E3CA3F9CEF8BA80C58E7B760E (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultPlane0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m1180227923E6905E3CA3F9CEF8BA80C58E7B760E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		void* L_0 = Provider_UnityARKit_planes_acquireChanges_m30A108B0FBCF6EAE989B0462F09AF692D75B60D4((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_7 = ___defaultPlane0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		void* L_11 = V_7;
		Provider_UnityARKit_planes_releaseChanges_mA13358A540B33FBF2B5B00726820AB76D41A6CD1((void*)(void*)L_11, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x32);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0032:
	{
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::set_planeDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_planeDetectionMode_m910E1A011DA9708EBA6051521C221B6E940E6207 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		Provider_UnityARKit_planes_setPlaneDetectionMode_m4B0EB74C051796FA002FF4DC1C31826087F01D91(L_0, /*hidden argument*/NULL);
		return;
	}
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_shutdown();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_shutdown_m54960A63D70869C221AB82FAEDC984A0C3279BC6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_shutdown)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_start();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_start_m6732C584BCDC6CB0EA4D1C5AC94E5AEC4E562269 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_start)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_stop();
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_stop_mD20CEA039A2F7B2FE79929CBAECDC0DC47DEEAD3 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_stop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_planes_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_acquireChanges(System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Void*U26,System.Int32U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireChanges_m30A108B0FBCF6EAE989B0462F09AF692D75B60D4 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter U27___addedPtr0U27 to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter U27___updatedPtr2U27 to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter U27___removedPtr4U27 to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_planes_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter U27___addedPtr0U27 back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___updatedPtr2U27 back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter U27___removedPtr4U27 back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_releaseChanges(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseChanges_mA13358A540B33FBF2B5B00726820AB76D41A6CD1 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_releaseChanges)(___changes0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_setPlaneDetectionMode(int32_t);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_setPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_setPlaneDetectionMode_m4B0EB74C051796FA002FF4DC1C31826087F01D91 (int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_setPlaneDetectionMode)(___mode0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_planes_acquireBoundary(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, int32_t*);
#endif
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_acquireBoundary(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*U26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireBoundary_mDC818B78E72A725BB6CD81F7C8379A72FB3FEDE4 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___verticiesPtr1, int32_t* ___numPoints2, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, int32_t*);

	// Marshaling of parameter U27___verticiesPtr1U27 to native representation
	void* ____verticiesPtr1_empty = NULL;
	void** ____verticiesPtr1_marshaled = &____verticiesPtr1_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_planes_acquireBoundary)(___trackableId0, ____verticiesPtr1_marshaled, ___numPoints2);

	// Marshaling of parameter U27___verticiesPtr1U27 back from native representation
	void* _____verticiesPtr1_marshaled_unmarshaled_dereferenced = NULL;
	_____verticiesPtr1_marshaled_unmarshaled_dereferenced = *____verticiesPtr1_marshaled;
	*___verticiesPtr1 = _____verticiesPtr1_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_releaseBoundary(void*);
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::UnityARKit_planes_releaseBoundary(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseBoundary_mDF8D388C215579B65EF0120CD557D476209D2004 (void* ___boundary0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_releaseBoundary)(___boundary0);

}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m216F6FEB7AB12FABB6D18E68C41988A1CE553D52 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m4A9509E28D15EA223DA0EB272B727A5740A9CBBE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_pinvoke(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke& marshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_pinvoke_back(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke& marshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_pinvoke_cleanup(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_com(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com& marshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_com_back(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com& marshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_com_cleanup(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_FlipBoundaryWindingJob::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlipBoundaryWindingJob_Execute_m1164EDF77F444E6520B7B88D0FC969F61F916DFA (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_0 = __this->get_address_of_positions_0();
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_0)->___m_Length_1);
		V_0 = ((int32_t)((int32_t)L_1/(int32_t)2));
		V_1 = 0;
		goto IL_0058;
	}

IL_0012:
	{
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_2 = __this->get_address_of_positions_0();
		int32_t L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_2)->___m_Length_1);
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (int32_t)L_4));
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_5 = __this->get_address_of_positions_0();
		int32_t L_6 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_5)->___m_Buffer_0, L_6);
		V_3 = L_7;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_8 = __this->get_address_of_positions_0();
		int32_t L_9 = V_1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_10 = __this->get_address_of_positions_0();
		int32_t L_11 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_10)->___m_Buffer_0, L_11);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_8)->___m_Buffer_0, L_9, L_12);
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_13 = __this->get_address_of_positions_0();
		int32_t L_14 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_13)->___m_Buffer_0, L_14, L_15);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void FlipBoundaryWindingJob_Execute_m1164EDF77F444E6520B7B88D0FC969F61F916DFA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 * _thisAdjusted = reinterpret_cast<FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 *>(__this + 1);
	FlipBoundaryWindingJob_Execute_m1164EDF77F444E6520B7B88D0FC969F61F916DFA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_pinvoke(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_pinvoke_back(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke& marshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_pinvoke_cleanup(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_com(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_com_back(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com& marshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_com_cleanup(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformBoundaryPositionsJob_Execute_mC801350B6F6FA5E3FD72A6D31186C32DE072AC49 (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_0 = __this->get_address_of_positionsOut_1();
		int32_t L_1 = ___index0;
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * L_2 = __this->get_address_of_positionsIn_0();
		int32_t L_3 = ___index0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , ((NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 *)L_2)->___m_Buffer_0, L_3);
		float L_5 = L_4.get_x_1();
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * L_6 = __this->get_address_of_positionsIn_0();
		int32_t L_7 = ___index0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , ((NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 *)L_6)->___m_Buffer_0, L_7);
		float L_9 = L_8.get_z_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_10), L_5, ((-L_9)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_0)->___m_Buffer_0, L_1, L_10);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformBoundaryPositionsJob_Execute_mC801350B6F6FA5E3FD72A6D31186C32DE072AC49_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A * _thisAdjusted = reinterpret_cast<TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A *>(__this + 1);
	TransformBoundaryPositionsJob_Execute_mC801350B6F6FA5E3FD72A6D31186C32DE072AC49(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23(L_0, /*hidden argument*/NULL);
		ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, 0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, ((*(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)UnBox(L_1, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894_AdjustorThunk (RuntimeObject * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC(_thisAdjusted, ___nativeHandle0, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_disposeWorldMap(int32_t);
#endif
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMap)(___worldMapId0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Construct();
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_mB1A76F99A1F487057DB73DE1F2894F0ECABE7A9D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Construct)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Destruct();
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Destruct_mD60199075F71F9CF628D7088DA446DAB90D3C78A (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Destruct)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Start();
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mB31EA6EC8C10E5D2A9A930132567A50218154B3F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Start)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Stop();
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_m3596D2DEC9169DCA2DE920322A9BCDCA78ADEFEA (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Stop)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(int32_t);
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled_mFF94AD80C6CD73CAF10CD8D5461C6D5C49174B24 (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled)(static_cast<int32_t>(___enabled0));

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *);
#endif
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbeU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe_m8B00E37BCB84ADBB92DC2D032CB7BA51FADF116D (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size2, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * ___environmentProbe3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe)(___pose0, ___scale1, ___size2, ___environmentProbe3);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
#endif
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe_mB570ADDE5DFD7D17F597D86A705AE02EEEDAF181 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe)(___id0);

	return static_cast<bool>(returnValue);
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_AcquireChanges(int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*);
#endif
// System.IntPtr UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_AcquireChanges(System.Int32U26,System.IntPtrU26,System.Int32U26,System.IntPtrU26,System.Int32U26,System.IntPtrU26,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mDE946366F47873F8E48456391F34309FF7DA3555 (int32_t* ___numAddedEnvironmentProbes0, intptr_t* ___addedEnvironmentProbes1, int32_t* ___numUpdatedEnvironmentProbes2, intptr_t* ___updatedEnvironmentProbes3, int32_t* ___numRemovedEnvironmentProbeIds4, intptr_t* ___removedEnvironmentProbeIds5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_AcquireChanges)(___numAddedEnvironmentProbes0, ___addedEnvironmentProbes1, ___numUpdatedEnvironmentProbes2, ___updatedEnvironmentProbes3, ___numRemovedEnvironmentProbeIds4, ___removedEnvironmentProbeIds5, ___stride6);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_ReleaseChanges(intptr_t);
#endif
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_ReleaseChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m91EDC854866ADB48A88A94473BE0BFD3744C8B0E (intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_ReleaseChanges)(___context0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_major()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CmajorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_major(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_major_m2BBD576ABA767AF7A56BC7935B00F544276C669B (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmajorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_major_m2BBD576ABA767AF7A56BC7935B00F544276C669B_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	OSVersion_set_major_m2BBD576ABA767AF7A56BC7935B00F544276C669B(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_minor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CminorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_minor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_minor_m98BB0F36791CA8BBCB7CC7B3371F0EAFDEED9C9C (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CminorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_minor_m98BB0F36791CA8BBCB7CC7B3371F0EAFDEED9C9C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	OSVersion_set_minor_m98BB0F36791CA8BBCB7CC7B3371F0EAFDEED9C9C(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CpointU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_point(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_point_m88D63B4665E0DA4CDEC0F1D1EA0B52B4F2C41094 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpointU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_point_m88D63B4665E0DA4CDEC0F1D1EA0B52B4F2C41094_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	OSVersion_set_point_m88D63B4665E0DA4CDEC0F1D1EA0B52B4F2C41094(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_1, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = ___minor1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_3, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_RuntimeMethod_var);
	}

IL_0028:
	{
		int32_t L_4 = ___point2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteral71A7CA855F38BC559D0FCE6727C7E2D8ADA99FF8, _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_6 = ___major0;
		OSVersion_set_major_m2BBD576ABA767AF7A56BC7935B00F544276C669B((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___minor1;
		OSVersion_set_minor_m98BB0F36791CA8BBCB7CC7B3371F0EAFDEED9C9C((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___point2;
		OSVersion_set_point_m88D63B4665E0DA4CDEC0F1D1EA0B52B4F2C41094((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57_AdjustorThunk (RuntimeObject * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	OSVersion__ctor_m07EEBA83ABC7497C165CE1EE65D8C4712A771D57(_thisAdjusted, ___major0, ___minor1, ___point2, method);
}
// UnityEngine.XR.ARKit.OSVersion UnityEngine.XR.ARKit.OSVersion::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  OSVersion_Parse_m929598188AC75E645CC97C238D345C43CF0C5C7A (String_t* ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___version0;
		int32_t L_1 = OSVersion_IndexOfFirstDigit_mC9C3927F500AACD5DA119CE2F295F244DA8F7500(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		il2cpp_codegen_initobj((&V_1), sizeof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA ));
		String_t* L_2 = ___version0;
		int32_t L_3 = OSVersion_ParseNextComponent_mBA8396A52E8546F92829B6AF99A3B4C75D6DBDD0(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_major_m2BBD576ABA767AF7A56BC7935B00F544276C669B((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&V_1), L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___version0;
		int32_t L_5 = OSVersion_ParseNextComponent_mBA8396A52E8546F92829B6AF99A3B4C75D6DBDD0(L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_minor_m98BB0F36791CA8BBCB7CC7B3371F0EAFDEED9C9C((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&V_1), L_5, /*hidden argument*/NULL);
		String_t* L_6 = ___version0;
		int32_t L_7 = OSVersion_ParseNextComponent_mBA8396A52E8546F92829B6AF99A3B4C75D6DBDD0(L_6, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_point_m88D63B4665E0DA4CDEC0F1D1EA0B52B4F2C41094((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&V_1), L_7, /*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::IndexOfFirstDigit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_IndexOfFirstDigit_mC9C3927F500AACD5DA119CE2F295F244DA8F7500 (String_t* ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		String_t* L_0 = ___version0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___version0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		String_t* L_10 = ___version0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::ParseNextComponent(System.String,System.Int32U26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_ParseNextComponent_mBA8396A52E8546F92829B6AF99A3B4C75D6DBDD0 (String_t* ___version0, int32_t* ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		String_t* L_0 = ___version0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)48)));
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)9))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)10))), (int32_t)L_9));
		goto IL_003f;
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t* L_11 = ___index1;
		int32_t* L_12 = ___index1;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		goto IL_004f;
	}

IL_0035:
	{
		int32_t* L_14 = ___index1;
		String_t* L_15 = ___version0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_15, /*hidden argument*/NULL);
		*((int32_t*)L_14) = (int32_t)L_16;
		goto IL_004f;
	}

IL_003f:
	{
		int32_t* L_17 = ___index1;
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0045:
	{
		int32_t* L_20 = ___index1;
		int32_t L_21 = *((int32_t*)L_20);
		String_t* L_22 = ___version0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0004;
		}
	}

IL_004f:
	{
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_GetHashCode_m9B4220E819BA4F8752E3A5C23367BA042CFEB048 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_4 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_GetHashCode_m9B4220E819BA4F8752E3A5C23367BA042CFEB048_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_GetHashCode_m9B4220E819BA4F8752E3A5C23367BA042CFEB048(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::CompareTo(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_CompareTo_m7772F845922168E82D07D54EAC7EB16435679E82 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___version0, const RuntimeMethod* method)
{
	{
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_0 = (*(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = ___version0;
		bool L_2 = OSVersion_op_LessThan_m39B925981F048AA224715F46DC3BA657B66B09EC(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (-1);
	}

IL_0010:
	{
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_3 = (*(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_4 = ___version0;
		bool L_5 = OSVersion_op_GreaterThan_m40CC33419D6999FC4FFF3C0A09646A1A354316B9(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		return 1;
	}

IL_0020:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_CompareTo_m7772F845922168E82D07D54EAC7EB16435679E82_AdjustorThunk (RuntimeObject * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___version0, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_CompareTo_m7772F845922168E82D07D54EAC7EB16435679E82(_thisAdjusted, ___version0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m1624E9E89A35B70CCA34158360E2BDB0290F6FA4 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion_Equals_m1624E9E89A35B70CCA34158360E2BDB0290F6FA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = OSVersion_Equals_m66F4AB01179637130816E822264745850F4E98EE((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, ((*(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)UnBox(L_2, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool OSVersion_Equals_m1624E9E89A35B70CCA34158360E2BDB0290F6FA4_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_Equals_m1624E9E89A35B70CCA34158360E2BDB0290F6FA4(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m66F4AB01179637130816E822264745850F4E98EE (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool OSVersion_Equals_m66F4AB01179637130816E822264745850F4E98EE_AdjustorThunk (RuntimeObject * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___other0, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_Equals_m66F4AB01179637130816E822264745850F4E98EE(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_LessThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_LessThan_m39B925981F048AA224715F46DC3BA657B66B09EC (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		int32_t L_2 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_4 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)1;
	}

IL_0036:
	{
		int32_t L_6 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_7 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		int32_t L_8 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_9 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThan_m40CC33419D6999FC4FFF3C0A09646A1A354316B9 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		int32_t L_2 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_4 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)1;
	}

IL_0036:
	{
		int32_t L_6 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_7 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		int32_t L_8 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_9 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_Equality(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_Equality_m3E4A3FAE79B6553BA2AD8CC58CFB7BA729EE793B (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_0 = ___rhs1;
		bool L_1 = OSVersion_Equals_m66F4AB01179637130816E822264745850F4E98EE((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThanOrEqual(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThanOrEqual_m5E830944BCF108C97082C47CFEDC3FC94BA0BB95 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_0 = ___lhs0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = ___rhs1;
		bool L_2 = OSVersion_op_GreaterThan_m40CC33419D6999FC4FFF3C0A09646A1A354316B9(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_3 = ___lhs0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_4 = ___rhs1;
		bool L_5 = OSVersion_op_Equality_m3E4A3FAE79B6553BA2AD8CC58CFB7BA729EE793B(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.String UnityEngine.XR.ARKit.OSVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSVersion_ToString_m3A709D674A58700A1798C6F71B4F374826F996D7 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion_ToString_m3A709D674A58700A1798C6F71B4F374826F996D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = OSVersion_get_major_m24FD5C88089656545E9E94242D76BB7598F190AA((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = OSVersion_get_minor_mDDE1337D66B8AD55308743AA5526EB1EAB526D42((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = OSVersion_get_point_m9CA653734E5161D4AFD90BA87AA47211A77B2382((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8DDBB76624EE55213F2601C8BA2B94F9F24E23EE, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* OSVersion_ToString_m3A709D674A58700A1798C6F71B4F374826F996D7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + 1);
	return OSVersion_ToString_m3A709D674A58700A1798C6F71B4F374826F996D7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
