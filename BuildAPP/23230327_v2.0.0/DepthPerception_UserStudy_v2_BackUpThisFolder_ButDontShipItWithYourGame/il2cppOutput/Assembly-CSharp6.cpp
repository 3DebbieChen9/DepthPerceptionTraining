#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// MocapApi.MCPEvent_t[]
struct MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// MocapApi.IMCPApplication
struct IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344;
// MocapApi.InterfaceNotFountException
struct InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA;
// MocapApi.Interop
struct Interop_tC4A711C7740BE4C928530E11F6419100A9C4B78E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// MocapApi.Utils
struct Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled
struct _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication
struct _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication
struct _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication
struct _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents
struct _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents
struct _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars
struct _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies
struct _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules
struct _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers
struct _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication
struct _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent
struct _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand
struct _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings
struct _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37;
// MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings
struct _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_DestroyRenderSettings
struct _DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetCoordSystem
struct _GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetFrontVector
struct _GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetRotatingDirection
struct _GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetUnit
struct _GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetCoordSystem
struct _SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetRotatingDirection
struct _SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78;
// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetUnit
struct _SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EMCPCoordSystem_t72F10A26BACA3AFD5C4DCFD26E34BB9BF5BBCA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EMCPFrontVector_t7C80098D8CBD3861E78A3B350165AB1F90C1AFB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EMCPRotatingDirection_t41E0FD28D97FC133C5D61548560F34F283CD5543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EMCPUnit_t2FDFA285D22B9D89DE6C4EAE2001E18F458065AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1546CDECDC242D338CA7602230C531079471CE9E;
IL2CPP_EXTERN_C String_t* _stringLiteral68746D40E78A61A85B82507E784B6E085BC48D70;
IL2CPP_EXTERN_C const RuntimeMethod* IMCPApplication__ctor_mBDEE50A59AD30C0F98050B54D41A8B786B1243B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// MocapApi.Interop
struct Interop_tC4A711C7740BE4C928530E11F6419100A9C4B78E  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// MocapApi.Utils
struct Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C  : public RuntimeObject
{
};

struct Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields
{
	// System.Byte[] MocapApi.Utils::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_0;
};

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

// MocapApi.MCPEvent_CommandRespond_t
struct MCPEvent_CommandRespond_t_tCABE5CC8A50A075E3398E021BCF64F5564DA98F4 
{
	// System.UInt64 MocapApi.MCPEvent_CommandRespond_t::_commandHandle
	uint64_t ____commandHandle_0;
	// MocapApi.EMCPReplay MocapApi.MCPEvent_CommandRespond_t::_replay
	int32_t ____replay_1;
};

// MocapApi.MCPEvent_MotionData_t
struct MCPEvent_MotionData_t_tA1E6DF7929D4A57F4B7CE176F53BCD328D27FBB4 
{
	// System.UInt64 MocapApi.MCPEvent_MotionData_t::avatarHandle
	uint64_t ___avatarHandle_0;
};

// MocapApi.MCPEvent_Reserved_t
struct MCPEvent_Reserved_t_t25E73438518B9BE1C726092165C4F4CBC9E155C3 
{
	// System.UInt64 MocapApi.MCPEvent_Reserved_t::reserved0
	uint64_t ___reserved0_0;
	// System.UInt64 MocapApi.MCPEvent_Reserved_t::reserved1
	uint64_t ___reserved1_1;
	// System.UInt64 MocapApi.MCPEvent_Reserved_t::reserved2
	uint64_t ___reserved2_2;
	// System.UInt64 MocapApi.MCPEvent_Reserved_t::reserved3
	uint64_t ___reserved3_3;
	// System.UInt64 MocapApi.MCPEvent_Reserved_t::reserved4
	uint64_t ___reserved4_4;
	// System.UInt64 MocapApi.MCPEvent_Reserved_t::reserved5
	uint64_t ___reserved5_5;
};

// MocapApi.MCPEvent_SensorModuleData_t
struct MCPEvent_SensorModuleData_t_t8C062B96EBC505C1104418DAAC64FC19844F64DA 
{
	// System.UInt64 MocapApi.MCPEvent_SensorModuleData_t::_sensorModuleHandle
	uint64_t ____sensorModuleHandle_0;
};

// MocapApi.MCPEvent_SystemError_t
struct MCPEvent_SystemError_t_t7C17C3367646B8FDB99F67A9833F425A8EDCB465 
{
	// MocapApi.EMCPError MocapApi.MCPEvent_SystemError_t::error
	int32_t ___error_0;
	// System.UInt64 MocapApi.MCPEvent_SystemError_t::info0
	uint64_t ___info0_1;
};

// MocapApi.MCPEvent_TrackerData_t
struct MCPEvent_TrackerData_t_tE3978A4BE512FF41DFDD26D75233C11D15482B21 
{
	// System.UInt64 MocapApi.MCPEvent_TrackerData_t::_trackerHandle
	uint64_t ____trackerHandle_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable
struct MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F 
{
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication MocapApi.IMCPApplication/MCPApplication_ProcTable::CreateApplication
	_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* ___CreateApplication_0;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication MocapApi.IMCPApplication/MCPApplication_ProcTable::DestroyApplication
	_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* ___DestroyApplication_1;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings MocapApi.IMCPApplication/MCPApplication_ProcTable::SetApplicationSettings
	_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* ___SetApplicationSettings_2;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings MocapApi.IMCPApplication/MCPApplication_ProcTable::SetApplicationRenderSettings
	_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* ___SetApplicationRenderSettings_3;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication MocapApi.IMCPApplication/MCPApplication_ProcTable::OpenApplication
	_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* ___OpenApplication_4;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents MocapApi.IMCPApplication/MCPApplication_ProcTable::EnableApplicationCacheEvents
	_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* ___EnableApplicationCacheEvents_5;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents MocapApi.IMCPApplication/MCPApplication_ProcTable::DisableApplicationCacheEvents
	_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* ___DisableApplicationCacheEvents_6;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled MocapApi.IMCPApplication/MCPApplication_ProcTable::ApplicationCacheEventsIsEnabled
	_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* ___ApplicationCacheEventsIsEnabled_7;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication MocapApi.IMCPApplication/MCPApplication_ProcTable::CloseApplication
	_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* ___CloseApplication_8;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies MocapApi.IMCPApplication/MCPApplication_ProcTable::GetApplicationRigidBodies
	_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* ___GetApplicationRigidBodies_9;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars MocapApi.IMCPApplication/MCPApplication_ProcTable::GetApplicationAvatars
	_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* ___GetApplicationAvatars_10;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent MocapApi.IMCPApplication/MCPApplication_ProcTable::PollApplicationNextEvent
	_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* ___PollApplicationNextEvent_11;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules MocapApi.IMCPApplication/MCPApplication_ProcTable::GetApplicationSensorModules
	_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* ___GetApplicationSensorModules_12;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers MocapApi.IMCPApplication/MCPApplication_ProcTable::GetApplicationTrackers
	_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* ___GetApplicationTrackers_13;
	// MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand MocapApi.IMCPApplication/MCPApplication_ProcTable::QueuedServerCommand
	_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* ___QueuedServerCommand_14;
};
// Native definition for P/Invoke marshalling of MocapApi.IMCPApplication/MCPApplication_ProcTable
struct MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_pinvoke
{
	Il2CppMethodPointer ___CreateApplication_0;
	Il2CppMethodPointer ___DestroyApplication_1;
	Il2CppMethodPointer ___SetApplicationSettings_2;
	Il2CppMethodPointer ___SetApplicationRenderSettings_3;
	Il2CppMethodPointer ___OpenApplication_4;
	Il2CppMethodPointer ___EnableApplicationCacheEvents_5;
	Il2CppMethodPointer ___DisableApplicationCacheEvents_6;
	Il2CppMethodPointer ___ApplicationCacheEventsIsEnabled_7;
	Il2CppMethodPointer ___CloseApplication_8;
	Il2CppMethodPointer ___GetApplicationRigidBodies_9;
	Il2CppMethodPointer ___GetApplicationAvatars_10;
	Il2CppMethodPointer ___PollApplicationNextEvent_11;
	Il2CppMethodPointer ___GetApplicationSensorModules_12;
	Il2CppMethodPointer ___GetApplicationTrackers_13;
	Il2CppMethodPointer ___QueuedServerCommand_14;
};
// Native definition for COM marshalling of MocapApi.IMCPApplication/MCPApplication_ProcTable
struct MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_com
{
	Il2CppMethodPointer ___CreateApplication_0;
	Il2CppMethodPointer ___DestroyApplication_1;
	Il2CppMethodPointer ___SetApplicationSettings_2;
	Il2CppMethodPointer ___SetApplicationRenderSettings_3;
	Il2CppMethodPointer ___OpenApplication_4;
	Il2CppMethodPointer ___EnableApplicationCacheEvents_5;
	Il2CppMethodPointer ___DisableApplicationCacheEvents_6;
	Il2CppMethodPointer ___ApplicationCacheEventsIsEnabled_7;
	Il2CppMethodPointer ___CloseApplication_8;
	Il2CppMethodPointer ___GetApplicationRigidBodies_9;
	Il2CppMethodPointer ___GetApplicationAvatars_10;
	Il2CppMethodPointer ___PollApplicationNextEvent_11;
	Il2CppMethodPointer ___GetApplicationSensorModules_12;
	Il2CppMethodPointer ___GetApplicationTrackers_13;
	Il2CppMethodPointer ___QueuedServerCommand_14;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// MocapApi.IMCPApplication
struct IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344  : public RuntimeObject
{
	// MocapApi.IMCPApplication/MCPApplication_ProcTable MocapApi.IMCPApplication::ProcTable
	MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F ___ProcTable_0;
};

struct IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_StaticFields
{
	// MocapApi.IMCPApplication MocapApi.IMCPApplication::application
	IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* ___application_1;
};

// MocapApi.MCPEventData_t
struct MCPEventData_t_t696DC40444642C7AF49F7C095FBA95840F84FF68 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// MocapApi.MCPEvent_Reserved_t MocapApi.MCPEventData_t::reserved
			MCPEvent_Reserved_t_t25E73438518B9BE1C726092165C4F4CBC9E155C3 ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			MCPEvent_Reserved_t_t25E73438518B9BE1C726092165C4F4CBC9E155C3 ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// MocapApi.MCPEvent_MotionData_t MocapApi.MCPEventData_t::motionData
			MCPEvent_MotionData_t_tA1E6DF7929D4A57F4B7CE176F53BCD328D27FBB4 ___motionData_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			MCPEvent_MotionData_t_tA1E6DF7929D4A57F4B7CE176F53BCD328D27FBB4 ___motionData_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// MocapApi.MCPEvent_SystemError_t MocapApi.MCPEventData_t::systemError
			MCPEvent_SystemError_t_t7C17C3367646B8FDB99F67A9833F425A8EDCB465 ___systemError_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			MCPEvent_SystemError_t_t7C17C3367646B8FDB99F67A9833F425A8EDCB465 ___systemError_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// MocapApi.MCPEvent_SensorModuleData_t MocapApi.MCPEventData_t::sensorModuleData
			MCPEvent_SensorModuleData_t_t8C062B96EBC505C1104418DAAC64FC19844F64DA ___sensorModuleData_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			MCPEvent_SensorModuleData_t_t8C062B96EBC505C1104418DAAC64FC19844F64DA ___sensorModuleData_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// MocapApi.MCPEvent_TrackerData_t MocapApi.MCPEventData_t::trackerData
			MCPEvent_TrackerData_t_tE3978A4BE512FF41DFDD26D75233C11D15482B21 ___trackerData_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			MCPEvent_TrackerData_t_tE3978A4BE512FF41DFDD26D75233C11D15482B21 ___trackerData_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// MocapApi.MCPEvent_CommandRespond_t MocapApi.MCPEventData_t::commandRespond
			MCPEvent_CommandRespond_t_tCABE5CC8A50A075E3398E021BCF64F5564DA98F4 ___commandRespond_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			MCPEvent_CommandRespond_t_tCABE5CC8A50A075E3398E021BCF64F5564DA98F4 ___commandRespond_5_forAlignmentOnly;
		};
	};
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// MocapApi.InterfaceNotFountException
struct InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA  : public Exception_t
{
};

