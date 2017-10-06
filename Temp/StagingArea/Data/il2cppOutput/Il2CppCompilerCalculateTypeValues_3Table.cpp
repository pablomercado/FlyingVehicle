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

// System.Resources.ResourceReader
struct ResourceReader_t245859303;
// System.IO.BinaryReader
struct BinaryReader_t952925772;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t2103757076;
// System.String[]
struct StringU5BU5D_t2275540065;
// System.Int32[]
struct Int32U5BU5D_t2942908703;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t924128164;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t1347791534;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2368642789;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2809512249;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t3392694585;
// System.Collections.Hashtable
struct Hashtable_t4024586986;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t1869800743;
// System.String
struct String_t;
// System.Resources.IResourceReader
struct IResourceReader_t1068169422;
// System.IntPtr[]
struct IntPtrU5BU5D_t4035255078;
// System.Collections.IDictionary
struct IDictionary_t2191078970;
// System.Void
struct Void_t2676718510;
// System.Char[]
struct CharU5BU5D_t2962628799;
// System.Boolean[]
struct BooleanU5BU5D_t2963767402;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1629769061;
// System.Version
struct Version_t4289377547;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t1492585683;
// System.Security.Policy.Evidence
struct Evidence_t3195450845;
// System.Security.PermissionSet
struct PermissionSet_t3724113291;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2951260664;
// System.Globalization.CultureInfo
struct CultureInfo_t4204378876;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3468857108;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t2626897282;
// System.Type[]
struct TypeU5BU5D_t1021701797;
// System.Reflection.MemberFilter
struct MemberFilter_t2087388120;
// System.Reflection.TypeFilter
struct TypeFilter_t1900818543;
// System.Reflection.Assembly
struct Assembly_t317548586;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t614608216;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3160944035;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t3661999303;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t2641426868;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t3197337596;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t1189970240;
// System.Delegate
struct Delegate_t2340917300;
// System.IAsyncResult
struct IAsyncResult_t2868655746;
// System.AsyncCallback
struct AsyncCallback_t3670325603;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3095583925;




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
#ifndef RESOURCEENUMERATOR_T3585436510_H
#define RESOURCEENUMERATOR_T3585436510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t3585436510  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t245859303 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3585436510, ___reader_0)); }
	inline ResourceReader_t245859303 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t245859303 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t245859303 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3585436510, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3585436510, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T3585436510_H
#ifndef RESOURCEREADER_T245859303_H
#define RESOURCEREADER_T245859303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t245859303  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t952925772 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t2275540065* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t2942908703* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t924128164* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t1347791534* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___reader_0)); }
	inline BinaryReader_t952925772 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t952925772 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t952925772 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___typeNames_5)); }
	inline StringU5BU5D_t2275540065* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t2275540065** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t2275540065* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___hashes_6)); }
	inline Int32U5BU5D_t2942908703* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t2942908703** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t2942908703* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___infos_7)); }
	inline ResourceInfoU5BU5D_t924128164* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t924128164** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t924128164* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t1347791534* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t1347791534** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t1347791534* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t245859303, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T245859303_H
#ifndef ERRORWRAPPER_T1108964844_H
#define ERRORWRAPPER_T1108964844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t1108964844  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t1108964844, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T1108964844_H
#ifndef CUSTOMATTRIBUTEDATA_T1347830919_H
#define CUSTOMATTRIBUTEDATA_T1347830919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1347830919  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t2368642789 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1347830919, ___ctorInfo_0)); }
	inline ConstructorInfo_t2368642789 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t2368642789 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t2368642789 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1347830919, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1347830919, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1347830919_H
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
#ifndef MISSING_T3744388041_H
#define MISSING_T3744388041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t3744388041  : public RuntimeObject
{
public:

public:
};

struct Missing_t3744388041_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t3744388041 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t3744388041_StaticFields, ___Value_0)); }
	inline Missing_t3744388041 * get_Value_0() const { return ___Value_0; }
	inline Missing_t3744388041 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t3744388041 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T3744388041_H
#ifndef BINDER_T3266350495_H
#define BINDER_T3266350495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t3266350495  : public RuntimeObject
{
public:

public:
};

struct Binder_t3266350495_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t3266350495 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t3266350495_StaticFields, ___default_binder_0)); }
	inline Binder_t3266350495 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t3266350495 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t3266350495 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T3266350495_H
#ifndef RESOURCEMANAGER_T546052469_H
#define RESOURCEMANAGER_T546052469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t546052469  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t546052469, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t546052469_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t4024586986 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t4024586986 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t546052469_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t4024586986 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t4024586986 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t4024586986 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t546052469_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t4024586986 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t4024586986 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t4024586986 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t546052469_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t546052469_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T546052469_H
#ifndef STRONGNAMEKEYPAIR_T3468857108_H
#define STRONGNAMEKEYPAIR_T3468857108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t3468857108  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t1869800743* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t1869800743* ____keyPairArray_3;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3468857108, ____publicKey_0)); }
	inline ByteU5BU5D_t1869800743* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t1869800743** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t1869800743* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3468857108, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3468857108, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3468857108, ____keyPairArray_3)); }
	inline ByteU5BU5D_t1869800743* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t1869800743** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t1869800743* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T3468857108_H
