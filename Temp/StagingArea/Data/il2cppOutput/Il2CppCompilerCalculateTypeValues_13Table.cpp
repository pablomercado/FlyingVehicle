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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t151644540;
// UnityEngine.Camera[]
struct CameraU5BU5D_t4202592981;
// UnityEngine.Object
struct Object_t3485680073;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1836254497;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t3232260993;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t4000736567;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t330380481;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t3014964758;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t498431185;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t483572753;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t3061193229;
// System.IntPtr[]
struct IntPtrU5BU5D_t4035255078;
// System.Collections.IDictionary
struct IDictionary_t2191078970;
// System.Text.RegularExpressions.Regex
struct Regex_t502229500;
// System.Object[]
struct ObjectU5BU5D_t1851021545;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1247936972;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3134665581;
// UnityEngine.Events.UnityAction
struct UnityAction_t367684186;
// System.Void
struct Void_t2676718510;
// System.Char[]
struct CharU5BU5D_t2962628799;
// System.Type
struct Type_t;
// UnityEngine.GameObject
struct GameObject_t3960124481;
// UnityEngine.Camera
struct Camera_t887441084;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2951260664;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t3949450206;
// UnityEngine.ILogHandler
struct ILogHandler_t1054873615;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t476382396;
// System.IAsyncResult
struct IAsyncResult_t2868655746;
// System.AsyncCallback
struct AsyncCallback_t3670325603;

struct Object_t3485680073_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SENDMOUSEEVENTS_T4216672545_H
#define SENDMOUSEEVENTS_T4216672545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t4216672545  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t4216672545_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t151644540* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t151644540* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t151644540* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t4202592981* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4216672545_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4216672545_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t151644540* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t151644540** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t151644540* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4216672545_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t151644540* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t151644540** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t151644540* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4216672545_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t151644540* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t151644540** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t151644540* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t4216672545_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t4202592981* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t4202592981** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t4202592981* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T4216672545_H
#ifndef CLASSLIBRARYINITIALIZER_T458000753_H
#define CLASSLIBRARYINITIALIZER_T458000753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t458000753  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T458000753_H
#ifndef ARGUMENTCACHE_T3949450206_H
#define ARGUMENTCACHE_T3949450206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t3949450206  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t3485680073 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t3949450206, ___m_ObjectArgument_0)); }
	inline Object_t3485680073 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t3485680073 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t3485680073 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t3949450206, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t3949450206, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t3949450206, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t3949450206, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t3949450206, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T3949450206_H
#ifndef BASEINVOKABLECALL_T2827695340_H
#define BASEINVOKABLECALL_T2827695340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2827695340  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2827695340_H
#ifndef SETUPCOROUTINE_T637727239_H
#define SETUPCOROUTINE_T637727239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t637727239  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T637727239_H
#ifndef PERSISTENTCALLGROUP_T483572753_H
#define PERSISTENTCALLGROUP_T483572753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t483572753  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1836254497 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t483572753, ___m_Calls_0)); }
	inline List_1_t1836254497 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t1836254497 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t1836254497 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T483572753_H
#ifndef INVOKABLECALLLIST_T498431185_H
#define INVOKABLECALLLIST_T498431185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t498431185  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t3232260993 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t3232260993 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t3232260993 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t498431185, ___m_PersistentCalls_0)); }
	inline List_1_t3232260993 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t3232260993 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t3232260993 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t498431185, ___m_RuntimeCalls_1)); }
	inline List_1_t3232260993 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t3232260993 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t3232260993 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t498431185, ___m_ExecutingCalls_2)); }
	inline List_1_t3232260993 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t3232260993 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t3232260993 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t498431185, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T498431185_H
#ifndef ATTRIBUTEHELPERENGINE_T60532540_H
#define ATTRIBUTEHELPERENGINE_T60532540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t60532540  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t60532540_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t4000736567* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t330380481* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t3014964758* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t60532540_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t4000736567* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t4000736567** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t4000736567* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t60532540_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t330380481* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t330380481** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t330380481* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t60532540_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t3014964758* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t3014964758** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t3014964758* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T60532540_H
#ifndef UNITYEVENTBASE_T229837512_H
#define UNITYEVENTBASE_T229837512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t229837512  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t498431185 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t483572753 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t229837512, ___m_Calls_0)); }
	inline InvokableCallList_t498431185 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t498431185 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t498431185 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t229837512, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t483572753 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t483572753 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t483572753 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t229837512, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t229837512, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T229837512_H
#ifndef VALUETYPE_T107763297_H
#define VALUETYPE_T107763297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t107763297  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t107763297_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t107763297_marshaled_com
{
};
#endif // VALUETYPE_T107763297_H
#ifndef REMOTESETTINGS_T1505182961_H
#define REMOTESETTINGS_T1505182961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t1505182961  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t1505182961_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t3061193229 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t1505182961_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t3061193229 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t3061193229 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t3061193229 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T1505182961_H
#ifndef ATTRIBUTE_T1850271163_H
#define ATTRIBUTE_T1850271163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1850271163  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1850271163_H
#ifndef UNITYSTRING_T2065254957_H
#define UNITYSTRING_T2065254957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t2065254957  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T2065254957_H
#ifndef EXCEPTION_T1466198312_H
#define EXCEPTION_T1466198312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1466198312  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4035255078* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1466198312 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4035255078* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4035255078** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4035255078* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___inner_exception_1)); }
	inline Exception_t1466198312 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1466198312 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1466198312 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1466198312, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1466198312_H
