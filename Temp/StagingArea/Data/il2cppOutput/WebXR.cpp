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

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct VirtActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct VirtActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericVirtActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericVirtActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InterfaceActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InterfaceActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericInterfaceActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericInterfaceActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WebXR.WebXRControllerButton>[]
struct EntryU5BU5D_t13ED92BE0A53118C41D0F5542A64AE0C6AD4024A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WebXR.WebXRControllerButton>
struct KeyCollection_tDB1DE9ECE3FE93209132B9D3FCC77D2337616593;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WebXR.WebXRControllerButton>
struct ValueCollection_t43209DFAF2011CC0CF7764199D7061ECCFC43AA9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>
struct Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<WebXR.WebXRControllerInput>
struct List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// WebXR.WebXRCamera
struct WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C;
// WebXR.WebXRCamera/<endOfFrame>d__7
struct U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B;
// WebXR.WebXRController
struct WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214;
// WebXR.WebXRControllerButton
struct WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747;
// WebXR.WebXRControllerData
struct WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343;
// WebXR.WebXRControllerData[]
struct WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD;
// WebXR.WebXRControllerInput
struct WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C;
// WebXR.WebXRControllerInputMap
struct WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B;
// WebXR.WebXRControllerInput[]
struct WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A;
// WebXR.WebXRData
struct WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6;
// WebXR.WebXRManager
struct WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8;
// WebXR.WebXRManager/ControllerUpdate
struct ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7;
// WebXR.WebXRManager/HeadsetUpdate
struct HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7;
// WebXR.WebXRManager/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E;
// WebXR.WebXRManager/XRChange
struct XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0;
// WebXR.WebXRUI
struct WebXRUI_tBC93F5694FE6E042856FC1436C75F6124D5DE429;
// WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerHand_t2545D765C3C8E33095B4C531D1F36FFD5023CC91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRState_tEA59242398A7B636A31C9DEE792B78568B929485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2654F5CCEAF52997DFCFCED105D22EF40DEF62CC;
IL2CPP_EXTERN_C String_t* _stringLiteral345097493759A47C19F07AF3B8F7CA7C885ACE33;
IL2CPP_EXTERN_C String_t* _stringLiteral354DC7FAA21872E1924302A69CAD9AC196468506;
IL2CPP_EXTERN_C String_t* _stringLiteral52FB89241607C948847FD72C060201CC14112829;
IL2CPP_EXTERN_C String_t* _stringLiteral53638E6DFFA5AA74D1039CF360168401159B2942;
IL2CPP_EXTERN_C String_t* _stringLiteral652A35BE6DCEB62601A4E27CDA2945FA2A5CC326;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB26BFD886E8EC670D6307D63828E6A680EA1FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D6C45D9B12B8AB40B3EC243B2EA73D036AC7BA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC8069221BB142BC4AD2275ABE74B2DD467F4E2C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF4EB8357DFD11365DE557E668A58383E7B54699C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m73C02C317A33AA3B9ED2C51B87713020A43064AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_m6BA1804DE111115E2F9FC9F8B2353F3DFA1D3CDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6_m1096CC11B29160F1B34837804BE53E8EABF2B5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450_m08728F46F1EC6FE955CF988B48CD6834C9E2E016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB707D5C4AE48D6CF70E3CA392B0124B032721CC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m885FCA9322FD4883780481FFB4987A986FD3F5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_mB50B5BED82758AD84CF86C99C7C79EB1FCADCE65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_m835D7B6EFCEAB45445E6C31D16365BB20882AE86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_onHeadsetUpdate_mE7A962594617623DE2AD6490F1D00435A4127260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_onVRChange_m6D9C7FCF02319B8D46230E2A471DCFF40020F899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_onControllerUpdate_m70F8D5BA88FC5673F7C673323974465ECD4AA241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_onHeadsetUpdate_mC8ACBA7C2DBF70F7C6B00184C9B45117456C22B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebXRControllerHand_t2545D765C3C8E33095B4C531D1F36FFD5023CC91_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ControllerUpdate_BeginInvoke_m3E5D9B58DC5D4D315973AE8F4C1588CBF7DB22BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadsetUpdate_BeginInvoke_mDA1D44611A542EB04405169EAD50169511C66A0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_m835D7B6EFCEAB45445E6C31D16365BB20882AE86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRCamera_OnEnable_m9F7D42D625415B0A5E43E2590FABC0E7EF6872A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRCamera__ctor_m309779AFCCC04BE435560C97AA12A4BEAD23E08C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRCamera_endOfFrame_m87B5C5F8842DCF8695CC26FEE1AE2635196CB6EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRCamera_onHeadsetUpdate_mE7A962594617623DE2AD6490F1D00435A4127260_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRControllerData__ctor_m66864272D81C623782E47C20A894FF37AA5E9226_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_GetAxis_mE5335C3F5E5728AC4C3C5BA495149F0659E71155_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_GetButtonDown_mD83FD2CBAE588B3A089E0ABABDA62E809FA78DF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_GetButtonUp_m8C1E34FEB06DFB0D829A934B4FBEF64EDDA78027_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_GetButton_m0D2F9BD5610A27F3DD7D8488C890191A031803D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_GetPastButtonState_mB5CC031A8D0FDC962F0973403666D77FA24F4CAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_OnDisable_m6603483CA99C7DCD904ED301C676511FCF73DE31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_OnEnable_m254B106311975220B6E49DE419E41B72F00A7C0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_SetPastButtonState_m89C2E4BBF033D4CD5CC037678AC0F8DC0E44AD24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_UpdateButtons_m509334291D6F6588F749C1E4D9A453D92CD21929_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_Update_m8E4476E0EE90C2130B2FCC5F13F116F22035EEEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController__ctor_m0334257C1839128B27822E6A65A4BD820CB68A58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_applyArmModel_m465BB6347F8A9054D1EFB0C9209157A1CE691350_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_handFromString_mF75B438CAE5292A76C4DE2E3F41BD37381F26ACF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRController_onControllerUpdate_m70F8D5BA88FC5673F7C673323974465ECD4AA241_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRData_CreateFromJSON_m51FD5720A1873D78D69E7835FE637D44CA9AD70D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRData__ctor_mC9AA4A498679F6087E88C19BD78191161B67CBAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_Awake_mFCDA93D698152DD2F0CCFF3B4BAAD2B11DB47402_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_OnEndXR_m9EB3980B24D41D43BBAF79E82847C6CEED281C37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_OnStartXR_m519BC85317967F91F9DA0E575964AC468C741E98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_OnXRCapabilities_m73ECACEFAE6CA0A00FDA98F8AFBA6B18353044C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_OnXRCapabilities_mD235A38CD875F6CAB87542D6953923B882713057_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_SetTrackingSpaceType_m9D2166353D4956A1E756036B0A8BE19EDDE2A75C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_Start_m2D69B94BAA0A2B2783ED71EFF614A5311E098DA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager__cctor_m3AFDE25EA631DA039896067C782657D59345FC8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager__ctor_m6D0B7C010BC1F14FC703E1A9EEF483928B07DA8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_add_OnControllerUpdate_mF44CBEBC2735A15F1D4FD234D6CC4ECEAD4EA86E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_add_OnHeadsetUpdate_mA590144BADEB7CFBF99FDAF37CCA56448AF8C830_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_add_OnXRCapabilitiesUpdate_m5EEAEE3D5B5E2CCA5D045D0AC9D7B2EA83280306_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_add_OnXRChange_mE6FD2AB4C4316BB144BADBF0D86B60A2628455C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_remove_OnControllerUpdate_mF367A125CC36C51E26E3540653F521CFAEAFA5AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_remove_OnHeadsetUpdate_m4E086DEDFC3752D1758085F1F452C20E2767011A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_remove_OnXRCapabilitiesUpdate_mA6EBFD41AEC0FC29848ACFF17C97FBA57FED06C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRManager_remove_OnXRChange_m9549C3FA4FCE99DA9BF5E31492B91F20416CA187_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRMatrixUtil_GetRotationFromMatrix_m517B69AACA12A9AC3E090D7BFA507648E6D67CDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRMatrixUtil_GetTranslationFromMatrix_m47B8A0022A3576F073ABDDEFDCA845B462CEB3C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebXRMatrixUtil_SetTransformFromViewMatrix_m08E282355CB0D97BE9E5695AD4B7FBDD59816C7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRChange_BeginInvoke_m3174217A9F3856995DC0AAFE493C7243E2FEE859_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
struct WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747;
struct WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1990320A932D42B0648D23D927278929E2EB526A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>
struct  Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t13ED92BE0A53118C41D0F5542A64AE0C6AD4024A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tDB1DE9ECE3FE93209132B9D3FCC77D2337616593 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t43209DFAF2011CC0CF7764199D7061ECCFC43AA9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___entries_1)); }
	inline EntryU5BU5D_t13ED92BE0A53118C41D0F5542A64AE0C6AD4024A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t13ED92BE0A53118C41D0F5542A64AE0C6AD4024A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t13ED92BE0A53118C41D0F5542A64AE0C6AD4024A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___keys_7)); }
	inline KeyCollection_tDB1DE9ECE3FE93209132B9D3FCC77D2337616593 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB1DE9ECE3FE93209132B9D3FCC77D2337616593 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB1DE9ECE3FE93209132B9D3FCC77D2337616593 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ___values_8)); }
	inline ValueCollection_t43209DFAF2011CC0CF7764199D7061ECCFC43AA9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t43209DFAF2011CC0CF7764199D7061ECCFC43AA9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t43209DFAF2011CC0CF7764199D7061ECCFC43AA9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<WebXR.WebXRControllerInput>
struct  List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD, ____items_1)); }
	inline WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A* get__items_1() const { return ____items_1; }
	inline WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD_StaticFields, ____emptyArray_5)); }
	inline WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WebXRControllerInputU5BU5D_t90C252EC62015EEA7F077200317304C57E2BA61A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// WebXR.WebXRCamera_<endOfFrame>d__7
struct  U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B  : public RuntimeObject
{
public:
	// System.Int32 WebXR.WebXRCamera_<endOfFrame>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebXR.WebXRCamera_<endOfFrame>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WebXR.WebXRCamera WebXR.WebXRCamera_<endOfFrame>d__7::<>4__this
	WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B, ___U3CU3E4__this_2)); }
	inline WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// WebXR.WebXRControllerButton
struct  WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62  : public RuntimeObject
{
public:
	// System.Boolean WebXR.WebXRControllerButton::pressed
	bool ___pressed_0;
	// System.Boolean WebXR.WebXRControllerButton::prevPressedState
	bool ___prevPressedState_1;
	// System.Boolean WebXR.WebXRControllerButton::touched
	bool ___touched_2;
	// System.Single WebXR.WebXRControllerButton::value
	float ___value_3;

public:
	inline static int32_t get_offset_of_pressed_0() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62, ___pressed_0)); }
	inline bool get_pressed_0() const { return ___pressed_0; }
	inline bool* get_address_of_pressed_0() { return &___pressed_0; }
	inline void set_pressed_0(bool value)
	{
		___pressed_0 = value;
	}

	inline static int32_t get_offset_of_prevPressedState_1() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62, ___prevPressedState_1)); }
	inline bool get_prevPressedState_1() const { return ___prevPressedState_1; }
	inline bool* get_address_of_prevPressedState_1() { return &___prevPressedState_1; }
	inline void set_prevPressedState_1(bool value)
	{
		___prevPressedState_1 = value;
	}

	inline static int32_t get_offset_of_touched_2() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62, ___touched_2)); }
	inline bool get_touched_2() const { return ___touched_2; }
	inline bool* get_address_of_touched_2() { return &___touched_2; }
	inline void set_touched_2(bool value)
	{
		___touched_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62, ___value_3)); }
	inline float get_value_3() const { return ___value_3; }
	inline float* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(float value)
	{
		___value_3 = value;
	}
};


// WebXR.WebXRControllerData
struct  WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343  : public RuntimeObject
{
public:
	// System.String WebXR.WebXRControllerData::id
	String_t* ___id_0;
	// System.Int32 WebXR.WebXRControllerData::index
	int32_t ___index_1;
	// System.String WebXR.WebXRControllerData::hand
	String_t* ___hand_2;
	// System.Boolean WebXR.WebXRControllerData::hasOrientation
	bool ___hasOrientation_3;
	// System.Boolean WebXR.WebXRControllerData::hasPosition
	bool ___hasPosition_4;
	// System.Single[] WebXR.WebXRControllerData::orientation
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___orientation_5;
	// System.Single[] WebXR.WebXRControllerData::position
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___position_6;
	// System.Single[] WebXR.WebXRControllerData::linearAcceleration
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___linearAcceleration_7;
	// System.Single[] WebXR.WebXRControllerData::linearVelocity
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___linearVelocity_8;
	// System.Single[] WebXR.WebXRControllerData::axes
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes_9;
	// WebXR.WebXRControllerButton[] WebXR.WebXRControllerData::buttons
	WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttons_10;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_hand_2() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___hand_2)); }
	inline String_t* get_hand_2() const { return ___hand_2; }
	inline String_t** get_address_of_hand_2() { return &___hand_2; }
	inline void set_hand_2(String_t* value)
	{
		___hand_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hand_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasOrientation_3() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___hasOrientation_3)); }
	inline bool get_hasOrientation_3() const { return ___hasOrientation_3; }
	inline bool* get_address_of_hasOrientation_3() { return &___hasOrientation_3; }
	inline void set_hasOrientation_3(bool value)
	{
		___hasOrientation_3 = value;
	}

	inline static int32_t get_offset_of_hasPosition_4() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___hasPosition_4)); }
	inline bool get_hasPosition_4() const { return ___hasPosition_4; }
	inline bool* get_address_of_hasPosition_4() { return &___hasPosition_4; }
	inline void set_hasPosition_4(bool value)
	{
		___hasPosition_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___orientation_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_orientation_5() const { return ___orientation_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___orientation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orientation_5), (void*)value);
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___position_6)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_position_6() const { return ___position_6; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___position_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_6), (void*)value);
	}

	inline static int32_t get_offset_of_linearAcceleration_7() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___linearAcceleration_7)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_linearAcceleration_7() const { return ___linearAcceleration_7; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_linearAcceleration_7() { return &___linearAcceleration_7; }
	inline void set_linearAcceleration_7(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___linearAcceleration_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linearAcceleration_7), (void*)value);
	}

	inline static int32_t get_offset_of_linearVelocity_8() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___linearVelocity_8)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_linearVelocity_8() const { return ___linearVelocity_8; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_linearVelocity_8() { return &___linearVelocity_8; }
	inline void set_linearVelocity_8(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___linearVelocity_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linearVelocity_8), (void*)value);
	}

	inline static int32_t get_offset_of_axes_9() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___axes_9)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_axes_9() const { return ___axes_9; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_axes_9() { return &___axes_9; }
	inline void set_axes_9(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___axes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_9), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_10() { return static_cast<int32_t>(offsetof(WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343, ___buttons_10)); }
	inline WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* get_buttons_10() const { return ___buttons_10; }
	inline WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747** get_address_of_buttons_10() { return &___buttons_10; }
	inline void set_buttons_10(WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* value)
	{
		___buttons_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_10), (void*)value);
	}
};