#ifndef ACTIVATIONARGUMENTS_T2611769532_H
#define ACTIVATIONARGUMENTS_T2611769532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t2611769532  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T2611769532_H
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
#ifndef RESOLVEEVENTHOLDER_T1492585683_H
#define RESOLVEEVENTHOLDER_T1492585683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t1492585683  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T1492585683_H
#ifndef RESOURCESET_T4218771694_H
#define RESOURCESET_T4218771694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t4218771694  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t4024586986 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t4218771694, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t4218771694, ___Table_1)); }
	inline Hashtable_t4024586986 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t4024586986 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t4024586986 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t4218771694, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t4218771694, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T4218771694_H
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
#ifndef POINTER_T84297976_H
#define POINTER_T84297976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t84297976  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t84297976, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t84297976, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T84297976_H
#ifndef ISVOLATILE_T3211668452_H
#define ISVOLATILE_T3211668452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t3211668452  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T3211668452_H
#ifndef CRITICALFINALIZEROBJECT_T128427236_H
#define CRITICALFINALIZEROBJECT_T128427236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t128427236  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T128427236_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef GCHANDLE_T186292695_H
#define GCHANDLE_T186292695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t186292695 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t186292695, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T186292695_H
#ifndef METHODBASE_T3761590319_H
#define METHODBASE_T3761590319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t3761590319  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T3761590319_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T4081950347_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T4081950347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t4081950347  : public Attribute_t1850271163
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t4081950347, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T4081950347_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef TARGETINVOCATIONEXCEPTION_T2997584986_H
#define TARGETINVOCATIONEXCEPTION_T2997584986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t2997584986  : public Exception_t1466198312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T2997584986_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T1524191784_H
#define COMDEFAULTINTERFACEATTRIBUTE_T1524191784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t1524191784  : public Attribute_t1850271163
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t1524191784, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T1524191784_H
#ifndef TARGETEXCEPTION_T4141638150_H
#define TARGETEXCEPTION_T4141638150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t4141638150  : public Exception_t1466198312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T4141638150_H
#ifndef STRINGFREEZINGATTRIBUTE_T3406482133_H
#define STRINGFREEZINGATTRIBUTE_T3406482133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3406482133  : public Attribute_t1850271163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3406482133_H
#ifndef RUNTIMERESOURCESET_T1003426681_H
#define RUNTIMERESOURCESET_T1003426681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t1003426681  : public ResourceSet_t4218771694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T1003426681_H
#ifndef DISPIDATTRIBUTE_T2885733042_H
#define DISPIDATTRIBUTE_T2885733042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t2885733042  : public Attribute_t1850271163
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t2885733042, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T2885733042_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1309929527_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1309929527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1309929527  : public Exception_t1466198312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1309929527_H
#ifndef RESOURCEINFO_T1132304601_H
#define RESOURCEINFO_T1132304601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t1132304601 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t1132304601, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t1132304601, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t1132304601, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t1132304601_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t1132304601_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T1132304601_H
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
#ifndef RESOURCECACHEITEM_T2190928663_H
#define RESOURCECACHEITEM_T2190928663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t2190928663 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t2190928663, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t2190928663, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t2190928663_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t2190928663_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T2190928663_H
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
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T2889566987_H
#define ASSEMBLYCOMPANYATTRIBUTE_T2889566987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t2889566987  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t2889566987, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T2889566987_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T5478422_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T5478422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t5478422  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t5478422, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T5478422_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T1660658015_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T1660658015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t1660658015  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t1660658015, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T1660658015_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T2107792053_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T2107792053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t2107792053  : public Attribute_t1850271163
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t2107792053, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T2107792053_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T3498340525_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T3498340525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t3498340525  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t3498340525, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T3498340525_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T1864470389_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T1864470389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t1864470389  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t1864470389, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T1864470389_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T1852172291_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T1852172291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t1852172291  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t1852172291, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T1852172291_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T2781906566_H
#define ASSEMBLYKEYFILEATTRIBUTE_T2781906566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t2781906566  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t2781906566, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T2781906566_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1062105160_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1062105160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1062105160  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1062105160, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1062105160_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T13863074_H
#define ASSEMBLYTITLEATTRIBUTE_T13863074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t13863074  : public Attribute_t1850271163
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t13863074, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T13863074_H
#ifndef DEFAULT_T3839682353_H
#define DEFAULT_T3839682353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t3839682353  : public Binder_t3266350495
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T3839682353_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1919101615_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1919101615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t1919101615  : public Attribute_t1850271163
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t1919101615, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1919101615_H
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
#ifndef SYSTEMEXCEPTION_T1099041752_H
#define SYSTEMEXCEPTION_T1099041752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1099041752  : public Exception_t1466198312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1099041752_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T3959039841_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T3959039841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t3959039841 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3959039841, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3959039841, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3959039841_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3959039841_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T3959039841_H
#ifndef PARAMETERMODIFIER_T3610785254_H
#define PARAMETERMODIFIER_T3610785254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t3610785254 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2963767402* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t3610785254, ____byref_0)); }
	inline BooleanU5BU5D_t2963767402* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2963767402** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2963767402* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t3610785254_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t3610785254_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T3610785254_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1629769061 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1629769061 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1629769061 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1629769061 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T3196515910_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T3196515910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t3196515910  : public Attribute_t1850271163
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t4289377547 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t3196515910, ___ver_0)); }
	inline Version_t4289377547 * get_ver_0() const { return ___ver_0; }
	inline Version_t4289377547 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t4289377547 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T3196515910_H