#ifndef SYNCHRONIZATIONCONTEXT_T1733760281_H
#define SYNCHRONIZATIONCONTEXT_T1733760281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t1733760281  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t1733760281_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t1733760281 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t1733760281_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t1733760281 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t1733760281 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t1733760281 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T1733760281_H
#ifndef PLAYABLEEXTENSIONS_T230220531_H
#define PLAYABLEEXTENSIONS_T230220531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t230220531  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T230220531_H
#ifndef PLAYABLEBEHAVIOUR_T758329460_H
#define PLAYABLEBEHAVIOUR_T758329460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t758329460  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T758329460_H
#ifndef WEBREQUESTUTILS_T87784604_H
#define WEBREQUESTUTILS_T87784604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t87784604  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t87784604_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t502229500 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t87784604_StaticFields, ___domainRegex_0)); }
	inline Regex_t502229500 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t502229500 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t502229500 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T87784604_H
#ifndef STACKTRACEUTILITY_T2707237013_H
#define STACKTRACEUTILITY_T2707237013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t2707237013  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t2707237013_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t2707237013_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T2707237013_H
#ifndef SERIALIZEPRIVATEVARIABLES_T371765070_H
#define SERIALIZEPRIVATEVARIABLES_T371765070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t371765070  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T371765070_H
#ifndef SERIALIZEFIELD_T2833771755_H
#define SERIALIZEFIELD_T2833771755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2833771755  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2833771755_H
#ifndef RECT_T3687671493_H
#define RECT_T3687671493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3687671493 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3687671493, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3687671493, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3687671493, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3687671493, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3687671493_H
#ifndef PREFERBINARYSERIALIZATION_T2805800158_H
#define PREFERBINARYSERIALIZATION_T2805800158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2805800158  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2805800158_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3954359404_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3954359404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3954359404  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3954359404_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T4280614094_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T4280614094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t4280614094  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T4280614094_H
#ifndef NATIVECONTAINERATTRIBUTE_T1738083211_H
#define NATIVECONTAINERATTRIBUTE_T1738083211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t1738083211  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T1738083211_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T6982105_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T6982105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t6982105  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T6982105_H
#ifndef WRITEONLYATTRIBUTE_T3486741447_H
#define WRITEONLYATTRIBUTE_T3486741447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t3486741447  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T3486741447_H
#ifndef READWRITEATTRIBUTE_T1908051691_H
#define READWRITEATTRIBUTE_T1908051691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t1908051691  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T1908051691_H
#ifndef READONLYATTRIBUTE_T46331259_H
#define READONLYATTRIBUTE_T46331259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t46331259  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T46331259_H
#ifndef UNITYEVENT_T351113774_H
#define UNITYEVENT_T351113774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t351113774  : public UnityEventBase_t229837512
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t1851021545* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t351113774, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1851021545* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1851021545** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1851021545* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T351113774_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T78566565_H
#define UNITYSYNCHRONIZATIONCONTEXT_T78566565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t78566565  : public SynchronizationContext_t1733760281
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1247936972 * ___m_AsyncWorkQueue_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t78566565, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t1247936972 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t1247936972 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t1247936972 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T78566565_H
#ifndef WORKREQUEST_T847436943_H
#define WORKREQUEST_T847436943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t847436943 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3134665581 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t847436943, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3134665581 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3134665581 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3134665581 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t847436943, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t847436943_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t847436943_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
#endif // WORKREQUEST_T847436943_H
#ifndef VECTOR2_T3863032716_H
#define VECTOR2_T3863032716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3863032716 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3863032716, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3863032716, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3863032716_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3863032716  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3863032716  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3863032716  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3863032716  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3863032716  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3863032716  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3863032716  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3863032716  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3863032716  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3863032716 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3863032716  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___oneVector_3)); }
	inline Vector2_t3863032716  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3863032716 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3863032716  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___upVector_4)); }
	inline Vector2_t3863032716  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3863032716 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3863032716  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___downVector_5)); }
	inline Vector2_t3863032716  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3863032716 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3863032716  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___leftVector_6)); }
	inline Vector2_t3863032716  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3863032716 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3863032716  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___rightVector_7)); }
	inline Vector2_t3863032716  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3863032716 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3863032716  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3863032716  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3863032716 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3863032716  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3863032716_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3863032716  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3863032716 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3863032716  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3863032716_H
#ifndef UNITYEXCEPTION_T1343138538_H
#define UNITYEXCEPTION_T1343138538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t1343138538  : public Exception_t1466198312
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t1343138538, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T1343138538_H
#ifndef INVOKABLECALL_T1559784500_H
#define INVOKABLECALL_T1559784500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t1559784500  : public BaseInvokableCall_t2827695340
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t367684186 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t1559784500, ___Delegate_0)); }
	inline UnityAction_t367684186 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t367684186 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t367684186 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T1559784500_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T2347703120_H
#define EXCLUDEFROMDOCSATTRIBUTE_T2347703120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t2347703120  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T2347703120_H
#ifndef EXECUTEINEDITMODE_T1496242752_H
#define EXECUTEINEDITMODE_T1496242752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t1496242752  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T1496242752_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1563543443_H
#define SINGLE_T1563543443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1563543443 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1563543443, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1563543443_H
#ifndef ENUM_T1672915777_H
#define ENUM_T1672915777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1672915777  : public ValueType_t107763297
{
public:

public:
};