// WebXR.WebXRControllerInput
struct  WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C  : public RuntimeObject
{
public:
	// System.String WebXR.WebXRControllerInput::actionName
	String_t* ___actionName_0;
	// System.Int32 WebXR.WebXRControllerInput::gamepadId
	int32_t ___gamepadId_1;
	// System.Boolean WebXR.WebXRControllerInput::gamepadIsButton
	bool ___gamepadIsButton_2;
	// System.String WebXR.WebXRControllerInput::unityInputName
	String_t* ___unityInputName_3;
	// System.Boolean WebXR.WebXRControllerInput::unityInputIsButton
	bool ___unityInputIsButton_4;

public:
	inline static int32_t get_offset_of_actionName_0() { return static_cast<int32_t>(offsetof(WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C, ___actionName_0)); }
	inline String_t* get_actionName_0() const { return ___actionName_0; }
	inline String_t** get_address_of_actionName_0() { return &___actionName_0; }
	inline void set_actionName_0(String_t* value)
	{
		___actionName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionName_0), (void*)value);
	}

	inline static int32_t get_offset_of_gamepadId_1() { return static_cast<int32_t>(offsetof(WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C, ___gamepadId_1)); }
	inline int32_t get_gamepadId_1() const { return ___gamepadId_1; }
	inline int32_t* get_address_of_gamepadId_1() { return &___gamepadId_1; }
	inline void set_gamepadId_1(int32_t value)
	{
		___gamepadId_1 = value;
	}

	inline static int32_t get_offset_of_gamepadIsButton_2() { return static_cast<int32_t>(offsetof(WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C, ___gamepadIsButton_2)); }
	inline bool get_gamepadIsButton_2() const { return ___gamepadIsButton_2; }
	inline bool* get_address_of_gamepadIsButton_2() { return &___gamepadIsButton_2; }
	inline void set_gamepadIsButton_2(bool value)
	{
		___gamepadIsButton_2 = value;
	}

	inline static int32_t get_offset_of_unityInputName_3() { return static_cast<int32_t>(offsetof(WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C, ___unityInputName_3)); }
	inline String_t* get_unityInputName_3() const { return ___unityInputName_3; }
	inline String_t** get_address_of_unityInputName_3() { return &___unityInputName_3; }
	inline void set_unityInputName_3(String_t* value)
	{
		___unityInputName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityInputName_3), (void*)value);
	}

	inline static int32_t get_offset_of_unityInputIsButton_4() { return static_cast<int32_t>(offsetof(WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C, ___unityInputIsButton_4)); }
	inline bool get_unityInputIsButton_4() const { return ___unityInputIsButton_4; }
	inline bool* get_address_of_unityInputIsButton_4() { return &___unityInputIsButton_4; }
	inline void set_unityInputIsButton_4(bool value)
	{
		___unityInputIsButton_4 = value;
	}
};


// WebXR.WebXRData
struct  WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6  : public RuntimeObject
{
public:
	// WebXR.WebXRControllerData[] WebXR.WebXRData::controllers
	WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* ___controllers_0;

public:
	inline static int32_t get_offset_of_controllers_0() { return static_cast<int32_t>(offsetof(WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6, ___controllers_0)); }
	inline WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* get_controllers_0() const { return ___controllers_0; }
	inline WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD** get_address_of_controllers_0() { return &___controllers_0; }
	inline void set_controllers_0(WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* value)
	{
		___controllers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllers_0), (void*)value);
	}
};


// WebXR.WebXRMatrixUtil
struct  WebXRMatrixUtil_tDB22BD2785F60D0EDE777E67272B674AD92B7843  : public RuntimeObject
{
public:

public:
};


// WebXR.WebXRUI
struct  WebXRUI_tBC93F5694FE6E042856FC1436C75F6124D5DE429  : public RuntimeObject
{
public:

public:
};


// WebXRDisplayCapabilities
struct  WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450  : public RuntimeObject
{
public:
	// System.Boolean WebXRDisplayCapabilities::supportsInline
	bool ___supportsInline_0;
	// System.Boolean WebXRDisplayCapabilities::supportsImmersiveVR
	bool ___supportsImmersiveVR_1;
	// System.Boolean WebXRDisplayCapabilities::supportsImmersiveAR
	bool ___supportsImmersiveAR_2;

public:
	inline static int32_t get_offset_of_supportsInline_0() { return static_cast<int32_t>(offsetof(WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450, ___supportsInline_0)); }
	inline bool get_supportsInline_0() const { return ___supportsInline_0; }
	inline bool* get_address_of_supportsInline_0() { return &___supportsInline_0; }
	inline void set_supportsInline_0(bool value)
	{
		___supportsInline_0 = value;
	}

	inline static int32_t get_offset_of_supportsImmersiveVR_1() { return static_cast<int32_t>(offsetof(WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450, ___supportsImmersiveVR_1)); }
	inline bool get_supportsImmersiveVR_1() const { return ___supportsImmersiveVR_1; }
	inline bool* get_address_of_supportsImmersiveVR_1() { return &___supportsImmersiveVR_1; }
	inline void set_supportsImmersiveVR_1(bool value)
	{
		___supportsImmersiveVR_1 = value;
	}