#ifndef EXTERNALEXCEPTION_T1036229052_H
#define EXTERNALEXCEPTION_T1036229052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1036229052  : public SystemException_t1099041752
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1036229052_H
#ifndef LOADHINT_T1813712112_H
#define LOADHINT_T1813712112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t1813712112 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t1813712112, ___value___1)); }
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
#endif // LOADHINT_T1813712112_H
#ifndef CER_T237392612_H
#define CER_T237392612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t237392612 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t237392612, ___value___1)); }
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
#endif // CER_T237392612_H
#ifndef CONSISTENCY_T3574160451_H
#define CONSISTENCY_T3574160451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t3574160451 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t3574160451, ___value___1)); }
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
#endif // CONSISTENCY_T3574160451_H
#ifndef CALLINGCONVENTION_T2198284760_H
#define CALLINGCONVENTION_T2198284760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t2198284760 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t2198284760, ___value___1)); }
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
#endif // CALLINGCONVENTION_T2198284760_H
#ifndef CHARSET_T3751546076_H
#define CHARSET_T3751546076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t3751546076 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t3751546076, ___value___1)); }
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
#endif // CHARSET_T3751546076_H
#ifndef CLASSINTERFACETYPE_T2589167871_H
#define CLASSINTERFACETYPE_T2589167871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t2589167871 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t2589167871, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T2589167871_H
#ifndef COMINTERFACETYPE_T4040158961_H
#define COMINTERFACETYPE_T4040158961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t4040158961 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t4040158961, ___value___1)); }
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
#endif // COMINTERFACETYPE_T4040158961_H
#ifndef GCHANDLETYPE_T1095455665_H
#define GCHANDLETYPE_T1095455665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t1095455665 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t1095455665, ___value___1)); }
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
#endif // GCHANDLETYPE_T1095455665_H
#ifndef UNMANAGEDTYPE_T1664552938_H
#define UNMANAGEDTYPE_T1664552938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1664552938 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t1664552938, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T1664552938_H
#ifndef ASSEMBLYHASHALGORITHM_T2225799756_H
#define ASSEMBLYHASHALGORITHM_T2225799756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t2225799756 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t2225799756, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T2225799756_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T4048086142_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T4048086142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t4048086142 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t4048086142, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T4048086142_H
#ifndef RUNTIMEFIELDHANDLE_T2029661284_H
#define RUNTIMEFIELDHANDLE_T2029661284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2029661284 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2029661284, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2029661284_H
#ifndef COMPILATIONRELAXATIONS_T3606083972_H
#define COMPILATIONRELAXATIONS_T3606083972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t3606083972 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3606083972, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T3606083972_H
#ifndef STACKBEHAVIOUR_T2605586348_H
#define STACKBEHAVIOUR_T2605586348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t2605586348 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t2605586348, ___value___1)); }
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
#endif // STACKBEHAVIOUR_T2605586348_H
#ifndef PROPERTYATTRIBUTES_T1320862068_H
#define PROPERTYATTRIBUTES_T1320862068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t1320862068 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t1320862068, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T1320862068_H
#ifndef TYPEATTRIBUTES_T2699204175_H
#define TYPEATTRIBUTES_T2699204175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t2699204175 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t2699204175, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T2699204175_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T2060041653_H
#define AMBIGUOUSMATCHEXCEPTION_T2060041653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t2060041653  : public SystemException_t1099041752
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T2060041653_H
#ifndef ASSEMBLY_T317548586_H
#define ASSEMBLY_T317548586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t317548586  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t1492585683 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t3195450845 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t3724113291 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t3724113291 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t3724113291 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t3724113291 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t3724113291 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t1492585683 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t1492585683 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t1492585683 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____evidence_2)); }
	inline Evidence_t3195450845 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t3195450845 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t3195450845 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____minimum_3)); }
	inline PermissionSet_t3724113291 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t3724113291 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t3724113291 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____optional_4)); }
	inline PermissionSet_t3724113291 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t3724113291 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t3724113291 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____refuse_5)); }
	inline PermissionSet_t3724113291 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t3724113291 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t3724113291 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____granted_6)); }
	inline PermissionSet_t3724113291 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t3724113291 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t3724113291 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ____denied_7)); }
	inline PermissionSet_t3724113291 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t3724113291 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t3724113291 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t317548586, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T317548586_H
#ifndef ASSEMBLYNAMEFLAGS_T3095609915_H
#define ASSEMBLYNAMEFLAGS_T3095609915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3095609915 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3095609915, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3095609915_H
#ifndef BINDINGFLAGS_T835082431_H
#define BINDINGFLAGS_T835082431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t835082431 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t835082431, ___value___1)); }
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
#endif // BINDINGFLAGS_T835082431_H
#ifndef CALLINGCONVENTIONS_T2486190627_H
#define CALLINGCONVENTIONS_T2486190627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2486190627 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t2486190627, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T2486190627_H
#ifndef CONSTRUCTORINFO_T2368642789_H
#define CONSTRUCTORINFO_T2368642789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t2368642789  : public MethodBase_t3761590319
{
public:

public:
};