struct Enum_t1672915777_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2962628799* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1672915777_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2962628799* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2962628799** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2962628799* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1672915777_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1672915777_marshaled_com
{
};
#endif // ENUM_T1672915777_H
#ifndef VOID_T2676718510_H
#define VOID_T2676718510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2676718510 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2676718510_H
#ifndef DISALLOWMULTIPLECOMPONENT_T246986370_H
#define DISALLOWMULTIPLECOMPONENT_T246986370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t246986370  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T246986370_H
#ifndef REQUIRECOMPONENT_T3075622351_H
#define REQUIRECOMPONENT_T3075622351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t3075622351  : public Attribute_t1850271163
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t3075622351, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t3075622351, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t3075622351, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T3075622351_H
#ifndef CONTEXTMENU_T1101808255_H
#define CONTEXTMENU_T1101808255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t1101808255  : public Attribute_t1850271163
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t1101808255, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t1101808255, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t1101808255, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T1101808255_H
#ifndef HITINFO_T117409249_H
#define HITINFO_T117409249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t117409249 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3960124481 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t887441084 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t117409249, ___target_0)); }
	inline GameObject_t3960124481 * get_target_0() const { return ___target_0; }
	inline GameObject_t3960124481 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3960124481 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t117409249, ___camera_1)); }
	inline Camera_t887441084 * get_camera_1() const { return ___camera_1; }
	inline Camera_t887441084 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t887441084 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t117409249_marshaled_pinvoke
{
	GameObject_t3960124481 * ___target_0;
	Camera_t887441084 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t117409249_marshaled_com
{
	GameObject_t3960124481 * ___target_0;
	Camera_t887441084 * ___camera_1;
};
#endif // HITINFO_T117409249_H
#ifndef DEFAULTEXECUTIONORDER_T2127628101_H
#define DEFAULTEXECUTIONORDER_T2127628101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t2127628101  : public Attribute_t1850271163
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t2127628101, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T2127628101_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T6222069_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T6222069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t6222069  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T6222069_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T1322479726_H
#define ASSEMBLYISEDITORASSEMBLY_T1322479726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t1322479726  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T1322479726_H
#ifndef WRITABLEATTRIBUTE_T4245498943_H
#define WRITABLEATTRIBUTE_T4245498943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t4245498943  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T4245498943_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T1832210302_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T1832210302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t1832210302  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T1832210302_H
#ifndef QUATERNION_T2224324874_H
#define QUATERNION_T2224324874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2224324874 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2224324874, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2224324874, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2224324874, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2224324874, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2224324874_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2224324874  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2224324874_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2224324874  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2224324874 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2224324874  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2224324874_H
#ifndef VECTOR3_T2368065128_H
#define VECTOR3_T2368065128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2368065128 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2368065128, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2368065128, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2368065128, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2368065128_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2368065128  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2368065128  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2368065128  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2368065128  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2368065128  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2368065128  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2368065128  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2368065128  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2368065128  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2368065128  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2368065128  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2368065128 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2368065128  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___oneVector_5)); }
	inline Vector3_t2368065128  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2368065128 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2368065128  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___upVector_6)); }
	inline Vector3_t2368065128  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2368065128 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2368065128  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___downVector_7)); }
	inline Vector3_t2368065128  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2368065128 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2368065128  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___leftVector_8)); }
	inline Vector3_t2368065128  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2368065128 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2368065128  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___rightVector_9)); }
	inline Vector3_t2368065128  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2368065128 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2368065128  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2368065128  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2368065128 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2368065128  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___backVector_11)); }
	inline Vector3_t2368065128  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2368065128 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2368065128  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2368065128  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2368065128 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2368065128  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2368065128_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2368065128  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2368065128 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2368065128  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2368065128_H