	inline static int32_t get_offset_of_supportsImmersiveAR_2() { return static_cast<int32_t>(offsetof(WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450, ___supportsImmersiveAR_2)); }
	inline bool get_supportsImmersiveAR_2() const { return ___supportsImmersiveAR_2; }
	inline bool* get_address_of_supportsImmersiveAR_2() { return &___supportsImmersiveAR_2; }
	inline void set_supportsImmersiveAR_2(bool value)
	{
		___supportsImmersiveAR_2 = value;
	}
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<WebXR.WebXRControllerInput>
struct  Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A, ___list_0)); }
	inline List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * get_list_0() const { return ___list_0; }
	inline List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A, ___current_3)); }
	inline WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * get_current_3() const { return ___current_3; }
	inline WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_7 = value;
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Rendering.GraphicsTier
struct  GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsTier::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingSpaceType
struct  TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRControllerHand
struct  WebXRControllerHand_t2545D765C3C8E33095B4C531D1F36FFD5023CC91 
{
public:
	// System.Int32 WebXR.WebXRControllerHand::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebXRControllerHand_t2545D765C3C8E33095B4C531D1F36FFD5023CC91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebXR.WebXRState
struct  WebXRState_tEA59242398A7B636A31C9DEE792B78568B929485 
{
public:
	// System.Int32 WebXR.WebXRState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebXRState_tEA59242398A7B636A31C9DEE792B78568B929485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


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

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// WebXR.WebXRControllerInputMap
struct  WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Collections.Generic.List`1<WebXR.WebXRControllerInput> WebXR.WebXRControllerInputMap::inputs
	List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * ___inputs_4;

public:
	inline static int32_t get_offset_of_inputs_4() { return static_cast<int32_t>(offsetof(WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B, ___inputs_4)); }
	inline List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * get_inputs_4() const { return ___inputs_4; }
	inline List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD ** get_address_of_inputs_4() { return &___inputs_4; }
	inline void set_inputs_4(List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * value)
	{
		___inputs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_4), (void*)value);
	}
};


// WebXR.WebXRManager_ControllerUpdate
struct  ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRManager_HeadsetUpdate
struct  HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRManager_XRCapabilitiesUpdate
struct  XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E  : public MulticastDelegate_t
{
public:

public:
};


// WebXR.WebXRManager_XRChange
struct  XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// WebXR.WebXRCamera
struct  WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera WebXR.WebXRCamera::cameraMain
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cameraMain_4;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraL
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cameraL_5;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraR
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cameraR_6;
	// System.Boolean WebXR.WebXRCamera::xrActive
	bool ___xrActive_7;
	// UnityEngine.WaitForEndOfFrame WebXR.WebXRCamera::wait
	WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * ___wait_8;
	// UnityEngine.Coroutine WebXR.WebXRCamera::postRenderCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___postRenderCoroutine_9;

public:
	inline static int32_t get_offset_of_cameraMain_4() { return static_cast<int32_t>(offsetof(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C, ___cameraMain_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cameraMain_4() const { return ___cameraMain_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cameraMain_4() { return &___cameraMain_4; }
	inline void set_cameraMain_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cameraMain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraMain_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraL_5() { return static_cast<int32_t>(offsetof(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C, ___cameraL_5)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cameraL_5() const { return ___cameraL_5; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cameraL_5() { return &___cameraL_5; }
	inline void set_cameraL_5(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cameraL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraL_5), (void*)value);
	}

	inline static int32_t get_offset_of_cameraR_6() { return static_cast<int32_t>(offsetof(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C, ___cameraR_6)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cameraR_6() const { return ___cameraR_6; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cameraR_6() { return &___cameraR_6; }
	inline void set_cameraR_6(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cameraR_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraR_6), (void*)value);
	}

	inline static int32_t get_offset_of_xrActive_7() { return static_cast<int32_t>(offsetof(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C, ___xrActive_7)); }
	inline bool get_xrActive_7() const { return ___xrActive_7; }
	inline bool* get_address_of_xrActive_7() { return &___xrActive_7; }
	inline void set_xrActive_7(bool value)
	{
		___xrActive_7 = value;
	}

	inline static int32_t get_offset_of_wait_8() { return static_cast<int32_t>(offsetof(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C, ___wait_8)); }
	inline WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * get_wait_8() const { return ___wait_8; }
	inline WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA ** get_address_of_wait_8() { return &___wait_8; }
	inline void set_wait_8(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * value)
	{
		___wait_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wait_8), (void*)value);
	}

	inline static int32_t get_offset_of_postRenderCoroutine_9() { return static_cast<int32_t>(offsetof(WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C, ___postRenderCoroutine_9)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_postRenderCoroutine_9() const { return ___postRenderCoroutine_9; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_postRenderCoroutine_9() { return &___postRenderCoroutine_9; }
	inline void set_postRenderCoroutine_9(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___postRenderCoroutine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postRenderCoroutine_9), (void*)value);
	}
};


// WebXR.WebXRController
struct  WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_4;
	// WebXR.WebXRControllerInputMap WebXR.WebXRController::inputMap
	WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * ___inputMap_5;
	// System.Boolean WebXR.WebXRController::simulate3dof
	bool ___simulate3dof_6;
	// UnityEngine.Vector3 WebXR.WebXRController::eyesToElbow
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eyesToElbow_7;
	// UnityEngine.Vector3 WebXR.WebXRController::elbowHand
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___elbowHand_8;
	// UnityEngine.Matrix4x4 WebXR.WebXRController::sitStand
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStand_9;
	// System.Single[] WebXR.WebXRController::axes
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes_10;
	// UnityEngine.XR.XRNode WebXR.WebXRController::handNode
	int32_t ___handNode_11;
	// UnityEngine.Quaternion WebXR.WebXRController::headRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___headRotation_12;
	// UnityEngine.Vector3 WebXR.WebXRController::headPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___headPosition_13;
	// UnityEngine.Transform WebXR.WebXRController::_t
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____t_14;
	// System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton> WebXR.WebXRController::buttonStates
	Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * ___buttonStates_15;

public:
	inline static int32_t get_offset_of_hand_4() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___hand_4)); }
	inline int32_t get_hand_4() const { return ___hand_4; }
	inline int32_t* get_address_of_hand_4() { return &___hand_4; }
	inline void set_hand_4(int32_t value)
	{
		___hand_4 = value;
	}

	inline static int32_t get_offset_of_inputMap_5() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___inputMap_5)); }
	inline WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * get_inputMap_5() const { return ___inputMap_5; }
	inline WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B ** get_address_of_inputMap_5() { return &___inputMap_5; }
	inline void set_inputMap_5(WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * value)
	{
		___inputMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_simulate3dof_6() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___simulate3dof_6)); }
	inline bool get_simulate3dof_6() const { return ___simulate3dof_6; }
	inline bool* get_address_of_simulate3dof_6() { return &___simulate3dof_6; }
	inline void set_simulate3dof_6(bool value)
	{
		___simulate3dof_6 = value;
	}

	inline static int32_t get_offset_of_eyesToElbow_7() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___eyesToElbow_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_eyesToElbow_7() const { return ___eyesToElbow_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_eyesToElbow_7() { return &___eyesToElbow_7; }
	inline void set_eyesToElbow_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___eyesToElbow_7 = value;
	}

	inline static int32_t get_offset_of_elbowHand_8() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___elbowHand_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_elbowHand_8() const { return ___elbowHand_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_elbowHand_8() { return &___elbowHand_8; }
	inline void set_elbowHand_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___elbowHand_8 = value;
	}

	inline static int32_t get_offset_of_sitStand_9() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___sitStand_9)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_sitStand_9() const { return ___sitStand_9; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_sitStand_9() { return &___sitStand_9; }
	inline void set_sitStand_9(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___sitStand_9 = value;
	}

	inline static int32_t get_offset_of_axes_10() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___axes_10)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_axes_10() const { return ___axes_10; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_axes_10() { return &___axes_10; }
	inline void set_axes_10(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___axes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_10), (void*)value);
	}

	inline static int32_t get_offset_of_handNode_11() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___handNode_11)); }
	inline int32_t get_handNode_11() const { return ___handNode_11; }
	inline int32_t* get_address_of_handNode_11() { return &___handNode_11; }
	inline void set_handNode_11(int32_t value)
	{
		___handNode_11 = value;
	}

	inline static int32_t get_offset_of_headRotation_12() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___headRotation_12)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_headRotation_12() const { return ___headRotation_12; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_headRotation_12() { return &___headRotation_12; }
	inline void set_headRotation_12(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___headRotation_12 = value;
	}

	inline static int32_t get_offset_of_headPosition_13() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___headPosition_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_headPosition_13() const { return ___headPosition_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_headPosition_13() { return &___headPosition_13; }
	inline void set_headPosition_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___headPosition_13 = value;
	}

	inline static int32_t get_offset_of__t_14() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ____t_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__t_14() const { return ____t_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__t_14() { return &____t_14; }
	inline void set__t_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____t_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____t_14), (void*)value);
	}

	inline static int32_t get_offset_of_buttonStates_15() { return static_cast<int32_t>(offsetof(WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214, ___buttonStates_15)); }
	inline Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * get_buttonStates_15() const { return ___buttonStates_15; }
	inline Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 ** get_address_of_buttonStates_15() { return &___buttonStates_15; }
	inline void set_buttonStates_15(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * value)
	{
		___buttonStates_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonStates_15), (void*)value);
	}
};


// WebXR.WebXRManager
struct  WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String WebXR.WebXRManager::toggleXRKeyName
	String_t* ___toggleXRKeyName_4;
	// System.Boolean WebXR.WebXRManager::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// System.Single WebXR.WebXRManager::DefaultHeight
	float ___DefaultHeight_6;
	// UnityEngine.XR.TrackingSpaceType WebXR.WebXRManager::TrackingSpace
	int32_t ___TrackingSpace_7;
	// WebXR.WebXRState WebXR.WebXRManager::xrState
	int32_t ___xrState_10;
	// WebXR.WebXRManager_XRCapabilitiesUpdate WebXR.WebXRManager::OnXRCapabilitiesUpdate
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * ___OnXRCapabilitiesUpdate_11;
	// WebXR.WebXRManager_XRChange WebXR.WebXRManager::OnXRChange
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * ___OnXRChange_12;
	// WebXR.WebXRManager_HeadsetUpdate WebXR.WebXRManager::OnHeadsetUpdate
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * ___OnHeadsetUpdate_13;
	// WebXR.WebXRManager_ControllerUpdate WebXR.WebXRManager::OnControllerUpdate
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * ___OnControllerUpdate_14;
	// System.Single[] WebXR.WebXRManager::sharedArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sharedArray_15;
	// WebXRDisplayCapabilities WebXR.WebXRManager::_capabilities
	WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * ____capabilities_16;

public:
	inline static int32_t get_offset_of_toggleXRKeyName_4() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___toggleXRKeyName_4)); }
	inline String_t* get_toggleXRKeyName_4() const { return ___toggleXRKeyName_4; }
	inline String_t** get_address_of_toggleXRKeyName_4() { return &___toggleXRKeyName_4; }
	inline void set_toggleXRKeyName_4(String_t* value)
	{
		___toggleXRKeyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleXRKeyName_4), (void*)value);
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_5() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___dontDestroyOnLoad_5)); }
	inline bool get_dontDestroyOnLoad_5() const { return ___dontDestroyOnLoad_5; }
	inline bool* get_address_of_dontDestroyOnLoad_5() { return &___dontDestroyOnLoad_5; }
	inline void set_dontDestroyOnLoad_5(bool value)
	{
		___dontDestroyOnLoad_5 = value;
	}

	inline static int32_t get_offset_of_DefaultHeight_6() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___DefaultHeight_6)); }
	inline float get_DefaultHeight_6() const { return ___DefaultHeight_6; }
	inline float* get_address_of_DefaultHeight_6() { return &___DefaultHeight_6; }
	inline void set_DefaultHeight_6(float value)
	{
		___DefaultHeight_6 = value;
	}

	inline static int32_t get_offset_of_TrackingSpace_7() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___TrackingSpace_7)); }
	inline int32_t get_TrackingSpace_7() const { return ___TrackingSpace_7; }
	inline int32_t* get_address_of_TrackingSpace_7() { return &___TrackingSpace_7; }
	inline void set_TrackingSpace_7(int32_t value)
	{
		___TrackingSpace_7 = value;
	}

	inline static int32_t get_offset_of_xrState_10() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___xrState_10)); }
	inline int32_t get_xrState_10() const { return ___xrState_10; }
	inline int32_t* get_address_of_xrState_10() { return &___xrState_10; }
	inline void set_xrState_10(int32_t value)
	{
		___xrState_10 = value;
	}

	inline static int32_t get_offset_of_OnXRCapabilitiesUpdate_11() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___OnXRCapabilitiesUpdate_11)); }
	inline XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * get_OnXRCapabilitiesUpdate_11() const { return ___OnXRCapabilitiesUpdate_11; }
	inline XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E ** get_address_of_OnXRCapabilitiesUpdate_11() { return &___OnXRCapabilitiesUpdate_11; }
	inline void set_OnXRCapabilitiesUpdate_11(XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * value)
	{
		___OnXRCapabilitiesUpdate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnXRCapabilitiesUpdate_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnXRChange_12() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___OnXRChange_12)); }
	inline XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * get_OnXRChange_12() const { return ___OnXRChange_12; }
	inline XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 ** get_address_of_OnXRChange_12() { return &___OnXRChange_12; }
	inline void set_OnXRChange_12(XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * value)
	{
		___OnXRChange_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnXRChange_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnHeadsetUpdate_13() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___OnHeadsetUpdate_13)); }
	inline HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * get_OnHeadsetUpdate_13() const { return ___OnHeadsetUpdate_13; }
	inline HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 ** get_address_of_OnHeadsetUpdate_13() { return &___OnHeadsetUpdate_13; }
	inline void set_OnHeadsetUpdate_13(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * value)
	{
		___OnHeadsetUpdate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeadsetUpdate_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerUpdate_14() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___OnControllerUpdate_14)); }
	inline ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * get_OnControllerUpdate_14() const { return ___OnControllerUpdate_14; }
	inline ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 ** get_address_of_OnControllerUpdate_14() { return &___OnControllerUpdate_14; }
	inline void set_OnControllerUpdate_14(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * value)
	{
		___OnControllerUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerUpdate_14), (void*)value);
	}

	inline static int32_t get_offset_of_sharedArray_15() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ___sharedArray_15)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_sharedArray_15() const { return ___sharedArray_15; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_sharedArray_15() { return &___sharedArray_15; }
	inline void set_sharedArray_15(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___sharedArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedArray_15), (void*)value);
	}

	inline static int32_t get_offset_of__capabilities_16() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8, ____capabilities_16)); }
	inline WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * get__capabilities_16() const { return ____capabilities_16; }
	inline WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 ** get_address_of__capabilities_16() { return &____capabilities_16; }
	inline void set__capabilities_16(WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * value)
	{
		____capabilities_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capabilities_16), (void*)value);
	}
};

struct WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields
{
public:
	// System.String WebXR.WebXRManager::GlobalName
	String_t* ___GlobalName_8;
	// WebXR.WebXRManager WebXR.WebXRManager::instance
	WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * ___instance_9;

public:
	inline static int32_t get_offset_of_GlobalName_8() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields, ___GlobalName_8)); }
	inline String_t* get_GlobalName_8() const { return ___GlobalName_8; }
	inline String_t** get_address_of_GlobalName_8() { return &___GlobalName_8; }
	inline void set_GlobalName_8(String_t* value)
	{
		___GlobalName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalName_8), (void*)value);
	}

	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields, ___instance_9)); }
	inline WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * get_instance_9() const { return ___instance_9; }
	inline WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * m_Items[1];

public:
	inline WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WebXR.WebXRControllerData[]
struct WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * m_Items[1];

public:
	inline WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * value)
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


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void WebXR.WebXRCamera/<endOfFrame>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7__ctor_m1DD34171E7328F92D3BFC7A90F801EA216D0B7C1 (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41 (const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mC5A3612F56C06C5937C321D01A1C4A83455AA986 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRManager/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_mE6FD2AB4C4316BB144BADBF0D86B60A2628455C0 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m30B6C12F3977D4D013D02075F4D4127FBC4C057A (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mA590144BADEB7CFBF99FDAF37CCA56448AF8C830 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator WebXR.WebXRCamera::endOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebXRCamera_endOfFrame_m87B5C5F8842DCF8695CC26FEE1AE2635196CB6EE (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mC465FFA3C386BA22384F7AFA5495FF2286510562 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Void WebXR.WebXRMatrixUtil::SetTransformFromViewMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRMatrixUtil_SetTransformFromViewMatrix_m08E282355CB0D97BE9E5695AD4B7FBDD59816C7E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___webXRViewMatrix1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_mC726156CC9AE07A46297C91212655D836E1C6720 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void WebXR.WebXRCamera::XRPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_XRPostRender_m44257ACA719FA7A02CC4D0058AEFC62CC8F4BF1B (const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<WebXR.WebXRControllerInput>::GetEnumerator()
inline Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD (List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  (*) (List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>::get_Current()
inline WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_inline (Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A * __this, const RuntimeMethod* method)
{
	return ((  WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * (*) (Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void WebXR.WebXRController::SetButtonState(System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>::MoveNext()
inline bool Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73 (Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WebXR.WebXRControllerInput>::Dispose()
inline void Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D (Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<WebXR.WebXRControllerInput>::get_Item(System.Int32)
inline WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * List_1_get_Item_m885FCA9322FD4883780481FFB4987A986FD3F5B2_inline (List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * (*) (List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::get_isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0 (const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7 (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::get_Item(!0)
inline WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * (*) (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<WebXR.WebXRControllerInput>::get_Count()
inline int32_t List_1_get_Count_mB707D5C4AE48D6CF70E3CA392B0124B032721CC2_inline (List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m136E173B4B96C87EC607E487AA64A6D6D6BC534E (WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::Add(!0,!1)
inline void Dictionary_2_Add_mF4EB8357DFD11365DE557E668A58383E7B54699C (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * __this, String_t* ___key0, WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 *, String_t*, WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0 (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean WebXR.WebXRController::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m0D2F9BD5610A27F3DD7D8488C890191A031803D6 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Boolean WebXR.WebXRController::GetPastButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetPastButtonState_mB5CC031A8D0FDC962F0973403666D77FA24F4CAE (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::SetPastButtonState(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetPastButtonState_m89C2E4BBF033D4CD5CC037678AC0F8DC0E44AD24 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, bool ___isPressed1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB (String_t* ___buttonName0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::TransformViewMatrixToTRS(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebXRMatrixUtil_TransformViewMatrixToTRS_m5CDEEBCC8ACC53127D1F23C2DB195C4D6796E1A8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___openGLViewMatrix0, const RuntimeMethod* method);
// UnityEngine.Quaternion WebXR.WebXRMatrixUtil::GetRotationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WebXRMatrixUtil_GetRotationFromMatrix_m517B69AACA12A9AC3E090D7BFA507648E6D67CDF (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method);
// UnityEngine.Vector3 WebXR.WebXRMatrixUtil::GetTranslationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebXRMatrixUtil_GetTranslationFromMatrix_m47B8A0022A3576F073ABDDEFDCA845B462CEB3C9 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method);
// WebXR.WebXRControllerHand WebXR.WebXRController::handFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRController_handFromString_mF75B438CAE5292A76C4DE2E3F41BD37381F26ACF (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___handValue0, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, bool ___visible0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 WebXR.WebXRController::applyArmModel(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebXRController_applyArmModel_m465BB6347F8A9054D1EFB0C9209157A1CE691350 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___controllerPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___controllerRotation1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___headRotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_m509334291D6F6588F749C1E4D9A453D92CD21929 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttons0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m23D019B7C5EF2C5C01F524EB8137A424B33EEFE2 (String_t* __this, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.InputTracking::GetLocalPosition(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  InputTracking_GetLocalPosition_m80215BCA93D0DA3C9A14F75D3F13197FB6757305 (int32_t ___node0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.InputTracking::GetLocalRotation(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996 (int32_t ___node0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_m6E4DE508DEFF7BF9D75EF386891E1BEBD3AC5B33 (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_mF44CBEBC2735A15F1D4FD234D6CC4ECEAD4EA86E (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_mF367A125CC36C51E26E3540653F521CFAEAFA5AB (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * ___value0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m4E086DEDFC3752D1758085F1F452C20E2767011A (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,WebXR.WebXRControllerButton>::.ctor()
inline void Dictionary_2__ctor_m73C02C317A33AA3B9ED2C51B87713020A43064AF (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<WebXR.WebXRData>(System.String)
inline WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * JsonUtility_FromJson_TisWebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6_m1096CC11B29160F1B34837804BE53E8EABF2B5C8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared)(___json0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<WebXR.WebXRManager>()
inline WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * Object_FindObjectOfType_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_mB50B5BED82758AD84CF86C99C7C79EB1FCADCE65 (const RuntimeMethod* method)
{
	return ((  WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<WebXR.WebXRManager>()
inline WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * GameObject_AddComponent_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_m6BA1804DE111115E2F9FC9F8B2353F3DFA1D3CDD (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// UnityEngine.Rendering.GraphicsTier UnityEngine.Graphics::get_activeTier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphics_get_activeTier_mC69EEB666BDB6DD90E0DD89D18179DBB54C25141 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88 (int32_t ___trackingSpaceType0, const RuntimeMethod* method);
// UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C (const RuntimeMethod* method);
// WebXR.WebXRData WebXR.WebXRData::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * WebXRData_CreateFromJSON_m51FD5720A1873D78D69E7835FE637D44CA9AD70D (String_t* ___jsonString0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/ControllerUpdate::Invoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m54AF9720D6DDC040D53D76DAC20ABB710E80037F (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * __this, String_t* ___id0, int32_t ___index1, String_t* ___hand2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttons9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes10, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<WebXRDisplayCapabilities>(System.String)
inline WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * JsonUtility_FromJson_TisWebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450_m08728F46F1EC6FE955CF988B48CD6834C9E2E016 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared)(___json0, method);
}
// System.Void WebXR.WebXRManager::OnXRCapabilities(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnXRCapabilities_mD235A38CD875F6CAB87542D6953923B882713057 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * ___capabilities0, const RuntimeMethod* method);
// System.Void WebXR.WebXRUI::displayXRElementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRUI_displayXRElementId_m0539B343CDEC5BE0878C0F46CF008B3B079D8426 (String_t* ___id0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/XRCapabilitiesUpdate::Invoke(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4B6717272848435E1F5A4F5A084FBB3CD0149687 (XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * __this, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * ___capabilities0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::setXrState(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_setXrState_m4B282B0C3AF978C17783B03186B8FE4BF0F0989F (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/XRChange::Invoke(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_m10C87E67D9CA60162F668FCAAA83499C929DF868 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::ConfigureToggleXRKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ConfigureToggleXRKeyName_mCE0D835CE4989C9222BD724A4D1C445DFEB36CA3 (String_t* ___keyName0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::XRInitSharedArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_XRInitSharedArray_m95B4072638187555C850A91E1663137F7F5335C0 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___length1, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::ListenWebXRData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ListenWebXRData_m1E482A510BEE1B70C6D3226A605FEB2F6F23CC09 (const RuntimeMethod* method);
// System.Void WebXR.WebXRManager::SetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_SetTrackingSpaceType_m9D2166353D4956A1E756036B0A8BE19EDDE2A75C (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method);
// System.Single[] WebXR.WebXRManager::GetFromSharedArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::NumbersToMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, const RuntimeMethod* method);
// System.Void WebXR.WebXRManager/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_m0232FF88B5B71E2FD7274FA3E1149CB3DA8D325A (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
IL2CPP_EXTERN_C void DEFAULT_CALL XRPostRender();
// System.Void WebXR.WebXRCamera::XRPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_XRPostRender_m44257ACA719FA7A02CC4D0058AEFC62CC8F4BF1B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(XRPostRender)();

}
// System.Collections.IEnumerator WebXR.WebXRCamera::endOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebXRCamera_endOfFrame_m87B5C5F8842DCF8695CC26FEE1AE2635196CB6EE (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRCamera_endOfFrame_m87B5C5F8842DCF8695CC26FEE1AE2635196CB6EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * L_0 = (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B *)il2cpp_codegen_object_new(U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B_il2cpp_TypeInfo_var);
		U3CendOfFrameU3Ed__7__ctor_m1DD34171E7328F92D3BFC7A90F801EA216D0B7C1(L_0, 0, /*hidden argument*/NULL);
		U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void WebXR.WebXRCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnEnable_m9F7D42D625415B0A5E43E2590FABC0E7EF6872A3 (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRCamera_OnEnable_m9F7D42D625415B0A5E43E2590FABC0E7EF6872A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.Instance.OnXRChange += onVRChange;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_0 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_1 = (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)il2cpp_codegen_object_new(XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0_il2cpp_TypeInfo_var);
		XRChange__ctor_mC5A3612F56C06C5937C321D01A1C4A83455AA986(L_1, __this, (intptr_t)((intptr_t)WebXRCamera_onVRChange_m6D9C7FCF02319B8D46230E2A471DCFF40020F899_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnXRChange_mE6FD2AB4C4316BB144BADBF0D86B60A2628455C0(L_0, L_1, /*hidden argument*/NULL);
		// WebXRManager.Instance.OnHeadsetUpdate += onHeadsetUpdate;
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_2 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_3 = (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)il2cpp_codegen_object_new(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m30B6C12F3977D4D013D02075F4D4127FBC4C057A(L_3, __this, (intptr_t)((intptr_t)WebXRCamera_onHeadsetUpdate_mE7A962594617623DE2AD6490F1D00435A4127260_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnHeadsetUpdate_mA590144BADEB7CFBF99FDAF37CCA56448AF8C830(L_2, L_3, /*hidden argument*/NULL);
		// cameraMain.transform.localPosition = new Vector3(0, WebXRManager.Instance.DefaultHeight, 0);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = __this->get_cameraMain_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_6 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		float L_7 = L_6->get_DefaultHeight_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_5, L_8, /*hidden argument*/NULL);
		// postRenderCoroutine = StartCoroutine(endOfFrame());
		RuntimeObject* L_9 = WebXRCamera_endOfFrame_m87B5C5F8842DCF8695CC26FEE1AE2635196CB6EE(__this, /*hidden argument*/NULL);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_10 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_9, /*hidden argument*/NULL);
		__this->set_postRenderCoroutine_9(L_10);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnDisable_m9024465D2EEB03D59E6D01885B5A34746D93F089 (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, const RuntimeMethod* method)
{
	{
		// if (postRenderCoroutine != null)
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_0 = __this->get_postRenderCoroutine_9();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(postRenderCoroutine);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_1 = __this->get_postRenderCoroutine_9();
		MonoBehaviour_StopCoroutine_mC465FFA3C386BA22384F7AFA5495FF2286510562(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::onVRChange(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_onVRChange_m6D9C7FCF02319B8D46230E2A471DCFF40020F899 (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// xrActive = state == WebXRState.ENABLED;
		int32_t L_0 = ___state0;
		__this->set_xrActive_7((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (xrActive)
		bool L_1 = __this->get_xrActive_7();
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// cameraMain.enabled = false;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = __this->get_cameraMain_4();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_2, (bool)0, /*hidden argument*/NULL);
		// cameraL.enabled = true;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_cameraL_5();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_3, (bool)1, /*hidden argument*/NULL);
		// cameraR.enabled = true;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = __this->get_cameraR_6();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0037:
	{
		// cameraMain.enabled = true;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = __this->get_cameraMain_4();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)1, /*hidden argument*/NULL);
		// cameraL.enabled = false;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = __this->get_cameraL_5();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_6, (bool)0, /*hidden argument*/NULL);
		// cameraR.enabled = false;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = __this->get_cameraR_6();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::onHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_onHeadsetUpdate_mE7A962594617623DE2AD6490F1D00435A4127260 (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRCamera_onHeadsetUpdate_mE7A962594617623DE2AD6490F1D00435A4127260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (xrActive)
		bool L_0 = __this->get_xrActive_7();
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// WebXRMatrixUtil.SetTransformFromViewMatrix(cameraL.transform, leftViewMatrix * sitStandMatrix.inverse);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_cameraL_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = ___leftViewMatrix2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___sitStandMatrix4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_3, L_4, /*hidden argument*/NULL);
		WebXRMatrixUtil_SetTransformFromViewMatrix_m08E282355CB0D97BE9E5695AD4B7FBDD59816C7E(L_2, L_5, /*hidden argument*/NULL);
		// cameraL.projectionMatrix = leftProjectionMatrix;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = __this->get_cameraL_5();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_7 = ___leftProjectionMatrix0;
		Camera_set_projectionMatrix_mC726156CC9AE07A46297C91212655D836E1C6720(L_6, L_7, /*hidden argument*/NULL);
		// WebXRMatrixUtil.SetTransformFromViewMatrix(cameraR.transform, rightViewMatrix * sitStandMatrix.inverse);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = __this->get_cameraR_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_10 = ___rightViewMatrix3;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_11 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___sitStandMatrix4), /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_10, L_11, /*hidden argument*/NULL);
		WebXRMatrixUtil_SetTransformFromViewMatrix_m08E282355CB0D97BE9E5695AD4B7FBDD59816C7E(L_9, L_12, /*hidden argument*/NULL);
		// cameraR.projectionMatrix = rightProjectionMatrix;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_13 = __this->get_cameraR_6();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = ___rightProjectionMatrix1;
		Camera_set_projectionMatrix_mC726156CC9AE07A46297C91212655D836E1C6720(L_13, L_14, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera__ctor_m309779AFCCC04BE435560C97AA12A4BEAD23E08C (WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRCamera__ctor_m309779AFCCC04BE435560C97AA12A4BEAD23E08C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WaitForEndOfFrame wait = new WaitForEndOfFrame();
		WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * L_0 = (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA *)il2cpp_codegen_object_new(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B(L_0, /*hidden argument*/NULL);
		__this->set_wait_8(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WebXR.WebXRCamera_<endOfFrame>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7__ctor_m1DD34171E7328F92D3BFC7A90F801EA216D0B7C1 (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebXR.WebXRCamera_<endOfFrame>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7_System_IDisposable_Dispose_mEFB62D02445E5ED6C08EDC010C753458235A09AE (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebXR.WebXRCamera_<endOfFrame>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendOfFrameU3Ed__7_MoveNext_m8CE933EC374D2CF31E31630CF2765225DBDBA24B (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0041;
	}

IL_0020:
	{
		// yield return wait;
		WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * L_4 = V_1;
		WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * L_5 = L_4->get_wait_8();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0035:
	{
		__this->set_U3CU3E1__state_0((-1));
		// XRPostRender();
		WebXRCamera_XRPostRender_m44257ACA719FA7A02CC4D0058AEFC62CC8F4BF1B(/*hidden argument*/NULL);
	}

IL_0041:
	{
		// while (enabled)
		WebXRCamera_t7954A74BC9D054D12769C3DDC7470480673A929C * L_6 = V_1;
		bool L_7 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object WebXR.WebXRCamera_<endOfFrame>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendOfFrameU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCAD25745A90D2372FD1ABF825631BC3AE7D50D77 (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera_<endOfFrame>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_m835D7B6EFCEAB45445E6C31D16365BB20882AE86 (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_m835D7B6EFCEAB45445E6C31D16365BB20882AE86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_Reset_m835D7B6EFCEAB45445E6C31D16365BB20882AE86_RuntimeMethod_var);
	}
}
// System.Object WebXR.WebXRCamera_<endOfFrame>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendOfFrameU3Ed__7_System_Collections_IEnumerator_get_Current_m6197D3434458C3FB502C8820CBDF388FD62EBD74 (U3CendOfFrameU3Ed__7_tC8005DD7AA0B5C30BA7C0CB88FEC21B8EB18F13B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_m509334291D6F6588F749C1E4D9A453D92CD21929 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttons0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_UpdateButtons_m509334291D6F6588F749C1E4D9A453D92CD21929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * V_1 = NULL;
	Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// for (int i = 0; i < buttons.Length; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0004:
	{
		// WebXRControllerButton button = buttons[i];
		WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* L_0 = ___buttons0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// foreach (var input in inputMap.inputs)
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_4 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_5 = L_4->get_inputs_4();
		Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  L_6 = List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD(L_5, /*hidden argument*/List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_001b:
		{
			// foreach (var input in inputMap.inputs)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_7 = Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_inline((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_2), /*hidden argument*/Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_RuntimeMethod_var);
			V_3 = L_7;
			// if (input.gamepadId == i)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_8 = V_3;
			int32_t L_9 = L_8->get_gamepadId_1();
			int32_t L_10 = V_0;
			if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
			{
				goto IL_0044;
			}
		}

IL_002c:
		{
			// SetButtonState(input.actionName, button.pressed, button.value);
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_11 = V_3;
			String_t* L_12 = L_11->get_actionName_0();
			WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_13 = V_1;
			bool L_14 = L_13->get_pressed_0();
			WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_15 = V_1;
			float L_16 = L_15->get_value_3();
			WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC(__this, L_12, L_14, L_16, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// foreach (var input in inputMap.inputs)
			bool L_17 = Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_001b;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_2), /*hidden argument*/Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_19 = V_0;
		WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* L_20 = ___buttons0;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single WebXR.WebXRController::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxis_mE5335C3F5E5728AC4C3C5BA495149F0659E71155 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_GetAxis_mE5335C3F5E5728AC4C3C5BA495149F0659E71155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * V_1 = NULL;
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		V_0 = 0;
		goto IL_007a;
	}

IL_0004:
	{
		// WebXRControllerInput input = inputMap.inputs[i];
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_0 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_1 = L_0->get_inputs_4();
		int32_t L_2 = V_0;
		WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_3 = List_1_get_Item_m885FCA9322FD4883780481FFB4987A986FD3F5B2_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m885FCA9322FD4883780481FFB4987A986FD3F5B2_RuntimeMethod_var);
		V_1 = L_3;
		// if (action == input.actionName)
		String_t* L_4 = ___action0;
		WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_5 = V_1;
		String_t* L_6 = L_5->get_actionName_0();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// if (XRDevice.isPresent && !input.unityInputIsButton)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_8 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_9 = V_1;
		bool L_10 = L_9->get_unityInputIsButton_4();
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		// return Input.GetAxis(input.unityInputName);
		WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_11 = V_1;
		String_t* L_12 = L_11->get_unityInputName_3();
		float L_13 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_003f:
	{
		// if (!input.gamepadIsButton) return axes[i];
		WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_14 = V_1;
		bool L_15 = L_14->get_gamepadIsButton_2();
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		// if (!input.gamepadIsButton) return axes[i];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_16 = __this->get_axes_10();
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		return L_19;
	}

IL_0050:
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_20 = __this->get_buttonStates_15();
		String_t* L_21 = ___action0;
		bool L_22 = Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7(L_20, L_21, /*hidden argument*/Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_0064;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0064:
	{
		// return buttonStates[action].value;
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_23 = __this->get_buttonStates_15();
		String_t* L_24 = ___action0;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_25 = Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F(L_23, L_24, /*hidden argument*/Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var);
		float L_26 = L_25->get_value_3();
		return L_26;
	}

IL_0076:
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007a:
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		int32_t L_28 = V_0;
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_29 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_30 = L_29->get_inputs_4();
		int32_t L_31 = List_1_get_Count_mB707D5C4AE48D6CF70E3CA392B0124B032721CC2_inline(L_30, /*hidden argument*/List_1_get_Count_mB707D5C4AE48D6CF70E3CA392B0124B032721CC2_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return (0.0f);
	}
}
// System.Boolean WebXR.WebXRController::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m0D2F9BD5610A27F3DD7D8488C890191A031803D6 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_GetButton_m0D2F9BD5610A27F3DD7D8488C890191A031803D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_1 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_2 = L_1->get_inputs_4();
		Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  L_3 = List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD(L_2, /*hidden argument*/List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001a:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_4 = Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_inline((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_RuntimeMethod_var);
			V_1 = L_4;
			// if (action == input.actionName && input.unityInputIsButton)
			String_t* L_5 = ___action0;
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_6 = V_1;
			String_t* L_7 = L_6->get_actionName_0();
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_9 = V_1;
			bool L_10 = L_9->get_unityInputIsButton_4();
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_0038:
		{
			// return Input.GetButton(input.unityInputName);
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_11 = V_1;
			String_t* L_12 = L_11->get_unityInputName_3();
			bool L_13 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			IL2CPP_LEAVE(0x81, FINALLY_0051);
		}

IL_0046:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			bool L_14 = Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		// return buttonStates.ContainsKey(action) && buttonStates[action].pressed;
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_15 = __this->get_buttonStates_15();
		String_t* L_16 = ___action0;
		bool L_17 = Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_18 = __this->get_buttonStates_15();
		String_t* L_19 = ___action0;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_20 = Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var);
		bool L_21 = L_20->get_pressed_0();
		return L_21;
	}

IL_007f:
	{
		return (bool)0;
	}

IL_0081:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Boolean WebXR.WebXRController::GetPastButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetPastButtonState_mB5CC031A8D0FDC962F0973403666D77FA24F4CAE (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_GetPastButtonState_mB5CC031A8D0FDC962F0973403666D77FA24F4CAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return buttonStates.ContainsKey(action) && buttonStates[action].prevPressedState;
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_0 = __this->get_buttonStates_15();
		String_t* L_1 = ___action0;
		bool L_2 = Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_3 = __this->get_buttonStates_15();
		String_t* L_4 = ___action0;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_5 = Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var);
		bool L_6 = L_5->get_prevPressedState_1();
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Void WebXR.WebXRController::SetButtonState(System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonStates.ContainsKey(action))
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_0 = __this->get_buttonStates_15();
		String_t* L_1 = ___action0;
		bool L_2 = Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// buttonStates[action].pressed = isPressed;
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_3 = __this->get_buttonStates_15();
		String_t* L_4 = ___action0;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_5 = Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var);
		bool L_6 = ___isPressed1;
		L_5->set_pressed_0(L_6);
		// buttonStates[action].value = value;
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_7 = __this->get_buttonStates_15();
		String_t* L_8 = ___action0;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_9 = Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var);
		float L_10 = ___value2;
		L_9->set_value_3(L_10);
		// }
		return;
	}

IL_0033:
	{
		// buttonStates.Add(action, new WebXRControllerButton(isPressed, value));
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_11 = __this->get_buttonStates_15();
		String_t* L_12 = ___action0;
		bool L_13 = ___isPressed1;
		float L_14 = ___value2;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_15 = (WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 *)il2cpp_codegen_object_new(WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m136E173B4B96C87EC607E487AA64A6D6D6BC534E(L_15, L_13, L_14, /*hidden argument*/NULL);
		Dictionary_2_Add_mF4EB8357DFD11365DE557E668A58383E7B54699C(L_11, L_12, L_15, /*hidden argument*/Dictionary_2_Add_mF4EB8357DFD11365DE557E668A58383E7B54699C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetPastButtonState(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetPastButtonState_m89C2E4BBF033D4CD5CC037678AC0F8DC0E44AD24 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, bool ___isPressed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_SetPastButtonState_m89C2E4BBF033D4CD5CC037678AC0F8DC0E44AD24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_0 = __this->get_buttonStates_15();
		String_t* L_1 = ___action0;
		bool L_2 = Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE52A325FD020185E2FF4A88BE7CA819EC92CF1E7_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// buttonStates[action].prevPressedState = isPressed;
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_3 = __this->get_buttonStates_15();
		String_t* L_4 = ___action0;
		WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * L_5 = Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m6754B3B19F18D7ACA09683D8C748E7A6E199079F_RuntimeMethod_var);
		bool L_6 = ___isPressed1;
		L_5->set_prevPressedState_1(L_6);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonDown_mD83FD2CBAE588B3A089E0ABABDA62E809FA78DF2 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_GetButtonDown_mD83FD2CBAE588B3A089E0ABABDA62E809FA78DF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_1 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_2 = L_1->get_inputs_4();
		Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  L_3 = List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD(L_2, /*hidden argument*/List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001a:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_4 = Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_inline((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_RuntimeMethod_var);
			V_1 = L_4;
			// if (action == input.actionName && input.unityInputIsButton)
			String_t* L_5 = ___action0;
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_6 = V_1;
			String_t* L_7 = L_6->get_actionName_0();
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_9 = V_1;
			bool L_10 = L_9->get_unityInputIsButton_4();
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_0038:
		{
			// return Input.GetButtonDown(input.unityInputName);
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_11 = V_1;
			String_t* L_12 = L_11->get_unityInputName_3();
			bool L_13 = Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0051);
		}

IL_0046:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			bool L_14 = Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		// if (GetButton(action) && !GetPastButtonState(action))
		String_t* L_15 = ___action0;
		bool L_16 = WebXRController_GetButton_m0D2F9BD5610A27F3DD7D8488C890191A031803D6(__this, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = ___action0;
		bool L_18 = WebXRController_GetPastButtonState_mB5CC031A8D0FDC962F0973403666D77FA24F4CAE(__this, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007b;
		}
	}
	{
		// SetPastButtonState(action, true);
		String_t* L_19 = ___action0;
		WebXRController_SetPastButtonState_m89C2E4BBF033D4CD5CC037678AC0F8DC0E44AD24(__this, L_19, (bool)1, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonUp_m8C1E34FEB06DFB0D829A934B4FBEF64EDDA78027 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_GetButtonUp_m8C1E34FEB06DFB0D829A934B4FBEF64EDDA78027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_1 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_2 = L_1->get_inputs_4();
		Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  L_3 = List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD(L_2, /*hidden argument*/List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001a:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_4 = Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_inline((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_RuntimeMethod_var);
			V_1 = L_4;
			// if (action == input.actionName && input.unityInputIsButton)
			String_t* L_5 = ___action0;
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_6 = V_1;
			String_t* L_7 = L_6->get_actionName_0();
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_9 = V_1;
			bool L_10 = L_9->get_unityInputIsButton_4();
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_0038:
		{
			// return Input.GetButtonUp(input.unityInputName);
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_11 = V_1;
			String_t* L_12 = L_11->get_unityInputName_3();
			bool L_13 = Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0051);
		}

IL_0046:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			bool L_14 = Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		// if (!GetButton(action) && GetPastButtonState(action))
		String_t* L_15 = ___action0;
		bool L_16 = WebXRController_GetButton_m0D2F9BD5610A27F3DD7D8488C890191A031803D6(__this, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = ___action0;
		bool L_18 = WebXRController_GetPastButtonState_mB5CC031A8D0FDC962F0973403666D77FA24F4CAE(__this, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// SetPastButtonState(action, false);
		String_t* L_19 = ___action0;
		WebXRController_SetPastButtonState_m89C2E4BBF033D4CD5CC037678AC0F8DC0E44AD24(__this, L_19, (bool)0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Void WebXR.WebXRController::onHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_onHeadsetUpdate_mC8ACBA7C2DBF70F7C6B00184C9B45117456C22B3 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix4x4 trs = WebXRMatrixUtil.TransformViewMatrixToTRS(leftViewMatrix);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___leftViewMatrix2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = WebXRMatrixUtil_TransformViewMatrixToTRS_m5CDEEBCC8ACC53127D1F23C2DB195C4D6796E1A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// this.headRotation = WebXRMatrixUtil.GetRotationFromMatrix(trs);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = WebXRMatrixUtil_GetRotationFromMatrix_m517B69AACA12A9AC3E090D7BFA507648E6D67CDF(L_2, /*hidden argument*/NULL);
		__this->set_headRotation_12(L_3);
		// this.headPosition = WebXRMatrixUtil.GetTranslationFromMatrix(trs);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = WebXRMatrixUtil_GetTranslationFromMatrix_m47B8A0022A3576F073ABDDEFDCA845B462CEB3C9(L_4, /*hidden argument*/NULL);
		__this->set_headPosition_13(L_5);
		// this.sitStand = sitStandMatrix;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_6 = ___sitStandMatrix4;
		__this->set_sitStand_9(L_6);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::onControllerUpdate(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_onControllerUpdate_m70F8D5BA88FC5673F7C673323974465ECD4AA241 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___id0, int32_t ___index1, String_t* ___handValue2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttonValues9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axesValues10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_onControllerUpdate_m70F8D5BA88FC5673F7C673323974465ECD4AA241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (handFromString(handValue) != hand) return;
		String_t* L_0 = ___handValue2;
		int32_t L_1 = WebXRController_handFromString_mF75B438CAE5292A76C4DE2E3F41BD37381F26ACF(__this, L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_hand_4();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// if (handFromString(handValue) != hand) return;
		return;
	}

IL_0010:
	{
		// SetVisible(true);
		WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF(__this, (bool)1, /*hidden argument*/NULL);
		// Quaternion sitStandRotation = WebXRMatrixUtil.GetRotationFromMatrix(sitStand);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = __this->get_sitStand_9();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = WebXRMatrixUtil_GetRotationFromMatrix_m517B69AACA12A9AC3E090D7BFA507648E6D67CDF(L_3, /*hidden argument*/NULL);
		// Quaternion rotation = sitStandRotation * orientation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___orientation5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (!hasPosition || simulate3dof)
		bool L_7 = ___hasPosition4;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		bool L_8 = __this->get_simulate3dof_6();
		if (!L_8)
		{
			goto IL_0058;
		}
	}

IL_0036:
	{
		// position = applyArmModel(
		//     sitStand.MultiplyPoint(headPosition),
		//     rotation,
		//     headRotation);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_9 = __this->get_address_of_sitStand_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_headPosition_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_9, L_10, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_headRotation_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = WebXRController_applyArmModel_m465BB6347F8A9054D1EFB0C9209157A1CE691350(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		___position6 = L_14;
		// }
		goto IL_0067;
	}

IL_0058:
	{
		// position = sitStand.MultiplyPoint(position);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_15 = __this->get_address_of_sitStand_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___position6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_15, L_16, /*hidden argument*/NULL);
		___position6 = L_17;
	}

IL_0067:
	{
		// _t.localPosition = position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get__t_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___position6;
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_18, L_19, /*hidden argument*/NULL);
		// _t.localRotation = rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get__t_14();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_0;
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_20, L_21, /*hidden argument*/NULL);
		// UpdateButtons(buttonValues);
		WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* L_22 = ___buttonValues9;
		WebXRController_UpdateButtons_m509334291D6F6588F749C1E4D9A453D92CD21929(__this, L_22, /*hidden argument*/NULL);
		// axes = axesValues;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = ___axesValues10;
		__this->set_axes_10(L_23);
		// }
		return;
	}
}
// WebXR.WebXRControllerHand WebXR.WebXRController::handFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRController_handFromString_mF75B438CAE5292A76C4DE2E3F41BD37381F26ACF (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, String_t* ___handValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_handFromString_mF75B438CAE5292A76C4DE2E3F41BD37381F26ACF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (String.IsNullOrEmpty(handValue)) return WebXRControllerHand.NONE;
		String_t* L_0 = ___handValue0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (String.IsNullOrEmpty(handValue)) return WebXRControllerHand.NONE;
		return (int32_t)(0);
	}

IL_000a:
	{
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		// return (WebXRControllerHand) Enum.Parse(typeof(WebXRControllerHand), handValue.ToUpper(), true);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (WebXRControllerHand_t2545D765C3C8E33095B4C531D1F36FFD5023CC91_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___handValue0;
		String_t* L_5 = String_ToUpper_m23D019B7C5EF2C5C01F524EB8137A424B33EEFE2(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7(L_3, L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_6, WebXRControllerHand_t2545D765C3C8E33095B4C531D1F36FFD5023CC91_il2cpp_TypeInfo_var))));
		goto IL_0043;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Object)
		// catch
		// Debug.LogError("Unrecognized controller Hand '" + handValue + "'!");
		String_t* L_7 = ___handValue0;
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral53638E6DFFA5AA74D1039CF360168401159B2942, L_7, _stringLiteral2654F5CCEAF52997DFCFCED105D22EF40DEF62CC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_8, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		// return WebXRControllerHand.NONE;
		return (int32_t)(0);
	}

IL_0043:
	{
		// }
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void WebXR.WebXRController::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Renderer[] rendererComponents = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var);
		// foreach (Renderer component in rendererComponents)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Renderer component in rendererComponents)
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// component.enabled = visible;
		bool L_5 = ___visible0;
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (Renderer component in rendererComponents)
		int32_t L_7 = V_1;
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WebXR.WebXRController::applyArmModel(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebXRController_applyArmModel_m465BB6347F8A9054D1EFB0C9209157A1CE691350 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___controllerPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___controllerRotation1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___headRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_applyArmModel_m465BB6347F8A9054D1EFB0C9209157A1CE691350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B4_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B4_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B3_1 = NULL;
	float G_B2_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	float G_B5_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B5_2 = NULL;
	{
		// Vector3 deltaControllerPosition = new Vector3(
		//     this.eyesToElbow.x * (this.hand == WebXRControllerHand.LEFT ? -1 :
		//         this.hand == WebXRControllerHand.RIGHT ? 1 : 0),
		//     this.eyesToElbow.y,
		//     this.eyesToElbow.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_eyesToElbow_7();
		float L_1 = L_0->get_x_2();
		int32_t L_2 = __this->get_hand_4();
		G_B1_0 = L_1;
		G_B1_1 = (&V_0);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B4_0 = L_1;
			G_B4_1 = (&V_0);
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = __this->get_hand_4();
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_0022;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B2_0;
		G_B5_2 = G_B2_1;
		goto IL_0026;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0026:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_eyesToElbow_7();
		float L_5 = L_4->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_eyesToElbow_7();
		float L_7 = L_6->get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)G_B5_2, ((float)il2cpp_codegen_multiply((float)G_B5_1, (float)(((float)((float)G_B5_0))))), L_5, L_7, /*hidden argument*/NULL);
		// Quaternion headYRotation = Quaternion.Euler(0, headRotation.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___headRotation2), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_9, (0.0f), /*hidden argument*/NULL);
		// deltaControllerPosition = (headYRotation * deltaControllerPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// controllerPosition += deltaControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___controllerPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		___controllerPosition0 = L_15;
		// deltaControllerPosition.Set(this.elbowHand.x, this.elbowHand.y, this.elbowHand.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = __this->get_address_of_elbowHand_8();
		float L_17 = L_16->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_18 = __this->get_address_of_elbowHand_8();
		float L_19 = L_18->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_20 = __this->get_address_of_elbowHand_8();
		float L_21 = L_20->get_z_4();
		Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), L_17, L_19, L_21, /*hidden argument*/NULL);
		// deltaControllerPosition =
		//     Quaternion.Euler(controllerRotation.eulerAngles.x, controllerRotation.eulerAngles.y, 0) *
		//     deltaControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___controllerRotation1), /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___controllerRotation1), /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_23, L_25, (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// controllerPosition += deltaControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = ___controllerPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_30, /*hidden argument*/NULL);
		___controllerPosition0 = L_31;
		// return controllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = ___controllerPosition0;
		return L_32;
	}
}
// System.Void WebXR.WebXRController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Update_m8E4476E0EE90C2130B2FCC5F13F116F22035EEEF (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_Update_m8E4476E0EE90C2130B2FCC5F13F116F22035EEEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!XRDevice.isPresent) return;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!XRDevice.isPresent) return;
		return;
	}

IL_0008:
	{
		// SetVisible(true);
		WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF(__this, (bool)1, /*hidden argument*/NULL);
		// if (this.hand == WebXRControllerHand.LEFT)
		int32_t L_1 = __this->get_hand_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		// handNode = XRNode.LeftHand;
		__this->set_handNode_11(4);
	}

IL_001f:
	{
		// if (this.hand == WebXRControllerHand.RIGHT)
		int32_t L_2 = __this->get_hand_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}
	{
		// handNode = XRNode.RightHand;
		__this->set_handNode_11(5);
	}

IL_002f:
	{
		// if (this.simulate3dof)
		bool L_3 = __this->get_simulate3dof_6();
		if (!L_3)
		{
			goto IL_0077;
		}
	}
	{
		// _t.localPosition = applyArmModel(
		//     InputTracking.GetLocalPosition(XRNode.Head), // we use head position as origin
		//     InputTracking.GetLocalRotation(handNode),
		//     InputTracking.GetLocalRotation(XRNode.Head));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get__t_14();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = InputTracking_GetLocalPosition_m80215BCA93D0DA3C9A14F75D3F13197FB6757305(3, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_handNode_11();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = WebXRController_applyArmModel_m465BB6347F8A9054D1EFB0C9209157A1CE691350(__this, L_5, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_4, L_9, /*hidden argument*/NULL);
		// _t.localRotation = InputTracking.GetLocalRotation(handNode);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get__t_14();
		int32_t L_11 = __this->get_handNode_11();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(L_11, /*hidden argument*/NULL);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_10, L_12, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	}

IL_0077:
	{
		// _t.localPosition = InputTracking.GetLocalPosition(handNode);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get__t_14();
		int32_t L_14 = __this->get_handNode_11();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = InputTracking_GetLocalPosition_m80215BCA93D0DA3C9A14F75D3F13197FB6757305(L_14, /*hidden argument*/NULL);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_13, L_15, /*hidden argument*/NULL);
		// _t.localRotation = InputTracking.GetLocalRotation(handNode);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get__t_14();
		int32_t L_17 = __this->get_handNode_11();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(L_17, /*hidden argument*/NULL);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_16, L_18, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// foreach (WebXRControllerInput input in inputMap.inputs)
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_19 = __this->get_inputMap_5();
		List_1_tC87AD10A0D98A2926DAD7BD78B5814D7A4C12EAD * L_20 = L_19->get_inputs_4();
		Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A  L_21 = List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD(L_20, /*hidden argument*/List_1_GetEnumerator_m4C82B8C0275933947881AC41B6C05B77407EAEBD_RuntimeMethod_var);
		V_0 = L_21;
	}

IL_00b4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011a;
		}

IL_00b6:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_22 = Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_inline((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAB7AFB4663E36A680E0C569FF58BFE2274AC7780_RuntimeMethod_var);
			V_1 = L_22;
			// if (!input.unityInputIsButton)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_23 = V_1;
			bool L_24 = L_23->get_unityInputIsButton_4();
			if (L_24)
			{
				goto IL_011a;
			}
		}

IL_00c6:
		{
			// if (Input.GetAxis(input.unityInputName) != 0)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_25 = V_1;
			String_t* L_26 = L_25->get_unityInputName_3();
			float L_27 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_26, /*hidden argument*/NULL);
			if ((((float)L_27) == ((float)(0.0f))))
			{
				goto IL_00f0;
			}
		}

IL_00d8:
		{
			// SetButtonState(input.actionName, true, Input.GetAxis(input.unityInputName));
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_28 = V_1;
			String_t* L_29 = L_28->get_actionName_0();
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_30 = V_1;
			String_t* L_31 = L_30->get_unityInputName_3();
			float L_32 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_31, /*hidden argument*/NULL);
			WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC(__this, L_29, (bool)1, L_32, /*hidden argument*/NULL);
		}

IL_00f0:
		{
			// if (Input.GetAxis(input.unityInputName) < 1)
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_33 = V_1;
			String_t* L_34 = L_33->get_unityInputName_3();
			float L_35 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_34, /*hidden argument*/NULL);
			if ((!(((float)L_35) < ((float)(1.0f)))))
			{
				goto IL_011a;
			}
		}

IL_0102:
		{
			// SetButtonState(input.actionName, false, Input.GetAxis(input.unityInputName));
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_36 = V_1;
			String_t* L_37 = L_36->get_actionName_0();
			WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * L_38 = V_1;
			String_t* L_39 = L_38->get_unityInputName_3();
			float L_40 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_39, /*hidden argument*/NULL);
			WebXRController_SetButtonState_m1D42CAF826FC0890F51B59468BACC87C6C1B10AC(__this, L_37, (bool)0, L_40, /*hidden argument*/NULL);
		}

IL_011a:
		{
			// foreach (WebXRControllerInput input in inputMap.inputs)
			bool L_41 = Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB2E0D78712605F9A12E314893AB6333C40692F73_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_00b6;
			}
		}

IL_0123:
		{
			IL2CPP_LEAVE(0x133, FINALLY_0125);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0125;
	}

FINALLY_0125:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D((Enumerator_t9BC4542DAA300A531B0D81A3D1775235621AC40A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m502D2F50D70A87D51E9C15531CCDA959710E844D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(293)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(293)
	{
		IL2CPP_JUMP_TBL(0x133, IL_0133)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Awake_m0F4E4A5A90301C3097FA9510ADF6938DB6AFC352 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, const RuntimeMethod* method)
{
	{
		// _t = transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		__this->set__t_14(L_0);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnEnable_m254B106311975220B6E49DE419E41B72F00A7C0D (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_OnEnable_m254B106311975220B6E49DE419E41B72F00A7C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputMap == null)
		WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * L_0 = __this->get_inputMap_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("A Input Map must be assigned to WebXRController!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral354DC7FAA21872E1924302A69CAD9AC196468506, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// WebXRManager.Instance.OnControllerUpdate += onControllerUpdate;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_2 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_3 = (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)il2cpp_codegen_object_new(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_m6E4DE508DEFF7BF9D75EF386891E1BEBD3AC5B33(L_3, __this, (intptr_t)((intptr_t)WebXRController_onControllerUpdate_m70F8D5BA88FC5673F7C673323974465ECD4AA241_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnControllerUpdate_mF44CBEBC2735A15F1D4FD234D6CC4ECEAD4EA86E(L_2, L_3, /*hidden argument*/NULL);
		// WebXRManager.Instance.OnHeadsetUpdate += onHeadsetUpdate;
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_4 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_5 = (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)il2cpp_codegen_object_new(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m30B6C12F3977D4D013D02075F4D4127FBC4C057A(L_5, __this, (intptr_t)((intptr_t)WebXRController_onHeadsetUpdate_mC8ACBA7C2DBF70F7C6B00184C9B45117456C22B3_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_add_OnHeadsetUpdate_mA590144BADEB7CFBF99FDAF37CCA56448AF8C830(L_4, L_5, /*hidden argument*/NULL);
		// SetVisible(false);
		WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnDisable_m6603483CA99C7DCD904ED301C676511FCF73DE31 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController_OnDisable_m6603483CA99C7DCD904ED301C676511FCF73DE31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.Instance.OnControllerUpdate -= onControllerUpdate;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_0 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_1 = (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)il2cpp_codegen_object_new(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_m6E4DE508DEFF7BF9D75EF386891E1BEBD3AC5B33(L_1, __this, (intptr_t)((intptr_t)WebXRController_onControllerUpdate_m70F8D5BA88FC5673F7C673323974465ECD4AA241_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_remove_OnControllerUpdate_mF367A125CC36C51E26E3540653F521CFAEAFA5AB(L_0, L_1, /*hidden argument*/NULL);
		// WebXRManager.Instance.OnHeadsetUpdate -= onHeadsetUpdate;
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_2 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_3 = (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)il2cpp_codegen_object_new(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m30B6C12F3977D4D013D02075F4D4127FBC4C057A(L_3, __this, (intptr_t)((intptr_t)WebXRController_onHeadsetUpdate_mC8ACBA7C2DBF70F7C6B00184C9B45117456C22B3_RuntimeMethod_var), /*hidden argument*/NULL);
		WebXRManager_remove_OnHeadsetUpdate_m4E086DEDFC3752D1758085F1F452C20E2767011A(L_2, L_3, /*hidden argument*/NULL);
		// SetVisible(false);
		WebXRController_SetVisible_m5F2F640622394924CFAC325E79E43187BD0E18CF(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController__ctor_m0334257C1839128B27822E6A65A4BD820CB68A58 (WebXRController_tF8DAED1EC48E5AD4DECA8059E1049C6CD4329214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRController__ctor_m0334257C1839128B27822E6A65A4BD820CB68A58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Tooltip("Vector from head to elbow")] public Vector3 eyesToElbow = new Vector3(0.1f, -0.4f, 0.15f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (-0.4f), (0.15f), /*hidden argument*/NULL);
		__this->set_eyesToElbow_7(L_0);
		// [Tooltip("Vector from elbow to hand")] public Vector3 elbowHand = new Vector3(0, 0, 0.25f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (0.25f), /*hidden argument*/NULL);
		__this->set_elbowHand_8(L_1);
		// private Dictionary<string, WebXRControllerButton>
		//     buttonStates = new Dictionary<string, WebXRControllerButton>();
		Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 * L_2 = (Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7 *)il2cpp_codegen_object_new(Dictionary_2_tB48B48018DF79089A3ECB440B1A5D8E7B5DD80D7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m73C02C317A33AA3B9ED2C51B87713020A43064AF(L_2, /*hidden argument*/Dictionary_2__ctor_m73C02C317A33AA3B9ED2C51B87713020A43064AF_RuntimeMethod_var);
		__this->set_buttonStates_15(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m136E173B4B96C87EC607E487AA64A6D6D6BC534E (WebXRControllerButton_t6BDBECDB1A38831A7D744DEEC4FC4C570AE4AE62 * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method)
{
	{
		// public WebXRControllerButton(bool isPressed, float buttonValue)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// pressed = isPressed;
		bool L_0 = ___isPressed0;
		__this->set_pressed_0(L_0);
		// prevPressedState = false;
		__this->set_prevPressedState_1((bool)0);
		// value = buttonValue;
		float L_1 = ___buttonValue1;
		__this->set_value_3(L_1);
		// }
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
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m66864272D81C623782E47C20A894FF37AA5E9226 (WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRControllerData__ctor_m66864272D81C623782E47C20A894FF37AA5E9226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRControllerButton[] buttons = new WebXRControllerButton[0];
		WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* L_0 = (WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*)(WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*)SZArrayNew(WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_buttons_10(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void WebXR.WebXRControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerInput__ctor_mDD7B96794E9C9FD15138FD7DE6EDD0DBBBB62BDE (WebXRControllerInput_t27D4A68A41425D200E7145D48D0546AA2AAA602C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void WebXR.WebXRControllerInputMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerInputMap__ctor_m35205B533A2E9E4B7818251848B7879A1A7FD46C (WebXRControllerInputMap_t6C0344348AD2FA7645A679650A47069383F89B3B * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// WebXR.WebXRData WebXR.WebXRData::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * WebXRData_CreateFromJSON_m51FD5720A1873D78D69E7835FE637D44CA9AD70D (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRData_CreateFromJSON_m51FD5720A1873D78D69E7835FE637D44CA9AD70D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<WebXRData>(jsonString);
		String_t* L_0 = ___jsonString0;
		WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * L_1 = JsonUtility_FromJson_TisWebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6_m1096CC11B29160F1B34837804BE53E8EABF2B5C8(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6_m1096CC11B29160F1B34837804BE53E8EABF2B5C8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void WebXR.WebXRData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRData__ctor_mC9AA4A498679F6087E88C19BD78191161B67CBAF (WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRData__ctor_mC9AA4A498679F6087E88C19BD78191161B67CBAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRControllerData[] controllers = new WebXRControllerData[0];
		WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* L_0 = (WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD*)(WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD*)SZArrayNew(WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_controllers_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void WebXR.WebXRManager::add_OnXRCapabilitiesUpdate(WebXR.WebXRManager_XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRCapabilitiesUpdate_m5EEAEE3D5B5E2CCA5D045D0AC9D7B2EA83280306 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_add_OnXRCapabilitiesUpdate_m5EEAEE3D5B5E2CCA5D045D0AC9D7B2EA83280306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * V_0 = NULL;
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * V_1 = NULL;
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * V_2 = NULL;
	{
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_0 = __this->get_OnXRCapabilitiesUpdate_11();
		V_0 = L_0;
	}

IL_0007:
	{
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_2 = V_1;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E ** L_5 = __this->get_address_of_OnXRCapabilitiesUpdate_11();
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_6 = V_2;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_7 = V_1;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_8 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *>((XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E **)L_5, L_6, L_7);
		V_0 = L_8;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_9 = V_0;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_10 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *)L_9) == ((RuntimeObject*)(XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRCapabilitiesUpdate(WebXR.WebXRManager_XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRCapabilitiesUpdate_mA6EBFD41AEC0FC29848ACFF17C97FBA57FED06C0 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_remove_OnXRCapabilitiesUpdate_mA6EBFD41AEC0FC29848ACFF17C97FBA57FED06C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * V_0 = NULL;
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * V_1 = NULL;
	XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * V_2 = NULL;
	{
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_0 = __this->get_OnXRCapabilitiesUpdate_11();
		V_0 = L_0;
	}

IL_0007:
	{
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_2 = V_1;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E ** L_5 = __this->get_address_of_OnXRCapabilitiesUpdate_11();
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_6 = V_2;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_7 = V_1;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_8 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *>((XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E **)L_5, L_6, L_7);
		V_0 = L_8;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_9 = V_0;
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_10 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *)L_9) == ((RuntimeObject*)(XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRManager_XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_mE6FD2AB4C4316BB144BADBF0D86B60A2628455C0 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_add_OnXRChange_mE6FD2AB4C4316BB144BADBF0D86B60A2628455C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * V_0 = NULL;
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * V_1 = NULL;
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * V_2 = NULL;
	{
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_0 = __this->get_OnXRChange_12();
		V_0 = L_0;
	}

IL_0007:
	{
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_1 = V_0;
		V_1 = L_1;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_2 = V_1;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)CastclassSealed((RuntimeObject*)L_4, XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0_il2cpp_TypeInfo_var));
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 ** L_5 = __this->get_address_of_OnXRChange_12();
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_6 = V_2;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_7 = V_1;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_8 = InterlockedCompareExchangeImpl<XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *>((XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 **)L_5, L_6, L_7);
		V_0 = L_8;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_9 = V_0;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)L_9) == ((RuntimeObject*)(XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRManager_XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m9549C3FA4FCE99DA9BF5E31492B91F20416CA187 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_remove_OnXRChange_m9549C3FA4FCE99DA9BF5E31492B91F20416CA187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * V_0 = NULL;
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * V_1 = NULL;
	XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * V_2 = NULL;
	{
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_0 = __this->get_OnXRChange_12();
		V_0 = L_0;
	}

IL_0007:
	{
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_1 = V_0;
		V_1 = L_1;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_2 = V_1;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)CastclassSealed((RuntimeObject*)L_4, XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0_il2cpp_TypeInfo_var));
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 ** L_5 = __this->get_address_of_OnXRChange_12();
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_6 = V_2;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_7 = V_1;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_8 = InterlockedCompareExchangeImpl<XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *>((XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 **)L_5, L_6, L_7);
		V_0 = L_8;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_9 = V_0;
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)L_9) == ((RuntimeObject*)(XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRManager_HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mA590144BADEB7CFBF99FDAF37CCA56448AF8C830 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_add_OnHeadsetUpdate_mA590144BADEB7CFBF99FDAF37CCA56448AF8C830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * V_0 = NULL;
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * V_1 = NULL;
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * V_2 = NULL;
	{
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_0 = __this->get_OnHeadsetUpdate_13();
		V_0 = L_0;
	}

IL_0007:
	{
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_2 = V_1;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7_il2cpp_TypeInfo_var));
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 ** L_5 = __this->get_address_of_OnHeadsetUpdate_13();
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_6 = V_2;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_7 = V_1;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_8 = InterlockedCompareExchangeImpl<HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *>((HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 **)L_5, L_6, L_7);
		V_0 = L_8;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_9 = V_0;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)L_9) == ((RuntimeObject*)(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRManager_HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m4E086DEDFC3752D1758085F1F452C20E2767011A (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_remove_OnHeadsetUpdate_m4E086DEDFC3752D1758085F1F452C20E2767011A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * V_0 = NULL;
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * V_1 = NULL;
	HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * V_2 = NULL;
	{
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_0 = __this->get_OnHeadsetUpdate_13();
		V_0 = L_0;
	}

IL_0007:
	{
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_2 = V_1;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7_il2cpp_TypeInfo_var));
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 ** L_5 = __this->get_address_of_OnHeadsetUpdate_13();
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_6 = V_2;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_7 = V_1;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_8 = InterlockedCompareExchangeImpl<HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *>((HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 **)L_5, L_6, L_7);
		V_0 = L_8;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_9 = V_0;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)L_9) == ((RuntimeObject*)(HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRManager_ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_mF44CBEBC2735A15F1D4FD234D6CC4ECEAD4EA86E (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_add_OnControllerUpdate_mF44CBEBC2735A15F1D4FD234D6CC4ECEAD4EA86E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * V_0 = NULL;
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * V_1 = NULL;
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * V_2 = NULL;
	{
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_0 = __this->get_OnControllerUpdate_14();
		V_0 = L_0;
	}

IL_0007:
	{
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_2 = V_1;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7_il2cpp_TypeInfo_var));
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 ** L_5 = __this->get_address_of_OnControllerUpdate_14();
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_6 = V_2;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_7 = V_1;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_8 = InterlockedCompareExchangeImpl<ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *>((ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 **)L_5, L_6, L_7);
		V_0 = L_8;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_9 = V_0;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)L_9) == ((RuntimeObject*)(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRManager_ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_mF367A125CC36C51E26E3540653F521CFAEAFA5AB (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_remove_OnControllerUpdate_mF367A125CC36C51E26E3540653F521CFAEAFA5AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * V_0 = NULL;
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * V_1 = NULL;
	ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * V_2 = NULL;
	{
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_0 = __this->get_OnControllerUpdate_14();
		V_0 = L_0;
	}

IL_0007:
	{
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_2 = V_1;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7_il2cpp_TypeInfo_var));
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 ** L_5 = __this->get_address_of_OnControllerUpdate_14();
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_6 = V_2;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_7 = V_1;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_8 = InterlockedCompareExchangeImpl<ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *>((ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 **)L_5, L_6, L_7);
		V_0 = L_8;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_9 = V_0;
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)L_9) == ((RuntimeObject*)(ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL ConfigureToggleXRKeyName(char*);
// System.Void WebXR.WebXRManager::ConfigureToggleXRKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ConfigureToggleXRKeyName_mCE0D835CE4989C9222BD724A4D1C445DFEB36CA3 (String_t* ___keyName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___keyName0' to native representation
	char* ____keyName0_marshaled = NULL;
	____keyName0_marshaled = il2cpp_codegen_marshal_string(___keyName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ConfigureToggleXRKeyName)(____keyName0_marshaled);

	// Marshaling cleanup of parameter '___keyName0' native representation
	il2cpp_codegen_marshal_free(____keyName0_marshaled);
	____keyName0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL XRInitSharedArray(float*, int32_t);
// System.Void WebXR.WebXRManager::XRInitSharedArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_XRInitSharedArray_m95B4072638187555C850A91E1663137F7F5335C0 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___length1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, int32_t);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(XRInitSharedArray)(____array0_marshaled, ___length1);

}
IL2CPP_EXTERN_C void DEFAULT_CALL ListenWebXRData();
// System.Void WebXR.WebXRManager::ListenWebXRData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ListenWebXRData_m1E482A510BEE1B70C6D3226A605FEB2F6F23CC09 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ListenWebXRData)();

}
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (!instance)
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_0 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var managerInScene = FindObjectOfType<WebXRManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_2 = Object_FindObjectOfType_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_mB50B5BED82758AD84CF86C99C7C79EB1FCADCE65(/*hidden argument*/Object_FindObjectOfType_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_mB50B5BED82758AD84CF86C99C7C79EB1FCADCE65_RuntimeMethod_var);
		V_0 = L_2;
		// var name = GlobalName;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		String_t* L_3 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_GlobalName_8();
		V_1 = L_3;
		// if (managerInScene != null)
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// instance = managerInScene;
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->set_instance_9(L_6);
		// instance.name = name;
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_7 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_8 = V_1;
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_7, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0040;
	}

IL_0034:
	{
		// GameObject go = new GameObject(name);
		String_t* L_9 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_10, L_9, /*hidden argument*/NULL);
		// go.AddComponent<WebXRManager>();
		GameObject_AddComponent_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_m6BA1804DE111115E2F9FC9F8B2353F3DFA1D3CDD(L_10, /*hidden argument*/GameObject_AddComponent_TisWebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_m6BA1804DE111115E2F9FC9F8B2353F3DFA1D3CDD_RuntimeMethod_var);
	}

IL_0040:
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_11 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_instance_9();
		return L_11;
	}
}
// System.Void WebXR.WebXRManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Awake_mFCDA93D698152DD2F0CCFF3B4BAAD2B11DB47402 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_Awake_mFCDA93D698152DD2F0CCFF3B4BAAD2B11DB47402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Active Graphics Tier: " + Graphics.activeTier);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		int32_t L_0 = Graphics_get_activeTier_mC69EEB666BDB6DD90E0DD89D18179DBB54C25141(/*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral345097493759A47C19F07AF3B8F7CA7C885ACE33, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->set_instance_9(__this);
		// if (!GlobalName.Equals(name))
		String_t* L_4 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_GlobalName_8();
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		bool L_6 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		// Debug.LogError("The webxr.js script requires the WebXRManager gameobject to be named "
		//                + GlobalName + " for proper functioning");
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		String_t* L_7 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_GlobalName_8();
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralFC8069221BB142BC4AD2275ABE74B2DD467F4E2C, L_7, _stringLiteralE4D6C45D9B12B8AB40B3EC243B2EA73D036AC7BA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (dontDestroyOnLoad)
		bool L_9 = __this->get_dontDestroyOnLoad_5();
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// DontDestroyOnLoad(instance);
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_10 = ((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->get_instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_10, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::SetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_SetTrackingSpaceType_m9D2166353D4956A1E756036B0A8BE19EDDE2A75C (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_SetTrackingSpaceType_m9D2166353D4956A1E756036B0A8BE19EDDE2A75C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// XRDevice.SetTrackingSpaceType(TrackingSpace);
		int32_t L_1 = __this->get_TrackingSpace_7();
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88(L_1, /*hidden argument*/NULL);
		// Debug.Log("Tracking Space: " + XRDevice.GetTrackingSpaceType());
		int32_t L_2 = XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C(/*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral8DB26BFD886E8EC670D6307D63828E6A680EA1FC, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnWebXRData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnWebXRData_m50B7A644D5B2131984D9FB3B34702EC8A5D3333C (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* V_0 = NULL;
	int32_t V_1 = 0;
	WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * V_2 = NULL;
	{
		// WebXRData webXRData = WebXRData.CreateFromJSON(jsonString);
		String_t* L_0 = ___jsonString0;
		WebXRData_t69E3E3E500F0B5C92E0F1A0B5A541D5F3F1ADBB6 * L_1 = WebXRData_CreateFromJSON_m51FD5720A1873D78D69E7835FE637D44CA9AD70D(L_0, /*hidden argument*/NULL);
		// foreach (WebXRControllerData controllerData in webXRData.controllers)
		WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* L_2 = L_1->get_controllers_0();
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d7;
	}

IL_0013:
	{
		// foreach (WebXRControllerData controllerData in webXRData.controllers)
		WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (OnControllerUpdate != null)
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_7 = __this->get_OnControllerUpdate_14();
		if (!L_7)
		{
			goto IL_00d3;
		}
	}
	{
		// OnControllerUpdate(controllerData.id,
		//     controllerData.index,
		//     controllerData.hand,
		//     controllerData.hasOrientation,
		//     controllerData.hasPosition,
		//     new Quaternion(controllerData.orientation[0], controllerData.orientation[1],
		//         controllerData.orientation[2], controllerData.orientation[3]),
		//     new Vector3(controllerData.position[0], controllerData.position[1],
		//         controllerData.position[2]),
		//     new Vector3(controllerData.linearAcceleration[0], controllerData.linearAcceleration[1],
		//         controllerData.linearAcceleration[2]),
		//     new Vector3(controllerData.linearVelocity[0], controllerData.linearVelocity[1],
		//         controllerData.linearVelocity[2]),
		//     controllerData.buttons,
		//     controllerData.axes);
		ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * L_8 = __this->get_OnControllerUpdate_14();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_9 = V_2;
		String_t* L_10 = L_9->get_id_0();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_11 = V_2;
		int32_t L_12 = L_11->get_index_1();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_13 = V_2;
		String_t* L_14 = L_13->get_hand_2();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_15 = V_2;
		bool L_16 = L_15->get_hasOrientation_3();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_17 = V_2;
		bool L_18 = L_17->get_hasPosition_4();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_19 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_20 = L_19->get_orientation_5();
		int32_t L_21 = 0;
		float L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_23 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_24 = L_23->get_orientation_5();
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_27 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_28 = L_27->get_orientation_5();
		int32_t L_29 = 2;
		float L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_31 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_32 = L_31->get_orientation_5();
		int32_t L_33 = 3;
		float L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_35), L_22, L_26, L_30, L_34, /*hidden argument*/NULL);
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_36 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_37 = L_36->get_position_6();
		int32_t L_38 = 0;
		float L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_40 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_41 = L_40->get_position_6();
		int32_t L_42 = 1;
		float L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_44 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_45 = L_44->get_position_6();
		int32_t L_46 = 2;
		float L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_48), L_39, L_43, L_47, /*hidden argument*/NULL);
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_49 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_50 = L_49->get_linearAcceleration_7();
		int32_t L_51 = 0;
		float L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_53 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_54 = L_53->get_linearAcceleration_7();
		int32_t L_55 = 1;
		float L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_57 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_58 = L_57->get_linearAcceleration_7();
		int32_t L_59 = 2;
		float L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_61), L_52, L_56, L_60, /*hidden argument*/NULL);
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_62 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_63 = L_62->get_linearVelocity_8();
		int32_t L_64 = 0;
		float L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_66 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_67 = L_66->get_linearVelocity_8();
		int32_t L_68 = 1;
		float L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_70 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_71 = L_70->get_linearVelocity_8();
		int32_t L_72 = 2;
		float L_73 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_74), L_65, L_69, L_73, /*hidden argument*/NULL);
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_75 = V_2;
		WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* L_76 = L_75->get_buttons_10();
		WebXRControllerData_t77F75498197AB406821ADD600CEC0CFE2686B343 * L_77 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_78 = L_77->get_axes_9();
		ControllerUpdate_Invoke_m54AF9720D6DDC040D53D76DAC20ABB710E80037F(L_8, L_10, L_12, L_14, L_16, L_18, L_35, L_48, L_61, L_74, L_76, L_78, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		int32_t L_79 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_00d7:
	{
		// foreach (WebXRControllerData controllerData in webXRData.controllers)
		int32_t L_80 = V_1;
		WebXRControllerDataU5BU5D_tC4F5340A690F2986278BF9E0391B4C0F25802DCD* L_81 = V_0;
		if ((((int32_t)L_80) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnXRCapabilities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnXRCapabilities_m73ECACEFAE6CA0A00FDA98F8AFBA6B18353044C0 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_OnXRCapabilities_m73ECACEFAE6CA0A00FDA98F8AFBA6B18353044C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * V_0 = NULL;
	{
		// WebXRDisplayCapabilities capabilities = JsonUtility.FromJson<WebXRDisplayCapabilities>(json);
		String_t* L_0 = ___json0;
		WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * L_1 = JsonUtility_FromJson_TisWebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450_m08728F46F1EC6FE955CF988B48CD6834C9E2E016(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450_m08728F46F1EC6FE955CF988B48CD6834C9E2E016_RuntimeMethod_var);
		V_0 = L_1;
		// OnXRCapabilities(capabilities);
		WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * L_2 = V_0;
		WebXRManager_OnXRCapabilities_mD235A38CD875F6CAB87542D6953923B882713057(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnXRCapabilities(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnXRCapabilities_mD235A38CD875F6CAB87542D6953923B882713057 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * ___capabilities0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_OnXRCapabilities_mD235A38CD875F6CAB87542D6953923B882713057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _capabilities = capabilities;
		WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * L_0 = ___capabilities0;
		__this->set__capabilities_16(L_0);
		// if (!capabilities.supportsImmersiveVR)
		WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * L_1 = ___capabilities0;
		bool L_2 = L_1->get_supportsImmersiveVR_1();
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// WebXRUI.displayXRElementId("novr");
		WebXRUI_displayXRElementId_m0539B343CDEC5BE0878C0F46CF008B3B079D8426(_stringLiteral652A35BE6DCEB62601A4E27CDA2945FA2A5CC326, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (OnXRCapabilitiesUpdate != null)
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_3 = __this->get_OnXRCapabilitiesUpdate_11();
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnXRCapabilitiesUpdate(capabilities);
		XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * L_4 = __this->get_OnXRCapabilitiesUpdate_11();
		WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * L_5 = ___capabilities0;
		XRCapabilitiesUpdate_Invoke_m4B6717272848435E1F5A4F5A084FBB3CD0149687(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::toggleXrState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_toggleXrState_mB0DEE0780D55D937C0220D2D814A3AB7ED5799A0 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	{
		// if (this.xrState == WebXRState.ENABLED)
		int32_t L_0 = __this->get_xrState_10();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// setXrState(WebXRState.NORMAL);
		WebXRManager_setXrState_m4B282B0C3AF978C17783B03186B8FE4BF0F0989F(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		// setXrState(WebXRState.ENABLED);
		WebXRManager_setXrState_m4B282B0C3AF978C17783B03186B8FE4BF0F0989F(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::setXrState(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_setXrState_m4B282B0C3AF978C17783B03186B8FE4BF0F0989F (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// xrState = state;
		int32_t L_0 = ___state0;
		__this->set_xrState_10(L_0);
		// if (OnXRChange != null)
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_1 = __this->get_OnXRChange_12();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnXRChange(state);
		XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * L_2 = __this->get_OnXRChange_12();
		int32_t L_3 = ___state0;
		XRChange_Invoke_m10C87E67D9CA60162F668FCAAA83499C929DF868(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnStartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnStartXR_m519BC85317967F91F9DA0E575964AC468C741E98 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_OnStartXR_m519BC85317967F91F9DA0E575964AC468C741E98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.ENABLED);
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_0 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		WebXRManager_setXrState_m4B282B0C3AF978C17783B03186B8FE4BF0F0989F(L_0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_OnEndXR_m9EB3980B24D41D43BBAF79E82847C6CEED281C37 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_OnEndXR_m9EB3980B24D41D43BBAF79E82847C6CEED281C37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.NORMAL);
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * L_0 = WebXRManager_get_Instance_m6998ACBA5E179093C30B668F6F4754CEA1A76A41(/*hidden argument*/NULL);
		WebXRManager_setXrState_m4B282B0C3AF978C17783B03186B8FE4BF0F0989F(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single[] WebXR.WebXRManager::GetFromSharedArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// float[] newArray = new float[16];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		// for (int i = 0; i < newArray.Length; i++)
		V_1 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		// newArray[i] = sharedArray[index * 16 + i];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = __this->get_sharedArray_15();
		int32_t L_4 = ___index0;
		int32_t L_5 = V_1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)16))), (int32_t)L_5));
		float L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (float)L_7);
		// for (int i = 0; i < newArray.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < newArray.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// return newArray;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_11 = V_0;
		return L_11;
	}
}
// System.Void WebXR.WebXRManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Start_m2D69B94BAA0A2B2783ED71EFF614A5311E098DA2 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager_Start_m2D69B94BAA0A2B2783ED71EFF614A5311E098DA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigureToggleXRKeyName(toggleXRKeyName);
		String_t* L_0 = __this->get_toggleXRKeyName_4();
		IL2CPP_RUNTIME_CLASS_INIT(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var);
		WebXRManager_ConfigureToggleXRKeyName_mCE0D835CE4989C9222BD724A4D1C445DFEB36CA3(L_0, /*hidden argument*/NULL);
		// XRInitSharedArray(sharedArray, sharedArray.Length);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = __this->get_sharedArray_15();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = __this->get_sharedArray_15();
		WebXRManager_XRInitSharedArray_m95B4072638187555C850A91E1663137F7F5335C0(L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		// ListenWebXRData();
		WebXRManager_ListenWebXRData_m1E482A510BEE1B70C6D3226A605FEB2F6F23CC09(/*hidden argument*/NULL);
		// SetTrackingSpaceType();
		WebXRManager_SetTrackingSpaceType_m9D2166353D4956A1E756036B0A8BE19EDDE2A75C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Update_m3B41C4A9F1CE646DE142718549E7D3DD95EF79B3 (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_LateUpdate_m2F94F38BD166D61FB5802CC3E345B4CD43F7562F (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (OnHeadsetUpdate == null || xrState != WebXRState.ENABLED) return;
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_0 = __this->get_OnHeadsetUpdate_13();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->get_xrState_10();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (OnHeadsetUpdate == null || xrState != WebXRState.ENABLED) return;
		return;
	}

IL_0011:
	{
		// Matrix4x4 leftProjectionMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(0));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F(__this, 0, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Matrix4x4 rightProjectionMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(1));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F(__this, 1, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Matrix4x4 leftViewMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(2));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F(__this, 2, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_7 = WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// Matrix4x4 rightViewMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(3));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F(__this, 3, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_9 = WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// Matrix4x4 sitStandMatrix = WebXRMatrixUtil.NumbersToMatrix(GetFromSharedArray(4));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = WebXRManager_GetFromSharedArray_m530F640D9F60308C78D8CBA6BAD8F34118CC163F(__this, 4, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_11 = WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// OnHeadsetUpdate(
		//     leftProjectionMatrix,
		//     rightProjectionMatrix,
		//     leftViewMatrix,
		//     rightViewMatrix,
		//     sitStandMatrix);
		HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * L_12 = __this->get_OnHeadsetUpdate_13();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_13 = V_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = V_1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_15 = V_2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_16 = V_3;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_17 = V_4;
		HeadsetUpdate_Invoke_m0232FF88B5B71E2FD7274FA3E1149CB3DA8D325A(L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__ctor_m6D0B7C010BC1F14FC703E1A9EEF483928B07DA8E (WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager__ctor_m6D0B7C010BC1F14FC703E1A9EEF483928B07DA8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool dontDestroyOnLoad = true;
		__this->set_dontDestroyOnLoad_5((bool)1);
		// public float DefaultHeight = 1.2f;
		__this->set_DefaultHeight_6((1.2f));
		// public TrackingSpaceType TrackingSpace = TrackingSpaceType.RoomScale;
		__this->set_TrackingSpace_7(1);
		// [HideInInspector] public WebXRState xrState = WebXRState.NORMAL;
		__this->set_xrState_10(1);
		// float[] sharedArray = new float[5 * 16];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->set_sharedArray_15(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__cctor_m3AFDE25EA631DA039896067C782657D59345FC8C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRManager__cctor_m3AFDE25EA631DA039896067C782657D59345FC8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string GlobalName = "WebXRCameraSet";
		((WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t0AE483C76A318C810D93D2FF8E159C21DEF634E8_il2cpp_TypeInfo_var))->set_GlobalName_8(_stringLiteral52FB89241607C948847FD72C060201CC14112829);
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
// System.Void WebXR.WebXRManager_ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_m6E4DE508DEFF7BF9D75EF386891E1BEBD3AC5B33 (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRManager_ControllerUpdate::Invoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m54AF9720D6DDC040D53D76DAC20ABB710E80037F (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * __this, String_t* ___id0, int32_t ___index1, String_t* ___hand2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttons9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes10, const RuntimeMethod* method)
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
			if (___parameterCount == 11)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
			}
		}
		else if (___parameterCount != 11)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						GenericVirtActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						VirtActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___index1) - 1), ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						GenericVirtActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						VirtActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___id0) - 1), ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRManager_ControllerUpdate::BeginInvoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebXR.WebXRControllerButton[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerUpdate_BeginInvoke_m3E5D9B58DC5D4D315973AE8F4C1588CBF7DB22BB (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * __this, String_t* ___id0, int32_t ___index1, String_t* ___hand2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebXRControllerButtonU5BU5D_t5FC17179F2A7F464E452E8F5A193FD9444614747* ___buttons9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes10, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback11, RuntimeObject * ___object12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerUpdate_BeginInvoke_m3E5D9B58DC5D4D315973AE8F4C1588CBF7DB22BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[12] = {0};
	__d_args[0] = ___id0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___hand2;
	__d_args[3] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___hasOrientation3);
	__d_args[4] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___hasPosition4);
	__d_args[5] = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &___orientation5);
	__d_args[6] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___position6);
	__d_args[7] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___linearAcceleration7);
	__d_args[8] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___linearVelocity8);
	__d_args[9] = ___buttons9;
	__d_args[10] = ___axes10;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback11, (RuntimeObject*)___object12);
}
// System.Void WebXR.WebXRManager_ControllerUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_EndInvoke_m170187F2AC23612F31E5FB4F8A2EF32803DDDD7A (ControllerUpdate_tF48E3C45FBBCDABEBD17C9BB7E0EFF613DEF03F7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);

}
// System.Void WebXR.WebXRManager_HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m30B6C12F3977D4D013D02075F4D4127FBC4C057A (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRManager_HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_m0232FF88B5B71E2FD7274FA3E1149CB3DA8D325A (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(targetMethod, targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
					else
						GenericVirtActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(targetMethod, targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
					else
						VirtActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___leftProjectionMatrix0) - 1), ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRManager_HeadsetUpdate::BeginInvoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadsetUpdate_BeginInvoke_mDA1D44611A542EB04405169EAD50169511C66A0C (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadsetUpdate_BeginInvoke_mDA1D44611A542EB04405169EAD50169511C66A0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___leftProjectionMatrix0);
	__d_args[1] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___leftViewMatrix1);
	__d_args[2] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___rightProjectionMatrix2);
	__d_args[3] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___rightViewMatrix3);
	__d_args[4] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___sitStandMatrix4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void WebXR.WebXRManager_HeadsetUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_EndInvoke_mD1E4CA1798626E69ACF3646FBB62C9C3788E8B34 (HeadsetUpdate_t02F009FD8D98A685EE81A184FB9FE82F15FB55C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void WebXR.WebXRManager_XRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate__ctor_mFF3FF5E744F661EB6C89CD6B06A5637FCD404881 (XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRManager_XRCapabilitiesUpdate::Invoke(WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4B6717272848435E1F5A4F5A084FBB3CD0149687 (XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * __this, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * ___capabilities0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___capabilities0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___capabilities0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___capabilities0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___capabilities0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___capabilities0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * >::Invoke(targetMethod, targetThis, ___capabilities0);
					else
						GenericVirtActionInvoker1< WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * >::Invoke(targetMethod, targetThis, ___capabilities0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___capabilities0);
					else
						VirtActionInvoker1< WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___capabilities0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___capabilities0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___capabilities0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRManager_XRCapabilitiesUpdate::BeginInvoke(WebXRDisplayCapabilities,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesUpdate_BeginInvoke_mBC7F189AA6445C32E0A5C5F4E69E0FB663D2C263 (XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * __this, WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * ___capabilities0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___capabilities0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRManager_XRCapabilitiesUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_EndInvoke_m133914E194B8B6D6C73E907EA0D4F1FB31D15188 (XRCapabilitiesUpdate_tD05C0F16B8B2B8781711E150E392B4CEC338276E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void WebXR.WebXRManager_XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mC5A3612F56C06C5937C321D01A1C4A83455AA986 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebXR.WebXRManager_XRChange::Invoke(WebXR.WebXRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_m10C87E67D9CA60162F668FCAAA83499C929DF868 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, int32_t ___state0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebXR.WebXRManager_XRChange::BeginInvoke(WebXR.WebXRState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRChange_BeginInvoke_m3174217A9F3856995DC0AAFE493C7243E2FEE859 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, int32_t ___state0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRChange_BeginInvoke_m3174217A9F3856995DC0AAFE493C7243E2FEE859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRState_tEA59242398A7B636A31C9DEE792B78568B929485_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRManager_XRChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_EndInvoke_m22A9E0DA02C75C65D48E3C4BDC3061E29ABC2322 (XRChange_t53A7C203090E7F43CEF03576EAB977B5E9CD7CE0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void WebXR.WebXRMatrixUtil::SetTransformFromViewMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRMatrixUtil_SetTransformFromViewMatrix_m08E282355CB0D97BE9E5695AD4B7FBDD59816C7E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___webXRViewMatrix1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRMatrixUtil_SetTransformFromViewMatrix_m08E282355CB0D97BE9E5695AD4B7FBDD59816C7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Matrix4x4 trs = TransformViewMatrixToTRS(webXRViewMatrix);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___webXRViewMatrix1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = WebXRMatrixUtil_TransformViewMatrixToTRS_m5CDEEBCC8ACC53127D1F23C2DB195C4D6796E1A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// transform.localPosition = trs.GetColumn(3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___transform0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_3, /*hidden argument*/NULL);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_2, L_4, /*hidden argument*/NULL);
		// transform.localRotation = Quaternion.LookRotation(trs.GetColumn(2), trs.GetColumn(1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___transform0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_6, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_9, /*hidden argument*/NULL);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_5, L_10, /*hidden argument*/NULL);
		// transform.localScale = new Vector3(
		//     trs.GetColumn(0).magnitude,
		//     trs.GetColumn(1).magnitude,
		//     trs.GetColumn(2).magnitude
		// );
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = ___transform0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 0, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 1, /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15 = Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 2, /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), L_13, L_15, L_17, /*hidden argument*/NULL);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_11, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::TransformViewMatrixToTRS(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebXRMatrixUtil_TransformViewMatrixToTRS_m5CDEEBCC8ACC53127D1F23C2DB195C4D6796E1A8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___openGLViewMatrix0, const RuntimeMethod* method)
{
	{
		// openGLViewMatrix.m20 *= -1;
		float* L_0 = (&___openGLViewMatrix0)->get_address_of_m20_2();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply((float)L_2, (float)(-1.0f)));
		// openGLViewMatrix.m21 *= -1;
		float* L_3 = (&___openGLViewMatrix0)->get_address_of_m21_6();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(-1.0f)));
		// openGLViewMatrix.m22 *= -1;
		float* L_6 = (&___openGLViewMatrix0)->get_address_of_m22_10();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(-1.0f)));
		// openGLViewMatrix.m23 *= -1;
		float* L_9 = (&___openGLViewMatrix0)->get_address_of_m23_14();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(-1.0f)));
		// return openGLViewMatrix.inverse;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___openGLViewMatrix0), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 WebXR.WebXRMatrixUtil::GetTranslationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebXRMatrixUtil_GetTranslationFromMatrix_m47B8A0022A3576F073ABDDEFDCA845B462CEB3C9 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRMatrixUtil_GetTranslationFromMatrix_m47B8A0022A3576F073ABDDEFDCA845B462CEB3C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mat.GetColumn(3);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___mat0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion WebXR.WebXRMatrixUtil::GetRotationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WebXRMatrixUtil_GetRotationFromMatrix_m517B69AACA12A9AC3E090D7BFA507648E6D67CDF (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebXRMatrixUtil_GetRotationFromMatrix_m517B69AACA12A9AC3E090D7BFA507648E6D67CDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Quaternion.LookRotation(mat.GetColumn(2), mat.GetColumn(1));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___mat0), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___mat0), 1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Matrix4x4 WebXR.WebXRMatrixUtil::NumbersToMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebXRMatrixUtil_NumbersToMatrix_m50E64805FD8E3AF1A23A142609050A7CB6913508 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var mat = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA ));
		// mat.m00 = array[0];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___array0;
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		(&V_0)->set_m00_0(L_2);
		// mat.m01 = array[1];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = ___array0;
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(&V_0)->set_m01_4(L_5);
		// mat.m02 = array[2];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___array0;
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		(&V_0)->set_m02_8(L_8);
		// mat.m03 = array[3];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = ___array0;
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->set_m03_12(L_11);
		// mat.m10 = array[4];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_12 = ___array0;
		int32_t L_13 = 4;
		float L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->set_m10_1(L_14);
		// mat.m11 = array[5];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_15 = ___array0;
		int32_t L_16 = 5;
		float L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(&V_0)->set_m11_5(L_17);
		// mat.m12 = array[6];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = ___array0;
		int32_t L_19 = 6;
		float L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(&V_0)->set_m12_9(L_20);
		// mat.m13 = array[7];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_21 = ___array0;
		int32_t L_22 = 7;
		float L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(&V_0)->set_m13_13(L_23);
		// mat.m20 = array[8];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_24 = ___array0;
		int32_t L_25 = 8;
		float L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(&V_0)->set_m20_2(L_26);
		// mat.m21 = array[9];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_27 = ___array0;
		int32_t L_28 = ((int32_t)9);
		float L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		(&V_0)->set_m21_6(L_29);
		// mat.m22 = array[10];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_30 = ___array0;
		int32_t L_31 = ((int32_t)10);
		float L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(&V_0)->set_m22_10(L_32);
		// mat.m23 = array[11];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_33 = ___array0;
		int32_t L_34 = ((int32_t)11);
		float L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		(&V_0)->set_m23_14(L_35);
		// mat.m30 = array[12];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_36 = ___array0;
		int32_t L_37 = ((int32_t)12);
		float L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		(&V_0)->set_m30_3(L_38);
		// mat.m31 = array[13];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_39 = ___array0;
		int32_t L_40 = ((int32_t)13);
		float L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		(&V_0)->set_m31_7(L_41);
		// mat.m32 = array[14];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_42 = ___array0;
		int32_t L_43 = ((int32_t)14);
		float L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		(&V_0)->set_m32_11(L_44);
		// mat.m33 = array[15];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_45 = ___array0;
		int32_t L_46 = ((int32_t)15);
		float L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		(&V_0)->set_m33_15(L_47);
		// return mat;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_48 = V_0;
		return L_48;
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
IL2CPP_EXTERN_C void DEFAULT_CALL displayXRElementId(char*);
// System.Void WebXR.WebXRUI::displayXRElementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRUI_displayXRElementId_m0539B343CDEC5BE0878C0F46CF008B3B079D8426 (String_t* ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(displayXRElementId)(____id0_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.Void WebXR.WebXRUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRUI__ctor_mA2B5BB1110CE1EFD5D45B878544A8D38E6161260 (WebXRUI_tBC93F5694FE6E042856FC1436C75F6124D5DE429 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void WebXRDisplayCapabilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRDisplayCapabilities__ctor_m39DC69226031BD1295A3796E15C08ECDB6AD713A (WebXRDisplayCapabilities_t93240E164A88A124E4FA3C37E8D028672BB37450 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