struct ConstructorInfo_t2368642789_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2368642789_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2368642789_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T2368642789_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T247254881_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T247254881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t247254881 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t3959039841  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t247254881, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t3959039841  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t3959039841 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t3959039841  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t247254881, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t247254881_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t3959039841_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t247254881_marshaled_com
{
	CustomAttributeTypedArgument_t3959039841_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T247254881_H
#ifndef EVENTATTRIBUTES_T1425910058_H
#define EVENTATTRIBUTES_T1425910058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t1425910058 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t1425910058, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T1425910058_H
#ifndef FIELDATTRIBUTES_T1702608754_H
#define FIELDATTRIBUTES_T1702608754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t1702608754 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t1702608754, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T1702608754_H
#ifndef MEMBERTYPES_T3920624203_H
#define MEMBERTYPES_T3920624203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3920624203 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3920624203, ___value___1)); }
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
#endif // MEMBERTYPES_T3920624203_H
#ifndef METHODATTRIBUTES_T906040495_H
#define METHODATTRIBUTES_T906040495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t906040495 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t906040495, ___value___1)); }
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
#endif // METHODATTRIBUTES_T906040495_H
#ifndef METHODIMPLATTRIBUTES_T1083377479_H
#define METHODIMPLATTRIBUTES_T1083377479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t1083377479 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t1083377479, ___value___1)); }
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
#endif // METHODIMPLATTRIBUTES_T1083377479_H
#ifndef PREDEFINEDRESOURCETYPE_T2642871564_H
#define PREDEFINEDRESOURCETYPE_T2642871564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t2642871564 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t2642871564, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T2642871564_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t3761590319
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
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
#ifndef PARAMETERATTRIBUTES_T3019304372_H
#define PARAMETERATTRIBUTES_T3019304372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t3019304372 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t3019304372, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T3019304372_H
#ifndef RUNTIMETYPEHANDLE_T1186534005_H
#define RUNTIMETYPEHANDLE_T1186534005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1186534005 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1186534005, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T1186534005_H
#ifndef PINFO_T1869264188_H
#define PINFO_T1869264188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t1869264188 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t1869264188, ___value___1)); }
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
#endif // PINFO_T1869264188_H
#ifndef PROCESSORARCHITECTURE_T3340801959_H
#define PROCESSORARCHITECTURE_T3340801959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t3340801959 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t3340801959, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T3340801959_H
#ifndef ASSEMBLYNAME_T3440603507_H
#define ASSEMBLYNAME_T3440603507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t3440603507  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4204378876 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3468857108 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t1869800743* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t1869800743* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t4289377547 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___cultureinfo_6)); }
	inline CultureInfo_t4204378876 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4204378876 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4204378876 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___keypair_9)); }
	inline StrongNameKeyPair_t3468857108 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3468857108 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3468857108 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___publicKey_10)); }
	inline ByteU5BU5D_t1869800743* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t1869800743** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t1869800743* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___keyToken_11)); }
	inline ByteU5BU5D_t1869800743* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t1869800743** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t1869800743* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___version_13)); }
	inline Version_t4289377547 * get_version_13() const { return ___version_13; }
	inline Version_t4289377547 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t4289377547 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t3440603507, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T3440603507_H
#ifndef PARAMETERINFO_T4002664088_H
#define PARAMETERINFO_T4002664088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t4002664088  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t2626897282 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t4002664088, ___marshalAs_6)); }
	inline UnmanagedMarshal_t2626897282 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t2626897282 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t2626897282 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T4002664088_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T2659359482_H
#define DEFAULTDEPENDENCYATTRIBUTE_T2659359482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t2659359482  : public Attribute_t1850271163
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t2659359482, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T2659359482_H
#ifndef UNMANAGEDMARSHAL_T2626897282_H
#define UNMANAGEDMARSHAL_T2626897282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t2626897282  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2626897282, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T2626897282_H
#ifndef COMEXCEPTION_T1149271130_H
#define COMEXCEPTION_T1149271130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1149271130  : public ExternalException_t1036229052
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1149271130_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1186534005  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1186534005  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1186534005 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1186534005  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1021701797* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t2087388120 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t2087388120 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t2087388120 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t1021701797* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1021701797** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1021701797* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t2087388120 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t2087388120 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t2087388120 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t2087388120 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t2087388120 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t2087388120 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t2087388120 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t2087388120 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t2087388120 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MONOPROPERTYINFO_T2372533922_H
#define MONOPROPERTYINFO_T2372533922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t2372533922 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2372533922, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2372533922, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2372533922, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2372533922, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2372533922, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t2372533922_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t2372533922_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T2372533922_H
#ifndef INTERFACETYPEATTRIBUTE_T2472784978_H
#define INTERFACETYPEATTRIBUTE_T2472784978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t2472784978  : public Attribute_t1850271163
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t2472784978, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T2472784978_H
#ifndef MONOCMETHOD_T301244612_H
#define MONOCMETHOD_T301244612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t301244612  : public ConstructorInfo_t2368642789
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t301244612, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t301244612, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t301244612, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T301244612_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOMETHODINFO_T203801227_H
#define MONOMETHODINFO_T203801227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t203801227 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t203801227, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t203801227, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t203801227, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t203801227, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t203801227, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t203801227_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t203801227_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T203801227_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T4090503190_H
#define RELIABILITYCONTRACTATTRIBUTE_T4090503190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t4090503190  : public Attribute_t1850271163
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t4090503190, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t4090503190, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T4090503190_H
#ifndef MODULE_T150557221_H
#define MODULE_T150557221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t150557221  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t317548586 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t150557221, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t150557221, ___assembly_4)); }
	inline Assembly_t317548586 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t317548586 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t317548586 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t150557221, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t150557221, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t150557221, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t150557221, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t150557221, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t150557221_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t1900818543 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t1900818543 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t150557221_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t1900818543 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t1900818543 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t1900818543 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t150557221_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t1900818543 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t1900818543 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t1900818543 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T150557221_H