#ifndef COLOR_T2397423938_H
#define COLOR_T2397423938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2397423938 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2397423938, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2397423938, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2397423938, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2397423938, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2397423938_H
#ifndef VECTOR4_T3765161168_H
#define VECTOR4_T3765161168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3765161168 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_t3765161168, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_t3765161168, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_t3765161168, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_t3765161168, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_t3765161168_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3765161168  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3765161168  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3765161168  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3765161168  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_t3765161168_StaticFields, ___zeroVector_4)); }
	inline Vector4_t3765161168  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_t3765161168 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_t3765161168  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3765161168_StaticFields, ___oneVector_5)); }
	inline Vector4_t3765161168  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_t3765161168 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_t3765161168  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3765161168_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_t3765161168  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_t3765161168 * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_t3765161168  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3765161168_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_t3765161168  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_t3765161168 * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_t3765161168  value)
	{
		___negativeInfinityVector_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3765161168_H
#ifndef DEFAULTVALUEATTRIBUTE_T2579945900_H
#define DEFAULTVALUEATTRIBUTE_T2579945900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t2579945900  : public Attribute_t1850271163
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2579945900, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2579945900_H
#ifndef NATIVECLASSATTRIBUTE_T223731290_H
#define NATIVECLASSATTRIBUTE_T223731290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t223731290  : public Attribute_t1850271163
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t223731290, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T223731290_H
#ifndef OBJECT_T3485680073_H
#define OBJECT_T3485680073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3485680073  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3485680073, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3485680073_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3485680073_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3485680073_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3485680073_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3485680073_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T4129659771_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T4129659771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t4129659771 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t4129659771, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T4129659771_H
#ifndef DATASTREAMTYPE_T433306449_H
#define DATASTREAMTYPE_T433306449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t433306449 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t433306449, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T433306449_H
#ifndef PLAYABLEOUTPUTHANDLE_T3013655630_H
#define PLAYABLEOUTPUTHANDLE_T3013655630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3013655630 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3013655630, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3013655630, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T3013655630_H
#ifndef FLAGS_T1886585621_H
#define FLAGS_T1886585621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t1886585621 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t1886585621, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T1886585621_H
#ifndef DELEGATE_T2340917300_H
#define DELEGATE_T2340917300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2340917300  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2951260664 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2340917300, ___data_8)); }
	inline DelegateData_t2951260664 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2951260664 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2951260664 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2340917300_H
#ifndef CAMERACLEARFLAGS_T2617071265_H
#define CAMERACLEARFLAGS_T2617071265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2617071265 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2617071265, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2617071265_H
#ifndef SPACE_T3807538215_H
#define SPACE_T3807538215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t3807538215 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t3807538215, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T3807538215_H
#ifndef LOGTYPE_T3681922264_H
#define LOGTYPE_T3681922264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3681922264 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t3681922264, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T3681922264_H
#ifndef RENDERINGPATH_T340655521_H
#define RENDERINGPATH_T340655521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderingPath
struct  RenderingPath_t340655521 
{
public:
	// System.Int32 UnityEngine.RenderingPath::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderingPath_t340655521, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERINGPATH_T340655521_H
#ifndef DEPTHTEXTUREMODE_T2276089931_H
#define DEPTHTEXTUREMODE_T2276089931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t2276089931 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DepthTextureMode_t2276089931, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHTEXTUREMODE_T2276089931_H
#ifndef COLORSPACE_T3347339102_H
#define COLORSPACE_T3347339102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ColorSpace
struct  ColorSpace_t3347339102 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorSpace_t3347339102, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORSPACE_T3347339102_H
#ifndef SENDMESSAGEOPTIONS_T226013177_H
#define SENDMESSAGEOPTIONS_T226013177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t226013177 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t226013177, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T226013177_H
#ifndef KEYCODE_T1876902466_H
#define KEYCODE_T1876902466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t1876902466 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t1876902466, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T1876902466_H
#ifndef HUMANLIMIT_T1040373785_H
#define HUMANLIMIT_T1040373785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t1040373785 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t2368065128  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t2368065128  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t2368065128  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t1040373785, ___m_Min_0)); }
	inline Vector3_t2368065128  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t2368065128 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t2368065128  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t1040373785, ___m_Max_1)); }
	inline Vector3_t2368065128  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t2368065128 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t2368065128  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t1040373785, ___m_Center_2)); }
	inline Vector3_t2368065128  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t2368065128 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t2368065128  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t1040373785, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t1040373785, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T1040373785_H
#ifndef RENDERTEXTUREFORMAT_T563860057_H
#define RENDERTEXTUREFORMAT_T563860057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t563860057 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t563860057, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T563860057_H
#ifndef MATHFINTERNAL_T3129953727_H
#define MATHFINTERNAL_T3129953727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3129953727 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3129953727__padding[1];
	};

public:
};

struct MathfInternal_t3129953727_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3129953727_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3129953727_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3129953727_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T3129953727_H
#ifndef RAY_T996480860_H
#define RAY_T996480860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t996480860 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2368065128  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2368065128  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t996480860, ___m_Origin_0)); }
	inline Vector3_t2368065128  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2368065128 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2368065128  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t996480860, ___m_Direction_1)); }
	inline Vector3_t2368065128  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2368065128 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2368065128  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T996480860_H