// MocapApi.MCPEvent_t
struct MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2 
{
	// System.UInt32 MocapApi.MCPEvent_t::size
	uint32_t ___size_0;
	// MocapApi.EMCPEventType MocapApi.MCPEvent_t::eventType
	int32_t ___eventType_1;
	// System.Double MocapApi.MCPEvent_t::fTimestamp
	double ___fTimestamp_2;
	// MocapApi.MCPEventData_t MocapApi.MCPEvent_t::eventData
	MCPEventData_t_t696DC40444642C7AF49F7C095FBA95840F84FF68 ___eventData_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled
struct _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication
struct _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication
struct _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication
struct _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents
struct _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents
struct _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars
struct _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies
struct _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules
struct _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers
struct _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication
struct _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent
struct _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand
struct _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings
struct _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37  : public MulticastDelegate_t
{
};

// MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings
struct _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_DestroyRenderSettings
struct _DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetCoordSystem
struct _GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetFrontVector
struct _GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetRotatingDirection
struct _GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetUnit
struct _GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetCoordSystem
struct _SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetRotatingDirection
struct _SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78  : public MulticastDelegate_t
{
};

// MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetUnit
struct _SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MocapApi.MCPEvent_t[]
struct MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9  : public RuntimeArray
{
	ALIGN_FIELD (8) MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2 m_Items[1];

	inline MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2 value)
	{
		m_Items[index] = value;
	}
};
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