#ifndef MONOEVENTINFO_T3133227420_H
#define MONOEVENTINFO_T3133227420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t3133227420 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t614608216* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3133227420, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t614608216* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t614608216** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t614608216* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3133227420_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t614608216* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3133227420_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t614608216* ___other_methods_7;
};
#endif // MONOEVENTINFO_T3133227420_H
#ifndef CLASSINTERFACEATTRIBUTE_T2411901175_H
#define CLASSINTERFACEATTRIBUTE_T2411901175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2411901175  : public Attribute_t1850271163
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2411901175, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2411901175_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2029661284  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t2029661284  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2029661284 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2029661284  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T4070351293_H
#define MEMBERINFOSERIALIZATIONHOLDER_T4070351293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t4070351293  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t1021701797* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4070351293, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4070351293, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4070351293, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4070351293, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4070351293, ____genericArguments_4)); }
	inline TypeU5BU5D_t1021701797* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t1021701797** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t1021701797* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T4070351293_H
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
#ifndef TYPEBUILDER_T826292838_H
#define TYPEBUILDER_T826292838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t826292838  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t1021701797* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3160944035* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t3661999303* ___ctors_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t2641426868* ___fields_16;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_17;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t3197337596 * ___pmodule_18;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t1189970240* ___generic_params_19;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_20;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_21;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_22;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_23;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___interfaces_12)); }
	inline TypeU5BU5D_t1021701797* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t1021701797** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t1021701797* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___methods_14)); }
	inline MethodBuilderU5BU5D_t3160944035* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t3160944035** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t3160944035* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t3661999303* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t3661999303** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t3661999303* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_fields_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___fields_16)); }
	inline FieldBuilderU5BU5D_t2641426868* get_fields_16() const { return ___fields_16; }
	inline FieldBuilderU5BU5D_t2641426868** get_address_of_fields_16() { return &___fields_16; }
	inline void set_fields_16(FieldBuilderU5BU5D_t2641426868* value)
	{
		___fields_16 = value;
		Il2CppCodeGenWriteBarrier((&___fields_16), value);
	}

	inline static int32_t get_offset_of_attrs_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___attrs_17)); }
	inline int32_t get_attrs_17() const { return ___attrs_17; }
	inline int32_t* get_address_of_attrs_17() { return &___attrs_17; }
	inline void set_attrs_17(int32_t value)
	{
		___attrs_17 = value;
	}

	inline static int32_t get_offset_of_pmodule_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___pmodule_18)); }
	inline ModuleBuilder_t3197337596 * get_pmodule_18() const { return ___pmodule_18; }
	inline ModuleBuilder_t3197337596 ** get_address_of_pmodule_18() { return &___pmodule_18; }
	inline void set_pmodule_18(ModuleBuilder_t3197337596 * value)
	{
		___pmodule_18 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_18), value);
	}

	inline static int32_t get_offset_of_generic_params_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___generic_params_19)); }
	inline GenericTypeParameterBuilderU5BU5D_t1189970240* get_generic_params_19() const { return ___generic_params_19; }
	inline GenericTypeParameterBuilderU5BU5D_t1189970240** get_address_of_generic_params_19() { return &___generic_params_19; }
	inline void set_generic_params_19(GenericTypeParameterBuilderU5BU5D_t1189970240* value)
	{
		___generic_params_19 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_19), value);
	}

	inline static int32_t get_offset_of_created_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___created_20)); }
	inline Type_t * get_created_20() const { return ___created_20; }
	inline Type_t ** get_address_of_created_20() { return &___created_20; }
	inline void set_created_20(Type_t * value)
	{
		___created_20 = value;
		Il2CppCodeGenWriteBarrier((&___created_20), value);
	}

	inline static int32_t get_offset_of_fullname_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___fullname_21)); }
	inline String_t* get_fullname_21() const { return ___fullname_21; }
	inline String_t** get_address_of_fullname_21() { return &___fullname_21; }
	inline void set_fullname_21(String_t* value)
	{
		___fullname_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_21), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___createTypeCalled_22)); }
	inline bool get_createTypeCalled_22() const { return ___createTypeCalled_22; }
	inline bool* get_address_of_createTypeCalled_22() { return &___createTypeCalled_22; }
	inline void set_createTypeCalled_22(bool value)
	{
		___createTypeCalled_22 = value;
	}

	inline static int32_t get_offset_of_underlying_type_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t826292838, ___underlying_type_23)); }
	inline Type_t * get_underlying_type_23() const { return ___underlying_type_23; }
	inline Type_t ** get_address_of_underlying_type_23() { return &___underlying_type_23; }
	inline void set_underlying_type_23(Type_t * value)
	{
		___underlying_type_23 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T826292838_H
#ifndef ADDEVENTADAPTER_T1629769061_H
#define ADDEVENTADAPTER_T1629769061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t1629769061  : public MulticastDelegate_t3367977848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T1629769061_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t2372533922  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t3095583925 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t2372533922  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t2372533922 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t2372533922  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t3095583925 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t3095583925 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t3095583925 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef MONOGENERICCMETHOD_T2630784152_H
#define MONOGENERICCMETHOD_T2630784152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t2630784152  : public MonoCMethod_t301244612
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T2630784152_H
#ifndef GETTERADAPTER_T3095583925_H
#define GETTERADAPTER_T3095583925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t3095583925  : public MulticastDelegate_t3367977848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T3095583925_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (StackBehaviour_t2605586348)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable300[30] = 
{
	StackBehaviour_t2605586348::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (TypeBuilder_t826292838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable301[16] = 
{
	TypeBuilder_t826292838::get_offset_of_tname_8(),
	TypeBuilder_t826292838::get_offset_of_nspace_9(),
	TypeBuilder_t826292838::get_offset_of_parent_10(),
	TypeBuilder_t826292838::get_offset_of_nesting_type_11(),
	TypeBuilder_t826292838::get_offset_of_interfaces_12(),
	TypeBuilder_t826292838::get_offset_of_num_methods_13(),
	TypeBuilder_t826292838::get_offset_of_methods_14(),
	TypeBuilder_t826292838::get_offset_of_ctors_15(),
	TypeBuilder_t826292838::get_offset_of_fields_16(),
	TypeBuilder_t826292838::get_offset_of_attrs_17(),
	TypeBuilder_t826292838::get_offset_of_pmodule_18(),
	TypeBuilder_t826292838::get_offset_of_generic_params_19(),
	TypeBuilder_t826292838::get_offset_of_created_20(),
	TypeBuilder_t826292838::get_offset_of_fullname_21(),
	TypeBuilder_t826292838::get_offset_of_createTypeCalled_22(),
	TypeBuilder_t826292838::get_offset_of_underlying_type_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (UnmanagedMarshal_t2626897282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable302[9] = 
{
	UnmanagedMarshal_t2626897282::get_offset_of_count_0(),
	UnmanagedMarshal_t2626897282::get_offset_of_t_1(),
	UnmanagedMarshal_t2626897282::get_offset_of_tbase_2(),
	UnmanagedMarshal_t2626897282::get_offset_of_guid_3(),
	UnmanagedMarshal_t2626897282::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t2626897282::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t2626897282::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t2626897282::get_offset_of_param_num_7(),
	UnmanagedMarshal_t2626897282::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (AmbiguousMatchException_t2060041653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (Assembly_t317548586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[10] = 
{
	Assembly_t317548586::get_offset_of__mono_assembly_0(),
	Assembly_t317548586::get_offset_of_resolve_event_holder_1(),
	Assembly_t317548586::get_offset_of__evidence_2(),
	Assembly_t317548586::get_offset_of__minimum_3(),
	Assembly_t317548586::get_offset_of__optional_4(),
	Assembly_t317548586::get_offset_of__refuse_5(),
	Assembly_t317548586::get_offset_of__granted_6(),
	Assembly_t317548586::get_offset_of__denied_7(),
	Assembly_t317548586::get_offset_of_fromByteArray_8(),
	Assembly_t317548586::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (ResolveEventHolder_t1492585683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (AssemblyCompanyAttribute_t2889566987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[1] = 
{
	AssemblyCompanyAttribute_t2889566987::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (AssemblyCopyrightAttribute_t5478422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[1] = 
{
	AssemblyCopyrightAttribute_t5478422::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (AssemblyDefaultAliasAttribute_t1660658015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[1] = 
{
	AssemblyDefaultAliasAttribute_t1660658015::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (AssemblyDelaySignAttribute_t2107792053), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[1] = 
{
	AssemblyDelaySignAttribute_t2107792053::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (AssemblyDescriptionAttribute_t3498340525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable310[1] = 
{
	AssemblyDescriptionAttribute_t3498340525::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (AssemblyFileVersionAttribute_t1864470389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	AssemblyFileVersionAttribute_t1864470389::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (AssemblyInformationalVersionAttribute_t1852172291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	AssemblyInformationalVersionAttribute_t1852172291::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (AssemblyKeyFileAttribute_t2781906566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	AssemblyKeyFileAttribute_t2781906566::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (AssemblyName_t3440603507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[15] = 
{
	AssemblyName_t3440603507::get_offset_of_name_0(),
	AssemblyName_t3440603507::get_offset_of_codebase_1(),
	AssemblyName_t3440603507::get_offset_of_major_2(),
	AssemblyName_t3440603507::get_offset_of_minor_3(),
	AssemblyName_t3440603507::get_offset_of_build_4(),
	AssemblyName_t3440603507::get_offset_of_revision_5(),
	AssemblyName_t3440603507::get_offset_of_cultureinfo_6(),
	AssemblyName_t3440603507::get_offset_of_flags_7(),
	AssemblyName_t3440603507::get_offset_of_hashalg_8(),
	AssemblyName_t3440603507::get_offset_of_keypair_9(),
	AssemblyName_t3440603507::get_offset_of_publicKey_10(),
	AssemblyName_t3440603507::get_offset_of_keyToken_11(),
	AssemblyName_t3440603507::get_offset_of_versioncompat_12(),
	AssemblyName_t3440603507::get_offset_of_version_13(),
	AssemblyName_t3440603507::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (AssemblyNameFlags_t3095609915)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable315[6] = 
{
	AssemblyNameFlags_t3095609915::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (AssemblyProductAttribute_t1062105160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	AssemblyProductAttribute_t1062105160::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (AssemblyTitleAttribute_t13863074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable317[1] = 
{
	AssemblyTitleAttribute_t13863074::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (Binder_t3266350495), -1, sizeof(Binder_t3266350495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	Binder_t3266350495_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (Default_t3839682353), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (BindingFlags_t835082431)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable320[21] = 
{
	BindingFlags_t835082431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (CallingConventions_t2486190627)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[6] = 
{
	CallingConventions_t2486190627::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (ConstructorInfo_t2368642789), -1, sizeof(ConstructorInfo_t2368642789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable322[2] = 
{
	ConstructorInfo_t2368642789_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t2368642789_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (CustomAttributeData_t1347830919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[3] = 
{
	CustomAttributeData_t1347830919::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1347830919::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1347830919::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (CustomAttributeNamedArgument_t247254881)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[2] = 
{
	CustomAttributeNamedArgument_t247254881::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t247254881::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (CustomAttributeTypedArgument_t3959039841)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[2] = 
{
	CustomAttributeTypedArgument_t3959039841::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t3959039841::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (EventAttributes_t1425910058)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable326[5] = 
{
	EventAttributes_t1425910058::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AddEventAdapter_t1629769061), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (FieldAttributes_t1702608754)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable329[20] = 
{
	FieldAttributes_t1702608754::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (MemberInfoSerializationHolder_t4070351293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[5] = 
{
	MemberInfoSerializationHolder_t4070351293::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t4070351293::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t4070351293::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t4070351293::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t4070351293::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (MemberTypes_t3920624203)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable332[10] = 
{
	MemberTypes_t3920624203::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (MethodAttributes_t906040495)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable333[25] = 
{
	MethodAttributes_t906040495::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (MethodBase_t3761590319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (MethodImplAttributes_t1083377479)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable335[15] = 
{
	MethodImplAttributes_t1083377479::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (Missing_t3744388041), -1, sizeof(Missing_t3744388041_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	Missing_t3744388041_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (Module_t150557221), -1, sizeof(Module_t150557221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable338[10] = 
{
	0,
	Module_t150557221_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t150557221_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t150557221::get_offset_of__impl_3(),
	Module_t150557221::get_offset_of_assembly_4(),
	Module_t150557221::get_offset_of_fqname_5(),
	Module_t150557221::get_offset_of_name_6(),
	Module_t150557221::get_offset_of_scopename_7(),
	Module_t150557221::get_offset_of_is_resource_8(),
	Module_t150557221::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (MonoEventInfo_t3133227420)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable339[8] = 
{
	MonoEventInfo_t3133227420::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3133227420::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable341[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (MonoGenericCMethod_t2630784152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (MonoMethodInfo_t203801227)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[5] = 
{
	MonoMethodInfo_t203801227::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t203801227::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t203801227::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t203801227::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t203801227::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (MonoCMethod_t301244612), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[3] = 
{
	MonoCMethod_t301244612::get_offset_of_mhandle_2(),
	MonoCMethod_t301244612::get_offset_of_name_3(),
	MonoCMethod_t301244612::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (MonoPropertyInfo_t2372533922)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[5] = 
{
	MonoPropertyInfo_t2372533922::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2372533922::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2372533922::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2372533922::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2372533922::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (PInfo_t1869264188)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable348[7] = 
{
	PInfo_t1869264188::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable349[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (GetterAdapter_t3095583925), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (ParameterAttributes_t3019304372)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable353[12] = 
{
	ParameterAttributes_t3019304372::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (ParameterInfo_t4002664088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[7] = 
{
	ParameterInfo_t4002664088::get_offset_of_ClassImpl_0(),
	ParameterInfo_t4002664088::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t4002664088::get_offset_of_MemberImpl_2(),
	ParameterInfo_t4002664088::get_offset_of_NameImpl_3(),
	ParameterInfo_t4002664088::get_offset_of_PositionImpl_4(),
	ParameterInfo_t4002664088::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t4002664088::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (ParameterModifier_t3610785254)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t3610785254_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable355[1] = 
{
	ParameterModifier_t3610785254::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (Pointer_t84297976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable356[2] = 
{
	Pointer_t84297976::get_offset_of_data_0(),
	Pointer_t84297976::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (ProcessorArchitecture_t3340801959)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable357[6] = 
{
	ProcessorArchitecture_t3340801959::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (PropertyAttributes_t1320862068)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable358[9] = 
{
	PropertyAttributes_t1320862068::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (StrongNameKeyPair_t3468857108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[4] = 
{
	StrongNameKeyPair_t3468857108::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3468857108::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3468857108::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3468857108::get_offset_of__keyPairArray_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (TargetException_t4141638150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (TargetInvocationException_t2997584986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (TargetParameterCountException_t1309929527), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (TypeAttributes_t2699204175)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable364[32] = 
{
	TypeAttributes_t2699204175::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (NeutralResourcesLanguageAttribute_t1919101615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable366[1] = 
{
	NeutralResourcesLanguageAttribute_t1919101615::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (ResourceManager_t546052469), -1, sizeof(ResourceManager_t546052469_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable367[5] = 
{
	ResourceManager_t546052469_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t546052469_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t546052469_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t546052469_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t546052469::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (PredefinedResourceType_t2642871564)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable368[21] = 
{
	PredefinedResourceType_t2642871564::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (ResourceReader_t245859303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[13] = 
{
	ResourceReader_t245859303::get_offset_of_reader_0(),
	ResourceReader_t245859303::get_offset_of_readerLock_1(),
	ResourceReader_t245859303::get_offset_of_formatter_2(),
	ResourceReader_t245859303::get_offset_of_resourceCount_3(),
	ResourceReader_t245859303::get_offset_of_typeCount_4(),
	ResourceReader_t245859303::get_offset_of_typeNames_5(),
	ResourceReader_t245859303::get_offset_of_hashes_6(),
	ResourceReader_t245859303::get_offset_of_infos_7(),
	ResourceReader_t245859303::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t245859303::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t245859303::get_offset_of_resource_ver_10(),
	ResourceReader_t245859303::get_offset_of_cache_11(),
	ResourceReader_t245859303::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (ResourceInfo_t1132304601)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t1132304601_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable370[3] = 
{
	ResourceInfo_t1132304601::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t1132304601::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t1132304601::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (ResourceCacheItem_t2190928663)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t2190928663_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable371[2] = 
{
	ResourceCacheItem_t2190928663::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t2190928663::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (ResourceEnumerator_t3585436510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable372[3] = 
{
	ResourceEnumerator_t3585436510::get_offset_of_reader_0(),
	ResourceEnumerator_t3585436510::get_offset_of_index_1(),
	ResourceEnumerator_t3585436510::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (ResourceSet_t4218771694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable373[4] = 
{
	ResourceSet_t4218771694::get_offset_of_Reader_0(),
	ResourceSet_t4218771694::get_offset_of_Table_1(),
	ResourceSet_t4218771694::get_offset_of_resources_read_2(),
	ResourceSet_t4218771694::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (RuntimeResourceSet_t1003426681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (SatelliteContractVersionAttribute_t3196515910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable375[1] = 
{
	SatelliteContractVersionAttribute_t3196515910::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (CompilationRelaxations_t3606083972)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable376[2] = 
{
	CompilationRelaxations_t3606083972::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (CompilationRelaxationsAttribute_t4081950347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable377[1] = 
{
	CompilationRelaxationsAttribute_t4081950347::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (DefaultDependencyAttribute_t2659359482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable378[1] = 
{
	DefaultDependencyAttribute_t2659359482::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (IsVolatile_t3211668452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (LoadHint_t1813712112)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable380[4] = 
{
	LoadHint_t1813712112::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (StringFreezingAttribute_t3406482133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (Cer_t237392612)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable382[4] = 
{
	Cer_t237392612::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (Consistency_t3574160451)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[5] = 
{
	Consistency_t3574160451::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (CriticalFinalizerObject_t128427236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (ReliabilityContractAttribute_t4090503190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable385[2] = 
{
	ReliabilityContractAttribute_t4090503190::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t4090503190::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (ActivationArguments_t2611769532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (COMException_t1149271130), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (CallingConvention_t2198284760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable388[6] = 
{
	CallingConvention_t2198284760::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (CharSet_t3751546076)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable389[5] = 
{
	CharSet_t3751546076::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (ClassInterfaceAttribute_t2411901175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable390[1] = 
{
	ClassInterfaceAttribute_t2411901175::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ClassInterfaceType_t2589167871)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable391[4] = 
{
	ClassInterfaceType_t2589167871::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (ComDefaultInterfaceAttribute_t1524191784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[1] = 
{
	ComDefaultInterfaceAttribute_t1524191784::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ComInterfaceType_t4040158961)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable393[4] = 
{
	ComInterfaceType_t4040158961::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (DispIdAttribute_t2885733042), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable394[1] = 
{
	DispIdAttribute_t2885733042::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (ErrorWrapper_t1108964844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable395[1] = 
{
	ErrorWrapper_t1108964844::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (ExternalException_t1036229052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (GCHandle_t186292695)+ sizeof (RuntimeObject), sizeof(GCHandle_t186292695 ), 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	GCHandle_t186292695::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (GCHandleType_t1095455665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable398[5] = 
{
	GCHandleType_t1095455665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (InterfaceTypeAttribute_t2472784978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	InterfaceTypeAttribute_t2472784978::get_offset_of_intType_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