#ifndef TRACKEDREFERENCE_T3289412462_H
#define TRACKEDREFERENCE_T3289412462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t3289412462  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t3289412462, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3289412462_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3289412462_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T3289412462_H
#ifndef PERSISTENTLISTENERMODE_T454676402_H
#define PERSISTENTLISTENERMODE_T454676402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t454676402 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t454676402, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T454676402_H
#ifndef UNITYEVENTCALLSTATE_T2672122886_H
#define UNITYEVENTCALLSTATE_T2672122886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t2672122886 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t2672122886, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T2672122886_H
#ifndef SKELETONBONE_T2141522195_H
#define SKELETONBONE_T2141522195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t2141522195 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t2368065128  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t2224324874  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t2368065128  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t2141522195, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t2141522195, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t2141522195, ___position_2)); }
	inline Vector3_t2368065128  get_position_2() const { return ___position_2; }
	inline Vector3_t2368065128 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t2368065128  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t2141522195, ___rotation_3)); }
	inline Quaternion_t2224324874  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t2224324874 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t2224324874  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t2141522195, ___scale_4)); }
	inline Vector3_t2368065128  get_scale_4() const { return ___scale_4; }
	inline Vector3_t2368065128 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t2368065128  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t2141522195_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t2368065128  ___position_2;
	Quaternion_t2224324874  ___rotation_3;
	Vector3_t2368065128  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t2141522195_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t2368065128  ___position_2;
	Quaternion_t2224324874  ___rotation_3;
	Vector3_t2368065128  ___scale_4;
};
#endif // SKELETONBONE_T2141522195_H
#ifndef SCRIPTABLEOBJECT_T3527191810_H
#define SCRIPTABLEOBJECT_T3527191810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t3527191810  : public Object_t3485680073
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3527191810_marshaled_pinvoke : public Object_t3485680073_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3527191810_marshaled_com : public Object_t3485680073_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T3527191810_H
#ifndef HUMANBONE_T2622106031_H
#define HUMANBONE_T2622106031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t2622106031 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t1040373785  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2622106031, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2622106031, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2622106031, ___limit_2)); }
	inline HumanLimit_t1040373785  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t1040373785 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t1040373785  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2622106031_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t1040373785  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2622106031_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t1040373785  ___limit_2;
};
#endif // HUMANBONE_T2622106031_H
#ifndef AVATARMASK_T2506926403_H
#define AVATARMASK_T2506926403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarMask
struct  AvatarMask_t2506926403  : public Object_t3485680073
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARMASK_T2506926403_H
#ifndef MOTION_T808578727_H
#define MOTION_T808578727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t808578727  : public Object_t3485680073
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T808578727_H
#ifndef RUNTIMEANIMATORCONTROLLER_T2932920034_H
#define RUNTIMEANIMATORCONTROLLER_T2932920034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t2932920034  : public Object_t3485680073
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_T2932920034_H
#ifndef ANIMATORCONTROLLERPARAMETER_T2807556998_H
#define ANIMATORCONTROLLERPARAMETER_T2807556998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t2807556998  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2807556998, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2807556998, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2807556998, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2807556998, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2807556998, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T2807556998_H
#ifndef TERRAINDATA_T2197258045_H
#define TERRAINDATA_T2197258045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData
struct  TerrainData_t2197258045  : public Object_t3485680073
{
public:

public:
};

struct TerrainData_t2197258045_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::kMaximumResolution
	int32_t ___kMaximumResolution_2;
	// System.Int32 UnityEngine.TerrainData::kMinimumDetailResolutionPerPatch
	int32_t ___kMinimumDetailResolutionPerPatch_3;
	// System.Int32 UnityEngine.TerrainData::kMaximumDetailResolutionPerPatch
	int32_t ___kMaximumDetailResolutionPerPatch_4;
	// System.Int32 UnityEngine.TerrainData::kMaximumDetailPatchCount
	int32_t ___kMaximumDetailPatchCount_5;
	// System.Int32 UnityEngine.TerrainData::kMinimumAlphamapResolution
	int32_t ___kMinimumAlphamapResolution_6;
	// System.Int32 UnityEngine.TerrainData::kMaximumAlphamapResolution
	int32_t ___kMaximumAlphamapResolution_7;
	// System.Int32 UnityEngine.TerrainData::kMinimumBaseMapResolution
	int32_t ___kMinimumBaseMapResolution_8;
	// System.Int32 UnityEngine.TerrainData::kMaximumBaseMapResolution
	int32_t ___kMaximumBaseMapResolution_9;