// System.Void MocapApi.IMCPApplication::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMCPApplication__ctor_mBDEE50A59AD30C0F98050B54D41A8B786B1243B3 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication::Invoke(System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_inline (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_inline (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings::Invoke(System.UInt64,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_inline (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings::Invoke(System.UInt64,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_inline (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_inline (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_inline (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_inline (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled::Invoke(System.Boolean&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_inline (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_inline (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_inline (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_inline (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent::Invoke(MocapApi.MCPEvent_t[],System.UInt32&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_inline (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_inline (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_inline (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand::Invoke(System.UInt64,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_inline (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// MocapApi.EMCPError MocapApi.Interop::MCPGetGenericInterface(System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_MCPGetGenericInterface_mD483614C34204B8C1D785819FA1CB30E2F4BB3C5 (String_t* ___pchInterfaceVersion0, intptr_t* ___peError1, const RuntimeMethod* method) ;
// System.Void MocapApi.InterfaceNotFountException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceNotFountException__ctor_m7F7767C436D41A5F717AD01AC41EEC50DE97DD46 (InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA* __this, String_t* ___interfaceName0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MocapApi_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL MCPGetGenericInterface(char*, intptr_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_Multicast(_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* currentDelegate = reinterpret_cast<_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pFrontVector0, ___sign1, ___renderSettings2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_OpenInst(_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pFrontVector0, ___sign1, ___renderSettings2, method);
}
int32_t _GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_OpenStatic(_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pFrontVector0, ___sign1, ___renderSettings2, method);
}
int32_t _GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_OpenStaticInvoker(_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, int32_t*, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pFrontVector0, ___sign1, ___renderSettings2);
}
int32_t _GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_ClosedStaticInvoker(_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, int32_t*, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pFrontVector0, ___sign1, ___renderSettings2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC (_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t*, int32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pFrontVector0, ___sign1, ___renderSettings2);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetFrontVector::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetFrontVector__ctor_mCEC47DAAF72D6DEB20EEAF8E138CCCC223B403C2 (_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetFrontVector::Invoke(MocapApi.EMCPFrontVector&,System.Int32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFrontVector_Invoke_m3147FD89607F28C66FAB286299015BE09C97216B (_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pFrontVector0, ___sign1, ___renderSettings2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetFrontVector::BeginInvoke(MocapApi.EMCPFrontVector&,System.Int32&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetFrontVector_BeginInvoke_m0476436575FF038245A55E9F3797644C8E05C16E (_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, uint64_t ___renderSettings2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPFrontVector_t7C80098D8CBD3861E78A3B350165AB1F90C1AFB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(EMCPFrontVector_t7C80098D8CBD3861E78A3B350165AB1F90C1AFB2_il2cpp_TypeInfo_var, &*___pFrontVector0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &*___sign1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetFrontVector::EndInvoke(MocapApi.EMCPFrontVector&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFrontVector_EndInvoke_m9F5080358E36A8C9FA5BDA8B71D2AD69C80F867F (_GetFrontVector_t2C1B8A437DE5C9AF5334BAA1102DD9DF5D5129CC* __this, int32_t* ___pFrontVector0, int32_t* ___sign1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pFrontVector0,
	___sign1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_Multicast(_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* currentDelegate = reinterpret_cast<_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___coordSystem0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_OpenInst(_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___coordSystem0, ___renderSettings1, method);
}
int32_t _SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_OpenStatic(_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___coordSystem0, ___renderSettings1, method);
}
int32_t _SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_OpenStaticInvoker(_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___coordSystem0, ___renderSettings1);
}
int32_t _SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_ClosedStaticInvoker(_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___coordSystem0, ___renderSettings1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904 (_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___coordSystem0, ___renderSettings1);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetCoordSystem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetCoordSystem__ctor_m7776C0162ED6622492AD05E9F76A5D9946F841BE (_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetCoordSystem::Invoke(MocapApi.EMCPCoordSystem,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetCoordSystem_Invoke_m31FF38D33368ACCDB6B248FB9C9092230980E777 (_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___coordSystem0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetCoordSystem::BeginInvoke(MocapApi.EMCPCoordSystem,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetCoordSystem_BeginInvoke_mE0F2E10DD94A93A0107014064FC9E04A67FAD59A (_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, int32_t ___coordSystem0, uint64_t ___renderSettings1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPCoordSystem_t72F10A26BACA3AFD5C4DCFD26E34BB9BF5BBCA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EMCPCoordSystem_t72F10A26BACA3AFD5C4DCFD26E34BB9BF5BBCA3B_il2cpp_TypeInfo_var, &___coordSystem0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetCoordSystem::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetCoordSystem_EndInvoke_m7A04088DBE2A414228F3866E2AEA6E2FBD11AB4A (_SetCoordSystem_t1E6B48BD5209BBC3F7530904D21C6CE1A704F904* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_Multicast(_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* currentDelegate = reinterpret_cast<_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pCoordSystem0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_OpenInst(_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pCoordSystem0, ___renderSettings1, method);
}
int32_t _GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_OpenStatic(_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pCoordSystem0, ___renderSettings1, method);
}
int32_t _GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_OpenStaticInvoker(_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pCoordSystem0, ___renderSettings1);
}
int32_t _GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_ClosedStaticInvoker(_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pCoordSystem0, ___renderSettings1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC (_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pCoordSystem0, ___renderSettings1);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetCoordSystem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetCoordSystem__ctor_m3FE6781E575D612F2F41C88B37DA3314EA636181 (_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetCoordSystem::Invoke(MocapApi.EMCPCoordSystem&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetCoordSystem_Invoke_mB84CC39751BCCB60D577354B71D99C792523781A (_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pCoordSystem0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetCoordSystem::BeginInvoke(MocapApi.EMCPCoordSystem&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetCoordSystem_BeginInvoke_m75530994486AFC9DE53CE4D13F74F7CAB59CAC13 (_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, uint64_t ___renderSettings1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPCoordSystem_t72F10A26BACA3AFD5C4DCFD26E34BB9BF5BBCA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EMCPCoordSystem_t72F10A26BACA3AFD5C4DCFD26E34BB9BF5BBCA3B_il2cpp_TypeInfo_var, &*___pCoordSystem0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetCoordSystem::EndInvoke(MocapApi.EMCPCoordSystem&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetCoordSystem_EndInvoke_m9E2B07D832E1D675AFC48174820118836575B803 (_GetCoordSystem_t8BD4FC889397BE4F6928E32AFDEC838606C619BC* __this, int32_t* ___pCoordSystem0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pCoordSystem0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_Multicast(_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* currentDelegate = reinterpret_cast<_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___rotatingDirection0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_OpenInst(_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___rotatingDirection0, ___renderSettings1, method);
}
int32_t _SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_OpenStatic(_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___rotatingDirection0, ___renderSettings1, method);
}
int32_t _SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_OpenStaticInvoker(_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___rotatingDirection0, ___renderSettings1);
}
int32_t _SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_ClosedStaticInvoker(_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___rotatingDirection0, ___renderSettings1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78 (_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___rotatingDirection0, ___renderSettings1);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetRotatingDirection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetRotatingDirection__ctor_m8C184A2DAB8F3071CB37F13AD12495B80F22E6BB (_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetRotatingDirection::Invoke(MocapApi.EMCPRotatingDirection,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetRotatingDirection_Invoke_mC9ED990B258F062BF7420E8137BE8FE5E5A3BFE5 (_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___rotatingDirection0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetRotatingDirection::BeginInvoke(MocapApi.EMCPRotatingDirection,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetRotatingDirection_BeginInvoke_m6A55FB6696500A43FBBD2ABF326A250963F92A7C (_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, int32_t ___rotatingDirection0, uint64_t ___renderSettings1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPRotatingDirection_t41E0FD28D97FC133C5D61548560F34F283CD5543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EMCPRotatingDirection_t41E0FD28D97FC133C5D61548560F34F283CD5543_il2cpp_TypeInfo_var, &___rotatingDirection0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetRotatingDirection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetRotatingDirection_EndInvoke_m5BE3F071FB9A0D04EC1445B3628CA8B94440AD16 (_SetRotatingDirection_t96508CD1B26386C0AC1B4F98E19E91C592CDCF78* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_Multicast(_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* currentDelegate = reinterpret_cast<_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pRotatingDirection0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_OpenInst(_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pRotatingDirection0, ___renderSettings1, method);
}
int32_t _GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_OpenStatic(_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pRotatingDirection0, ___renderSettings1, method);
}
int32_t _GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_OpenStaticInvoker(_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pRotatingDirection0, ___renderSettings1);
}
int32_t _GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_ClosedStaticInvoker(_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pRotatingDirection0, ___renderSettings1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7 (_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pRotatingDirection0, ___renderSettings1);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetRotatingDirection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRotatingDirection__ctor_m141F46E7EC5CB6576B6C84AC5C10FE260B5702A4 (_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetRotatingDirection::Invoke(MocapApi.EMCPRotatingDirection&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRotatingDirection_Invoke_m2B5AAAD63451F9C0E5E0AB6246A7DA47D51607B9 (_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pRotatingDirection0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetRotatingDirection::BeginInvoke(MocapApi.EMCPRotatingDirection&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRotatingDirection_BeginInvoke_m4A6708A7BDC55EF2DCE0C1838B19D46A640EFCCD (_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, uint64_t ___renderSettings1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPRotatingDirection_t41E0FD28D97FC133C5D61548560F34F283CD5543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EMCPRotatingDirection_t41E0FD28D97FC133C5D61548560F34F283CD5543_il2cpp_TypeInfo_var, &*___pRotatingDirection0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetRotatingDirection::EndInvoke(MocapApi.EMCPRotatingDirection&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRotatingDirection_EndInvoke_m2E1245A33B51B004C5817CCB21B150803E64E8C7 (_GetRotatingDirection_t8CA75893C53F46D1EC48416F1553665B5A2398D7* __this, int32_t* ___pRotatingDirection0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pRotatingDirection0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_Multicast(_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* currentDelegate = reinterpret_cast<_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___mcpUnit0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_OpenInst(_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___mcpUnit0, ___renderSettings1, method);
}
int32_t _SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_OpenStatic(_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___mcpUnit0, ___renderSettings1, method);
}
int32_t _SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_OpenStaticInvoker(_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___mcpUnit0, ___renderSettings1);
}
int32_t _SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_ClosedStaticInvoker(_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___mcpUnit0, ___renderSettings1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34 (_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___mcpUnit0, ___renderSettings1);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetUnit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetUnit__ctor_m4CA266E676184F02122A1AE638701528DDA62954 (_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetUnit::Invoke(MocapApi.EMCPUnit,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetUnit_Invoke_m8F2E1318C63B4CAD1E8DC4E6D8BA0CFD6AB5248F (_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___mcpUnit0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetUnit::BeginInvoke(MocapApi.EMCPUnit,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetUnit_BeginInvoke_mC46F2C913305E635B7D6F736D7A53B17849ECE8B (_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, int32_t ___mcpUnit0, uint64_t ___renderSettings1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPUnit_t2FDFA285D22B9D89DE6C4EAE2001E18F458065AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EMCPUnit_t2FDFA285D22B9D89DE6C4EAE2001E18F458065AF_il2cpp_TypeInfo_var, &___mcpUnit0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_SetUnit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetUnit_EndInvoke_m80F7AA3EA4BA07909E43A59A9E62AD884209548D (_SetUnit_t6B819DF8607E081FCBCC8EAFAF1A584154ED7C34* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_Multicast(_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* currentDelegate = reinterpret_cast<_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___mcpUnit0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_OpenInst(_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___mcpUnit0, ___renderSettings1, method);
}
int32_t _GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_OpenStatic(_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___mcpUnit0, ___renderSettings1, method);
}
int32_t _GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_OpenStaticInvoker(_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___mcpUnit0, ___renderSettings1);
}
int32_t _GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_ClosedStaticInvoker(_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, int32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___mcpUnit0, ___renderSettings1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72 (_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___mcpUnit0, ___renderSettings1);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetUnit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetUnit__ctor_m8CD2F3E0F58408761E98DD733436FE1DFE3B8729 (_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetUnit::Invoke(MocapApi.EMCPUnit&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetUnit_Invoke_m9FAFED7CF9C750E06FCCFFB88405BD15C0BEBE29 (_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___mcpUnit0, ___renderSettings1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetUnit::BeginInvoke(MocapApi.EMCPUnit&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetUnit_BeginInvoke_m22E23F93789545BCE158DFD67D5AA1ED459548CC (_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, uint64_t ___renderSettings1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMCPUnit_t2FDFA285D22B9D89DE6C4EAE2001E18F458065AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(EMCPUnit_t2FDFA285D22B9D89DE6C4EAE2001E18F458065AF_il2cpp_TypeInfo_var, &*___mcpUnit0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_GetUnit::EndInvoke(MocapApi.EMCPUnit&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetUnit_EndInvoke_mBF33149380F5E09C4EEC766191800D37B23ADD2A (_GetUnit_t1A59CB55E4CD421B00FBCE92E0912E4B35DA8E72* __this, int32_t* ___mcpUnit0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___mcpUnit0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_Multicast(_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* currentDelegate = reinterpret_cast<_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___renderSettings0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_OpenInst(_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___renderSettings0, method);
}
int32_t _DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_OpenStatic(_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___renderSettings0, method);
}
int32_t _DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_OpenStaticInvoker(_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___renderSettings0);
}
int32_t _DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_ClosedStaticInvoker(_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___renderSettings0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71 (_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___renderSettings0);

	return returnValue;
}
// System.Void MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_DestroyRenderSettings::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _DestroyRenderSettings__ctor_mBBE3CF4F684555E03101E976BCDD42ABD3CAF0C8 (_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_DestroyRenderSettings::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DestroyRenderSettings_Invoke_mE75361A09810B8BF7781861CE235BC4775BA9504 (_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___renderSettings0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_DestroyRenderSettings::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DestroyRenderSettings_BeginInvoke_m5BE68186D9B963AB31054A5DB22603DDBAF39FCE (_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, uint64_t ___renderSettings0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___renderSettings0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPRenderSettings/MCPRenderSettings_ProcTable/_DestroyRenderSettings::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DestroyRenderSettings_EndInvoke_m1D3EC1DA260AB886140D764CE7D3CE1F819A6818 (_DestroyRenderSettings_tFF64CA6B14E9603952FB82AB01FEE41F96419E71* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MocapApi.IMCPApplication MocapApi.IMCPApplication::get_Application()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* IMCPApplication_get_Application_mC8B88E251F59079A1EACF31F0FF4ED5FB34779EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == application)
		IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* L_0 = ((IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_StaticFields*)il2cpp_codegen_static_fields_for(IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var))->___application_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// application = new IMCPApplication();
		IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* L_1 = (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344*)il2cpp_codegen_object_new(IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IMCPApplication__ctor_mBDEE50A59AD30C0F98050B54D41A8B786B1243B3(L_1, NULL);
		((IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_StaticFields*)il2cpp_codegen_static_fields_for(IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var))->___application_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_StaticFields*)il2cpp_codegen_static_fields_for(IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var))->___application_1), (void*)L_1);
	}

IL_0011:
	{
		// return application;
		IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* L_2 = ((IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_StaticFields*)il2cpp_codegen_static_fields_for(IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344_il2cpp_TypeInfo_var))->___application_1;
		return L_2;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::CreateApplication(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_CreateApplication_m5C04FBEF07F647CADC6CB773251079F088A5524C (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	{
		// return ProcTable.CreateApplication(ref ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* L_1 = L_0->___CreateApplication_0;
		uint64_t* L_2 = ___ulApplicationHandle0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::DestroyApplication(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_DestroyApplication_m1E51C118048740E22A328820F6261CB69839FC8C (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	{
		// return ProcTable.DestroyApplication(ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* L_1 = L_0->___DestroyApplication_1;
		uint64_t L_2 = ___ulApplicationHandle0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::SetApplicationSettings(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_SetApplicationSettings_m7F6E19DA645BF2DF7FE7145BA9DF2BE063DD5C14 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	{
		// return ProcTable.SetApplicationSettings(ulSettingsHandle, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* L_1 = L_0->___SetApplicationSettings_2;
		uint64_t L_2 = ___ulSettingsHandle0;
		uint64_t L_3 = ___ulApplicationHandle1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::SetApplicationRenderSettings(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_SetApplicationRenderSettings_mB0555C13F14BC84B1F3CB2114AD4949282A5828A (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	{
		// return ProcTable.SetApplicationRenderSettings(ulRenderSettings, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* L_1 = L_0->___SetApplicationRenderSettings_3;
		uint64_t L_2 = ___ulRenderSettings0;
		uint64_t L_3 = ___ulApplicationHandle1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::OpenApplication(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_OpenApplication_mE0ABDC9296F40DB0F5882ADADC1B3298B5120261 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	{
		// return ProcTable.OpenApplication(ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* L_1 = L_0->___OpenApplication_4;
		uint64_t L_2 = ___ulApplicationHandle0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::EnableApplicationCacheEvents(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_EnableApplicationCacheEvents_m999F63F2742464A61419FD7F62FBE34F57B70301 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	{
		// return ProcTable.EnableApplicationCacheEvents(ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* L_1 = L_0->___EnableApplicationCacheEvents_5;
		uint64_t L_2 = ___ulApplicationHandle0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::DisableApplicationCacheEvents(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_DisableApplicationCacheEvents_m084B6F7BFDB3E21AD4607C80F31073C2C1AE91E0 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	{
		// return ProcTable.DisableApplicationCacheEvents(ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* L_1 = L_0->___DisableApplicationCacheEvents_6;
		uint64_t L_2 = ___ulApplicationHandle0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::ApplicationCacheEventsIsEnabled(System.Boolean&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_ApplicationCacheEventsIsEnabled_m9E1624DB1FC947555CA39CBC46CD92D010156CD2 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	{
		// return ProcTable.ApplicationCacheEventsIsEnabled(ref isEnabled, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* L_1 = L_0->___ApplicationCacheEventsIsEnabled_7;
		bool* L_2 = ___isEnabled0;
		uint64_t L_3 = ___ulApplicationHandle1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::CloseApplication(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_CloseApplication_m1D3B3B535017BEEF6A8281B4612C7ABCAB59E096 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	{
		// return ProcTable.CloseApplication(ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* L_1 = L_0->___CloseApplication_8;
		uint64_t L_2 = ___ulApplicationHandle0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::GetApplicationRigidBodies(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_GetApplicationRigidBodies_m72964E95AC46CB532A7A99D4C732EFDFAB7FF10B (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	{
		// return ProcTable.GetApplicationRigidBodies(ref pRigidBodyHandle, ref punRigidBodyHandleSize, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* L_1 = L_0->___GetApplicationRigidBodies_9;
		uint64_t* L_2 = ___pRigidBodyHandle0;
		uint32_t* L_3 = ___punRigidBodyHandleSize1;
		uint64_t L_4 = ___ulApplicationHandle2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_inline(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::GetApplicationAvatars(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_GetApplicationAvatars_m2CB638DB02AC36AB1AE074FDAA6FCCDFF7A5F7B1 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	{
		// return ProcTable.GetApplicationAvatars(ref pAvatarHandle, ref punAvatarHandle, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* L_1 = L_0->___GetApplicationAvatars_10;
		uint64_t* L_2 = ___pAvatarHandle0;
		uint32_t* L_3 = ___punAvatarHandle1;
		uint64_t L_4 = ___ulApplicationHandle2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_inline(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::PollApplicationNextEvent(MocapApi.MCPEvent_t[],System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_PollApplicationNextEvent_m055E43BFEA55D8DAFD2851183517FBA818CCC44B (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	{
		// return ProcTable.PollApplicationNextEvent(pEvent, ref punSizeOfEvent, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* L_1 = L_0->___PollApplicationNextEvent_11;
		MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* L_2 = ___pEvent0;
		uint32_t* L_3 = ___punSizeOfEvent1;
		uint64_t L_4 = ___ulApplicationHandle2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_inline(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::GetApplicationSensorModules(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_GetApplicationSensorModules_m1ACC9FD0FD8A30E533EA7E3B357603902445A7D2 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	{
		// return ProcTable.GetApplicationSensorModules(ref pSensorModuleHandle, ref punSensorModuleHandle, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* L_1 = L_0->___GetApplicationSensorModules_12;
		uint64_t* L_2 = ___pSensorModuleHandle0;
		uint32_t* L_3 = ___punSensorModuleHandle1;
		uint64_t L_4 = ___ulApplicationHandle2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_inline(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::GetApplicationTrackers(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_GetApplicationTrackers_m6A087BB03F78BD862D1B0B32B5BD612AE80D1A6D (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	{
		// return ProcTable.GetApplicationTrackers(ref pTrackerHandle, ref punTrackerHandle, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* L_1 = L_0->___GetApplicationTrackers_13;
		uint64_t* L_2 = ___pTrackerHandle0;
		uint32_t* L_3 = ___punTrackerHandle1;
		uint64_t L_4 = ___ulApplicationHandle2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_inline(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// MocapApi.EMCPError MocapApi.IMCPApplication::QueuedServerCommand(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMCPApplication_QueuedServerCommand_mDF505017A6441C546508FDEC95DE40EC717E69E3 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	{
		// return ProcTable.QueuedServerCommand(cmdHandle, ulApplicationHandle);
		MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F* L_0 = (&__this->___ProcTable_0);
		_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* L_1 = L_0->___QueuedServerCommand_14;
		uint64_t L_2 = ___cmdHandle0;
		uint64_t L_3 = ___ulApplicationHandle1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_inline(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void MocapApi.IMCPApplication::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMCPApplication__ctor_mBDEE50A59AD30C0F98050B54D41A8B786B1243B3 (IMCPApplication_t41CBD964258234DDEF82958D00008B198ACB8344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1546CDECDC242D338CA7602230C531079471CE9E);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private IMCPApplication()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// IntPtr pp = IntPtr.Zero;
		V_0 = (0);
		// var er = Interop.MCPGetGenericInterface(Interop.ProcTable_Prefix + IMCPApplication_Version, ref pp);
		int32_t L_0;
		L_0 = Interop_MCPGetGenericInterface_mD483614C34204B8C1D785819FA1CB30E2F4BB3C5(_stringLiteral1546CDECDC242D338CA7602230C531079471CE9E, (&V_0), NULL);
		// if (er != EMCPError.Error_None)
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// throw new InterfaceNotFountException(IMCPApplication_Version);
		InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA* L_1 = (InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InterfaceNotFountException_t1F79A115478F06CBD815B45D8D1BAF53F31EC3BA_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InterfaceNotFountException__ctor_m7F7767C436D41A5F717AD01AC41EEC50DE97DD46(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68746D40E78A61A85B82507E784B6E085BC48D70)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IMCPApplication__ctor_mBDEE50A59AD30C0F98050B54D41A8B786B1243B3_RuntimeMethod_var)));
	}

IL_0025:
	{
		// ProcTable = (MCPApplication_ProcTable)Marshal.PtrToStructure(pp, typeof(MCPApplication_ProcTable));
		intptr_t L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_2, L_4, NULL);
		__this->___ProcTable_0 = ((*(MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F*)((MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F*)(MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F*)UnBox(L_5, MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_il2cpp_TypeInfo_var))));
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___CreateApplication_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___DestroyApplication_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___SetApplicationSettings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___SetApplicationRenderSettings_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___OpenApplication_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___EnableApplicationCacheEvents_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___DisableApplicationCacheEvents_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___ApplicationCacheEventsIsEnabled_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___CloseApplication_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___GetApplicationRigidBodies_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___GetApplicationAvatars_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___PollApplicationNextEvent_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___GetApplicationSensorModules_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___GetApplicationTrackers_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ProcTable_0))->___QueuedServerCommand_14), (void*)NULL);
		#endif
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
// Conversion methods for marshalling of: MocapApi.IMCPApplication/MCPApplication_ProcTable
IL2CPP_EXTERN_C void MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshal_pinvoke(const MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F& unmarshaled, MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_pinvoke& marshaled)
{
	marshaled.___CreateApplication_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CreateApplication_0));
	marshaled.___DestroyApplication_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___DestroyApplication_1));
	marshaled.___SetApplicationSettings_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetApplicationSettings_2));
	marshaled.___SetApplicationRenderSettings_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetApplicationRenderSettings_3));
	marshaled.___OpenApplication_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___OpenApplication_4));
	marshaled.___EnableApplicationCacheEvents_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___EnableApplicationCacheEvents_5));
	marshaled.___DisableApplicationCacheEvents_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___DisableApplicationCacheEvents_6));
	marshaled.___ApplicationCacheEventsIsEnabled_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ApplicationCacheEventsIsEnabled_7));
	marshaled.___CloseApplication_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CloseApplication_8));
	marshaled.___GetApplicationRigidBodies_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationRigidBodies_9));
	marshaled.___GetApplicationAvatars_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationAvatars_10));
	marshaled.___PollApplicationNextEvent_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PollApplicationNextEvent_11));
	marshaled.___GetApplicationSensorModules_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationSensorModules_12));
	marshaled.___GetApplicationTrackers_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationTrackers_13));
	marshaled.___QueuedServerCommand_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueuedServerCommand_14));
}
IL2CPP_EXTERN_C void MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshal_pinvoke_back(const MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_pinvoke& marshaled, MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___CreateApplication_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626>(marshaled.___CreateApplication_0, _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CreateApplication_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626>(marshaled.___CreateApplication_0, _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var));
	unmarshaled.___DestroyApplication_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE>(marshaled.___DestroyApplication_1, _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DestroyApplication_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE>(marshaled.___DestroyApplication_1, _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var));
	unmarshaled.___SetApplicationSettings_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE>(marshaled.___SetApplicationSettings_2, _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetApplicationSettings_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE>(marshaled.___SetApplicationSettings_2, _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var));
	unmarshaled.___SetApplicationRenderSettings_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37>(marshaled.___SetApplicationRenderSettings_3, _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetApplicationRenderSettings_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37>(marshaled.___SetApplicationRenderSettings_3, _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var));
	unmarshaled.___OpenApplication_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26>(marshaled.___OpenApplication_4, _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___OpenApplication_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26>(marshaled.___OpenApplication_4, _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var));
	unmarshaled.___EnableApplicationCacheEvents_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257>(marshaled.___EnableApplicationCacheEvents_5, _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___EnableApplicationCacheEvents_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257>(marshaled.___EnableApplicationCacheEvents_5, _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var));
	unmarshaled.___DisableApplicationCacheEvents_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B>(marshaled.___DisableApplicationCacheEvents_6, _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DisableApplicationCacheEvents_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B>(marshaled.___DisableApplicationCacheEvents_6, _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var));
	unmarshaled.___ApplicationCacheEventsIsEnabled_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA>(marshaled.___ApplicationCacheEventsIsEnabled_7, _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ApplicationCacheEventsIsEnabled_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA>(marshaled.___ApplicationCacheEventsIsEnabled_7, _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var));
	unmarshaled.___CloseApplication_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3>(marshaled.___CloseApplication_8, _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CloseApplication_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3>(marshaled.___CloseApplication_8, _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationRigidBodies_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A>(marshaled.___GetApplicationRigidBodies_9, _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationRigidBodies_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A>(marshaled.___GetApplicationRigidBodies_9, _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationAvatars_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB>(marshaled.___GetApplicationAvatars_10, _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationAvatars_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB>(marshaled.___GetApplicationAvatars_10, _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var));
	unmarshaled.___PollApplicationNextEvent_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069>(marshaled.___PollApplicationNextEvent_11, _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PollApplicationNextEvent_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069>(marshaled.___PollApplicationNextEvent_11, _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationSensorModules_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF>(marshaled.___GetApplicationSensorModules_12, _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationSensorModules_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF>(marshaled.___GetApplicationSensorModules_12, _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationTrackers_13 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2>(marshaled.___GetApplicationTrackers_13, _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationTrackers_13), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2>(marshaled.___GetApplicationTrackers_13, _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var));
	unmarshaled.___QueuedServerCommand_14 = il2cpp_codegen_marshal_function_ptr_to_delegate<_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8>(marshaled.___QueuedServerCommand_14, _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueuedServerCommand_14), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8>(marshaled.___QueuedServerCommand_14, _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: MocapApi.IMCPApplication/MCPApplication_ProcTable
IL2CPP_EXTERN_C void MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshal_pinvoke_cleanup(MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MocapApi.IMCPApplication/MCPApplication_ProcTable
IL2CPP_EXTERN_C void MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshal_com(const MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F& unmarshaled, MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_com& marshaled)
{
	marshaled.___CreateApplication_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CreateApplication_0));
	marshaled.___DestroyApplication_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___DestroyApplication_1));
	marshaled.___SetApplicationSettings_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetApplicationSettings_2));
	marshaled.___SetApplicationRenderSettings_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetApplicationRenderSettings_3));
	marshaled.___OpenApplication_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___OpenApplication_4));
	marshaled.___EnableApplicationCacheEvents_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___EnableApplicationCacheEvents_5));
	marshaled.___DisableApplicationCacheEvents_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___DisableApplicationCacheEvents_6));
	marshaled.___ApplicationCacheEventsIsEnabled_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ApplicationCacheEventsIsEnabled_7));
	marshaled.___CloseApplication_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CloseApplication_8));
	marshaled.___GetApplicationRigidBodies_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationRigidBodies_9));
	marshaled.___GetApplicationAvatars_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationAvatars_10));
	marshaled.___PollApplicationNextEvent_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___PollApplicationNextEvent_11));
	marshaled.___GetApplicationSensorModules_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationSensorModules_12));
	marshaled.___GetApplicationTrackers_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetApplicationTrackers_13));
	marshaled.___QueuedServerCommand_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueuedServerCommand_14));
}
IL2CPP_EXTERN_C void MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshal_com_back(const MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_com& marshaled, MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___CreateApplication_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626>(marshaled.___CreateApplication_0, _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CreateApplication_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626>(marshaled.___CreateApplication_0, _CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626_il2cpp_TypeInfo_var));
	unmarshaled.___DestroyApplication_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE>(marshaled.___DestroyApplication_1, _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DestroyApplication_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE>(marshaled.___DestroyApplication_1, _DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE_il2cpp_TypeInfo_var));
	unmarshaled.___SetApplicationSettings_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE>(marshaled.___SetApplicationSettings_2, _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetApplicationSettings_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE>(marshaled.___SetApplicationSettings_2, _SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE_il2cpp_TypeInfo_var));
	unmarshaled.___SetApplicationRenderSettings_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37>(marshaled.___SetApplicationRenderSettings_3, _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetApplicationRenderSettings_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37>(marshaled.___SetApplicationRenderSettings_3, _SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37_il2cpp_TypeInfo_var));
	unmarshaled.___OpenApplication_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26>(marshaled.___OpenApplication_4, _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___OpenApplication_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26>(marshaled.___OpenApplication_4, _OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26_il2cpp_TypeInfo_var));
	unmarshaled.___EnableApplicationCacheEvents_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257>(marshaled.___EnableApplicationCacheEvents_5, _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___EnableApplicationCacheEvents_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257>(marshaled.___EnableApplicationCacheEvents_5, _EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257_il2cpp_TypeInfo_var));
	unmarshaled.___DisableApplicationCacheEvents_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B>(marshaled.___DisableApplicationCacheEvents_6, _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DisableApplicationCacheEvents_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B>(marshaled.___DisableApplicationCacheEvents_6, _DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B_il2cpp_TypeInfo_var));
	unmarshaled.___ApplicationCacheEventsIsEnabled_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA>(marshaled.___ApplicationCacheEventsIsEnabled_7, _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ApplicationCacheEventsIsEnabled_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA>(marshaled.___ApplicationCacheEventsIsEnabled_7, _ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA_il2cpp_TypeInfo_var));
	unmarshaled.___CloseApplication_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3>(marshaled.___CloseApplication_8, _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CloseApplication_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3>(marshaled.___CloseApplication_8, _CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationRigidBodies_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A>(marshaled.___GetApplicationRigidBodies_9, _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationRigidBodies_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A>(marshaled.___GetApplicationRigidBodies_9, _GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationAvatars_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB>(marshaled.___GetApplicationAvatars_10, _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationAvatars_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB>(marshaled.___GetApplicationAvatars_10, _GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB_il2cpp_TypeInfo_var));
	unmarshaled.___PollApplicationNextEvent_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069>(marshaled.___PollApplicationNextEvent_11, _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PollApplicationNextEvent_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069>(marshaled.___PollApplicationNextEvent_11, _PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationSensorModules_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF>(marshaled.___GetApplicationSensorModules_12, _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationSensorModules_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF>(marshaled.___GetApplicationSensorModules_12, _GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF_il2cpp_TypeInfo_var));
	unmarshaled.___GetApplicationTrackers_13 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2>(marshaled.___GetApplicationTrackers_13, _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetApplicationTrackers_13), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2>(marshaled.___GetApplicationTrackers_13, _GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2_il2cpp_TypeInfo_var));
	unmarshaled.___QueuedServerCommand_14 = il2cpp_codegen_marshal_function_ptr_to_delegate<_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8>(marshaled.___QueuedServerCommand_14, _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueuedServerCommand_14), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8>(marshaled.___QueuedServerCommand_14, _QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: MocapApi.IMCPApplication/MCPApplication_ProcTable
IL2CPP_EXTERN_C void MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshal_com_cleanup(MCPApplication_ProcTable_t9D664BEA904FE8160CC1BC97AB61EC22B4AC340F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_Multicast(_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* currentDelegate = reinterpret_cast<_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_OpenInst(_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_OpenStatic(_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_OpenStaticInvoker(_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___ulApplicationHandle0);
}
int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_ClosedStaticInvoker(_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulApplicationHandle0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626 (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulApplicationHandle0);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CreateApplication__ctor_mE43398462E1AD70146F1C74E345FDCACA3DD4113 (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication::Invoke(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication::BeginInvoke(System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CreateApplication_BeginInvoke_mD3FD26A46B51052A34A90553C63AFB8533FEBE20 (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___ulApplicationHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_CreateApplication::EndInvoke(System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateApplication_EndInvoke_m2562B20FE0A55C6BC3EF27FCC9698306482788BE (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___ulApplicationHandle0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_Multicast(_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* currentDelegate = reinterpret_cast<_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_OpenInst(_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_OpenStatic(_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_OpenStaticInvoker(_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulApplicationHandle0);
}
int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_ClosedStaticInvoker(_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulApplicationHandle0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulApplicationHandle0);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _DestroyApplication__ctor_mB8DBB91B1328D065ABBD5C4E800FDF33C3D3DE45 (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726 (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DestroyApplication_BeginInvoke_m4FE26B8543C14A12C0299F8079EC235FF5415854 (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_DestroyApplication::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DestroyApplication_EndInvoke_mBCE1D47D134B3C3304036A3C6D215D1F52013828 (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_Multicast(_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* currentDelegate = reinterpret_cast<_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulSettingsHandle0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_OpenInst(_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulSettingsHandle0, ___ulApplicationHandle1, method);
}
int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_OpenStatic(_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulSettingsHandle0, ___ulApplicationHandle1, method);
}
int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_OpenStaticInvoker(_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulSettingsHandle0, ___ulApplicationHandle1);
}
int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_ClosedStaticInvoker(_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulSettingsHandle0, ___ulApplicationHandle1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulSettingsHandle0, ___ulApplicationHandle1);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetApplicationSettings__ctor_m4023AC8B7D516258E87F33494EFFA514413558CE (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings::Invoke(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0 (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulSettingsHandle0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetApplicationSettings_BeginInvoke_m96A1043ADF22A7D4E60D7A1C502E9795B162DE71 (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulSettingsHandle0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationSettings::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetApplicationSettings_EndInvoke_mB60063567B7A123FE5C76FB8CD7FB2A4A88DA24B (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_Multicast(_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* currentDelegate = reinterpret_cast<_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulRenderSettings0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_OpenInst(_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulRenderSettings0, ___ulApplicationHandle1, method);
}
int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_OpenStatic(_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulRenderSettings0, ___ulApplicationHandle1, method);
}
int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_OpenStaticInvoker(_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulRenderSettings0, ___ulApplicationHandle1);
}
int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_ClosedStaticInvoker(_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulRenderSettings0, ___ulApplicationHandle1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37 (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulRenderSettings0, ___ulApplicationHandle1);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SetApplicationRenderSettings__ctor_m5CD78B1A8924198EA81708957BAD06902209FC02 (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings::Invoke(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5 (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulRenderSettings0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SetApplicationRenderSettings_BeginInvoke_m59F2669235C5AA98790AB379F50683D563D3ED0C (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulRenderSettings0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_SetApplicationRenderSettings::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _SetApplicationRenderSettings_EndInvoke_m17B6AE713ACBEE6B638F107366A2A8D237341DB6 (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_Multicast(_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* currentDelegate = reinterpret_cast<_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_OpenInst(_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_OpenStatic(_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_OpenStaticInvoker(_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulApplicationHandle0);
}
int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_ClosedStaticInvoker(_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulApplicationHandle0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26 (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulApplicationHandle0);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _OpenApplication__ctor_m3E2026FBA6FC496059CFE1A6E5A13E2A134EA1E7 (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604 (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _OpenApplication_BeginInvoke_m3DCAB4B1F5D162AEFBC37415BCC93C2059957200 (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_OpenApplication::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _OpenApplication_EndInvoke_m42EE6E3E6EFC31153FC78D391E58C0AAF08AD757 (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_Multicast(_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* currentDelegate = reinterpret_cast<_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_OpenInst(_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_OpenStatic(_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_OpenStaticInvoker(_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulApplicationHandle0);
}
int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_ClosedStaticInvoker(_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulApplicationHandle0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257 (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulApplicationHandle0);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EnableApplicationCacheEvents__ctor_mC0207F98E56BE98EF1BC71199DEB09579620D111 (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _EnableApplicationCacheEvents_BeginInvoke_m5B8AD864103AC24F49AD817FB7117B1CFC3BAA73 (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_EnableApplicationCacheEvents::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EnableApplicationCacheEvents_EndInvoke_mF04EDA1A56CDB7F18281B27E1753F5390C5E4CDD (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_Multicast(_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* currentDelegate = reinterpret_cast<_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_OpenInst(_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_OpenStatic(_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_OpenStaticInvoker(_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulApplicationHandle0);
}
int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_ClosedStaticInvoker(_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulApplicationHandle0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulApplicationHandle0);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _DisableApplicationCacheEvents__ctor_m833B926BB553C643AAE935ADD1B90776D3A4E920 (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1 (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DisableApplicationCacheEvents_BeginInvoke_m88D8ADFD67450686EB6E90C359531501DCAE5C39 (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_DisableApplicationCacheEvents::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DisableApplicationCacheEvents_EndInvoke_m4362C317DFF06DE91BD773F516B8D018D69AE202 (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_Multicast(_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* currentDelegate = reinterpret_cast<_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, bool*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___isEnabled0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_OpenInst(_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (bool*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___isEnabled0, ___ulApplicationHandle1, method);
}
int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_OpenStatic(_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (bool*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___isEnabled0, ___ulApplicationHandle1, method);
}
int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_OpenStaticInvoker(_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, bool*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___isEnabled0, ___ulApplicationHandle1);
}
int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_ClosedStaticInvoker(_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, bool*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___isEnabled0, ___ulApplicationHandle1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___isEnabled0' to native representation
	int32_t* ____isEnabled0_marshaled = NULL;
	int32_t ____isEnabled0_marshaled_dereferenced = 0;
	____isEnabled0_marshaled_dereferenced = static_cast<int32_t>(*___isEnabled0);
	____isEnabled0_marshaled = &____isEnabled0_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____isEnabled0_marshaled, ___ulApplicationHandle1);

	// Marshaling of parameter '___isEnabled0' back from native representation
	bool _____isEnabled0_marshaled_unmarshaled_dereferenced = false;
	_____isEnabled0_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____isEnabled0_marshaled);
	*___isEnabled0 = _____isEnabled0_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ApplicationCacheEventsIsEnabled__ctor_m57B5B027261617788836B89CAFC923D9FB03B00E (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled::Invoke(System.Boolean&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272 (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, bool*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___isEnabled0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled::BeginInvoke(System.Boolean&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ApplicationCacheEventsIsEnabled_BeginInvoke_m4F5D81A141E233A5417A18CE27244DC47CB566C9 (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &*___isEnabled0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_ApplicationCacheEventsIsEnabled::EndInvoke(System.Boolean&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ApplicationCacheEventsIsEnabled_EndInvoke_mC433C17BC5D1561EB408DC5C501CEDC4D0B88E39 (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___isEnabled0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_Multicast(_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* currentDelegate = reinterpret_cast<_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_OpenInst(_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_OpenStatic(_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ulApplicationHandle0, method);
}
int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_OpenStaticInvoker(_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ulApplicationHandle0);
}
int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_ClosedStaticInvoker(_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ulApplicationHandle0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3 (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___ulApplicationHandle0);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CloseApplication__ctor_m3F4798B126F53BDA83CFCFDC7A3F1435A34ADA88 (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CloseApplication_BeginInvoke_m1EEDA344C5DF55CD2C1360BECB65B16EE91C9960 (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_CloseApplication::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CloseApplication_EndInvoke_m688EE2D9451101B535434576249FE90995BCE798 (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_Multicast(_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* currentDelegate = reinterpret_cast<_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_OpenInst(_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_OpenStatic(_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_OpenStaticInvoker(_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2);
}
int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_ClosedStaticInvoker(_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t*, uint32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetApplicationRigidBodies__ctor_mEF85D3A254C36682590F585D7DDE2D96392B726C (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3 (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies::BeginInvoke(System.UInt64&,System.UInt32&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetApplicationRigidBodies_BeginInvoke_m281223D13CE933DE8E4DB2A95375FC4ADDFFEFF5 (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___pRigidBodyHandle0);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___punRigidBodyHandleSize1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationRigidBodies::EndInvoke(System.UInt64&,System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationRigidBodies_EndInvoke_mF9C540DCD3C6024727A8A92D44D653F29954DD7D (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pRigidBodyHandle0,
	___punRigidBodyHandleSize1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_Multicast(_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* currentDelegate = reinterpret_cast<_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_OpenInst(_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_OpenStatic(_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_OpenStaticInvoker(_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2);
}
int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_ClosedStaticInvoker(_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t*, uint32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetApplicationAvatars__ctor_mBC7524CAD594FE4DB8B406B7C1BF1CC273A907B9 (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933 (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars::BeginInvoke(System.UInt64&,System.UInt32&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetApplicationAvatars_BeginInvoke_mE8FF3C387B664695A16DB45D2BBAE8C49EEA73A3 (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___pAvatarHandle0);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___punAvatarHandle1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationAvatars::EndInvoke(System.UInt64&,System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationAvatars_EndInvoke_m1C1BB09AF9E0DF903064AE129CD6C8EA36F00050 (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pAvatarHandle0,
	___punAvatarHandle1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_Multicast(_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* currentDelegate = reinterpret_cast<_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_OpenInst(_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	NullCheck(___pEvent0);
	typedef int32_t (*FunctionPointerType) (MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2, method);
}
int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_OpenStatic(_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2, method);
}
int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_OpenStaticInvoker(_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2);
}
int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_ClosedStaticInvoker(_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069 (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2*, uint32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___pEvent0' to native representation
	MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2* ____pEvent0_marshaled = NULL;
	if (___pEvent0 != NULL)
	{
		____pEvent0_marshaled = reinterpret_cast<MCPEvent_t_t00B2CB4B8B7137BF411F612341B649D9D30A9DE2*>((___pEvent0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____pEvent0_marshaled, ___punSizeOfEvent1, ___ulApplicationHandle2);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _PollApplicationNextEvent__ctor_m4A30DBE55F9F9220DF1B47999901A083DFD9DBEE (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent::Invoke(MocapApi.MCPEvent_t[],System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent::BeginInvoke(MocapApi.MCPEvent_t[],System.UInt32&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _PollApplicationNextEvent_BeginInvoke_m826BB1D52D4645560706E09A484172F32D1EE211 (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___pEvent0;
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___punSizeOfEvent1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_PollApplicationNextEvent::EndInvoke(System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _PollApplicationNextEvent_EndInvoke_m5FACB33F6DB921B15D90E585A8907E70DA8FD7CF (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, uint32_t* ___punSizeOfEvent0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___punSizeOfEvent0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_Multicast(_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* currentDelegate = reinterpret_cast<_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_OpenInst(_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_OpenStatic(_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_OpenStaticInvoker(_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2);
}
int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_ClosedStaticInvoker(_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t*, uint32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetApplicationSensorModules__ctor_m531285B3EAFAE21B04FEE2848CB14C71A417E839 (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules::BeginInvoke(System.UInt64&,System.UInt32&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetApplicationSensorModules_BeginInvoke_m9B75B95E9211BC5DEE6FAA820174776A0C70AAA7 (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___pSensorModuleHandle0);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___punSensorModuleHandle1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationSensorModules::EndInvoke(System.UInt64&,System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationSensorModules_EndInvoke_m718CE03422A4B683AA3B5B37A18B96FBD76D0F75 (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pSensorModuleHandle0,
	___punSensorModuleHandle1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_Multicast(_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* currentDelegate = reinterpret_cast<_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_OpenInst(_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_OpenStatic(_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2, method);
}
int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_OpenStaticInvoker(_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2);
}
int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_ClosedStaticInvoker(_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t*, uint32_t*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2 (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t*, uint32_t*, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetApplicationTrackers__ctor_m19DA7E2563174F5251738216D4A2BF56B3E24499 (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&_GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&_GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers::Invoke(System.UInt64&,System.UInt32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277 (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers::BeginInvoke(System.UInt64&,System.UInt32&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetApplicationTrackers_BeginInvoke_m0805F420C3E88F690E49E5443ED7C55060080430 (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___pTrackerHandle0);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___punTrackerHandle1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_GetApplicationTrackers::EndInvoke(System.UInt64&,System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetApplicationTrackers_EndInvoke_m83C1E89FD36FC92B70BE163F0D55C319E31DC8A7 (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___pTrackerHandle0,
	___punTrackerHandle1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_Multicast(_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* currentDelegate = reinterpret_cast<_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___cmdHandle0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_OpenInst(_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___cmdHandle0, ___ulApplicationHandle1, method);
}
int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_OpenStatic(_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___cmdHandle0, ___ulApplicationHandle1, method);
}
int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_OpenStaticInvoker(_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___cmdHandle0, ___ulApplicationHandle1);
}
int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_ClosedStaticInvoker(_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___cmdHandle0, ___ulApplicationHandle1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8 (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(uint64_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___cmdHandle0, ___ulApplicationHandle1);

	return returnValue;
}
// System.Void MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueuedServerCommand__ctor_m3DADC72B23505460CF5B5B4FEB7AF80C1BADA6F6 (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_Multicast;
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand::Invoke(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___cmdHandle0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand::BeginInvoke(System.UInt64,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _QueuedServerCommand_BeginInvoke_m74C4BE103DC9ABA055EDDBFC1467FBD9307016B2 (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___cmdHandle0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___ulApplicationHandle1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// MocapApi.EMCPError MocapApi.IMCPApplication/MCPApplication_ProcTable/_QueuedServerCommand::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueuedServerCommand_EndInvoke_m83899D845582A87D696EEF94015C7EDFFA9438D5 (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr MocapApi.Utils::ToUtf8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_ToUtf8_m85359BF5348F3D3D35E27C200D6EC50041916EF6 (String_t* ___managedString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (managedString == null)
		String_t* L_0 = ___managedString0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return IntPtr.Zero;
		return (0);
	}

IL_0009:
	{
		// int size = System.Text.Encoding.UTF8.GetByteCount(managedString) + 1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_2 = ___managedString0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_1, L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if (buffer.Length < size) buffer = new byte[size];
		il2cpp_codegen_runtime_class_init_inline(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0;
		NullCheck(L_4);
		int32_t L_5 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		// if (buffer.Length < size) buffer = new byte[size];
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		il2cpp_codegen_runtime_class_init_inline(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var);
		((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0), (void*)L_7);
	}

IL_002c:
	{
		// int written = System.Text.Encoding.UTF8.GetBytes(managedString, 0, managedString.Length, buffer, 0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_9 = ___managedString0;
		String_t* L_10 = ___managedString0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0;
		NullCheck(L_8);
		int32_t L_13;
		L_13 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_8, L_9, 0, L_11, L_12, 0);
		V_1 = L_13;
		// buffer[written] = 0x00; // null terminate
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)0);
		// IntPtr nativeUtf8 = Marshal.AllocHGlobal(written + 1);
		int32_t L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_17;
		L_17 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(((int32_t)il2cpp_codegen_add(L_16, 1)), NULL);
		V_2 = L_17;
		// Marshal.Copy(buffer, 0, nativeUtf8, written + 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0;
		intptr_t L_19 = V_2;
		int32_t L_20 = V_1;
		Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8(L_18, 0, L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		// return nativeUtf8;
		intptr_t L_21 = V_2;
		return L_21;
	}
}
// System.Void MocapApi.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m5DB6C984782389F84D6DAFB98A2A4604108CB9B7 (Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MocapApi.Utils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__cctor_mE4B915B91F2E5CE04EBE662DA408C2486D4B0902 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static byte[] buffer = new byte[1024];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tD2F6277E98404D73B4D3FE5F2C4357EEABCB472C_il2cpp_TypeInfo_var))->___buffer_0), (void*)L_0);
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
// MocapApi.EMCPError MocapApi.Interop::MCPGetGenericInterface(System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_MCPGetGenericInterface_mD483614C34204B8C1D785819FA1CB30E2F4BB3C5 (String_t* ___pchInterfaceVersion0, intptr_t* ___peError1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MocapApi_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("MocapApi"), "MCPGetGenericInterface", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pchInterfaceVersion0' to native representation
	char* ____pchInterfaceVersion0_marshaled = NULL;
	____pchInterfaceVersion0_marshaled = il2cpp_codegen_marshal_string(___pchInterfaceVersion0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_MocapApi_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MCPGetGenericInterface)(____pchInterfaceVersion0_marshaled, ___peError1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____pchInterfaceVersion0_marshaled, ___peError1);
	#endif

	// Marshaling cleanup of parameter '___pchInterfaceVersion0' native representation
	il2cpp_codegen_marshal_free(____pchInterfaceVersion0_marshaled);
	____pchInterfaceVersion0_marshaled = NULL;

	return returnValue;
}
// System.Void MocapApi.Interop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interop__ctor_m375B45D7F86A238D9183FEAF75B47D49AE9ED2CF (Interop_tC4A711C7740BE4C928530E11F6419100A9C4B78E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _CreateApplication_Invoke_mE71F95B6875B75E4D4E55E06250E3EB36CE862CB_inline (_CreateApplication_t3A5ED7B6CFE6CD9CB1F1E2CFAA7CA3F1AE0C4626* __this, uint64_t* ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _DestroyApplication_Invoke_m0380B989D482033DCC185DE0A9E8612F17FB6726_inline (_DestroyApplication_t242285073E9357F10FB91828160661BF2CF584AE* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _SetApplicationSettings_Invoke_m7CC7EC95E4DDBB77BFA1C3586F514E39BA0836E0_inline (_SetApplicationSettings_t6842DC6BF126717B6439D092002CEE1A8FC6AFAE* __this, uint64_t ___ulSettingsHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulSettingsHandle0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _SetApplicationRenderSettings_Invoke_m7CB671878D4B7CEF66A1E31CB978A888886B37B5_inline (_SetApplicationRenderSettings_t674D3D30E962794CE9801F71DED799D8ED097F37* __this, uint64_t ___ulRenderSettings0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulRenderSettings0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _OpenApplication_Invoke_mE66FC6B77148D93C9EFE14A6F44132FDA4A57604_inline (_OpenApplication_t4DE2B90A4C20F5E6B06BC566C042327150D1DD26* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _EnableApplicationCacheEvents_Invoke_mD2D912004FB26FD24A92635AB34C27DCDDDBDE6C_inline (_EnableApplicationCacheEvents_tBBFEE69BC42C905C96FD95B314136511EDE42257* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _DisableApplicationCacheEvents_Invoke_m411FFA5F474D4AD4113B4ACDD2CD34F441673AF1_inline (_DisableApplicationCacheEvents_t68D13C4906508720FFE33B5540F6CCB4290A7D0B* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _ApplicationCacheEventsIsEnabled_Invoke_m587B24396E8B90E1B28C11F36DE9C72297023272_inline (_ApplicationCacheEventsIsEnabled_tFDD2E79FCA66D9850A58BE3608E661F142DF08BA* __this, bool* ___isEnabled0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, bool*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___isEnabled0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _CloseApplication_Invoke_m91A4BFC8030A5F0744AE67F2867F92C64E03C78B_inline (_CloseApplication_t10583D83CC3ED6DA0B0DB266C6310D8ACB55E6E3* __this, uint64_t ___ulApplicationHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ulApplicationHandle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationRigidBodies_Invoke_mE63CD8AFFE9FAC13F9DC47ED63058FFE9FD391D3_inline (_GetApplicationRigidBodies_tD8684D1641A52E651DFC68349863E984C2BC0C3A* __this, uint64_t* ___pRigidBodyHandle0, uint32_t* ___punRigidBodyHandleSize1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pRigidBodyHandle0, ___punRigidBodyHandleSize1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationAvatars_Invoke_m5DC12F186144AA1D4269F3BD9B4981608CE08933_inline (_GetApplicationAvatars_tF03C0AD68BAF25E1A34EC997EBE6C85D34DACAFB* __this, uint64_t* ___pAvatarHandle0, uint32_t* ___punAvatarHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pAvatarHandle0, ___punAvatarHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _PollApplicationNextEvent_Invoke_mE5560F3CA45EDA01D3C7E98C741157CCE932D2FA_inline (_PollApplicationNextEvent_t530A6E6B5B06824A696938AC274A628A9362B069* __this, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9* ___pEvent0, uint32_t* ___punSizeOfEvent1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, MCPEvent_tU5BU5D_t6DAE3C99D6F02AF86E6E559A99BDC5808F7B60C9*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pEvent0, ___punSizeOfEvent1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationSensorModules_Invoke_m6C33FB55D91BD428FB53E69CDC40FC811E7A470D_inline (_GetApplicationSensorModules_tB4A4AE09CC0510B782A04CE5E1950447C53919FF* __this, uint64_t* ___pSensorModuleHandle0, uint32_t* ___punSensorModuleHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pSensorModuleHandle0, ___punSensorModuleHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetApplicationTrackers_Invoke_mAAE15C2A16193634172CB460BD35E815348BA277_inline (_GetApplicationTrackers_t504824B3C84321030E2CF404CCD04F47658E0CB2* __this, uint64_t* ___pTrackerHandle0, uint32_t* ___punTrackerHandle1, uint64_t ___ulApplicationHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, uint32_t*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pTrackerHandle0, ___punTrackerHandle1, ___ulApplicationHandle2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _QueuedServerCommand_Invoke_m6CCEAE93DF541D62C93FC33F307D404A622160DF_inline (_QueuedServerCommand_t57F00E1354D10C3EB56958E0D0E5D0D42389B2F8* __this, uint64_t ___cmdHandle0, uint64_t ___ulApplicationHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___cmdHandle0, ___ulApplicationHandle1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
