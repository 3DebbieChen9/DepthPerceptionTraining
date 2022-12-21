#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8;
// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Facebook.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Facebook.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Facebook.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Facebook.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Facebook.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.String
struct String_t;
// Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7;
// Facebook.WitAi.Utilities.StringEvent
struct StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Facebook.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74;
// Facebook.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5;
// Facebook.WitAi.VoiceService
struct VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E;
// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34;
// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C;
// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4;
// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD;
// Facebook.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B;
// Facebook.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB;
// Facebook.WitAi.WitResponseReference
struct WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E;
// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E;
// Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4;
// Facebook.WitAi.Data.WitValue
struct WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral22270319A52B6C9B9967E9291B9A79B116526038;
IL2CPP_EXTERN_C String_t* _stringLiteral29565B729B35A8E8D5DDB32B75BCCD98FDE1E555;
IL2CPP_EXTERN_C String_t* _stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Facebook.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4  : public RuntimeObject
{
	// System.String Facebook.WitAi.CallbackHandlers.FormattedValueEvents::format
	String_t* ___format_0;
	// Facebook.WitAi.CallbackHandlers.ValueEvent Facebook.WitAi.CallbackHandlers.FormattedValueEvents::onFormattedValueEvent
	ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* ___onFormattedValueEvent_1;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// Facebook.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C  : public RuntimeObject
{
	// System.String Facebook.WitAi.CallbackHandlers.ValuePathMatcher::path
	String_t* ___path_0;
	// Facebook.WitAi.Data.WitValue Facebook.WitAi.CallbackHandlers.ValuePathMatcher::witValueReference
	WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* ___witValueReference_1;
	// System.Boolean Facebook.WitAi.CallbackHandlers.ValuePathMatcher::contentRequired
	bool ___contentRequired_2;
	// Facebook.WitAi.CallbackHandlers.MatchMethod Facebook.WitAi.CallbackHandlers.ValuePathMatcher::matchMethod
	int32_t ___matchMethod_3;
	// Facebook.WitAi.CallbackHandlers.ComparisonMethod Facebook.WitAi.CallbackHandlers.ValuePathMatcher::comparisonMethod
	int32_t ___comparisonMethod_4;
	// System.String Facebook.WitAi.CallbackHandlers.ValuePathMatcher::matchValue
	String_t* ___matchValue_5;
	// System.Double Facebook.WitAi.CallbackHandlers.ValuePathMatcher::floatingPointComparisonTolerance
	double ___floatingPointComparisonTolerance_6;
	// Facebook.WitAi.CallbackHandlers.ConfidenceRange[] Facebook.WitAi.CallbackHandlers.ValuePathMatcher::confidenceRanges
	ConfidenceRangeU5BU5D_t57A91DF169DF248AE1622FCAA9F0BB8B6775C3EC* ___confidenceRanges_7;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::pathReference
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___pathReference_8;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::confidencePathReference
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___confidencePathReference_9;
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

// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5  : public RuntimeObject
{
	// Facebook.WitAi.Events.WitResponseEvent Facebook.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* ___OnResponse_0;
	// Facebook.WitAi.Events.WitErrorEvent Facebook.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_tFF53D8544CC1D1E7FD8E98A1EC8AD7581F62EE34* ___OnError_1;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborting_2;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborted_3;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRequestCompleted_4;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_tA9B0047640D9DE7218C4699B6F6E0ABBCD966F1C* ___OnMicLevelChanged_5;
	// Facebook.WitAi.Events.WitRequestCreatedEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_t81EA9D8A3041CEADEBE670C485E17B1F9D5BEDF4* ___OnRequestCreated_6;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStartListening_7;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListening_8;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToInactivity_9;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToTimeout_10;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToDeactivation_11;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMicDataSent_12;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMinimumWakeThresholdHit_13;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onPartialTranscription_14;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t46F45C5FE99C833DFE345D2255587E22A1ABE32E* ___onFullTranscription_15;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataReady_16;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_t3E7D04458B66F77BFF599F5CBAF9F0ADD920502E* ___OnByteDataSent_17;
};

// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB  : public RuntimeObject
{
};

// Facebook.WitAi.WitResponseReference
struct WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E  : public RuntimeObject
{
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.WitResponseReference::child
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___child_0;
	// System.String Facebook.WitAi.WitResponseReference::path
	String_t* ___path_1;
};

// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// Facebook.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C  : public UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD
{
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.Utilities.StringEvent
struct StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD  : public UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
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

// UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>
struct UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Facebook.WitAi.Data.WitValue
struct WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Facebook.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::reference
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ___reference_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Facebook.WitAi.VoiceService
struct VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::events
	VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* ___events_4;
};

// Facebook.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.VoiceService Facebook.WitAi.CallbackHandlers.WitResponseHandler::wit
	VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* ___wit_4;
};

// Facebook.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// System.String Facebook.WitAi.CallbackHandlers.WitResponseMatcher::intent
	String_t* ___intent_5;
	// System.Single Facebook.WitAi.CallbackHandlers.WitResponseMatcher::confidenceThreshold
	float ___confidenceThreshold_6;
	// Facebook.WitAi.CallbackHandlers.ValuePathMatcher[] Facebook.WitAi.CallbackHandlers.WitResponseMatcher::valueMatchers
	ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* ___valueMatchers_7;
	// Facebook.WitAi.CallbackHandlers.FormattedValueEvents[] Facebook.WitAi.CallbackHandlers.WitResponseMatcher::formattedValueEvents
	FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188* ___formattedValueEvents_8;
	// Facebook.WitAi.CallbackHandlers.MultiValueEvent Facebook.WitAi.CallbackHandlers.WitResponseMatcher::onMultiValueEvent
	MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* ___onMultiValueEvent_9;
};