public:
	inline static int32_t get_offset_of_kMaximumResolution_2() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMaximumResolution_2)); }
	inline int32_t get_kMaximumResolution_2() const { return ___kMaximumResolution_2; }
	inline int32_t* get_address_of_kMaximumResolution_2() { return &___kMaximumResolution_2; }
	inline void set_kMaximumResolution_2(int32_t value)
	{
		___kMaximumResolution_2 = value;
	}

	inline static int32_t get_offset_of_kMinimumDetailResolutionPerPatch_3() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMinimumDetailResolutionPerPatch_3)); }
	inline int32_t get_kMinimumDetailResolutionPerPatch_3() const { return ___kMinimumDetailResolutionPerPatch_3; }
	inline int32_t* get_address_of_kMinimumDetailResolutionPerPatch_3() { return &___kMinimumDetailResolutionPerPatch_3; }
	inline void set_kMinimumDetailResolutionPerPatch_3(int32_t value)
	{
		___kMinimumDetailResolutionPerPatch_3 = value;
	}

	inline static int32_t get_offset_of_kMaximumDetailResolutionPerPatch_4() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMaximumDetailResolutionPerPatch_4)); }
	inline int32_t get_kMaximumDetailResolutionPerPatch_4() const { return ___kMaximumDetailResolutionPerPatch_4; }
	inline int32_t* get_address_of_kMaximumDetailResolutionPerPatch_4() { return &___kMaximumDetailResolutionPerPatch_4; }
	inline void set_kMaximumDetailResolutionPerPatch_4(int32_t value)
	{
		___kMaximumDetailResolutionPerPatch_4 = value;
	}

	inline static int32_t get_offset_of_kMaximumDetailPatchCount_5() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMaximumDetailPatchCount_5)); }
	inline int32_t get_kMaximumDetailPatchCount_5() const { return ___kMaximumDetailPatchCount_5; }
	inline int32_t* get_address_of_kMaximumDetailPatchCount_5() { return &___kMaximumDetailPatchCount_5; }
	inline void set_kMaximumDetailPatchCount_5(int32_t value)
	{
		___kMaximumDetailPatchCount_5 = value;
	}

	inline static int32_t get_offset_of_kMinimumAlphamapResolution_6() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMinimumAlphamapResolution_6)); }
	inline int32_t get_kMinimumAlphamapResolution_6() const { return ___kMinimumAlphamapResolution_6; }
	inline int32_t* get_address_of_kMinimumAlphamapResolution_6() { return &___kMinimumAlphamapResolution_6; }
	inline void set_kMinimumAlphamapResolution_6(int32_t value)
	{
		___kMinimumAlphamapResolution_6 = value;
	}

	inline static int32_t get_offset_of_kMaximumAlphamapResolution_7() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMaximumAlphamapResolution_7)); }
	inline int32_t get_kMaximumAlphamapResolution_7() const { return ___kMaximumAlphamapResolution_7; }
	inline int32_t* get_address_of_kMaximumAlphamapResolution_7() { return &___kMaximumAlphamapResolution_7; }
	inline void set_kMaximumAlphamapResolution_7(int32_t value)
	{
		___kMaximumAlphamapResolution_7 = value;
	}

	inline static int32_t get_offset_of_kMinimumBaseMapResolution_8() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMinimumBaseMapResolution_8)); }
	inline int32_t get_kMinimumBaseMapResolution_8() const { return ___kMinimumBaseMapResolution_8; }
	inline int32_t* get_address_of_kMinimumBaseMapResolution_8() { return &___kMinimumBaseMapResolution_8; }
	inline void set_kMinimumBaseMapResolution_8(int32_t value)
	{
		___kMinimumBaseMapResolution_8 = value;
	}

	inline static int32_t get_offset_of_kMaximumBaseMapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_t2197258045_StaticFields, ___kMaximumBaseMapResolution_9)); }
	inline int32_t get_kMaximumBaseMapResolution_9() const { return ___kMaximumBaseMapResolution_9; }
	inline int32_t* get_address_of_kMaximumBaseMapResolution_9() { return &___kMaximumBaseMapResolution_9; }
	inline void set_kMaximumBaseMapResolution_9(int32_t value)
	{
		___kMaximumBaseMapResolution_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINDATA_T2197258045_H
#ifndef PERSISTENTCALL_T1431688844_H
#define PERSISTENTCALL_T1431688844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t1431688844  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t3485680073 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t3949450206 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t1431688844, ___m_Target_0)); }
	inline Object_t3485680073 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t3485680073 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t3485680073 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t1431688844, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t1431688844, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t1431688844, ___m_Arguments_3)); }
	inline ArgumentCache_t3949450206 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t3949450206 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t3949450206 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t1431688844, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T1431688844_H
#ifndef LOGGER_T727290581_H
#define LOGGER_T727290581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t727290581  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t727290581, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t727290581, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t727290581, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T727290581_H
#ifndef SCRIPTPLAYABLEOUTPUT_T721148303_H
#define SCRIPTPLAYABLEOUTPUT_T721148303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t721148303 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t3013655630  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t721148303, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3013655630  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3013655630 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3013655630  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T721148303_H
#ifndef PLAYABLEBINDING_T2375981985_H
#define PLAYABLEBINDING_T2375981985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t2375981985 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t3485680073 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2375981985__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t2375981985, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t2375981985, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t2375981985, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t3485680073 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t3485680073 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t3485680073 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t2375981985, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t2375981985_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t476382396* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t2375981985_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t476382396* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t476382396** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t476382396* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t2375981985_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2375981985_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t3485680073_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2375981985__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2375981985_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t3485680073_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2375981985__padding[1];
	};
};
#endif // PLAYABLEBINDING_T2375981985_H
#ifndef FRAMEDATA_T2411593493_H
#define FRAMEDATA_T2411593493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t2411593493 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t2411593493, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t2411593493, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t2411593493, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t2411593493, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t2411593493, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t2411593493, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T2411593493_H
#ifndef COMPONENT_T287748828_H
#define COMPONENT_T287748828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t287748828  : public Object_t3485680073
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T287748828_H
#ifndef MULTICASTDELEGATE_T3367977848_H
#define MULTICASTDELEGATE_T3367977848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3367977848  : public Delegate_t2340917300
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3367977848 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3367977848 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3367977848, ___prev_9)); }
	inline MulticastDelegate_t3367977848 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3367977848 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3367977848 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3367977848, ___kpm_next_10)); }
	inline MulticastDelegate_t3367977848 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3367977848 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3367977848 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3367977848_H
