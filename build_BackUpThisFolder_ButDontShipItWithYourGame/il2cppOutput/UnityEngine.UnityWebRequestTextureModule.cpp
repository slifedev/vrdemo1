﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAEEA45345F4FE6CCC29A863B181BFCCC6EDBCAC7 
{
};
struct Il2CppArrayBounds;

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerTexture::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_3;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerTexture_Create_m6DBB03DC64DB11F35862D7A4F6B4A814B8531A21 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* ___obj0, bool ___readable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerTexture::InternalCreateTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture_InternalCreateTexture_m2BC0B138561A55B9CCAB694E4447888B21D1B47A (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, bool ___readable0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::InternalGetNativeArray(UnityEngine.Networking.DownloadHandler,Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandler_InternalGetNativeArray_mE622083BC3893B43BC8E7C467A1895664C3B6B89 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___nativeArray1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::DisposeNativeArray(Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_DisposeNativeArray_m96514980A0A48921D17C059CAC2CC0CDA27B2398 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_InternalGetTexture_mD1882B183F71176C89B42DB2C8A185BC9A647167 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, bool ___markNonReadable2, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_InternalGetTextureNative_m9244CDF2A5DE7B9971121CAC5642DD5FEA877688 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke(const DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C& unmarshaled, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mTexture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_2Exception, NULL);
}
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke_back(const DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke& marshaled, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C& unmarshaled)
{
	Exception_t* ___mTexture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke_cleanup(DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_com(const DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C& unmarshaled, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com& marshaled)
{
	Exception_t* ___mTexture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_2Exception, NULL);
}
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_com_back(const DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com& marshaled, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C& unmarshaled)
{
	Exception_t* ___mTexture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mTexture' of type 'DownloadHandlerTexture': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mTexture_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerTexture
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_com_cleanup(DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerTexture_Create_m6DBB03DC64DB11F35862D7A4F6B4A814B8531A21 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* ___obj0, bool ___readable1, const RuntimeMethod* method) 
{
	typedef intptr_t (*DownloadHandlerTexture_Create_m6DBB03DC64DB11F35862D7A4F6B4A814B8531A21_ftn) (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*, bool);
	static DownloadHandlerTexture_Create_m6DBB03DC64DB11F35862D7A4F6B4A814B8531A21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerTexture_Create_m6DBB03DC64DB11F35862D7A4F6B4A814B8531A21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerTexture::Create(UnityEngine.Networking.DownloadHandlerTexture,System.Boolean)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0, ___readable1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerTexture::InternalCreateTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture_InternalCreateTexture_m2BC0B138561A55B9CCAB694E4447888B21D1B47A (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, bool ___readable0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___readable0;
		intptr_t L_1;
		L_1 = DownloadHandlerTexture_Create_m6DBB03DC64DB11F35862D7A4F6B4A814B8531A21(__this, L_0, NULL);
		((DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)__this)->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_mA6C92B03C55BEF004327BB6BCF65DDFBC9C32448 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) 
{
	{
		DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496(__this, NULL);
		DownloadHandlerTexture_InternalCreateTexture_m2BC0B138561A55B9CCAB694E4447888B21D1B47A(__this, (bool)1, NULL);
		return;
	}
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerTexture::GetNativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandlerTexture_GetNativeData_m241724A953EC64E660235D0A0374EFACE1B0779A (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_NativeData_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
		L_1 = DownloadHandler_InternalGetNativeArray_mE622083BC3893B43BC8E7C467A1895664C3B6B89(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerTexture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture_Dispose_m8B9EB903164BC27743144F900697F7B98A4725EB (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_NativeData_1);
		DownloadHandler_DisposeNativeArray_m96514980A0A48921D17C059CAC2CC0CDA27B2398(L_0, NULL);
		DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607(__this, NULL);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = DownloadHandlerTexture_InternalGetTexture_mD1882B183F71176C89B42DB2C8A185BC9A647167(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_InternalGetTexture_mD1882B183F71176C89B42DB2C8A185BC9A647167 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	{
		bool L_0 = __this->___mHasTexture_3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___mTexture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_5, 2, 2, NULL);
		__this->___mTexture_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTexture_2), (void*)L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___mTexture_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		bool L_8 = __this->___mNonReadable_4;
		bool L_9;
		L_9 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_6, L_7, L_8, NULL);
	}

IL_0043:
	{
		goto IL_006b;
	}

IL_0046:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___mTexture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13;
		L_13 = DownloadHandlerTexture_InternalGetTextureNative_m9244CDF2A5DE7B9971121CAC5642DD5FEA877688(__this, NULL);
		__this->___mTexture_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTexture_2), (void*)L_13);
		__this->___mHasTexture_3 = (bool)1;
	}

IL_006b:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___mTexture_2;
		V_3 = L_14;
		goto IL_0074;
	}

IL_0074:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = V_3;
		return L_15;
	}
}
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_InternalGetTextureNative_m9244CDF2A5DE7B9971121CAC5642DD5FEA877688 (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*DownloadHandlerTexture_InternalGetTextureNative_m9244CDF2A5DE7B9971121CAC5642DD5FEA877688_ftn) (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*);
	static DownloadHandlerTexture_InternalGetTextureNative_m9244CDF2A5DE7B9971121CAC5642DD5FEA877688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerTexture_InternalGetTextureNative_m9244CDF2A5DE7B9971121CAC5642DD5FEA877688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerTexture::InternalGetTextureNative()");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