struct WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields
{
	// System.Text.RegularExpressions.Regex Facebook.WitAi.CallbackHandlers.WitResponseMatcher::valueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___valueRegex_10;
};

// Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4  : public WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B
{
	// System.String Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_5;
	// System.Boolean Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_6;
	// System.Boolean Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_7;
	// Facebook.WitAi.Utilities.StringEvent Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* ___onUtteranceMatched_8;
	// System.Text.RegularExpressions.Regex Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Facebook.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188  : public RuntimeArray
{
	ALIGN_FIELD (8) FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* m_Items[1];

	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Facebook.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75  : public RuntimeArray
{
	ALIGN_FIELD (8) ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* m_Items[1];

	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Facebook.WitAi.VoiceService>()
inline VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31 (const RuntimeMethod* method)
{
	return ((  VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Facebook.WitAi.Lib.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF4F621DB3C8F308CF78411309EDFD1334CF9CE75 (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3 (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366* __this, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366*, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Facebook.WitAi.Lib.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366* __this, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9B421777BDE1F0A6F551628B06DADBCD02D20366*, UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::IntentMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_IntentMatches_mC627F7AF4545BCC223D06C2674367446F6E98A37 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mFFD7A8502BD3EA08F7AA931E417D1C9393481512 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) ;
// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787 (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94 (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mBFEA1319F29D734BB9902412C9B3BD757E5B5FFB (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m39D94664E1B155931817F0C2434F2093F037CF5D (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m01E1A016568F0A2A109C5E4556505AD7188ABC85 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.WitResultUtilities::GetFirstIntent(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* WitResultUtilities_GetFirstIntent_mE9748A7275970EABF61BC4920BFB445857066F58 (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___witResponse0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m24721BEA88A8DC6A7438F16DF9C7F4B141BE0FF0 (MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Escape_m2E4E071ABAFAE1BF55932725F28F4194CD56D7DE (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::.ctor()
inline void UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Facebook.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_mD1D914C07A91A8D88BEEB83833BCDC9818261377 (ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Facebook.WitAi.WitResponseReference Facebook.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD (String_t* ___path0, const RuntimeMethod* method) ;
// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E (WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void Facebook.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mF3F63CB79A236D91609C9B7EBF293D7E6935006A (StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mADFDA95EA9466ACCE74C701C74BC6C01C1BDEA82 (StringEntityMatchEvent_t1C2593F520E466A66C60F98D08EDBF2978C281D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnValidate_m5993AE8531334DE9DF2F2A2E0BA537941D911AC4 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_0 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31(Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		__this->___wit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wit_4), (void*)L_2);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_m55F24E026839F33CBE76FC8B25FAC9AC3135250B (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29565B729B35A8E8D5DDB32B75BCCD98FDE1E555);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_0 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!wit) wit = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31(Object_FindObjectOfType_TisVoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99_mFF7470D00931D2219BE16DF57F4FE4992A642B31_RuntimeMethod_var);
		__this->___wit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wit_4), (void*)L_2);
	}

IL_0018:
	{
		// if (!wit)
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_3 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogError("Wit not found in scene. Disabling " + GetType().Name + " on " +
		//                name);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_8;
		L_8 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral29565B729B35A8E8D5DDB32B75BCCD98FDE1E555, L_6, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0052:
	{
		// wit.events.OnResponse.AddListener(OnHandleResponse);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_9 = __this->___wit_4;
		NullCheck(L_9);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_10 = L_9->___events_4;
		NullCheck(L_10);
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_11 = L_10->___OnResponse_0;
		UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* L_12 = (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*)il2cpp_codegen_object_new(UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_mF4F621DB3C8F308CF78411309EDFD1334CF9CE75(L_12, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 4)), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3(L_11, L_12, UnityEvent_1_AddListener_mAAD4F26F685871E030131375B05060E33216E0C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m2647C1AD81C5AB8B9BE30A6356302E4851947A29 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(wit) wit.events.OnResponse.RemoveListener(OnHandleResponse);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_0 = __this->___wit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// if(wit) wit.events.OnResponse.RemoveListener(OnHandleResponse);
		VoiceService_t632C41F7156160643165A0D2DAF4EEE6E5F73B99* L_2 = __this->___wit_4;
		NullCheck(L_2);
		VoiceEvents_tB9CCDD1C68F3A784600E7932935F705B17B8F1F5* L_3 = L_2->___events_4;
		NullCheck(L_3);
		WitResponseEvent_t5DEE4CFA5D09DD8C6293E1D41EF6A9ACBDD2CFDD* L_4 = L_3->___OnResponse_0;
		UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8* L_5 = (UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8*)il2cpp_codegen_object_new(UnityAction_1_t709797DCB7374983691CE23694848B9DDB4C4CB8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF4F621DB3C8F308CF78411309EDFD1334CF9CE75(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 4)), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B(L_4, L_5, UnityEvent_1_RemoveListener_m696D0B92F65BCDA59D7C1EEA56EF4B017BFE607B_RuntimeMethod_var);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::HandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleResponse_m1EF09793D58EB26C8F3264DB5A7D6FB8342E51E1 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	{
		// public void HandleResponse(WitResponseNode response) => OnHandleResponse(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		VirtualActionInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode) */, __this, L_0);
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683 (WitResponseHandler_t282B996CD88AB9A6F40AC153FA83ACF0044CFD5B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseMatcher::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnHandleResponse_mDC95CC8B6DA9B6987BEA2D5E98C5DF58635A0AF7 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* G_B14_0 = NULL;
	ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* G_B13_0 = NULL;
	{
		// if (IntentMatches(response))
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseMatcher_IntentMatches_mC627F7AF4545BCC223D06C2674367446F6E98A37(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0146;
		}
	}
	{
		// if (ValueMatches(response))
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_2 = ___response0;
		bool L_3;
		L_3 = WitResponseMatcher_ValueMatches_mFFD7A8502BD3EA08F7AA931E417D1C9393481512(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_00fa;
		}
	}
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		V_1 = 0;
		goto IL_00ec;
	}

IL_001f:
	{
		// var formatEvent = formattedValueEvents[j];
		FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188* L_4 = __this->___formattedValueEvents_8;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// var result = formatEvent.format;
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = L_8->___format_0;
		V_3 = L_9;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_4 = 0;
		goto IL_00bf;
	}

IL_0037:
	{
		// var reference = valueMatchers[i].Reference;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_10 = __this->___valueMatchers_7;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_14;
		L_14 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(L_13, NULL);
		// var value = reference.GetStringValue(response);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_15 = ___response0;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_14, L_15);
		V_5 = L_16;
		// if (!string.IsNullOrEmpty(formatEvent.format))
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18 = L_17->___format_0;
		bool L_19;
		L_19 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_18, NULL);
		if (L_19)
		{
			goto IL_00b9;
		}
	}
	{
		// if (!string.IsNullOrEmpty(value))
		String_t* L_20 = V_5;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_20, NULL);
		if (L_21)
		{
			goto IL_0093;
		}
	}
	{
		// result = valueRegex.Replace(result, value, 1);
		il2cpp_codegen_runtime_class_init_inline(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_22 = ((WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var))->___valueRegex_10;
		String_t* L_23 = V_3;
		String_t* L_24 = V_5;
		NullCheck(L_22);
		String_t* L_25;
		L_25 = Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492(L_22, L_23, L_24, 1, NULL);
		V_3 = L_25;
		// result = result.Replace("{" + i + "}", value);
		String_t* L_26 = V_3;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_27, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		String_t* L_29 = V_5;
		NullCheck(L_26);
		String_t* L_30;
		L_30 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_26, L_28, L_29, NULL);
		V_3 = L_30;
		goto IL_00b9;
	}

IL_0093:
	{
		// else if (result.Contains("{" + i + "}"))
		String_t* L_31 = V_3;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_33;
		L_33 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_32, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_31, L_33, NULL);
		if (!L_34)
		{
			goto IL_00b9;
		}
	}
	{
		// result = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_00ce;
	}

IL_00b9:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00bf:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_36 = V_4;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_37 = __this->___valueMatchers_7;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0037;
		}
	}

IL_00ce:
	{
		// if (!string.IsNullOrEmpty(result))
		String_t* L_38 = V_3;
		bool L_39;
		L_39 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_38, NULL);
		if (L_39)
		{
			goto IL_00e8;
		}
	}
	{
		// formatEvent.onFormattedValueEvent?.Invoke(result);
		FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* L_40 = V_2;
		NullCheck(L_40);
		ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* L_41 = L_40->___onFormattedValueEvent_1;
		ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* L_42 = L_41;
		G_B13_0 = L_42;
		if (L_42)
		{
			G_B14_0 = L_42;
			goto IL_00e2;
		}
	}
	{
		goto IL_00e8;
	}

IL_00e2:
	{
		String_t* L_43 = V_3;
		NullCheck(G_B14_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B14_0, L_43, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00e8:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ec:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_45 = V_1;
		FormattedValueEventsU5BU5D_tAFBBA48044157DCAA323FD47280150A31580C188* L_46 = __this->___formattedValueEvents_8;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_001f;
		}
	}

IL_00fa:
	{
		// List<string> values = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_47 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_47, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_47;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_6 = 0;
		goto IL_0129;
	}

IL_0105:
	{
		// var value = valueMatchers[i].Reference.GetStringValue(response);
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_48 = __this->___valueMatchers_7;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_52;
		L_52 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(L_51, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_53 = ___response0;
		NullCheck(L_52);
		String_t* L_54;
		L_54 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_52, L_53);
		V_7 = L_54;
		// values.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55 = V_0;
		String_t* L_56 = V_7;
		NullCheck(L_55);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_55, L_56, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_57 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0129:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_58 = V_6;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_59 = __this->___valueMatchers_7;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0105;
		}
	}
	{
		// onMultiValueEvent.Invoke(values.ToArray());
		MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* L_60 = __this->___onMultiValueEvent_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_61 = V_0;
		NullCheck(L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62;
		L_62 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_61, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_60);
		UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94(L_60, L_62, UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
	}

IL_0146:
	{
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mFFD7A8502BD3EA08F7AA931E417D1C9393481512 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	int32_t G_B4_0 = 0;
	bool G_B4_1 = false;
	{
		// bool matches = true;
		V_0 = (bool)1;
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		V_1 = 0;
		goto IL_00ad;
	}

IL_0009:
	{
		// var matcher = valueMatchers[i];
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_0 = __this->___valueMatchers_7;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_4 = V_2;
		NullCheck(L_4);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_5;
		L_5 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(L_4, NULL);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6 = ___response0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = VirtualFuncInvoker1< String_t*, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_5, L_6);
		V_3 = L_7;
		// matches &= !matcher.contentRequired || !string.IsNullOrEmpty(value);
		bool L_8 = V_0;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = L_9->___contentRequired_2;
		G_B2_0 = L_8;
		if (!L_10)
		{
			G_B3_0 = L_8;
			goto IL_0033;
		}
	}
	{
		String_t* L_11 = V_3;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		G_B4_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0034:
	{
		V_0 = (bool)((int32_t)((int32_t)G_B4_1&G_B4_0));
		// switch (matcher.matchMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___matchMethod_3;
		V_4 = L_14;
		int32_t L_15 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1)))
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_009e;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_005d:
	{
		// matches &= Regex.Match(value, matcher.matchValue).Success;
		bool L_16 = V_0;
		String_t* L_17 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19 = L_18->___matchValue_5;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_20;
		L_20 = Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7(L_17, L_19, NULL);
		NullCheck(L_20);
		bool L_21;
		L_21 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_20, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_16&(int32_t)L_21));
		// break;
		goto IL_00a9;
	}

IL_0073:
	{
		// matches &= value == matcher.matchValue;
		bool L_22 = V_0;
		String_t* L_23 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = L_24->___matchValue_5;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, L_25, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_22&(int32_t)L_26));
		// break;
		goto IL_00a9;
	}