#ifndef UPDATEDEVENTHANDLER_T3061193229_H
#define UPDATEDEVENTHANDLER_T3061193229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t3061193229  : public MulticastDelegate_t3367977848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T3061193229_H
#ifndef UNITYACTION_T367684186_H
#define UNITYACTION_T367684186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t367684186  : public MulticastDelegate_t3367977848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T367684186_H
#ifndef BEHAVIOUR_T3146958449_H
#define BEHAVIOUR_T3146958449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3146958449  : public Component_t287748828
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3146958449_H
#ifndef PLAYABLEASSET_T3155298426_H
#define PLAYABLEASSET_T3155298426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t3155298426  : public ScriptableObject_t3527191810
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T3155298426_H
#ifndef TERRAIN_T3340946042_H
#define TERRAIN_T3340946042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Terrain
struct  Terrain_t3340946042  : public Behaviour_t3146958449
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAIN_T3340946042_H
#ifndef ANIMATOR_T2118936031_H
#define ANIMATOR_T2118936031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t2118936031  : public Behaviour_t3146958449
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T2118936031_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (Animator_t2118936031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (AnimatorControllerParameter_t2807556998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1301[5] = 
{
	AnimatorControllerParameter_t2807556998::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t2807556998::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t2807556998::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t2807556998::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t2807556998::get_offset_of_m_DefaultBool_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (SkeletonBone_t2141522195)+ sizeof (RuntimeObject), sizeof(SkeletonBone_t2141522195_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1302[5] = 
{
	SkeletonBone_t2141522195::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2141522195::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2141522195::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2141522195::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2141522195::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (HumanLimit_t1040373785)+ sizeof (RuntimeObject), sizeof(HumanLimit_t1040373785 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1303[5] = 
{
	HumanLimit_t1040373785::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1040373785::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1040373785::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1040373785::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1040373785::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (HumanBone_t2622106031)+ sizeof (RuntimeObject), sizeof(HumanBone_t2622106031_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1304[3] = 
{
	HumanBone_t2622106031::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2622106031::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2622106031::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (AvatarMask_t2506926403), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (Motion_t808578727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (RuntimeAnimatorController_t2932920034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (TerrainData_t2197258045), -1, sizeof(TerrainData_t2197258045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1308[8] = 
{
	TerrainData_t2197258045_StaticFields::get_offset_of_kMaximumResolution_2(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMinimumDetailResolutionPerPatch_3(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMaximumDetailResolutionPerPatch_4(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMaximumDetailPatchCount_5(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMinimumAlphamapResolution_6(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMaximumAlphamapResolution_7(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMinimumBaseMapResolution_8(),
	TerrainData_t2197258045_StaticFields::get_offset_of_kMaximumBaseMapResolution_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (Terrain_t3340946042), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (WebRequestUtils_t87784604), -1, sizeof(WebRequestUtils_t87784604_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1310[1] = 
{
	WebRequestUtils_t87784604_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (RemoteSettings_t1505182961), -1, sizeof(RemoteSettings_t1505182961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1311[1] = 
{
	RemoteSettings_t1505182961_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (UpdatedEventHandler_t3061193229), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (AttributeHelperEngine_t60532540), -1, sizeof(AttributeHelperEngine_t60532540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1313[3] = 
{
	AttributeHelperEngine_t60532540_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t60532540_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t60532540_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (DisallowMultipleComponent_t246986370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (RequireComponent_t3075622351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1315[3] = 
{
	RequireComponent_t3075622351::get_offset_of_m_Type0_0(),
	RequireComponent_t3075622351::get_offset_of_m_Type1_1(),
	RequireComponent_t3075622351::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (ContextMenu_t1101808255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1316[3] = 
{
	ContextMenu_t1101808255::get_offset_of_menuItem_0(),
	ContextMenu_t1101808255::get_offset_of_validate_1(),
	ContextMenu_t1101808255::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (ExecuteInEditMode_t1496242752), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (DefaultExecutionOrder_t2127628101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1318[1] = 
{
	DefaultExecutionOrder_t2127628101::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (NativeClassAttribute_t223731290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1319[1] = 
{
	NativeClassAttribute_t223731290::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (AssemblyIsEditorAssembly_t1322479726), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (WritableAttribute_t4245498943), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t1832210302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (SendMessageOptions_t226013177)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1323[3] = 
{
	SendMessageOptions_t226013177::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (Space_t3807538215)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1324[3] = 
{
	Space_t3807538215::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (LogType_t3681922264)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1325[6] = 
{
	LogType_t3681922264::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (ClassLibraryInitializer_t458000753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (Color_t2397423938)+ sizeof (RuntimeObject), sizeof(Color_t2397423938 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1327[4] = 
{
	Color_t2397423938::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t2397423938::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t2397423938::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t2397423938::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (SetupCoroutine_t637727239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (RenderingPath_t340655521)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1329[6] = 
{
	RenderingPath_t340655521::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (CameraClearFlags_t2617071265)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1330[6] = 
{
	CameraClearFlags_t2617071265::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (DepthTextureMode_t2276089931)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1331[5] = 
{
	DepthTextureMode_t2276089931::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (ColorSpace_t3347339102)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1332[4] = 
{
	ColorSpace_t3347339102::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (RenderTextureFormat_t563860057)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1333[26] = 
{
	RenderTextureFormat_t563860057::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (KeyCode_t1876902466)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1334[322] = 
{
	KeyCode_t1876902466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (MathfInternal_t3129953727)+ sizeof (RuntimeObject), sizeof(MathfInternal_t3129953727 ), sizeof(MathfInternal_t3129953727_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1335[3] = 
{
	MathfInternal_t3129953727_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t3129953727_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t3129953727_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (SendMouseEvents_t4216672545), -1, sizeof(SendMouseEvents_t4216672545_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1336[5] = 
{
	SendMouseEvents_t4216672545_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t4216672545_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t4216672545_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t4216672545_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t4216672545_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (HitInfo_t117409249)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1337[2] = 
{
	HitInfo_t117409249::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t117409249::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (Ray_t996480860)+ sizeof (RuntimeObject), sizeof(Ray_t996480860 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1338[2] = 
{
	Ray_t996480860::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t996480860::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (Rect_t3687671493)+ sizeof (RuntimeObject), sizeof(Rect_t3687671493 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1339[4] = 
{
	Rect_t3687671493::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3687671493::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3687671493::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3687671493::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (SerializePrivateVariables_t371765070), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (SerializeField_t2833771755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (PreferBinarySerialization_t2805800158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (StackTraceUtility_t2707237013), -1, sizeof(StackTraceUtility_t2707237013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1344[1] = 
{
	StackTraceUtility_t2707237013_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (UnityException_t1343138538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1345[2] = 
{
	0,
	UnityException_t1343138538::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (TrackedReference_t3289412462), sizeof(TrackedReference_t3289412462_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1346[1] = 
{
	TrackedReference_t3289412462::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (PersistentListenerMode_t454676402)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1347[8] = 
{
	PersistentListenerMode_t454676402::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (ArgumentCache_t3949450206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1348[6] = 
{
	ArgumentCache_t3949450206::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t3949450206::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t3949450206::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t3949450206::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t3949450206::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t3949450206::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (BaseInvokableCall_t2827695340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (InvokableCall_t1559784500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1350[1] = 
{
	InvokableCall_t1559784500::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1351[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1352[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1353[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1354[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1355[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (UnityEventCallState_t2672122886)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1356[4] = 
{
	UnityEventCallState_t2672122886::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (PersistentCall_t1431688844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1357[5] = 
{
	PersistentCall_t1431688844::get_offset_of_m_Target_0(),
	PersistentCall_t1431688844::get_offset_of_m_MethodName_1(),
	PersistentCall_t1431688844::get_offset_of_m_Mode_2(),
	PersistentCall_t1431688844::get_offset_of_m_Arguments_3(),
	PersistentCall_t1431688844::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (PersistentCallGroup_t483572753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[1] = 
{
	PersistentCallGroup_t483572753::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (InvokableCallList_t498431185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[4] = 
{
	InvokableCallList_t498431185::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t498431185::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t498431185::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t498431185::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (UnityEventBase_t229837512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1360[4] = 
{
	UnityEventBase_t229837512::get_offset_of_m_Calls_0(),
	UnityEventBase_t229837512::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t229837512::get_offset_of_m_TypeName_2(),
	UnityEventBase_t229837512::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (UnityAction_t367684186), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (UnityEvent_t351113774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1362[1] = 
{
	UnityEvent_t351113774::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1364[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1366[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1368[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1370[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (UnityString_t2065254957), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (UnitySynchronizationContext_t78566565), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1372[1] = 
{
	UnitySynchronizationContext_t78566565::get_offset_of_m_AsyncWorkQueue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (WorkRequest_t847436943)+ sizeof (RuntimeObject), sizeof(WorkRequest_t847436943_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1373[2] = 
{
	WorkRequest_t847436943::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t847436943::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (Vector2_t3863032716)+ sizeof (RuntimeObject), sizeof(Vector2_t3863032716 ), sizeof(Vector2_t3863032716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1374[10] = 
{
	Vector2_t3863032716::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3863032716::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3863032716_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t3863032716_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t3863032716_StaticFields::get_offset_of_upVector_4(),
	Vector2_t3863032716_StaticFields::get_offset_of_downVector_5(),
	Vector2_t3863032716_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t3863032716_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t3863032716_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t3863032716_StaticFields::get_offset_of_negativeInfinityVector_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (Vector4_t3765161168)+ sizeof (RuntimeObject), sizeof(Vector4_t3765161168 ), sizeof(Vector4_t3765161168_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1375[8] = 
{
	Vector4_t3765161168::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3765161168::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3765161168::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3765161168::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3765161168_StaticFields::get_offset_of_zeroVector_4(),
	Vector4_t3765161168_StaticFields::get_offset_of_oneVector_5(),
	Vector4_t3765161168_StaticFields::get_offset_of_positiveInfinityVector_6(),
	Vector4_t3765161168_StaticFields::get_offset_of_negativeInfinityVector_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (ThreadAndSerializationSafeAttribute_t6222069), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (ReadOnlyAttribute_t46331259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (ReadWriteAttribute_t1908051691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (WriteOnlyAttribute_t3486741447), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (DeallocateOnJobCompletionAttribute_t3954359404), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (NativeContainerAttribute_t1738083211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t4280614094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t6982105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (FrameData_t2411593493)+ sizeof (RuntimeObject), sizeof(FrameData_t2411593493 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1384[6] = 
{
	FrameData_t2411593493::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2411593493::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2411593493::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2411593493::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2411593493::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2411593493::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (Flags_t1886585621)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1385[5] = 
{
	Flags_t1886585621::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (PlayableBinding_t2375981985)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t2375981985_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1389[6] = 
{
	PlayableBinding_t2375981985_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t2375981985_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t2375981985::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2375981985::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2375981985::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2375981985::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (PlayableAsset_t3155298426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (PlayableBehaviour_t758329460), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (PlayableExtensions_t230220531), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (ScriptPlayableOutput_t721148303)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t721148303 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1394[1] = 
{
	ScriptPlayableOutput_t721148303::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (DefaultValueAttribute_t2579945900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1395[1] = 
{
	DefaultValueAttribute_t2579945900::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (ExcludeFromDocsAttribute_t2347703120), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (Logger_t727290581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1399[3] = 
{
	Logger_t727290581::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t727290581::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t727290581::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