IL_0084:
	{
		// matches &= CompareInt(value, matcher);
		bool L_27 = V_0;
		String_t* L_28 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_29 = V_2;
		bool L_30;
		L_30 = WitResponseMatcher_CompareInt_mBFEA1319F29D734BB9902412C9B3BD757E5B5FFB(__this, L_28, L_29, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_30));
		// break;
		goto IL_00a9;
	}

IL_0091:
	{
		// matches &= CompareFloat(value, matcher);
		bool L_31 = V_0;
		String_t* L_32 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_33 = V_2;
		bool L_34;
		L_34 = WitResponseMatcher_CompareFloat_m39D94664E1B155931817F0C2434F2093F037CF5D(__this, L_32, L_33, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_31&(int32_t)L_34));
		// break;
		goto IL_00a9;
	}

IL_009e:
	{
		// matches &= CompareDouble(value, matcher);
		bool L_35 = V_0;
		String_t* L_36 = V_3;
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_37 = V_2;
		bool L_38;
		L_38 = WitResponseMatcher_CompareDouble_m01E1A016568F0A2A109C5E4556505AD7188ABC85(__this, L_36, L_37, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_35&(int32_t)L_38));
	}

IL_00a9:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_40 = V_1;
		ValuePathMatcherU5BU5D_t61A91ED1635E83400DCE1862E79AC70C514D3B75* L_41 = __this->___valueMatchers_7;
		NullCheck(L_41);
		bool L_42 = V_0;
		if (((int32_t)(((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))? 1 : 0)&(int32_t)L_42)))
		{
			goto IL_0009;
		}
	}
	{
		// return matches;
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m01E1A016568F0A2A109C5E4556505AD7188ABC85 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// double dMatchValue = double.Parse(matcher.matchValue);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		double L_4;
		L_4 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_006b;
			}
			case 4:
			{
				goto IL_0066;
			}
			case 5:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) < matcher.floatingPointComparisonTolerance;
		double L_8 = V_0;
		double L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_10) < ((double)L_12))? 1 : 0);
	}

IL_0050:
	{
		// return Math.Abs(dValue - dMatchValue) > matcher.floatingPointComparisonTolerance;
		double L_13 = V_0;
		double L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(((double)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_15) > ((double)L_17))? 1 : 0);
	}

IL_0061:
	{
		// return dValue > dMatchValue;
		double L_18 = V_0;
		double L_19 = V_1;
		return (bool)((((double)L_18) > ((double)L_19))? 1 : 0);
	}

IL_0066:
	{
		// return dValue < dMatchValue;
		double L_20 = V_0;
		double L_21 = V_1;
		return (bool)((((double)L_20) < ((double)L_21))? 1 : 0);
	}

IL_006b:
	{
		// return dValue >= dMatchValue;
		double L_22 = V_0;
		double L_23 = V_1;
		return (bool)((((int32_t)((!(((double)L_22) >= ((double)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0073:
	{
		// return dValue <= dMatchValue;
		double L_24 = V_0;
		double L_25 = V_1;
		return (bool)((((int32_t)((!(((double)L_24) <= ((double)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m39D94664E1B155931817F0C2434F2093F037CF5D (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// float dMatchValue = float.Parse(matcher.matchValue);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		float L_4;
		L_4 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0068;
			}
			case 5:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) <
		//        matcher.floatingPointComparisonTolerance;
		float L_8 = V_0;
		float L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_10)) < ((double)L_12))? 1 : 0);
	}

IL_0051:
	{
		// return Math.Abs(dValue - dMatchValue) >
		//        matcher.floatingPointComparisonTolerance;
		float L_13 = V_0;
		float L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_15)) > ((double)L_17))? 1 : 0);
	}

IL_0063:
	{
		// return dValue > dMatchValue;
		float L_18 = V_0;
		float L_19 = V_1;
		return (bool)((((float)L_18) > ((float)L_19))? 1 : 0);
	}

IL_0068:
	{
		// return dValue < dMatchValue;
		float L_20 = V_0;
		float L_21 = V_1;
		return (bool)((((float)L_20) < ((float)L_21))? 1 : 0);
	}

IL_006d:
	{
		// return dValue >= dMatchValue;
		float L_22 = V_0;
		float L_23 = V_1;
		return (bool)((((int32_t)((!(((float)L_22) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		// return dValue <= dMatchValue;
		float L_24 = V_0;
		float L_25 = V_1;
		return (bool)((((int32_t)((!(((float)L_24) <= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Facebook.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mBFEA1319F29D734BB9902412C9B3BD757E5B5FFB (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, String_t* ___value0, ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* ___matcher1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// int dMatchValue = int.Parse(matcher.matchValue);
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		int32_t L_4;
		L_4 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_003f:
	{
		// return dValue == dMatchValue;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0044:
	{
		// return dValue != dMatchValue;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		return (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004c:
	{
		// return dValue > dMatchValue;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		return (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
	}

IL_0051:
	{
		// return dValue < dMatchValue;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		return (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
	}

IL_0056:
	{
		// return dValue >= dMatchValue;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		return (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		// return dValue <= dMatchValue;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		return (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Facebook.WitAi.CallbackHandlers.WitResponseMatcher::IntentMatches(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_IntentMatches_mC627F7AF4545BCC223D06C2674367446F6E98A37 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22270319A52B6C9B9967E9291B9A79B116526038);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// var intentNode = response.GetFirstIntent();
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = WitResultUtilities_GetFirstIntent_mE9748A7275970EABF61BC4920BFB445857066F58(L_0, NULL);
		V_0 = L_1;
		// if (string.IsNullOrEmpty(intent))
		String_t* L_2 = __this->___intent_5;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// if (intent == intentNode["name"].Value)
		String_t* L_4 = __this->___intent_5;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5 = V_0;
		NullCheck(L_5);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6;
		L_6 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_5, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_6);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_00a2;
		}
	}
	{
		// var actualConfidence = intentNode["confidence"].AsFloat;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_9 = V_0;
		NullCheck(L_9);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_10;
		L_10 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_9, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, L_10);
		V_1 = L_11;
		// if (actualConfidence >= confidenceThreshold)
		float L_12 = V_1;
		float L_13 = __this->___confidenceThreshold_6;
		if ((!(((float)L_12) >= ((float)L_13))))
		{
			goto IL_004f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// Debug.Log($"{intent} matched, but confidence ({actualConfidence.ToString("F")}) was below threshold ({confidenceThreshold.ToString("F")})");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = __this->___intent_5;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral334976BAB31C9D74A4F24AC5A19ADD9273522252);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19;
		L_19 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_1), _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral22270319A52B6C9B9967E9291B9A79B116526038);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral22270319A52B6C9B9967E9291B9A79B116526038);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (&__this->___confidenceThreshold_6);
		String_t* L_23;
		L_23 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_22, _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_25;
		L_25 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
	}

IL_00a2:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__ctor_mB81768CF47FEDAA8B731D83226298AB18A46E5D4 (WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0, 1f), SerializeField] public float confidenceThreshold = .6f;
		__this->___confidenceThreshold_6 = (0.600000024f);
		// [SerializeField] private MultiValueEvent onMultiValueEvent = new MultiValueEvent();
		MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* L_0 = (MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C*)il2cpp_codegen_object_new(MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MultiValueEvent__ctor_m24721BEA88A8DC6A7438F16DF9C7F4B141BE0FF0(L_0, NULL);
		__this->___onMultiValueEvent_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMultiValueEvent_9), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseMatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__cctor_m6F8D78AB8BA2DFE600AE008EEADD8866F7D47D5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Regex valueRegex = new Regex(Regex.Escape("{value}"), RegexOptions.Compiled);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Regex_Escape_m2E4E071ABAFAE1BF55932725F28F4194CD56D7DE(_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, 8, NULL);
		((WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var))->___valueRegex_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t06B27E6514774265FC0C7D70B2E142578DA64900_il2cpp_TypeInfo_var))->___valueRegex_10), (void*)L_1);
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
// System.Void Facebook.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m24721BEA88A8DC6A7438F16DF9C7F4B141BE0FF0 (MultiValueEvent_t2599FF3CB92AE4AE37B392D655E9B9686DEC640C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D(__this, UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_mD1D914C07A91A8D88BEEB83833BCDC9818261377 (ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.FormattedValueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedValueEvents__ctor_m4DA3F46BEB2E9D13C232CB1BC9DEAC759746B57C (FormattedValueEvents_tB10203753DC8F2717F64091CEA942383D08D48D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueEvent onFormattedValueEvent = new ValueEvent();
		ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74* L_0 = (ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74*)il2cpp_codegen_object_new(ValueEvent_t14ED8C8ABC819EAA8F0F19F7B1EA579C45993E74_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueEvent__ctor_mD1D914C07A91A8D88BEEB83833BCDC9818261377(L_0, NULL);
		__this->___onFormattedValueEvent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFormattedValueEvent_1), (void*)L_0);
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
// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ValuePathMatcher_get_ConfidenceReference_m561926765A3249DAB510C86C42FC2692338F5F62 (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* G_B4_0 = NULL;
	WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_0 = __this->___confidencePathReference_9;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_1 = __this->___confidencePathReference_9;
		return L_1;
	}

IL_000f:
	{
		// var confidencePath = Reference?.path;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_2;
		L_2 = ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787(__this, NULL);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		String_t* L_4 = G_B4_0->___path_1;
		G_B5_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(confidencePath))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		// confidencePath = confidencePath.Substring(0, confidencePath.LastIndexOf("."));
		String_t* L_7 = V_0;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_9, NULL);
		V_0 = L_10;
		// confidencePath += ".confidence";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E, NULL);
		V_0 = L_12;
		// confidencePathReference = WitResultUtilities.GetWitResponseReference(confidencePath);
		String_t* L_13 = V_0;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_14;
		L_14 = WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD(L_13, NULL);
		__this->___confidencePathReference_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___confidencePathReference_9), (void*)L_14);
	}

IL_0055:
	{
		// return confidencePathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_15 = __this->___confidencePathReference_9;
		return L_15;
	}
}
// Facebook.WitAi.WitResponseReference Facebook.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* ValuePathMatcher_get_Reference_m2A32CA50F5C03A5EF44B4FFDBC17F8BB562E5787 (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* L_0 = __this->___witValueReference_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_tD53CDFBDC3B12AB1495984258B6ACC38EEE55E32* L_2 = __this->___witValueReference_1;
		NullCheck(L_2);
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_3;
		L_3 = WitValue_get_Reference_m983BF433C074A617B269D6B1C6ACF9D74EE7958E(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// if (null == pathReference || pathReference.path != path)
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_4 = __this->___pathReference_8;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_5 = __this->___pathReference_8;
		NullCheck(L_5);
		String_t* L_6 = L_5->___path_1;
		String_t* L_7 = __this->___path_0;
		bool L_8;
		L_8 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_0039:
	{
		// pathReference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_9 = __this->___path_0;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_10;
		L_10 = WitResultUtilities_GetWitResponseReference_m7E0E209887806033E842A60BEDDECC03FAB77AAD(L_9, NULL);
		__this->___pathReference_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathReference_8), (void*)L_10);
	}

IL_004a:
	{
		// return pathReference;
		WitResponseReference_t719B8BDD7237E571229C3C224366142B8339ED3E* L_11 = __this->___pathReference_8;
		return L_11;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.ValuePathMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuePathMatcher__ctor_m07EFED8A2D66952E0FB33D2D6C6C6AC2F4FE4FED (ValuePathMatcher_tC7072C801D083BF3CEBF96F7C6A4C419277AAE4C* __this, const RuntimeMethod* method) 
{
	{
		// public bool contentRequired = true;
		__this->___contentRequired_2 = (bool)1;
		// public double floatingPointComparisonTolerance = .0001f;
		__this->___floatingPointComparisonTolerance_6 = (9.9999997473787516E-05);
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
// System.Void Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnHandleResponse_m83929902127384A727DDFE5F36ACD0BF434F423B (WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4* __this, WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_1 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B8_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B7_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B11_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B10_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B16_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B15_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B20_0 = NULL;
	StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* G_B19_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (useRegex)
		bool L_3 = __this->___useRegex_7;
		if (!L_3)
		{
			goto IL_0086;
		}
	}
	{
		// if (null == regex)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->___regex_9;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_5 = __this->___searchText_5;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_6, L_5, ((int32_t)9), NULL);
		__this->___regex_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_9), (void*)L_6);
	}

IL_0034:
	{
		// var match = regex.Match(text);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_7 = __this->___regex_9;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_9;
		L_9 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_7, L_8, NULL);
		V_1 = L_9;
		// if (match.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_10, NULL);
		if (!L_11)
		{
			goto IL_00e1;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_12 = __this->___exactMatch_6;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_13, NULL);
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_17 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_18 = L_17;
		G_B7_0 = L_18;
		if (L_18)
		{
			G_B8_0 = L_18;
			goto IL_006d;
		}
	}
	{
		return;
	}

IL_006d:
	{
		String_t* L_19 = V_0;
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B8_0, L_19, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_0074:
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_20 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_21 = L_20;
		G_B10_0 = L_21;
		if (L_21)
		{
			G_B11_0 = L_21;
			goto IL_007f;
		}
	}
	{
		return;
	}

IL_007f:
	{
		String_t* L_22 = V_0;
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B11_0, L_22, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_0086:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_23 = __this->___exactMatch_6;
		if (!L_23)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_24, NULL);
		String_t* L_26 = __this->___searchText_5;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_26, NULL);
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_29 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_30 = L_29;
		G_B15_0 = L_30;
		if (L_30)
		{
			G_B16_0 = L_30;
			goto IL_00b1;
		}
	}
	{
		return;
	}

IL_00b1:
	{
		String_t* L_31 = V_0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B16_0, L_31, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_00b8:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_32, NULL);
		String_t* L_34 = __this->___searchText_5;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_34, NULL);
		NullCheck(L_33);
		bool L_36;
		L_36 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00e1;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_37 = __this->___onUtteranceMatched_8;
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_38 = L_37;
		G_B19_0 = L_38;
		if (L_38)
		{
			G_B20_0 = L_38;
			goto IL_00db;
		}
	}
	{
		return;
	}

IL_00db:
	{
		String_t* L_39 = V_0;
		NullCheck(G_B20_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B20_0, L_39, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_mD2508F7BF061E1643E07B446F990E5502AD260A6 (WitUtteranceMatcher_t1A2C2BA7A4F1DFF63A0266115636A1FEFD2166C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->___exactMatch_6 = (bool)1;
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76* L_0 = (StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76*)il2cpp_codegen_object_new(StringEvent_t900D996D498937BA8C57EB5A74AFC7E3C8652B76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mF3F63CB79A236D91609C9B7EBF293D7E6935006A(L_0, NULL);
		__this->___onUtteranceMatched_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUtteranceMatched_8), (void*)L_0);
		WitResponseHandler__ctor_m90BE72DD4323937145932F727817A8EA2216A683(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
