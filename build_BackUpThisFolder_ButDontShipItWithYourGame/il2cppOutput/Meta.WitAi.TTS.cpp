﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_tE974880775FC548AAD9D5D87454AA897D3B56023;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>
struct Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>
struct Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>
struct Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<System.UriBuilder,System.Uri>
struct Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Meta.WitAi.TTS.Data.TTSClipData>
struct IEnumerable_1_t2626F921245FDB2CF8AAEE85B68944E12334D1AC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.Requests.VRequest>
struct KeyCollection_tE36F7359B92BAA8DCC8264C1AEB4D13963D09E5B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.Requests.WitVRequest>
struct KeyCollection_t4B65FF7A9DE6154375E9C0F9CA38DAFF4FB860D2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>
struct List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Meta.WitAi.TTS.Data.TTSClipData>
struct Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71;
// System.Predicate`1<Meta.WitAi.TTS.TTSService>
struct Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177;
// System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>
struct Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>
struct RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>
struct RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>
struct RequestCompleteDelegate_1_t336E76112EC94D50E34938D06BC1F55D2227D738;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>
struct RequestCompleteDelegate_1_t5AF447A591A5097051D3A5AFBB764165380A9835;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323;
// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D;
// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>
struct UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>
struct UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4;
// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.Requests.VRequest>
struct ValueCollection_t581EFE22462719ABF868D41635050675525A0DE1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.Requests.WitVRequest>
struct ValueCollection_tC4747DB781BF655C70E10AC6FA1C795609D9DDD4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.WitAi.TTS.Data.TTSClipData>[]
struct EntryU5BU5D_t3F34821D42F7E54244DFBD0D9102A68F6A3CA507;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.WitAi.Requests.VRequest>[]
struct EntryU5BU5D_t631F6880E3193437405381D85DD426D96F33D360;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.WitAi.Requests.WitVRequest>[]
struct EntryU5BU5D_t0274B7935B2FA24B7689F680E974821FC664C074;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260;
// Meta.WitAi.TTS.TTSService[]
struct TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F;
// Meta.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C;
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
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
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler
struct ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265;
// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler
struct ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759;
// Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider
struct ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49;
// Meta.WitAi.TTS.Interfaces.ITTSWebHandler
struct ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB;
// Meta.WitAi.IWitRequestConfiguration
struct IWitRequestConfiguration_tF4C761EF17EDE97B1399CE148EC403C744B222DF;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.RangeAttribute
struct RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827;
// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
struct TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7;
// Meta.WitAi.TTS.Events.TTSClipDownloadEvent
struct TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18;
// Meta.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689;
// Meta.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40;
// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2;
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80;
// Meta.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089;
// Meta.WitAi.TTS.Integrations.TTSRuntimeCache
struct TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05;
// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D;
// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF;
// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB;
// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6;
// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326;
// Meta.WitAi.TTS.Integrations.TTSWit
struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3;
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1;
// Oculus.Interaction.Deprecated.VoiceUnityRequest
struct VoiceUnityRequest_tC43A0575DD2EED79EBC9C78C501C72E7A2D5C549;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D;
// Meta.WitAi.Requests.WitTTSVRequest
struct WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0;
// Oculus.Interaction.Deprecated.WitUnityRequest
struct WitUnityRequest_t35E0776E562AECD008D3902111D948E2E0313F83;
// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559;
// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF;
// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031;
// Meta.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22;
// Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61;
// Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48;
// Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582;
// Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35
struct U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34
struct U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35
struct U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43
struct U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423;
// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC;
// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9;
IL2CPP_EXTERN_C String_t* _stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9;
IL2CPP_EXTERN_C String_t* _stringLiteral105B80D12DB6276478E269600E49F476237FA089;
IL2CPP_EXTERN_C String_t* _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
IL2CPP_EXTERN_C String_t* _stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676;
IL2CPP_EXTERN_C String_t* _stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261;
IL2CPP_EXTERN_C String_t* _stringLiteral2521E50FE503883D464CA60EBBE09AA3F307F2BD;
IL2CPP_EXTERN_C String_t* _stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B;
IL2CPP_EXTERN_C String_t* _stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD;
IL2CPP_EXTERN_C String_t* _stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1;
IL2CPP_EXTERN_C String_t* _stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral49C01923136530AB3D466B01CE56D524D05E3FAF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D43ED35A1484B7524D1809AE8CF299C5C80ABDD;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB;
IL2CPP_EXTERN_C String_t* _stringLiteral54A4BA349EAF19BE74CBEDE7FCD8664B1F6F6C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral78A3395B74C45CDB5B2B77A5CBEBA8301D73B1A8;
IL2CPP_EXTERN_C String_t* _stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719;
IL2CPP_EXTERN_C String_t* _stringLiteral8938D7942C254913A76B4869239949263802711D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459;
IL2CPP_EXTERN_C String_t* _stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C;
IL2CPP_EXTERN_C String_t* _stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4;
IL2CPP_EXTERN_C String_t* _stringLiteralA937C899247696B6565665BE3BD09607F49A2042;
IL2CPP_EXTERN_C String_t* _stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84;
IL2CPP_EXTERN_C String_t* _stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D;
IL2CPP_EXTERN_C String_t* _stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B1000C31CF4895724E513340B19C099E04353C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973;
IL2CPP_EXTERN_C String_t* _stringLiteralE4785CE5B5CD085DD42BF7562B0CC071FE97E15F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF454A4B2372B574ECE70DCBBEBE231D6B0D7C6B6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__35_0_m3566C2146C829910441BC2A451A517E4564DC39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m297AD610849F932B17D18A89F946F096A8C94E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeakAsyncU3Ed__34_System_Collections_IEnumerator_Reset_m9E82993DA1E4462CC857083334F6BA04552D94F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_Reset_m426ED030AF4F161851B54927FC9F0DA01BEDFDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CGetLoadingClipIndexU3Eb__0_mCF019074F3F166D67E3D1FCE6576D786061BEE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CGetPlaybackQueueIndexU3Eb__0_m88848425FD1A51AECF7EF4D72CD1EFE4A6D5A190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass37_0_U3COnLoadBeginU3Eb__0_m4462CE958AED4DDEE5232093A6FE937D05A738DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForCompletionU3Ed__43_System_Collections_IEnumerator_Reset_m574B4C57455D0C792C5C2F5101AF4BC509C73368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260;
struct TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F;
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C;
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1C2D0A02D5FE806AE50E3556725657591A412C3 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3F34821D42F7E54244DFBD0D9102A68F6A3CA507* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>
struct Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t631F6880E3193437405381D85DD426D96F33D360* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE36F7359B92BAA8DCC8264C1AEB4D13963D09E5B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t581EFE22462719ABF868D41635050675525A0DE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>
struct Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0274B7935B2FA24B7689F680E974821FC664C074* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4B65FF7A9DE6154375E9C0F9CA38DAFF4FB860D2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC4747DB781BF655C70E10AC6FA1C795609D9DDD4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____dictionary_0;
};

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

// System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>
struct List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

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

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSClipData::textToSpeak
	String_t* ___textToSpeak_0;
	// System.String Meta.WitAi.TTS.Data.TTSClipData::clipID
	String_t* ___clipID_1;
	// UnityEngine.AudioType Meta.WitAi.TTS.Data.TTSClipData::audioType
	int32_t ___audioType_2;
	// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Data.TTSClipData::voiceSettings
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Data.TTSClipData::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Data.TTSClipData::queryParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParameters_5;
	// UnityEngine.AudioClip Meta.WitAi.TTS.Data.TTSClipData::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_6;
	// Meta.WitAi.TTS.Data.TTSClipLoadState Meta.WitAi.TTS.Data.TTSClipData::loadState
	int32_t ___loadState_7;
	// System.Single Meta.WitAi.TTS.Data.TTSClipData::loadProgress
	float ___loadProgress_8;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState> Meta.WitAi.TTS.Data.TTSClipData::onStateChange
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* ___onStateChange_9;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onPlaybackReady
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPlaybackReady_10;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onDownloadComplete
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete_11;
};

// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80  : public RuntimeObject
{
	// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Data.TTSDiskCacheSettings::DiskCacheLocation
	int32_t ___DiskCacheLocation_0;
};

// Meta.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipDownloadEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadBegin
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* ___OnDownloadBegin_0;
	// Meta.WitAi.TTS.Events.TTSClipDownloadEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadSuccess
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* ___OnDownloadSuccess_1;
	// Meta.WitAi.TTS.Events.TTSClipDownloadEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadCancel
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* ___OnDownloadCancel_2;
	// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadError
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* ___OnDownloadError_3;
};

// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSServiceEvents::OnClipCreated
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnClipCreated_0;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSServiceEvents::OnClipUnloaded
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnClipUnloaded_1;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Events.TTSServiceEvents::Stream
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___Stream_2;
	// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Events.TTSServiceEvents::Download
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___Download_3;
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB  : public RuntimeObject
{
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadBegin
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadBegin_0;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadFailed
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadFailed_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadSuccess
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadSuccess_2;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadAbort
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadAbort_3;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnQueuedSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnQueuedSpeaking_4;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnStartSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnStartSpeaking_5;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnFinishedSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnFinishedSpeaking_6;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnCancelledSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnCancelledSpeaking_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipPlaybackReady
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnClipPlaybackReady_8;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipPlaybackStart
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnClipPlaybackStart_9;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipPlaybackFinished
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnClipPlaybackFinished_10;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipPlaybackCancelled
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnClipPlaybackCancelled_11;
};

// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamBegin
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnStreamBegin_0;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamReady
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnStreamReady_1;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamCancel
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnStreamCancel_2;
	// Meta.WitAi.TTS.Events.TTSClipErrorEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamError
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* ___OnStreamError_3;
};

// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSVoiceSettings::settingsID
	String_t* ___settingsID_1;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.Requests.VRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_2;
	// System.Boolean Meta.WitAi.Requests.VRequest::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_3;
	// System.Boolean Meta.WitAi.Requests.VRequest::_performing
	bool ____performing_4;
	// System.Single Meta.WitAi.Requests.VRequest::_progress
	float ____progress_5;
	// UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.VRequest::_request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____request_6;
	// Meta.WitAi.Requests.VRequest/RequestProgressDelegate Meta.WitAi.Requests.VRequest::_onProgress
	RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ____onProgress_7;
	// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest> Meta.WitAi.Requests.VRequest::_onComplete
	RequestCompleteDelegate_1_t5AF447A591A5097051D3A5AFBB764165380A9835* ____onComplete_8;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.Requests.VRequest::_coroutine
	CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* ____coroutine_9;
};

struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_StaticFields
{
	// System.Int32 Meta.WitAi.Requests.VRequest::MaxConcurrentRequests
	int32_t ___MaxConcurrentRequests_0;
	// System.Int32 Meta.WitAi.Requests.VRequest::_requestCount
	int32_t ____requestCount_1;
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

// Oculus.Interaction.Deprecated.VoiceUnityRequest
struct VoiceUnityRequest_tC43A0575DD2EED79EBC9C78C501C72E7A2D5C549  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.WitUnityRequest
struct WitUnityRequest_t35E0776E562AECD008D3902111D948E2E0313F83  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF  : public RuntimeObject
{
	// Meta.WitAi.TTS.Integrations.TTSDiskCache Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::<>4__this
	TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* ___U3CU3E4__this_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean> Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::onCheckComplete
	Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* ___onCheckComplete_2;
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031  : public RuntimeObject
{
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_0;
	// Meta.WitAi.TTS.Integrations.TTSDiskCache Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<>4__this
	TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* ___U3CU3E4__this_1;
};

// Meta.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22  : public RuntimeObject
{
};

struct U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields
{
	// Meta.WitAi.TTS.TTSService/<>c Meta.WitAi.TTS.TTSService/<>c::<>9
	U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* ___U3CU3E9_0;
	// System.Predicate`1<Meta.WitAi.TTS.TTSService> Meta.WitAi.TTS.TTSService/<>c::<>9__1_0
	Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* ___U3CU3E9__1_0_1;
};

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61  : public RuntimeObject
{
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::onStreamReady
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<>4__this
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___U3CU3E4__this_2;
	// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<>9__5
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___U3CU3E9__5_3;
};

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48  : public RuntimeObject
{
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<>4__this
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___U3CU3E4__this_0;
	// System.String Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::downloadPath
	String_t* ___downloadPath_1;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_2;
	// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::onDownloadComplete
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete_3;
	// System.Action`1<System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<>9__1
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__1_4;
};

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::presetVoiceId
	String_t* ___presetVoiceId_0;
};

// Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35
struct U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Action Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::call
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call_2;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>4__this
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___U3CU3E4__this_3;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass24_0::clipId
	String_t* ___clipId_0;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass25_0::clipId
	String_t* ___clipId_0;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B  : public RuntimeObject
{
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_0;
	// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0::addToQueue
	bool ___addToQueue_1;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34
struct U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::textToSpeak
	String_t* ___textToSpeak_2;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_3;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_4;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35
struct U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String[] Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::textsToSpeak
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak_2;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_3;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_4;
	// System.String[] Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>s__1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CU3Es__1_5;
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>s__2
	int32_t ___U3CU3Es__2_6;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<textToSpeak>5__3
	String_t* ___U3CtextToSpeakU3E5__3_7;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43
struct U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::duration
	float ___duration_2;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_3;
};

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC  : public RuntimeObject
{
	// Meta.WitAi.TTS.Integrations.TTSWit Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<>4__this
	TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* ___U3CU3E4__this_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
};

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8  : public RuntimeObject
{
	// Meta.WitAi.TTS.Integrations.TTSWit Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<>4__this
	TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* ___U3CU3E4__this_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
	// System.String Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::downloadPath
	String_t* ___downloadPath_2;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>
struct UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>
struct UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8 
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::configuration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke
{
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
};
// Native definition for COM marshalling of Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com
{
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
};

// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29  : public TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326
{
	// System.String Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::voice
	String_t* ___voice_4;
	// System.String Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::style
	String_t* ___style_5;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::speed
	int32_t ___speed_6;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::pitch
	int32_t ___pitch_7;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::gain
	int32_t ___gain_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 
{
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC* ___voices_12;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke* ___voices_12;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com* ___voices_12;
};

// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534  : public VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1
{
	// Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::_configuration
	RuntimeObject* ____configuration_14;
	// System.Boolean Meta.WitAi.Requests.WitVRequest::_useServerToken
	bool ____useServerToken_15;
};

struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534_StaticFields
{
	// System.Func`2<System.UriBuilder,System.Uri> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUri
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* ___OnProvideCustomUri_11;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Meta.WitAi.Requests.WitVRequest::OnProvideCustomHeaders
	Action_1_tE974880775FC548AAD9D5D87454AA897D3B56023* ___OnProvideCustomHeaders_12;
	// System.Action`1<System.Text.StringBuilder> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUserAgent
	Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___OnProvideCustomUserAgent_13;
	// System.String Meta.WitAi.Requests.WitVRequest::_operatingSystem
	String_t* ____operatingSystem_16;
	// System.String Meta.WitAi.Requests.WitVRequest::_deviceModel
	String_t* ____deviceModel_17;
	// System.String Meta.WitAi.Requests.WitVRequest::_appIdentifier
	String_t* ____appIdentifier_18;
	// System.String Meta.WitAi.Requests.WitVRequest::_unityVersion
	String_t* ____unityVersion_19;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RangeAttribute
struct RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
struct TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7  : public UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA
{
};

// Meta.WitAi.TTS.Events.TTSClipDownloadEvent
struct TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18  : public UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8
{
};

// Meta.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689  : public UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8
{
};

// Meta.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40  : public UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4  : public UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8  : public UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D
{
};

// Meta.WitAi.Requests.WitTTSVRequest
struct WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0  : public WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534
{
};

struct WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_StaticFields
{
	// UnityEngine.AudioType Meta.WitAi.Requests.WitTTSVRequest::TTSAudioType
	int32_t ___TTSAudioType_20;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>
struct Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6  : public MulticastDelegate_t
{
};

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36  : public MulticastDelegate_t
{
};

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Predicate`1<Meta.WitAi.TTS.Data.TTSClipData>
struct Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71  : public MulticastDelegate_t
{
};

// System.Predicate`1<Meta.WitAi.TTS.TTSService>
struct Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177  : public MulticastDelegate_t
{
};

// System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>
struct Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>
struct RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>
struct RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___excludedAssemblies_12;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::relaxedResolution
	bool ___relaxedResolution_13;
};

// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::_diskPath
	String_t* ____diskPath_4;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::_defaultSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ____defaultSettings_5;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::_events
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ____events_6;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSDiskCache::_streamRequests
	Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* ____streamRequests_7;
};

// Meta.WitAi.TTS.Integrations.TTSRuntimeCache
struct TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::ClipLimit
	bool ___ClipLimit_4;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::ClipCapacity
	int32_t ___ClipCapacity_5;
	// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RamLimit
	bool ___RamLimit_6;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RamCapacity
	int32_t ___RamCapacity_7;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::<OnClipAdded>k__BackingField
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___U3COnClipAddedU3Ek__BackingField_8;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::<OnClipRemoved>k__BackingField
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___U3COnClipRemovedU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData> Meta.WitAi.TTS.Integrations.TTSRuntimeCache::_clips
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____clips_10;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.TTS.Integrations.TTSRuntimeCache::_clipOrder
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____clipOrder_11;
};

// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::_events
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* ____events_5;
	// System.Boolean Meta.WitAi.TTS.TTSService::_delegates
	bool ____delegates_6;
	// System.Security.Cryptography.SHA256 Meta.WitAi.TTS.TTSService::CLIP_HASH
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___CLIP_HASH_8;
};

struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields
{
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::_instance
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____instance_4;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::presetVoiceID
	String_t* ___presetVoiceID_4;
	// UnityEngine.AudioSource Meta.WitAi.TTS.Utilities.TTSSpeaker::AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___AudioSource_5;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::prependedText
	String_t* ___prependedText_6;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::appendedText
	String_t* ___appendedText_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::_events
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* ____events_8;
	// System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData> Meta.WitAi.TTS.Utilities.TTSSpeaker::_loadingQueue
	List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* ____loadingQueue_9;
	// System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData> Meta.WitAi.TTS.Utilities.TTSSpeaker::_playbackQueue
	List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* ____playbackQueue_10;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.Utilities.TTSSpeaker::_tts
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____tts_11;
	// UnityEngine.Coroutine Meta.WitAi.TTS.Utilities.TTSSpeaker::_waitForCompletion
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____waitForCompletion_12;
};

// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::_useUpdate
	bool ____useUpdate_5;
	// System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::_method
	RuntimeObject* ____method_6;
	// UnityEngine.Coroutine Meta.WitAi.CoroutineUtility/CoroutinePerformer::_coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coroutine_7;
};

// Meta.WitAi.TTS.Integrations.TTSWit
struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3  : public TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D
{
	// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::_runtimeCache
	RuntimeObject* ____runtimeCache_10;
	// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::_diskCache
	RuntimeObject* ____diskCache_11;
	// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings Meta.WitAi.TTS.Integrations.TTSWit::RequestSettings
	TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8 ___RequestSettings_12;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::<WebStreamEvents>k__BackingField
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___U3CWebStreamEventsU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSWit::_webStreams
	Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* ____webStreams_14;
	// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::<WebDownloadEvents>k__BackingField
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___U3CWebDownloadEventsU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest> Meta.WitAi.TTS.Integrations.TTSWit::_webDownloads
	Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* ____webDownloads_16;
	// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::_presetVoiceSettings
	TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* ____presetVoiceSettings_17;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Meta.WitAi.TTS.TTSService[]
struct TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* m_Items[1];

	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* m_Items[1];

	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* m_Items[1];

	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* value)
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
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* m_Items[1];

	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared (const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared (UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m49021A429720036E9DEA177CAB8D5375847FADCB_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5_gshared (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCompleteDelegate_1__ctor_m5B4BD9930967DA4A93C01EE87192DA6DBB2988F1_gshared (RequestCompleteDelegate_1_t336E76112EC94D50E34938D06BC1F55D2227D738* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m977F48E7B446FA00AE2DB8F68B71E2033313739A_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<Meta.WitAi.TTS.TTSService>()
inline TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E (const RuntimeMethod* method)
{
	return ((  TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared)(method);
}
// System.Void System.Predicate`1<Meta.WitAi.TTS.TTSService>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7FF7B5BF3FDED2C2A50792B0653541622C4BD9BB (Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Meta.WitAi.TTS.TTSService>(T[],System.Predicate`1<T>)
inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6 (TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* ___array0, Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* ___match1, const RuntimeMethod* method)
{
	return ((  TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* (*) (TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F*, Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m7943297ED32FD0E92544C324E6793089056A2344 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4 (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3 (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5 (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42 (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*, const RuntimeMethod*))UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945 (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*, const RuntimeMethod*))UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared)(__this, ___call0, method);
}
// System.Void Meta.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.String Meta.WitAi.TTS.TTSService::GetSha256Hash(System.Security.Cryptography.SHA256,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetSha256Hash_m994521C11F89C58BA6C4DDE025B18DF9C5A379A2 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___shaHash0, String_t* ___input1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::GetRuntimeCachedClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___clipID0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Data.TTSClipData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipData__ctor_m8E8813962847F69D286A609B0CC34ECFAB6AACF7 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>::Invoke(T1,T2)
inline void Action_2_Invoke_mFDF876A3D40656B3217BE47B427785129CF70061_inline (Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t, const RuntimeMethod*))Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.TTSService::GetPresetVoiceSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___presetVoiceId0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3520C0A2B28626E501AE270ABDD8ABC3D4B02263 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Meta.WitAi.TTS.TTSService::CallAfterAMoment(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call0, const RuntimeMethod* method) ;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::StartCoroutine(System.Collections.IEnumerator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8 (RuntimeObject* ___asyncMethod0, bool ___useUpdate1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnLoadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35__ctor_mD6B60907C94BB96313CA7507F6EEE2425044EFDB (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamBegin(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnStreamReady(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, bool ___fromDisk2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamCancel(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::Unload(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnUnloadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.TTSService::GetDiskCachePath(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete4, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mACF879F390ADB9C9F942DA97D482A5254B18F072 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3FDC374212F42B0C23B179F1335A6B702F6A3D6F (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::Invoke(T0,T1,T2)
inline void UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg00, String_t* ___arg11, String_t* ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, const RuntimeMethod*))UnityEvent_3_Invoke_m49021A429720036E9DEA177CAB8D5375847FADCB_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m523768DAB4A4C74ADEAE20E4C7554FCB2AA902F1 (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEAD34E1883E74D40C6A33FB21485E6529A681C04 (Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Meta.WitAi.TTS.Data.TTSVoiceSettings>(T[],System.Predicate`1<T>)
inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78 (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* ___array0, Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E* ___match1, const RuntimeMethod* method)
{
	return ((  TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* (*) (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*, Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSServiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceEvents__ctor_m82EF258C00AB920E79E011CF464D9B6E1EBCB353 (TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA7431D6908702D15A126044C78B3B9010B10EF55 (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.TTSService::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadBegin(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadCancel(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mC4EA44981086B6C5D5142C90ADAC15001A00E418 (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg10, String_t* ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>::.ctor()
inline void UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>::.ctor()
inline void UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::ToArray()
inline TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4 (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, const RuntimeMethod* method)
{
	return ((  TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::get_Count()
inline int32_t List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSService_get_Instance_m2AFDD22A8A5E433E2B13424DFD8DD36A1F9E6F68 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m4A636E90258573843CC16CA5134E4EEFEA2B5136 (U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6BD0988529097DEA519D066C3560566FBCEF8FCB (Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49 (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m1B43838ED02ED7A3E44A4F8E39C6F2E20924FD76 (U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::get_Item(System.Int32)
inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::Equals(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___other0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::HasClipId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, String_t* ___clipId0, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::GetFormattedText(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___format0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__34__ctor_m14395207D9204E8E41D9B171A0F8EEB17A908E92 (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35__ctor_m9734BA80900926C49871935688E643D2EE28F777 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m3F90FD81A1B4D186502AAE48CEF1E7556CBDE25B (U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68 (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___arg00, String_t* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D*, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mADCB17A6A021877564862A28F1EFCCB172F56C37 (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::Add(T)
inline void List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_inline (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker::GetLoadingClipIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSSpeaker_GetLoadingClipIndex_mFD06C737FA8F16E0F5F4F212CD7414EFD9494C6B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___clipId0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0 (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>::Invoke(T0)
inline void UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833 (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__43__ctor_m9CE7C2A7D75262CDA6407D16C2D7BE84FEBB39B0 (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueuedAsync(System.String[],Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Integrations.TTSDiskCache::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSDiskCache_ShouldCacheToDisk_m5D6E1265C7354DD9FE92F64AB0A6A5EE513C8361 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Utilities.IOUtility::CreateDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOUtility_CreateDirectory_m9CEDEFB04138BABAA175B66857EE9867031D5CBB (String_t* ___directoryPath0, bool ___recursively1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m64F4743BE69F04B7343534CB468C3999D2F08E66 (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m3F27D046697BDCE14C7F53A0C99CA3DC933DBAFF_inline (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void Meta.WitAi.Requests.VRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537 (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5 (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227*, RuntimeObject*, intptr_t, const RuntimeMethod*))RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Meta.WitAi.Requests.VRequest::RequestFileExists(System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778 (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, String_t* ___checkPath0, RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* ___onComplete1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___key0, VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m50208C4947E0F071B327BD30D316628C349D45CB (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskStreamEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>::.ctor(System.Object,System.IntPtr)
inline void RequestCompleteDelegate_1__ctor_m0652A714187CBDC14E8660615DE06C82FF11937F (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227*, RuntimeObject*, intptr_t, const RuntimeMethod*))RequestCompleteDelegate_1__ctor_m5B4BD9930967DA4A93C01EE87192DA6DBB2988F1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioClip(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,UnityEngine.AudioType,System.Boolean,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRequest_RequestAudioClip_m889F3CDCDB4752DCB79529692CCB23459C855800 (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* ___onClipReady1, int32_t ___audioType2, bool ___audioStream3, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___onProgress4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::get_Item(TKey)
inline VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27 (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::Remove(TKey)
inline bool Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3 (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Meta.WitAi.TTS.Data.TTSDiskCacheSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCacheSettings__ctor_m40DDC2AC27F34F5C35BB57426DF1DC9FD96B29F1 (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSStreamEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::.ctor()
inline void Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Values()
inline ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Meta.WitAi.TTS.Data.TTSClipData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Item(TKey)
inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___key0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RemoveClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_RemoveClip_mA5B7062558B1F632383BFBE6D678B2D97EFFBB74 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, String_t* ___clipID0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::IsCacheFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_IsCacheFull_mEC7332D863C614DE241703ACAB66A1C3A706E12A (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Keys()
inline KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Count()
inline int32_t KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipAdded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::Remove(TKey)
inline bool Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipRemoved()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetCacheDiskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSRuntimeCache_GetCacheDiskSize_m1EF520F3243A4581F86E09B3070EFE12737A011C (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>::GetEnumerator()
inline Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A (*) (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>::Dispose()
inline void Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608 (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Current()
inline String_t* Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_inline (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Int64 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClipBytes(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TTSRuntimeCache_GetClipBytes_mDED74477FE1D25D3028FEAFB695127DF56444CCA (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>::MoveNext()
inline bool Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7 (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9 (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.Data.TTSVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSVoiceSettings__ctor_m70BCB36D2CDEE8D24E90613CA3B3B7B1232EF018 (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler>()
inline RuntimeObject* GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler>()
inline RuntimeObject* GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String Meta.WitAi.TTS.TTSService::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetInvalidError_m89FADBC1414326B563501B9952CA615519302AFE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m5805D2BA21D4AE309D44DD9EA35936B0A2AD7F79 (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebStreamEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Integrations.TTSWit::IsRequestValid(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebStream(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebStream_m65761464CCCFAF8DC17976EB7AD6BC7BE6D68578 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.WitTTSVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6 (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* __this, RuntimeObject* ___configuration0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestStream(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitTTSVRequest_RequestStream_m543A1147518C743CEB7925E4B69D72A1C9784508 (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* __this, String_t* ___textToSpeak0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___ttsData1, RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* ___onClipReady2, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___onProgress3, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m5BC4C7E86F42C61955F5AD77E3ECDD2D69218CC9 (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebDownloadEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebDownload(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebDownload_m668EECF084A405833C0F6A10ED18128521EF5F63 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestDownload(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitTTSVRequest_RequestDownload_mC18DF9CEEB421F2A33282F36F70844C508731D3B (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* __this, String_t* ___downloadPath0, String_t* ___textToSpeak1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___ttsData2, RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* ___onComplete3, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___onProgress4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___key0, WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::get_Item(TKey)
inline WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::Remove(TKey)
inline bool Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWitVoiceSettings__ctor_mF02F476EE719E6BE0B984429F0DCF3CE82E4BD24 (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::get_PresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSWit_get_PresetVoiceSettings_m6D39B210468DFD1C57B1F93A4BCA1B1BC3868AF9 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<UnityEngine.RangeAttribute>(System.Reflection.MemberInfo)
inline RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___element0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSDownloadEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84 (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::.ctor()
inline void Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.TTSService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService__ctor_m0F6DF7E82B702325C181B6D966D0934A143973DE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor()
inline void UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor()
inline void UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, const RuntimeMethod*))UnityEvent_3__ctor_m977F48E7B446FA00AE2DB8F68B71E2033313739A_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6 (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadErrorEvent__ctor_mB66278711D1E80AB517F53B5ED7D92C197E71C1A (TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSClipErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipErrorEvent__ctor_mD7FE85AFFFD6A1445E8775CE5B1D619D29C77221 (TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* __this, const RuntimeMethod* method) ;
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
// System.Void Oculus.Interaction.Deprecated.VoiceUnityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceUnityRequest__ctor_mF215D5CA8B4A89B26D8096ADEBD7FB56FE4FCBFA (VoiceUnityRequest_tC43A0575DD2EED79EBC9C78C501C72E7A2D5C549* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.WitUnityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest__ctor_m0B22D91887A129B50E885B1CF13629B4F2A8218E (WitUnityRequest_t35E0776E562AECD008D3902111D948E2E0313F83* __this, const RuntimeMethod* method) 
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
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSService_get_Instance_m2AFDD22A8A5E433E2B13424DFD8DD36A1F9E6F68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* V_1 = NULL;
	bool V_2 = false;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* V_3 = NULL;
	Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* G_B4_0 = NULL;
	TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* G_B4_1 = NULL;
	Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* G_B3_0 = NULL;
	TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* G_B3_1 = NULL;
	{
		// if (_instance == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// TTSService[] services = Resources.FindObjectsOfTypeAll<TTSService>();
		TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* L_3;
		L_3 = Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E(Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E_RuntimeMethod_var);
		V_1 = L_3;
		// if (services != null)
		TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* L_4 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// _instance = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_7 = ((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* L_9 = ((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_10 = (Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177*)il2cpp_codegen_object_new(Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Predicate_1__ctor_m7FF7B5BF3FDED2C2A50792B0653541622C4BD9BB(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02_RuntimeMethod_var), NULL);
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_11 = L_10;
		((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0040:
	{
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_12;
		L_12 = Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6(G_B4_1, G_B4_0, Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6_RuntimeMethod_var);
		((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4), (void*)L_12);
	}

IL_004b:
	{
	}

IL_004c:
	{
		// return _instance;
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_13 = ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4;
		V_3 = L_13;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_14 = V_3;
		return L_14;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetInvalidError_m89FADBC1414326B563501B9952CA615519302AFE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if (WebHandler == null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return "Web Handler Missing";
		V_1 = _stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB;
		goto IL_0035;
	}

IL_0017:
	{
		// if (VoiceProvider == null)
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// return "Voice Provider Missing";
		V_1 = _stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9;
		goto IL_0035;
	}

IL_002d:
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = __this->____events_5;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Awake_m6D8A95B289FA216E2FB987C8BF1C2DCC6AC57730 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// _delegates = false;
		__this->____delegates_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnEnable_m1ABB62B56E72276E23ACBAC07FB0A000095D0297 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// string validError = GetInvalidError();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Meta.WitAi.TTS.TTSService::GetInvalidError() */, __this);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// VLog.W(validError);
		String_t* L_4 = V_0;
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDisable_mD11232CDA87312BD2A29D9F17356362F265C0FD9 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// RemoveDelegates();
		VirtualActionInvoker0::Invoke(13 /* System.Void Meta.WitAi.TTS.TTSService::RemoveDelegates() */, __this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::AddDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_AddDelegates_m4CE6BD07B84ACFAF8F95CA3164B17703F2FB11B4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (_delegates)
		bool L_0 = __this->____delegates_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_021f;
	}

IL_0011:
	{
		// _delegates = true;
		__this->____delegates_6 = (bool)1;
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		// RuntimeCacheHandler.OnClipAdded.AddListener(OnRuntimeClipAdded);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_4);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5;
		L_5 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipAdded() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_4);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_6 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_5, L_6, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// RuntimeCacheHandler.OnClipRemoved.AddListener(OnRuntimeClipRemoved);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_7);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_8;
		L_8 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_7);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_9 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_8, L_9, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
	}

IL_0063:
	{
		// if (DiskCacheHandler != null)
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00fd;
		}
	}
	{
		// DiskCacheHandler.DiskStreamEvents.OnStreamBegin.AddListener(OnDiskStreamBegin);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_12);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13;
		L_13 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_14 = L_13->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_15 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_15, __this, (intptr_t)((void*)TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_14, L_15, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamCancel.AddListener(OnDiskStreamCancel);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_16);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_17;
		L_17 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_18 = L_17->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_19 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_19, __this, (intptr_t)((void*)TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_18, L_19, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamReady.AddListener(OnDiskStreamReady);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_20);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_21;
		L_21 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_22 = L_21->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_23 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_23, __this, (intptr_t)((void*)TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_22, L_23, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamError.AddListener(OnDiskStreamError);
		RuntimeObject* L_24;
		L_24 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_24);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_25;
		L_25 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_26 = L_25->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_27 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_27, __this, (intptr_t)((void*)TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_26, L_27, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
	}

IL_00fd:
	{
		// if (WebHandler != null)
		RuntimeObject* L_28;
		L_28 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_021f;
		}
	}
	{
		// WebHandler.WebStreamEvents.OnStreamBegin.AddListener(OnWebStreamBegin);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_30);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_31;
		L_31 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_32 = L_31->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_33 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_33, __this, (intptr_t)((void*)TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_32, L_33, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamCancel.AddListener(OnWebStreamCancel);
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_34);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_35;
		L_35 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_36 = L_35->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_37 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_37, __this, (intptr_t)((void*)TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_36, L_37, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamReady.AddListener(OnWebStreamReady);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_38);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_39;
		L_39 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_40 = L_39->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_41 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_41, __this, (intptr_t)((void*)TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_40, L_41, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamError.AddListener(OnWebStreamError);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_42);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_43;
		L_43 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_44 = L_43->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_45 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_45, __this, (intptr_t)((void*)TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_44, L_45, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadBegin.AddListener(OnWebDownloadBegin);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_46);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_47;
		L_47 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_48 = L_47->___OnDownloadBegin_0;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_49 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_49, __this, (intptr_t)((void*)TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_48, L_49, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadCancel.AddListener(OnWebDownloadCancel);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_50);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_51;
		L_51 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_52 = L_51->___OnDownloadCancel_2;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_53 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_53, __this, (intptr_t)((void*)TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_52, L_53, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadSuccess.AddListener(OnWebDownloadSuccess);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_54);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_55;
		L_55 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_56 = L_55->___OnDownloadSuccess_1;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_57 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_57, __this, (intptr_t)((void*)TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_56, L_57, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadError.AddListener(OnWebDownloadError);
		RuntimeObject* L_58;
		L_58 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_58);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_59;
		L_59 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_60 = L_59->___OnDownloadError_3;
		UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* L_61 = (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*)il2cpp_codegen_object_new(UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5(L_61, __this, (intptr_t)((void*)TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var), NULL);
		NullCheck(L_60);
		UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42(L_60, L_61, UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42_RuntimeMethod_var);
	}

IL_021f:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::RemoveDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_RemoveDelegates_m187AD2D40F00E7EEC6851AC01F14D8C8F45F8E38 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (!_delegates)
		bool L_0 = __this->____delegates_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0222;
	}

IL_0014:
	{
		// _delegates = false;
		__this->____delegates_6 = (bool)0;
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		// RuntimeCacheHandler.OnClipAdded.RemoveListener(OnRuntimeClipAdded);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_4);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5;
		L_5 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipAdded() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_4);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_6 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), NULL);
		NullCheck(L_5);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_5, L_6, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// RuntimeCacheHandler.OnClipRemoved.RemoveListener(OnRuntimeClipRemoved);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_7);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_8;
		L_8 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_7);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_9 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_8);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_8, L_9, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
	}

IL_0066:
	{
		// if (DiskCacheHandler != null)
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0100;
		}
	}
	{
		// DiskCacheHandler.DiskStreamEvents.OnStreamBegin.RemoveListener(OnDiskStreamBegin);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_12);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13;
		L_13 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_14 = L_13->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_15 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_15, __this, (intptr_t)((void*)TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_14, L_15, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamCancel.RemoveListener(OnDiskStreamCancel);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_16);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_17;
		L_17 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_18 = L_17->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_19 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_19, __this, (intptr_t)((void*)TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_18, L_19, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamReady.RemoveListener(OnDiskStreamReady);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_20);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_21;
		L_21 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_22 = L_21->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_23 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_23, __this, (intptr_t)((void*)TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_22, L_23, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamError.RemoveListener(OnDiskStreamError);
		RuntimeObject* L_24;
		L_24 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_24);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_25;
		L_25 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_26 = L_25->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_27 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_27, __this, (intptr_t)((void*)TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_26, L_27, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
	}

IL_0100:
	{
		// if (WebHandler != null)
		RuntimeObject* L_28;
		L_28 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_0222;
		}
	}
	{
		// WebHandler.WebStreamEvents.OnStreamBegin.RemoveListener(OnWebStreamBegin);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_30);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_31;
		L_31 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_32 = L_31->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_33 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_33, __this, (intptr_t)((void*)TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_32, L_33, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamCancel.RemoveListener(OnWebStreamCancel);
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_34);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_35;
		L_35 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_36 = L_35->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_37 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_37, __this, (intptr_t)((void*)TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_36, L_37, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamReady.RemoveListener(OnWebStreamReady);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_38);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_39;
		L_39 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_40 = L_39->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_41 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_41, __this, (intptr_t)((void*)TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_40, L_41, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamError.RemoveListener(OnWebStreamError);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_42);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_43;
		L_43 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_44 = L_43->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_45 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_45, __this, (intptr_t)((void*)TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_44, L_45, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadBegin.RemoveListener(OnWebDownloadBegin);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_46);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_47;
		L_47 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_48 = L_47->___OnDownloadBegin_0;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_49 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_49, __this, (intptr_t)((void*)TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_48, L_49, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadCancel.RemoveListener(OnWebDownloadCancel);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_50);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_51;
		L_51 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_52 = L_51->___OnDownloadCancel_2;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_53 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_53, __this, (intptr_t)((void*)TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_52, L_53, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadSuccess.RemoveListener(OnWebDownloadSuccess);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_54);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_55;
		L_55 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_56 = L_55->___OnDownloadSuccess_1;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_57 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_57, __this, (intptr_t)((void*)TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_56, L_57, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadError.RemoveListener(OnWebDownloadError);
		RuntimeObject* L_58;
		L_58 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_58);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_59;
		L_59 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_60 = L_59->___OnDownloadError_3;
		UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* L_61 = (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*)il2cpp_codegen_object_new(UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5(L_61, __this, (intptr_t)((void*)TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var), NULL);
		NullCheck(L_60);
		UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945(L_60, L_61, UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945_RuntimeMethod_var);
	}

IL_0222:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDestroy_m275385C56D64459746BF29725605A7181311BF60 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_instance == this)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// _instance = null;
		((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4), (void*)(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D*)NULL);
	}

IL_0018:
	{
		// UnloadAll();
		TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11(__this, NULL);
		// }
		return;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetClipLog_m728EC27547BA5CAEB422714A4B8261BF9EF87CE6 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___logMessage0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA937C899247696B6565665BE3BD09607F49A2042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t* G_B4_2 = NULL;
	{
		// StringBuilder builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.AppendLine(logMessage);
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___logMessage0;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, L_2, NULL);
		// if (clipData != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___clipData1;
		V_1 = (bool)((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00d4;
		}
	}
	{
		// builder.AppendLine($"Voice: {(clipData.voiceSettings == null ? "Default" : clipData.voiceSettings.settingsID)}");
		StringBuilder_t* L_6 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___clipData1;
		NullCheck(L_7);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_8 = L_7->___voiceSettings_3;
		G_B2_0 = _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
		G_B2_1 = L_6;
		if (!L_8)
		{
			G_B3_0 = _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
			G_B3_1 = L_6;
			goto IL_0036;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___clipData1;
		NullCheck(L_9);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_10 = L_9->___voiceSettings_3;
		NullCheck(L_10);
		String_t* L_11 = L_10->___settingsID_1;
		G_B4_0 = L_11;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003b;
	}

IL_0036:
	{
		G_B4_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B4_2, L_12, NULL);
		// builder.AppendLine($"Text: {clipData.textToSpeak}");
		StringBuilder_t* L_14 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___clipData1;
		NullCheck(L_15);
		String_t* L_16 = L_15->___textToSpeak_0;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE, L_16, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_14, L_17, NULL);
		// builder.AppendLine($"ID: {clipData.clipID}");
		StringBuilder_t* L_19 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = ___clipData1;
		NullCheck(L_20);
		String_t* L_21 = L_20->___clipID_1;
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA937C899247696B6565665BE3BD09607F49A2042, L_21, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_19, L_22, NULL);
		// TTSDiskCacheLocation cacheLocation = TTSDiskCacheLocation.Stream;
		V_2 = 0;
		// if (DiskCacheHandler != null)
		RuntimeObject* L_24;
		L_24 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00bc;
		}
	}
	{
		// TTSDiskCacheSettings settings = clipData.diskCacheSettings;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = ___clipData1;
		NullCheck(L_26);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_27 = L_26->___diskCacheSettings_4;
		V_4 = L_27;
		// if (settings == null)
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_28 = V_4;
		V_5 = (bool)((((RuntimeObject*)(TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)L_28) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00a6;
		}
	}
	{
		// settings = DiskCacheHandler.DiskCacheDefaultSettings;
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_30);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_31;
		L_31 = InterfaceFuncInvoker0< TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(2 /* Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskCacheDefaultSettings() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_30);
		V_4 = L_31;
	}

IL_00a6:
	{
		// if (settings != null)
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_32 = V_4;
		V_6 = (bool)((!(((RuntimeObject*)(TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00bb;
		}
	}
	{
		// cacheLocation = settings.DiskCacheLocation;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_34 = V_4;
		NullCheck(L_34);
		int32_t L_35 = L_34->___DiskCacheLocation_0;
		V_2 = L_35;
	}

IL_00bb:
	{
	}

IL_00bc:
	{
		// builder.AppendLine($"Cache: {cacheLocation}");
		StringBuilder_t* L_36 = V_0;
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973, L_39, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_36, L_40, NULL);
	}

IL_00d4:
	{
		// return builder.ToString();
		StringBuilder_t* L_42 = V_0;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		V_7 = L_43;
		goto IL_00de;
	}

IL_00de:
	{
		// }
		String_t* L_44 = V_7;
		return L_44;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetClipID(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetClipID_m803CAAE7F50051D883C8DE6BFCFE99AFE874618E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_2 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// StringBuilder uniqueID = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// if (VoiceProvider != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_008a;
		}
	}
	{
		// Dictionary<string, string> data = VoiceProvider.EncodeVoiceSettings(voiceSettings);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_4 = ___voiceSettings1;
		NullCheck(L_3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = InterfaceFuncInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings) */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		// foreach (var key in data.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_2;
		NullCheck(L_6);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_7;
		L_7 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_6, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_7);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_8;
		L_8 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_7, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_3 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_3), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0031_1:
			{
				// foreach (var key in data.Keys)
				String_t* L_9;
				L_9 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_3), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_4 = L_9;
				// string keyClean = data[key].ToLower().Replace(CLIP_ID_DELIM, "");
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_2;
				String_t* L_11 = V_4;
				NullCheck(L_10);
				String_t* L_12;
				L_12 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_10, L_11, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_12, NULL);
				NullCheck(L_13);
				String_t* L_14;
				L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_13, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				V_5 = L_14;
				// uniqueID.Append(keyClean);
				StringBuilder_t* L_15 = V_0;
				String_t* L_16 = V_5;
				NullCheck(L_15);
				StringBuilder_t* L_17;
				L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
				// uniqueID.Append(CLIP_ID_DELIM);
				StringBuilder_t* L_18 = V_0;
				NullCheck(L_18);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
			}

IL_006f_1:
			{
				// foreach (var key in data.Keys)
				bool L_20;
				L_20 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_3), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
	}

IL_008a:
	{
		// uniqueID.Append(textToSpeak.ToLower());
		StringBuilder_t* L_21 = V_0;
		String_t* L_22 = ___textToSpeak0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_23, NULL);
		// return GetSha256Hash(CLIP_HASH, uniqueID.ToString());
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_25 = __this->___CLIP_HASH_8;
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		String_t* L_28;
		L_28 = TTSService_GetSha256Hash_m994521C11F89C58BA6C4DDE025B18DF9C5A379A2(__this, L_25, L_27, NULL);
		V_6 = L_28;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		String_t* L_29 = V_6;
		return L_29;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetSha256Hash(System.Security.Cryptography.SHA256,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetSha256Hash_m994521C11F89C58BA6C4DDE025B18DF9C5A379A2 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___shaHash0, String_t* ___input1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		// byte[] data = shaHash.ComputeHash(Encoding.UTF8.GetBytes(input));
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_0 = ___shaHash0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___input1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_3, NULL);
		V_0 = L_4;
		// StringBuilder sBuilder = new StringBuilder();
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_5, NULL);
		V_1 = L_5;
		// for (int i = 0; i < data.Length; i++)
		V_2 = 0;
		goto IL_003b;
	}

IL_001d:
	{
		// sBuilder.Append(data[i].ToString("x2"));
		StringBuilder_t* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_9, NULL);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_001d;
		}
	}
	{
		// return sBuilder.ToString();
		StringBuilder_t* L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_4 = L_16;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		String_t* L_17 = V_4;
		return L_17;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_CreateClipData_m0F521E0119AC5702237305C5C8AF9143E87F1BA6 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_5 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	RuntimeObject* G_B16_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B16_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B16_2 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B15_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B15_2 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B17_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B17_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B17_2 = NULL;
	{
		// if (voiceSettings == null && VoiceProvider != null)
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_0 = ___voiceSettings2;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		G_B3_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// voiceSettings = VoiceProvider.VoiceDefaultSettings;
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_3);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_4;
		L_4 = InterfaceFuncInvoker0< TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(0 /* Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_VoiceDefaultSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_3);
		___voiceSettings2 = L_4;
	}

IL_0023:
	{
		// if (diskCacheSettings == null && DiskCacheHandler != null)
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___diskCacheSettings3;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		G_B8_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B8_0 = 0;
	}

IL_0033:
	{
		V_2 = (bool)G_B8_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// diskCacheSettings = DiskCacheHandler.DiskCacheDefaultSettings;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_8);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_9;
		L_9 = InterfaceFuncInvoker0< TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(2 /* Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskCacheDefaultSettings() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_8);
		___diskCacheSettings3 = L_9;
	}

IL_0046:
	{
		// if (string.IsNullOrEmpty(clipID))
		String_t* L_10 = ___clipID1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// clipID = GetClipID(textToSpeak, voiceSettings);
		String_t* L_13 = ___textToSpeak0;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_14 = ___voiceSettings2;
		String_t* L_15;
		L_15 = VirtualFuncInvoker2< String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(16 /* System.String Meta.WitAi.TTS.TTSService::GetClipID(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings) */, __this, L_13, L_14);
		___clipID1 = L_15;
	}

IL_005c:
	{
		// TTSClipData clipData = GetRuntimeCachedClip(clipID);
		String_t* L_16 = ___clipID1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17;
		L_17 = TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA(__this, L_16, NULL);
		V_0 = L_17;
		// if (clipData != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0074;
		}
	}
	{
		// return clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = V_0;
		V_5 = L_20;
		goto IL_00c7;
	}

IL_0074:
	{
		// clipData = new TTSClipData()
		// {
		//     clipID = clipID,
		//     textToSpeak = textToSpeak,
		//     voiceSettings = voiceSettings,
		//     diskCacheSettings = diskCacheSettings,
		//     loadState = TTSClipLoadState.Unloaded,
		//     loadProgress = 0f,
		//     queryParameters = VoiceProvider?.EncodeVoiceSettings(voiceSettings)
		// };
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_21 = (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)il2cpp_codegen_object_new(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		TTSClipData__ctor_m8E8813962847F69D286A609B0CC34ECFAB6AACF7(L_21, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = L_21;
		String_t* L_23 = ___clipID1;
		NullCheck(L_22);
		L_22->___clipID_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___clipID_1), (void*)L_23);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_24 = L_22;
		String_t* L_25 = ___textToSpeak0;
		NullCheck(L_24);
		L_24->___textToSpeak_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___textToSpeak_0), (void*)L_25);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = L_24;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_27 = ___voiceSettings2;
		NullCheck(L_26);
		L_26->___voiceSettings_3 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___voiceSettings_3), (void*)L_27);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = L_26;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_29 = ___diskCacheSettings3;
		NullCheck(L_28);
		L_28->___diskCacheSettings_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___diskCacheSettings_4), (void*)L_29);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = L_28;
		NullCheck(L_30);
		L_30->___loadState_7 = 0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_31 = L_30;
		NullCheck(L_31);
		L_31->___loadProgress_8 = (0.0f);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32 = L_31;
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		RuntimeObject* L_34 = L_33;
		G_B15_0 = L_34;
		G_B15_1 = L_32;
		G_B15_2 = L_32;
		if (L_34)
		{
			G_B16_0 = L_34;
			G_B16_1 = L_32;
			G_B16_2 = L_32;
			goto IL_00b6;
		}
	}
	{
		G_B17_0 = ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		goto IL_00bc;
	}

IL_00b6:
	{
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_35 = ___voiceSettings2;
		NullCheck(G_B16_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_36;
		L_36 = InterfaceFuncInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings) */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, G_B16_0, L_35);
		G_B17_0 = L_36;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
	}

IL_00bc:
	{
		NullCheck(G_B17_1);
		G_B17_1->___queryParameters_5 = G_B17_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B17_1->___queryParameters_5), (void*)G_B17_0);
		V_0 = G_B17_2;
		// return clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_37 = V_0;
		V_5 = L_37;
		goto IL_00c7;
	}

IL_00c7:
	{
		// }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_38 = V_5;
		return L_38;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_SetClipLoadState_m7F0F1FDC99B6A14419F4303B8C36023B49270947 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, int32_t ___loadState1, const RuntimeMethod* method) 
{
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* G_B2_0 = NULL;
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* G_B1_0 = NULL;
	{
		// clipData.loadState = loadState;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		int32_t L_1 = ___loadState1;
		NullCheck(L_0);
		L_0->___loadState_7 = L_1;
		// clipData.onStateChange?.Invoke(clipData, clipData.loadState);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___clipData0;
		NullCheck(L_2);
		Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* L_3 = L_2->___onStateChange_9;
		Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___loadState_7;
		NullCheck(G_B2_0);
		Action_2_Invoke_mFDF876A3D40656B3217BE47B427785129CF70061_inline(G_B2_0, L_5, L_7, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_mC7E5B726D9469DAE3C4669ED34720C2A5D79F33C (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady1, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, null, null, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_1 = ___onStreamReady1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)NULL, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_1);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m5D86D534C3F06A500A4C2C14EC3596431593A22C (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady2, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, string presetVoiceId, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), null, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_3 = ___onStreamReady2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_3);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m398B7A5744B1B04B5C66F1F16B0DD0CEA96E9C13 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings2, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady3, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, string presetVoiceId, TTSDiskCacheSettings diskCacheSettings, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), diskCacheSettings, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3 = ___diskCacheSettings2;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_4 = ___onStreamReady3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_2, L_3, L_4);
		return L_5;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m2987DC4CC6DBC49BAB74D65ADF290CF3C596F49C (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings1, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings2, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady3, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, TTSVoiceSettings voiceSettings, TTSDiskCacheSettings diskCacheSettings, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, voiceSettings, diskCacheSettings, onStreamReady);
		String_t* L_0 = ___textToSpeak0;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_1 = ___voiceSettings1;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_2 = ___diskCacheSettings2;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_3 = ___onStreamReady3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_1, L_2, L_3);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m65298917D4F721B68BE9774695660230E5E55468 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* V_0 = NULL;
	bool V_1 = false;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B3_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_0 = (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_m3520C0A2B28626E501AE270ABDD8ABC3D4B02263(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_1 = V_0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_2 = ___onStreamReady4;
		NullCheck(L_1);
		L_1->___onStreamReady_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onStreamReady_0), (void*)L_2);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		// AddDelegates();
		VirtualActionInvoker0::Invoke(12 /* System.Void Meta.WitAi.TTS.TTSService::AddDelegates() */, __this);
		// TTSClipData clipData = CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_4 = V_0;
		String_t* L_5 = ___textToSpeak0;
		String_t* L_6 = ___clipID1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_7 = ___voiceSettings2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_8 = ___diskCacheSettings3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9;
		L_9 = VirtualFuncInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(17 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_5, L_6, L_7, L_8);
		NullCheck(L_4);
		L_4->___clipData_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___clipData_1), (void*)L_9);
		// if (clipData == null)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_1;
		V_1 = (bool)((((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// VLog.E("No clip provided");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C, NULL);
		// onStreamReady?.Invoke(clipData, "No clip provided");
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_13 = V_0;
		NullCheck(L_13);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_14 = L_13->___onStreamReady_0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_15 = L_14;
		G_B2_0 = L_15;
		if (L_15)
		{
			G_B3_0 = L_15;
			goto IL_0053;
		}
	}
	{
		goto IL_0064;
	}

IL_0053:
	{
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_16 = V_0;
		NullCheck(L_16);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = L_16->___clipData_1;
		NullCheck(G_B3_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(G_B3_0, L_17, _stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C, NULL);
	}

IL_0064:
	{
		// return null;
		V_2 = (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)NULL;
		goto IL_019d;
	}

IL_006b:
	{
		// if (clipData.loadState != TTSClipLoadState.Unloaded)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_18 = V_0;
		NullCheck(L_18);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = L_18->___clipData_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->___loadState_7;
		V_3 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f5;
		}
	}
	{
		// if (onStreamReady != null)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_22 = V_0;
		NullCheck(L_22);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_23 = L_22->___onStreamReady_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*)L_23) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00e9;
		}
	}
	{
		// if (clipData.loadState == TTSClipLoadState.Preparing)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = L_25->___clipData_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___loadState_7;
		V_5 = (bool)((((int32_t)L_27) == ((int32_t)1))? 1 : 0);
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		// clipData.onPlaybackReady += (e) => onStreamReady(clipData, e);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_29 = V_0;
		NullCheck(L_29);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = L_29->___clipData_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_31 = L_30;
		NullCheck(L_31);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_32 = L_31->___onPlaybackReady_10;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_33 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_34 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_34, L_33, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE_RuntimeMethod_var), NULL);
		Delegate_t* L_35;
		L_35 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_32, L_34, NULL);
		NullCheck(L_31);
		L_31->___onPlaybackReady_10 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_35, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___onPlaybackReady_10), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_35, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		goto IL_00e8;
	}

IL_00cd:
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData,
		//     clipData.loadState == TTSClipLoadState.Loaded ? string.Empty : "Error")));
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_36 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_37 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC_RuntimeMethod_var), NULL);
		RuntimeObject* L_38;
		L_38 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4(__this, L_37, NULL);
		CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* L_39;
		L_39 = CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(L_38, (bool)0, NULL);
	}

IL_00e8:
	{
	}

IL_00e9:
	{
		// return clipData;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_40 = V_0;
		NullCheck(L_40);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_41 = L_40->___clipData_1;
		V_2 = L_41;
		goto IL_019d;
	}

IL_00f5:
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_42) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_0145;
		}
	}
	{
		// if (!RuntimeCacheHandler.AddClip(clipData))
		RuntimeObject* L_44;
		L_44 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_45 = V_0;
		NullCheck(L_45);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_46 = L_45->___clipData_1;
		NullCheck(L_44);
		bool L_47;
		L_47 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(6 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::AddClip(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_44, L_46);
		V_7 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0142;
		}
	}
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData, "Could not add to runtime cache")));
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_49 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_50 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_50, L_49, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD_RuntimeMethod_var), NULL);
		RuntimeObject* L_51;
		L_51 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4(__this, L_50, NULL);
		CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* L_52;
		L_52 = CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(L_51, (bool)0, NULL);
		// return clipData;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_53 = V_0;
		NullCheck(L_53);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_54 = L_53->___clipData_1;
		V_2 = L_54;
		goto IL_019d;
	}

IL_0142:
	{
		goto IL_0154;
	}

IL_0145:
	{
		// OnLoadBegin(clipData);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_55 = V_0;
		NullCheck(L_55);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_56 = L_55->___clipData_1;
		TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF(__this, L_56, NULL);
	}

IL_0154:
	{
		// clipData.onPlaybackReady += (error) => onStreamReady(clipData, error);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_57 = V_0;
		NullCheck(L_57);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_58 = L_57->___clipData_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_59 = L_58;
		NullCheck(L_59);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_60 = L_59->___onPlaybackReady_10;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_61 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_62 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_62, L_61, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46_RuntimeMethod_var), NULL);
		Delegate_t* L_63;
		L_63 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_60, L_62, NULL);
		NullCheck(L_59);
		L_59->___onPlaybackReady_10 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_63, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___onPlaybackReady_10), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_63, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() =>
		// {
		//     // Check for invalid text
		//     string invalidError = WebHandler.IsTextValid(clipData.textToSpeak);
		//     if (!string.IsNullOrEmpty(invalidError))
		//     {
		//         OnWebStreamError(clipData, invalidError);
		//         return;
		//     }
		// 
		//     // If should cache to disk, attempt to do so
		//     if (ShouldCacheToDisk(clipData))
		//     {
		//         // Download was canceled before starting
		//         if (clipData.loadState != TTSClipLoadState.Preparing)
		//         {
		//             string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		//             OnWebDownloadBegin(clipData, downloadPath);
		//             OnWebDownloadCancel(clipData, downloadPath);
		//             OnWebStreamBegin(clipData);
		//             OnWebStreamCancel(clipData);
		//             return;
		//         }
		// 
		//         // Download
		//         DownloadToDiskCache(clipData, (clipData2, downloadPath, error) =>
		//         {
		//             // Download was canceled before starting
		//             if (string.Equals(error, CANCEL_WARNING))
		//             {
		//                 OnWebStreamBegin(clipData);
		//                 OnWebStreamCancel(clipData);
		//                 return;
		//             }
		// 
		//             // Success
		//             if (string.IsNullOrEmpty(error))
		//             {
		//                 DiskCacheHandler?.StreamFromDiskCache(clipData);
		//             }
		//             // Failed
		//             else
		//             {
		//                 WebHandler?.RequestStreamFromWeb(clipData);
		//             }
		//         });
		//     }
		//     // Simply stream from the web
		//     else
		//     {
		//         // Stream was canceled before starting
		//         if (clipData.loadState != TTSClipLoadState.Preparing)
		//         {
		//             OnWebStreamBegin(clipData);
		//             OnWebStreamCancel(clipData);
		//             return;
		//         }
		// 
		//         // Stream
		//         WebHandler?.RequestStreamFromWeb(clipData);
		//     }
		// }));
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_64 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_65 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_65, L_64, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970_RuntimeMethod_var), NULL);
		RuntimeObject* L_66;
		L_66 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4(__this, L_65, NULL);
		CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* L_67;
		L_67 = CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(L_66, (bool)0, NULL);
		// return clipData;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_68 = V_0;
		NullCheck(L_68);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_69 = L_68->___clipData_1;
		V_2 = L_69;
		goto IL_019d;
	}

IL_019d:
	{
		// }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_70 = V_2;
		return L_70;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.TTSService::CallAfterAMoment(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* L_0 = (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211*)il2cpp_codegen_object_new(U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCallAfterAMomentU3Ed__35__ctor_mD6B60907C94BB96313CA7507F6EEE2425044EFDB(L_0, 0, NULL);
		U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___call0;
		NullCheck(L_2);
		L_2->___call_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___call_2), (void*)L_3);
		return L_2;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnLoadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B2_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B1_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Preparing);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 1);
		// VLog.D(GetClipLog("Load Clip", clipData));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, _stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117, L_1);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_2, NULL);
		// Events?.OnClipCreated?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_3;
		L_3 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0028;
		}
	}
	{
		goto IL_003a;
	}

IL_0028:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5 = G_B2_0->___OnClipCreated_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0033;
		}
	}
	{
		goto IL_003a;
	}

IL_0033:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___clipData0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_7, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamBegin(TTSClipData clipData) => OnStreamBegin(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamBegin(TTSClipData clipData) => OnStreamBegin(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamBegin(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B2_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B3_1 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B6_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B8_0 = NULL;
	{
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Begin", clipData));
		bool L_0 = ___fromDisk1;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___clipData0;
		NullCheck(G_B3_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B3_1, L_1, L_2);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_3, NULL);
		// Events?.Stream?.OnStreamBegin?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4;
		L_4 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0033;
		}
	}
	{
		goto IL_0050;
	}

IL_0033:
	{
		NullCheck(G_B5_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_6 = G_B5_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_7 = L_6;
		G_B6_0 = L_7;
		if (L_7)
		{
			G_B7_0 = L_7;
			goto IL_003e;
		}
	}
	{
		goto IL_0050;
	}

IL_003e:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_8 = G_B7_0->___OnStreamBegin_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_9 = L_8;
		G_B8_0 = L_9;
		if (L_9)
		{
			G_B9_0 = L_9;
			goto IL_0049;
		}
	}
	{
		goto IL_0050;
	}

IL_0049:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___clipData0;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_10, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamReady(TTSClipData clipData) => OnStreamReady(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamReady(TTSClipData clipData) => OnStreamReady(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamReady(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B7_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B9_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B12_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B11_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B14_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B13_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B16_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B15_0 = NULL;
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		// RuntimeCacheHandler.OnClipRemoved.RemoveListener(OnRuntimeClipRemoved);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_2);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_3;
		L_3 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_2);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_4 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_3, L_4, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// bool failed = !RuntimeCacheHandler.AddClip(clipData);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(6 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::AddClip(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_5, L_6);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		// RuntimeCacheHandler.OnClipRemoved.AddListener(OnRuntimeClipRemoved);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_8);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_9;
		L_9 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_8);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_10 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_9);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_9, L_10, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// if (failed)
		bool L_11 = V_1;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// OnStreamError(clipData, "Removed from runtime cache due to file size", fromDisk);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___clipData0;
		bool L_14 = ___fromDisk1;
		TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC(__this, L_13, _stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD, L_14, NULL);
		// OnRuntimeClipRemoved(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___clipData0;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(21 /* System.Void Meta.WitAi.TTS.TTSService::OnRuntimeClipRemoved(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_15);
		// return;
		goto IL_00f0;
	}

IL_0079:
	{
	}

IL_007a:
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Loaded);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_16, 2);
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Ready", clipData));
		bool L_17 = ___fromDisk1;
		G_B5_0 = __this;
		if (L_17)
		{
			G_B6_0 = __this;
			goto IL_008e;
		}
	}
	{
		G_B7_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B7_1 = G_B5_0;
		goto IL_0093;
	}

IL_008e:
	{
		G_B7_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B7_1 = G_B6_0;
	}

IL_0093:
	{
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_0, _stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___clipData0;
		NullCheck(G_B7_1);
		String_t* L_20;
		L_20 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B7_1, L_18, L_19);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_20, NULL);
		// clipData.onPlaybackReady?.Invoke(string.Empty);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_21 = ___clipData0;
		NullCheck(L_21);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_22 = L_21->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_23 = L_22;
		G_B8_0 = L_23;
		if (L_23)
		{
			G_B9_0 = L_23;
			goto IL_00b5;
		}
	}
	{
		goto IL_00c0;
	}

IL_00b5:
	{
		String_t* L_24 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B9_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B9_0, L_24, NULL);
	}

IL_00c0:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_25 = ___clipData0;
		NullCheck(L_25);
		L_25->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// Events?.Stream?.OnStreamReady?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_26;
		L_26 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_27 = L_26;
		G_B11_0 = L_27;
		if (L_27)
		{
			G_B12_0 = L_27;
			goto IL_00d3;
		}
	}
	{
		goto IL_00f0;
	}

IL_00d3:
	{
		NullCheck(G_B12_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_28 = G_B12_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_29 = L_28;
		G_B13_0 = L_29;
		if (L_29)
		{
			G_B14_0 = L_29;
			goto IL_00de;
		}
	}
	{
		goto IL_00f0;
	}

IL_00de:
	{
		NullCheck(G_B14_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_30 = G_B14_0->___OnStreamReady_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_31 = L_30;
		G_B15_0 = L_31;
		if (L_31)
		{
			G_B16_0 = L_31;
			goto IL_00e9;
		}
	}
	{
		goto IL_00f0;
	}

IL_00e9:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32 = ___clipData0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B16_0, L_32, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamCancel(TTSClipData clipData) => OnStreamCancel(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamCancel(TTSClipData clipData) => OnStreamCancel(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamCancel(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, bool ___fromDisk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B5_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_1 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B12_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B11_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 3);
		// clipData.onPlaybackReady?.Invoke(CANCEL_WARNING);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_0021;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
	}

IL_0021:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___clipData0;
		NullCheck(L_4);
		L_4->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Canceled", clipData));
		bool L_5 = ___fromDisk1;
		G_B4_0 = __this;
		if (L_5)
		{
			G_B5_0 = __this;
			goto IL_0033;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0033:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_0, _stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___clipData0;
		NullCheck(G_B6_1);
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_6, L_7);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_8, NULL);
		// Events?.Stream?.OnStreamCancel?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9;
		L_9 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_005a;
		}
	}
	{
		goto IL_0077;
	}

IL_005a:
	{
		NullCheck(G_B8_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_11 = G_B8_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_0065;
		}
	}
	{
		goto IL_0077;
	}

IL_0065:
	{
		NullCheck(G_B10_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_13 = G_B10_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_0070;
		}
	}
	{
		goto IL_0077;
	}

IL_0070:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___clipData0;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B12_0, L_15, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0077:
	{
		// Unload(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___clipData0;
		TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamError(TTSClipData clipData, string error) => OnStreamError(clipData, error, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		String_t* L_1 = ___error1;
		TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamError(TTSClipData clipData, string error) => OnStreamError(clipData, error, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		String_t* L_1 = ___error1;
		TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, bool ___fromDisk2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B5_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_1 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B12_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B11_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 3);
		// clipData.onPlaybackReady?.Invoke(error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_001d;
	}

IL_0016:
	{
		String_t* L_4 = ___error1;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_4, NULL);
	}

IL_001d:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		NullCheck(L_5);
		L_5->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.E(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Error\nError: {error}", clipData));
		bool L_6 = ___fromDisk2;
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0034;
	}

IL_002f:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0034:
	{
		String_t* L_7 = ___error1;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B6_0, _stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD, L_7, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___clipData0;
		NullCheck(G_B6_1);
		String_t* L_10;
		L_10 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_8, L_9);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_10, NULL);
		// Events?.Stream?.OnStreamError?.Invoke(clipData, error);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_11;
		L_11 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_0057;
		}
	}
	{
		goto IL_0075;
	}

IL_0057:
	{
		NullCheck(G_B8_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13 = G_B8_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_0062;
		}
	}
	{
		goto IL_0075;
	}

IL_0062:
	{
		NullCheck(G_B10_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_15 = G_B10_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_16 = L_15;
		G_B11_0 = L_16;
		if (L_16)
		{
			G_B12_0 = L_16;
			goto IL_006d;
		}
	}
	{
		goto IL_0075;
	}

IL_006d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = ___clipData0;
		String_t* L_18 = ___error1;
		NullCheck(G_B12_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B12_0, L_17, L_18, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0075:
	{
		// Unload(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___clipData0;
		TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_0 = NULL;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_1 = NULL;
	bool V_2 = false;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_3 = NULL;
	int32_t V_4 = 0;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_5 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* G_B3_0 = NULL;
	{
		// TTSClipData[] clips = RuntimeCacheHandler?.GetClips();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* >::Invoke(4 /* Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClips() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// if (clips == null)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_3 = V_0;
		V_2 = (bool)((((RuntimeObject*)(TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		goto IL_0057;
	}

IL_001f:
	{
		// TTSClipData[] copy = new TTSClipData[clips.Length];
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_5 = V_0;
		NullCheck(L_5);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_6 = (TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)(TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)SZArrayNew(TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_1 = L_6;
		// clips.CopyTo(copy, 0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_7 = V_0;
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
		// foreach (var clip in copy)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_9 = V_1;
		V_3 = L_9;
		V_4 = 0;
		goto IL_0050;
	}

IL_0039:
	{
		// foreach (var clip in copy)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// Unload(clip);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = V_5;
		TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(__this, L_14, NULL);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		// foreach (var clip in copy)
		int32_t L_16 = V_4;
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_17 = V_3;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0039;
		}
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::Unload(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// RuntimeCacheHandler.RemoveClip(clipData.clipID);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___clipID_1;
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::RemoveClip(System.String) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_2, L_4);
		goto IL_002e;
	}

IL_0024:
	{
		// OnUnloadBegin(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E(__this, L_5, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnUnloadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B15_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B14_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B17_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B16_0 = NULL;
	{
		// if (clipData.loadState == TTSClipLoadState.Preparing)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___loadState_7;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// WebHandler?.CancelWebStream(clipData);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		RuntimeObject* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_001b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		NullCheck(G_B3_0);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(4 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSWebHandler::CancelWebStream(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B3_0, L_5);
	}

IL_0022:
	{
		// WebHandler?.CancelWebDownload(clipData, GetDiskCachePath(clipData.textToSpeak, clipData.clipID, clipData.voiceSettings, clipData.diskCacheSettings));
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002e;
		}
	}
	{
		goto IL_0053;
	}

IL_002e:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___clipData0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___clipData0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___textToSpeak_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = ___clipData0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___clipID_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___clipData0;
		NullCheck(L_14);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_15 = L_14->___voiceSettings_3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___clipData0;
		NullCheck(L_16);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_17 = L_16->___diskCacheSettings_4;
		String_t* L_18;
		L_18 = TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911(__this, L_11, L_13, L_15, L_17, NULL);
		NullCheck(G_B6_0);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(8 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSWebHandler::CancelWebDownload(Meta.WitAi.TTS.Data.TTSClipData,System.String) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B6_0, L_9, L_18);
	}

IL_0053:
	{
		// DiskCacheHandler?.CancelDiskCacheStream(clipData);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		RuntimeObject* L_21 = L_20;
		G_B8_0 = L_21;
		if (L_21)
		{
			G_B9_0 = L_21;
			goto IL_005f;
		}
	}
	{
		goto IL_0066;
	}

IL_005f:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = ___clipData0;
		NullCheck(G_B9_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(7 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::CancelDiskCacheStream(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, G_B9_0, L_22);
	}

IL_0066:
	{
		goto IL_0087;
	}

IL_0069:
	{
		// else if (clipData.clip != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23 = ___clipData0;
		NullCheck(L_23);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_24 = L_23->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_25;
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_0087;
		}
	}
	{
		// MonoBehaviour.DestroyImmediate(clipData.clip);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = ___clipData0;
		NullCheck(L_27);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = L_27->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_28, NULL);
	}

IL_0087:
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Unloaded);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_29 = ___clipData0;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_29, 0);
		// VLog.D(GetClipLog($"Unload Clip", clipData));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = ___clipData0;
		String_t* L_31;
		L_31 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, _stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84, L_30);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_31, NULL);
		// Events?.OnClipUnloaded?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_32;
		L_32 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_33 = L_32;
		G_B14_0 = L_33;
		if (L_33)
		{
			G_B15_0 = L_33;
			goto IL_00ae;
		}
	}
	{
		goto IL_00c0;
	}

IL_00ae:
	{
		NullCheck(G_B15_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_34 = G_B15_0->___OnClipUnloaded_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_35 = L_34;
		G_B16_0 = L_35;
		if (L_35)
		{
			G_B17_0 = L_35;
			goto IL_00b9;
		}
	}
	{
		goto IL_00c0;
	}

IL_00b9:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_36 = ___clipData0;
		NullCheck(G_B17_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B17_0, L_36, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::GetRuntimeCachedClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___clipID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B3_0 = NULL;
	{
		// public TTSClipData GetRuntimeCachedClip(string clipID) => RuntimeCacheHandler?.GetClip(clipID);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)(NULL));
		goto IL_0013;
	}

IL_000d:
	{
		String_t* L_2 = ___clipID0;
		NullCheck(G_B2_0);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3;
		L_3 = InterfaceFuncInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(5 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClip(System.String) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, G_B2_0, L_2);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.TTSService::GetAllRuntimeCachedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSService_GetAllRuntimeCachedClips_mBC018CF0D41BC06099306FFDEFF052CFEC869C20 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* G_B3_0 = NULL;
	{
		// public TTSClipData[] GetAllRuntimeCachedClips() => RuntimeCacheHandler?.GetClips();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* >::Invoke(4 /* Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClips() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnRuntimeClipAdded(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnRuntimeClipAdded_m418FD37F2E83D4C7D19025C63DE54D7E44C3B3DA (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnRuntimeClipAdded(TTSClipData clipData) => OnLoadBegin(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF(__this, L_0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnRuntimeClipRemoved(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnRuntimeClipRemoved_mACBD791799BE1701C17837DFFD7FC77BBB97FF9E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnRuntimeClipRemoved(TTSClipData clipData) => OnUnloadBegin(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// DiskCacheHandler != null && DiskCacheHandler.ShouldCacheToDisk(clipData);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___clipData0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(4 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetDiskCachePath(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// DiskCacheHandler?.GetDiskCachePath(CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_2 = ___textToSpeak0;
		String_t* L_3 = ___clipID1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_4 = ___voiceSettings2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___diskCacheSettings3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6;
		L_6 = VirtualFuncInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(17 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_2, L_3, L_4, L_5);
		NullCheck(G_B2_0);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.String Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, G_B2_0, L_6);
		G_B3_0 = L_7;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m538D81C89CED7D461E22B35E6B9915708CD1D80B (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete1, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, null, null, onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_1 = ___onDownloadComplete1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)NULL, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_1, NULL);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m37925B846BF259D6337D3351571814FF211962DF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete2, const RuntimeMethod* method) 
{
	{
		// Action<TTSClipData, string, string> onDownloadComplete = null) => DownloadToDiskCache(textToSpeak, null,
		// GetPresetVoiceSettings(presetVoiceId), null, onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_3 = ___onDownloadComplete2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_3, NULL);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m0F89047E490AE0FF62284B816077A54BCC771935 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___presetVoiceId1, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings2, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete3, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), diskCacheSettings,
		//     onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___presetVoiceId1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3 = ___diskCacheSettings2;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_4 = ___onDownloadComplete3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m80010FA2D7EB89607345A046667B312A0F3D4471 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings1, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings2, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete3, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, voiceSettings, diskCacheSettings, onDownloadComplete);
		String_t* L_0 = ___textToSpeak0;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_1 = ___voiceSettings1;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_2 = ___diskCacheSettings2;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_3 = ___onDownloadComplete3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete4, const RuntimeMethod* method) 
{
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_1 = NULL;
	{
		// TTSClipData clipData = CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings);
		String_t* L_0 = ___textToSpeak0;
		String_t* L_1 = ___clipID1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2 = ___voiceSettings2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3 = ___diskCacheSettings3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = VirtualFuncInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(17 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		// DownloadToDiskCache(clipData, onDownloadComplete);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = V_0;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_6 = ___onDownloadComplete4;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* >::Invoke(22 /* System.Void Meta.WitAi.TTS.TTSService::DownloadToDiskCache(Meta.WitAi.TTS.Data.TTSClipData,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>) */, __this, L_5, L_6);
		// return clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = V_0;
		V_1 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = V_1;
		return L_8;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::DownloadToDiskCache(Meta.WitAi.TTS.Data.TTSClipData,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_DownloadToDiskCache_mB011E81AF4C7A866E66FB57EE4CBCF4BABC155A0 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_0 = (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass63_0__ctor_mACF879F390ADB9C9F942DA97D482A5254B18F072(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_2);
		L_2->___clipData_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_2), (void*)L_3);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_4 = V_0;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_5 = ___onDownloadComplete1;
		NullCheck(L_4);
		L_4->___onDownloadComplete_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_3), (void*)L_5);
		// AddDelegates();
		VirtualActionInvoker0::Invoke(12 /* System.Void Meta.WitAi.TTS.TTSService::AddDelegates() */, __this);
		// string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = L_8->___clipData_2;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.String Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_7, L_9);
		NullCheck(L_6);
		L_6->___downloadPath_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___downloadPath_1), (void*)L_10);
		// DiskCacheHandler.CheckCachedToDisk(clipData, (clip, found) =>
		// {
		//     // Cache checked
		//     VLog.D(GetClipLog($"Disk Cache {(found ? "Found" : "Missing")}\nPath: {downloadPath}", clipData));
		// 
		//     // Already downloaded, return successful
		//     if (found)
		//     {
		//         onDownloadComplete?.Invoke(clipData, downloadPath, string.Empty);
		//         return;
		//     }
		// 
		//     // Preload selected but not in disk cache, return an error
		//     if (Application.isPlaying && clipData.diskCacheSettings.DiskCacheLocation == TTSDiskCacheLocation.Preload)
		//     {
		//         onDownloadComplete?.Invoke(clipData, downloadPath, "File is not Preloaded");
		//         return;
		//     }
		// 
		//     // Add download completion callback
		//     clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		// 
		//     // Download to cache
		//     WebHandler.RequestDownloadFromWeb(clipData, downloadPath);
		// });
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_12 = V_0;
		NullCheck(L_12);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = L_12->___clipData_2;
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_14 = V_0;
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_15 = (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6*)il2cpp_codegen_object_new(Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_2__ctor_m3FDC374212F42B0C23B179F1335A6B702F6A3D6F(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* >::Invoke(5 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::CheckCachedToDisk(Meta.WitAi.TTS.Data.TTSClipData,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_11, L_13, L_15);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadBegin(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105B80D12DB6276478E269600E49F476237FA089);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B2_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B1_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B3_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B5_0 = NULL;
	{
		// VLog.D(GetClipLog($"Download Clip - Begin\nPath: {downloadPath}", clipData));
		String_t* L_0 = ___downloadPath1;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral105B80D12DB6276478E269600E49F476237FA089, L_0, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___clipData0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_1, L_2);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_3, NULL);
		// Events?.Download?.OnDownloadBegin?.Invoke(clipData, downloadPath);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4;
		L_4 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0025;
		}
	}
	{
		goto IL_0043;
	}

IL_0025:
	{
		NullCheck(G_B2_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_6 = G_B2_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0030;
		}
	}
	{
		goto IL_0043;
	}

IL_0030:
	{
		NullCheck(G_B4_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_8 = G_B4_0->___OnDownloadBegin_0;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_003b;
		}
	}
	{
		goto IL_0043;
	}

IL_003b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___clipData0;
		String_t* L_11 = ___downloadPath1;
		NullCheck(G_B6_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B6_0, L_10, L_11, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadSuccess(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B9_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(string.Empty);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
	}

IL_0018:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___clipData0;
		NullCheck(L_4);
		L_4->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"Download Clip - Success\nPath: {downloadPath}", clipData));
		String_t* L_5 = ___downloadPath1;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9, L_5, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___clipData0;
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_6, L_7);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_8, NULL);
		// Events?.Download?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9;
		L_9 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0043;
		}
	}
	{
		goto IL_0061;
	}

IL_0043:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_11 = G_B5_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_004e:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_13 = G_B7_0->___OnDownloadSuccess_1;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0059;
		}
	}
	{
		goto IL_0061;
	}

IL_0059:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___clipData0;
		String_t* L_16 = ___downloadPath1;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B9_0, L_15, L_16, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadCancel(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B9_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(CANCEL_WARNING);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
	}

IL_0018:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_3);
		L_3->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"Download Clip - Canceled\nPath: {downloadPath}", clipData));
		String_t* L_4 = ___downloadPath1;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1, L_4, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		String_t* L_7;
		L_7 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_5, L_6);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_7, NULL);
		// Events?.Download?.OnDownloadCancel?.Invoke(clipData, downloadPath);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_8;
		L_8 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0043;
		}
	}
	{
		goto IL_0061;
	}

IL_0043:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_10 = G_B5_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_11 = L_10;
		G_B6_0 = L_11;
		if (L_11)
		{
			G_B7_0 = L_11;
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_004e:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_12 = G_B7_0->___OnDownloadCancel_2;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_13 = L_12;
		G_B8_0 = L_13;
		if (L_13)
		{
			G_B9_0 = L_13;
			goto IL_0059;
		}
	}
	{
		goto IL_0061;
	}

IL_0059:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___clipData0;
		String_t* L_15 = ___downloadPath1;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B9_0, L_14, L_15, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadError(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, String_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B9_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		String_t* L_3 = ___error2;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
	}

IL_0014:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___clipData0;
		NullCheck(L_4);
		L_4->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.E(GetClipLog($"Download Clip - Failed\nPath: {downloadPath}", clipData));
		String_t* L_5 = ___downloadPath1;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91, L_5, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___clipData0;
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_6, L_7);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_8, NULL);
		// Events?.Download?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9;
		L_9 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_003f;
		}
	}
	{
		goto IL_005e;
	}

IL_003f:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_11 = G_B5_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_004a;
		}
	}
	{
		goto IL_005e;
	}

IL_004a:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_13 = G_B7_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0055;
		}
	}
	{
		goto IL_005e;
	}

IL_0055:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___clipData0;
		String_t* L_16 = ___downloadPath1;
		String_t* L_17 = ___error2;
		NullCheck(G_B9_0);
		UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A(G_B9_0, L_15, L_16, L_17, UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
	}

IL_005e:
	{
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.TTSService::GetAllPresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSService_GetAllPresetVoiceSettings_m6B04A3111ADEAB06A759E04934A950970F4C54FF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* G_B3_0 = NULL;
	{
		// public TTSVoiceSettings[] GetAllPresetVoiceSettings() => VoiceProvider?.PresetVoiceSettings;
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_2;
		L_2 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* >::Invoke(1 /* Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.TTSService::GetPresetVoiceSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___presetVoiceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* V_0 = NULL;
	bool V_1 = false;
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* L_0 = (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass69_0__ctor_m523768DAB4A4C74ADEAE20E4C7554FCB2AA902F1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* L_1 = V_0;
		String_t* L_2 = ___presetVoiceId0;
		NullCheck(L_1);
		L_1->___presetVoiceId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___presetVoiceId_0), (void*)L_2);
		// if (VoiceProvider == null || VoiceProvider.PresetVoiceSettings == null)
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_4);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_5;
		L_5 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* >::Invoke(1 /* Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = ((((RuntimeObject*)(TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// return null;
		V_2 = (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)NULL;
		goto IL_004f;
	}

IL_0030:
	{
		// return Array.Find(VoiceProvider.PresetVoiceSettings, (v) => string.Equals(v.settingsID, presetVoiceId, StringComparison.CurrentCultureIgnoreCase));
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_7);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_8;
		L_8 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* >::Invoke(1 /* Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_7);
		U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* L_9 = V_0;
		Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E* L_10 = (Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E*)il2cpp_codegen_object_new(Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Predicate_1__ctor_mEAD34E1883E74D40C6A33FB21485E6529A681C04(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B_RuntimeMethod_var), NULL);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_11;
		L_11 = Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78(L_8, L_10, Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78_RuntimeMethod_var);
		V_2 = L_11;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_12 = V_2;
		return L_12;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService__ctor_m0F6DF7E82B702325C181B6D966D0934A143973DE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private TTSServiceEvents _events = new TTSServiceEvents();
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = (TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF*)il2cpp_codegen_object_new(TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSServiceEvents__ctor_m82EF258C00AB920E79E011CF464D9B6E1EBCB353(L_0, NULL);
		__this->____events_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_5), (void*)L_0);
		// private bool _delegates = false;
		__this->____delegates_6 = (bool)0;
		// private readonly SHA256 CLIP_HASH = SHA256.Create();
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_1;
		L_1 = SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC(NULL);
		__this->___CLIP_HASH_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CLIP_HASH_8), (void*)L_1);
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
// System.Void Meta.WitAi.TTS.TTSService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE5BDE4C9826E9CF14D67526AF5ADCB3BC9994CDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* L_0 = (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22*)il2cpp_codegen_object_new(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA7431D6908702D15A126044C78B3B9010B10EF55(L_0, NULL);
		((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA7431D6908702D15A126044C78B3B9010B10EF55 (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService/<>c::<get_Instance>b__1_0(Meta.WitAi.TTS.TTSService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02 (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* __this, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___o0, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _instance = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ___o0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B((&V_0), NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3520C0A2B28626E501AE270ABDD8ABC3D4B02263 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, String_t* ___e0, const RuntimeMethod* method) 
{
	{
		// clipData.onPlaybackReady += (e) => onStreamReady(clipData, e);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		String_t* L_2 = ___e0;
		NullCheck(L_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B2_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B2_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B1_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B3_1 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B3_2 = NULL;
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData,
		//     clipData.loadState == TTSClipLoadState.Loaded ? string.Empty : "Error")));
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___loadState_7;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0026;
	}

IL_0021:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0026:
	{
		NullCheck(G_B3_2);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData, "Could not add to runtime cache")));
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		NullCheck(L_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(L_0, L_1, _stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	{
		// clipData.onPlaybackReady += (error) => onStreamReady(clipData, error);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		String_t* L_2 = ___error0;
		NullCheck(L_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* V_5 = NULL;
	bool V_6 = false;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B7_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B7_1 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B7_2 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B6_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B6_1 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_2 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// string invalidError = WebHandler.IsTextValid(clipData.textToSpeak);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->___U3CU3E4__this_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_0);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___textToSpeak_0;
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String Meta.WitAi.TTS.Interfaces.ITTSWebHandler::IsTextValid(System.String) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_1, L_3);
		V_0 = L_4;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// OnWebStreamError(clipData, invalidError);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_8 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = __this->___clipData_1;
		String_t* L_10 = V_0;
		NullCheck(L_8);
		TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659(L_8, L_9, L_10, NULL);
		// return;
		goto IL_016e;
	}

IL_0043:
	{
		// if (ShouldCacheToDisk(clipData))
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_11 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = __this->___clipData_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78(L_11, L_12, NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0111;
		}
	}
	{
		// if (clipData.loadState != TTSClipLoadState.Preparing)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = __this->___clipData_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___loadState_7;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00db;
		}
	}
	{
		// string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_18 = __this->___U3CU3E4__this_2;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, L_18);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = __this->___clipData_1;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker1< String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.String Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_19, L_20);
		V_4 = L_21;
		// OnWebDownloadBegin(clipData, downloadPath);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_22 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23 = __this->___clipData_1;
		String_t* L_24 = V_4;
		NullCheck(L_22);
		TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292(L_22, L_23, L_24, NULL);
		// OnWebDownloadCancel(clipData, downloadPath);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_25 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = __this->___clipData_1;
		String_t* L_27 = V_4;
		NullCheck(L_25);
		TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A(L_25, L_26, L_27, NULL);
		// OnWebStreamBegin(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_28 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_29 = __this->___clipData_1;
		NullCheck(L_28);
		TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(L_28, L_29, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_30 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_31 = __this->___clipData_1;
		NullCheck(L_30);
		TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(L_30, L_31, NULL);
		// return;
		goto IL_016e;
	}

IL_00db:
	{
		// DownloadToDiskCache(clipData, (clipData2, downloadPath, error) =>
		// {
		//     // Download was canceled before starting
		//     if (string.Equals(error, CANCEL_WARNING))
		//     {
		//         OnWebStreamBegin(clipData);
		//         OnWebStreamCancel(clipData);
		//         return;
		//     }
		// 
		//     // Success
		//     if (string.IsNullOrEmpty(error))
		//     {
		//         DiskCacheHandler?.StreamFromDiskCache(clipData);
		//     }
		//     // Failed
		//     else
		//     {
		//         WebHandler?.RequestStreamFromWeb(clipData);
		//     }
		// });
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_32 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = __this->___clipData_1;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_34 = __this->___U3CU3E9__5_3;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_35 = L_34;
		G_B6_0 = L_35;
		G_B6_1 = L_33;
		G_B6_2 = L_32;
		if (L_35)
		{
			G_B7_0 = L_35;
			G_B7_1 = L_33;
			G_B7_2 = L_32;
			goto IL_0108;
		}
	}
	{
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_36 = (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*)il2cpp_codegen_object_new(Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_3__ctor_mC4EA44981086B6C5D5142C90ADAC15001A00E418(L_36, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981_RuntimeMethod_var), NULL);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_37 = L_36;
		V_5 = L_37;
		__this->___U3CU3E9__5_3 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__5_3), (void*)L_37);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_38 = V_5;
		G_B7_0 = L_38;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_0108:
	{
		NullCheck(G_B7_2);
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* >::Invoke(22 /* System.Void Meta.WitAi.TTS.TTSService::DownloadToDiskCache(Meta.WitAi.TTS.Data.TTSClipData,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>) */, G_B7_2, G_B7_1, G_B7_0);
		goto IL_016e;
	}

IL_0111:
	{
		// if (clipData.loadState != TTSClipLoadState.Preparing)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_39 = __this->___clipData_1;
		NullCheck(L_39);
		int32_t L_40 = L_39->___loadState_7;
		V_6 = (bool)((((int32_t)((((int32_t)L_40) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_0150;
		}
	}
	{
		// OnWebStreamBegin(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_42 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_43 = __this->___clipData_1;
		NullCheck(L_42);
		TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(L_42, L_43, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_44 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_45 = __this->___clipData_1;
		NullCheck(L_44);
		TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(L_44, L_45, NULL);
		// return;
		goto IL_016e;
	}

IL_0150:
	{
		// WebHandler?.RequestStreamFromWeb(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_46 = __this->___U3CU3E4__this_2;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_46);
		RuntimeObject* L_48 = L_47;
		G_B11_0 = L_48;
		if (L_48)
		{
			G_B12_0 = L_48;
			goto IL_0161;
		}
	}
	{
		goto IL_016d;
	}

IL_0161:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_49 = __this->___clipData_1;
		NullCheck(G_B12_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSWebHandler::RequestStreamFromWeb(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B12_0, L_49);
	}

IL_016d:
	{
	}

IL_016e:
	{
		// }));
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__5(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData20, String_t* ___downloadPath1, String_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// if (string.Equals(error, CANCEL_WARNING))
		String_t* L_0 = ___error2;
		bool L_1;
		L_1 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// OnWebStreamBegin(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_3 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = __this->___clipData_1;
		NullCheck(L_3);
		TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(L_3, L_4, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_5 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = __this->___clipData_1;
		NullCheck(L_5);
		TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(L_5, L_6, NULL);
		// return;
		goto IL_0081;
	}

IL_0037:
	{
		// if (string.IsNullOrEmpty(error))
		String_t* L_7 = ___error2;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// DiskCacheHandler?.StreamFromDiskCache(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, L_10);
		RuntimeObject* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_0053;
		}
	}
	{
		goto IL_005f;
	}

IL_0053:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = __this->___clipData_1;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(6 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::StreamFromDiskCache(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, G_B5_0, L_13);
	}

IL_005f:
	{
		goto IL_0081;
	}

IL_0062:
	{
		// WebHandler?.RequestStreamFromWeb(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_14);
		RuntimeObject* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_0074;
		}
	}
	{
		goto IL_0080;
	}

IL_0074:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = __this->___clipData_1;
		NullCheck(G_B9_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSWebHandler::RequestStreamFromWeb(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B9_0, L_17);
	}

IL_0080:
	{
	}

IL_0081:
	{
		// });
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
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35__ctor_mD6B60907C94BB96313CA7507F6EEE2425044EFDB (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35_System_IDisposable_Dispose_mD6F9E5A9A201F382BDA87D1BD752506D7F62C19D (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallAfterAMomentU3Ed__35_MoveNext_mCD52495AE3D5E3455CC265EFED649B3A59ED6838 (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_0049;
	}

IL_001f:
	{
		goto IL_0064;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_006c;
	}

IL_0053:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006c:
	{
		// call();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___call_2;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallAfterAMomentU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCED3000058AFFB546ADED530B2143AE70798132B (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m297AD610849F932B17D18A89F946F096A8C94E77 (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m297AD610849F932B17D18A89F946F096A8C94E77_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_get_Current_mCC965DF04154949BBD212C313DA0F2E29EF8EB57 (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mACF879F390ADB9C9F942DA97D482A5254B18F072 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<DownloadToDiskCache>b__0(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clip0, bool ___found1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	String_t* G_B2_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B3_2 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B6_0 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B14_0 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B13_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B18_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B18_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B18_2 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B17_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B17_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B17_2 = NULL;
	{
		// VLog.D(GetClipLog($"Disk Cache {(found ? "Found" : "Missing")}\nPath: {downloadPath}", clipData));
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->___U3CU3E4__this_0;
		bool L_1 = ___found1;
		G_B1_0 = _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = _stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		String_t* L_2 = __this->___downloadPath_1;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_1, G_B3_0, _stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676, L_2, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = __this->___clipData_2;
		NullCheck(G_B3_2);
		String_t* L_5;
		L_5 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B3_2, L_3, L_4);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_5, NULL);
		// if (found)
		bool L_6 = ___found1;
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// onDownloadComplete?.Invoke(clipData, downloadPath, string.Empty);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_8 = __this->___onDownloadComplete_3;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_004e;
		}
	}
	{
		goto IL_0065;
	}

IL_004e:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = __this->___clipData_2;
		String_t* L_11 = __this->___downloadPath_1;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B6_0);
		Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline(G_B6_0, L_10, L_11, L_12, NULL);
	}

IL_0065:
	{
		// return;
		goto IL_0108;
	}

IL_006a:
	{
		// if (Application.isPlaying && clipData.diskCacheSettings.DiskCacheLocation == TTSDiskCacheLocation.Preload)
		bool L_13;
		L_13 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = __this->___clipData_2;
		NullCheck(L_14);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_15 = L_14->___diskCacheSettings_4;
		NullCheck(L_15);
		int32_t L_16 = L_15->___DiskCacheLocation_0;
		G_B11_0 = ((((int32_t)L_16) == ((int32_t)1))? 1 : 0);
		goto IL_0087;
	}

IL_0086:
	{
		G_B11_0 = 0;
	}

IL_0087:
	{
		V_1 = (bool)G_B11_0;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00b1;
		}
	}
	{
		// onDownloadComplete?.Invoke(clipData, downloadPath, "File is not Preloaded");
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_18 = __this->___onDownloadComplete_3;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_19 = L_18;
		G_B13_0 = L_19;
		if (L_19)
		{
			G_B14_0 = L_19;
			goto IL_0098;
		}
	}
	{
		goto IL_00af;
	}

IL_0098:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = __this->___clipData_2;
		String_t* L_21 = __this->___downloadPath_1;
		NullCheck(G_B14_0);
		Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline(G_B14_0, L_20, L_21, _stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7, NULL);
	}

IL_00af:
	{
		// return;
		goto IL_0108;
	}

IL_00b1:
	{
		// clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = __this->___clipData_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23 = L_22;
		NullCheck(L_23);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_24 = L_23->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_25 = __this->___U3CU3E9__1_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = L_25;
		G_B17_0 = L_26;
		G_B17_1 = L_24;
		G_B17_2 = L_23;
		if (L_26)
		{
			G_B18_0 = L_26;
			G_B18_1 = L_24;
			G_B18_2 = L_23;
			goto IL_00dc;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_27, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_28 = L_27;
		V_2 = L_28;
		__this->___U3CU3E9__1_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_4), (void*)L_28);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_29 = V_2;
		G_B18_0 = L_29;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_00dc:
	{
		Delegate_t* L_30;
		L_30 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B18_1, G_B18_0, NULL);
		NullCheck(G_B18_2);
		G_B18_2->___onDownloadComplete_11 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_30, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B18_2->___onDownloadComplete_11), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_30, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// WebHandler.RequestDownloadFromWeb(clipData, downloadPath);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_31 = __this->___U3CU3E4__this_0;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_31);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = __this->___clipData_2;
		String_t* L_34 = __this->___downloadPath_1;
		NullCheck(L_32);
		InterfaceActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(7 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSWebHandler::RequestDownloadFromWeb(Meta.WitAi.TTS.Data.TTSClipData,System.String) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0108:
	{
		// });
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<DownloadToDiskCache>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	{
		// clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_0 = __this->___onDownloadComplete_3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_2;
		String_t* L_2 = __this->___downloadPath_1;
		String_t* L_3 = ___error0;
		NullCheck(L_0);
		Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline(L_0, L_1, L_2, L_3, NULL);
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
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m523768DAB4A4C74ADEAE20E4C7554FCB2AA902F1 (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::<GetPresetVoiceSettings>b__0(Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* __this, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___v0, const RuntimeMethod* method) 
{
	{
		// return Array.Find(VoiceProvider.PresetVoiceSettings, (v) => string.Equals(v.settingsID, presetVoiceId, StringComparison.CurrentCultureIgnoreCase));
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___settingsID_1;
		String_t* L_2 = __this->___presetVoiceId_0;
		bool L_3;
		L_3 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_1, L_2, 1, NULL);
		return L_3;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEvent__ctor_mF3C9BA103DF084C9BB84C10B7DE2C86881364016 (TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E(__this, UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerClipEvent__ctor_m383C9290F9E85DA47F504365EA419FD4A25BC9CB (TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB(__this, UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEvents__ctor_m946CE74113558CE4EEFE442A69392BC1F1E6324C (TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* __this, const RuntimeMethod* method) 
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
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSVoiceSettings VoiceSettings => _tts.GetPresetVoiceSettings(presetVoiceID);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->____tts_11;
		String_t* L_1 = __this->___presetVoiceID_4;
		NullCheck(L_0);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(L_0, L_1, NULL);
		return L_2;
	}
}
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_0 = __this->____events_8;
		return L_0;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Utilities.TTSSpeaker::get_LoadingClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSSpeaker_get_LoadingClips_m0E14BD04A186ADE8A23E0D31561B65FD42769AE5 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipData[] LoadingClips => _loadingQueue.ToArray();
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____loadingQueue_9;
		NullCheck(L_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_1;
		L_1 = List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4(L_0, List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsLoading => _loadingQueue.Count > 0;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____loadingQueue_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_0, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Utilities.TTSSpeaker::get_PlaybackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSSpeaker_get_PlaybackQueue_m21E800B3F9EF3AB2DF06C2DB7B2A7F59DED45BFD (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipData[] PlaybackQueue => _playbackQueue.ToArray();
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____playbackQueue_10;
		NullCheck(L_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_1;
		L_1 = List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4(L_0, List_1_ToArray_mF0CB9872518923886777522BD4B9FD37EF61DAD4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsSpeaking => _playbackQueue.Count > 0;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____playbackQueue_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_0, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Awake_mAFA8B8FE719E938900F3126766E655F7FB884F18 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___AudioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// AudioSource = gameObject.GetComponentInChildren<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F(L_3, GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var);
		__this->___AudioSource_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioSource_5), (void*)L_4);
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___AudioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// AudioSource = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_8, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___AudioSource_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioSource_5), (void*)L_9);
	}

IL_0046:
	{
	}

IL_0047:
	{
		// AudioSource.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___AudioSource_5;
		NullCheck(L_10);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_10, (bool)0, NULL);
		// _tts = TTSService.Instance;
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_11;
		L_11 = TTSService_get_Instance_m2AFDD22A8A5E433E2B13424DFD8DD36A1F9E6F68(NULL);
		__this->____tts_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tts_11), (void*)L_11);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnEnable_mADB3DF68E9DB42AF72812E9F8566BA720A8119DE (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_tts == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->____tts_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0037;
	}

IL_0014:
	{
		// _tts.Events.OnClipUnloaded.AddListener(OnClipUnload);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_3 = __this->____tts_11;
		NullCheck(L_3);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4;
		L_4 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_3, NULL);
		NullCheck(L_4);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5 = L_4->___OnClipUnloaded_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_6 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_5, L_6, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnDisable_mEB61ED73172DB09724ABCEDAB415D5E4AC65124D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Stop();
		VirtualActionInvoker0::Invoke(8 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, __this);
		// if (_tts == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->____tts_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_003e;
	}

IL_001b:
	{
		// _tts.Events.OnClipUnloaded.RemoveListener(OnClipUnload);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_3 = __this->____tts_11;
		NullCheck(L_3);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4;
		L_4 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_3, NULL);
		NullCheck(L_4);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5 = L_4->___OnClipUnloaded_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_6 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_5);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_5, L_6, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::GetFormattedText(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___format0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (textsToSpeak != null && !string.IsNullOrEmpty(format))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___textsToSpeak1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___format0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// object[] objects = new object[textsToSpeak.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___textsToSpeak1;
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		// textsToSpeak.CopyTo(objects, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___textsToSpeak1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		NullCheck((RuntimeArray*)L_6);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_6, (RuntimeArray*)L_7, 0, NULL);
		// return string.Format(format, objects);
		String_t* L_8 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_1;
		String_t* L_10;
		L_10 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_0035;
	}

IL_0031:
	{
		// return null;
		V_2 = (String_t*)NULL;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		String_t* L_11 = V_2;
		return L_11;
	}
}
// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker::GetLoadingClipIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSSpeaker_GetLoadingClipIndex_mFD06C737FA8F16E0F5F4F212CD7414EFD9494C6B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___clipId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CGetLoadingClipIndexU3Eb__0_mCF019074F3F166D67E3D1FCE6576D786061BEE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* L_0 = (U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass24_0__ctor_m4A636E90258573843CC16CA5134E4EEFEA2B5136(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* L_1 = V_0;
		String_t* L_2 = ___clipId0;
		NullCheck(L_1);
		L_1->___clipId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipId_0), (void*)L_2);
		// return _loadingQueue.FindIndex((clip) => clip != null && clip.HasClipId(clipId));
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_3 = __this->____loadingQueue_9;
		U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* L_4 = V_0;
		Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71* L_5 = (Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71*)il2cpp_codegen_object_new(Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m6BD0988529097DEA519D066C3560566FBCEF8FCB(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CGetLoadingClipIndexU3Eb__0_mCF019074F3F166D67E3D1FCE6576D786061BEE54_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49(L_3, L_5, List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker::GetPlaybackQueueIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSSpeaker_GetPlaybackQueueIndex_mB2536A4AFEBFB36349A87C74D85C524F25B2A396 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___clipId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CGetPlaybackQueueIndexU3Eb__0_m88848425FD1A51AECF7EF4D72CD1EFE4A6D5A190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* L_0 = (U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass25_0__ctor_m1B43838ED02ED7A3E44A4F8E39C6F2E20924FD76(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* L_1 = V_0;
		String_t* L_2 = ___clipId0;
		NullCheck(L_1);
		L_1->___clipId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipId_0), (void*)L_2);
		// return _playbackQueue.FindIndex((clip) => clip != null && clip.HasClipId(clipId));
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_3 = __this->____playbackQueue_10;
		U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* L_4 = V_0;
		Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71* L_5 = (Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71*)il2cpp_codegen_object_new(Predicate_1_t1C460E7E5FFF65DB458D2BDA1EA425999C3AEB71_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m6BD0988529097DEA519D066C3560566FBCEF8FCB(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CGetPlaybackQueueIndexU3Eb__0_m88848425FD1A51AECF7EF4D72CD1EFE4A6D5A190_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49(L_3, L_5, List_1_FindIndex_mD72FF7758E08FC41E5D15440A59C3120C7A5AA49_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnClipUnload(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnClipUnload_m6F46B365641695DC25A61CF4C440C3035DC8F61D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// int index = 0;
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// TTSClipData loadingClipData = _loadingQueue[index];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____loadingQueue_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_0, L_1, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_1 = L_2;
		// if (loadingClipData == null || loadingClipData.Equals(clipData))
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = V_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		NullCheck(L_4);
		bool L_6;
		L_6 = TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718(L_4, L_5, NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// OnLoadCancel(index);
		int32_t L_8 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(System.Int32) */, __this, L_8);
		goto IL_0036;
	}

IL_0030:
	{
		// index++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0036:
	{
	}

IL_0037:
	{
		// while (index < _loadingQueue.Count)
		int32_t L_10 = V_0;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_11 = __this->____loadingQueue_9;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_11, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		// index = 0;
		V_0 = 0;
		goto IL_0084;
	}

IL_004d:
	{
		// TTSClipData speakingClipData = _loadingQueue[index];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_14 = __this->____loadingQueue_9;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16;
		L_16 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_14, L_15, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_4 = L_16;
		// if (speakingClipData == null || speakingClipData.Equals(clipData))
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = V_4;
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = V_4;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___clipData0;
		NullCheck(L_18);
		bool L_20;
		L_20 = TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718(L_18, L_19, NULL);
		G_B13_0 = ((int32_t)(L_20));
		goto IL_006b;
	}

IL_006a:
	{
		G_B13_0 = 1;
	}

IL_006b:
	{
		V_5 = (bool)G_B13_0;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		// OnPlaybackCancel(index);
		int32_t L_22 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel(System.Int32) */, __this, L_22);
		goto IL_0083;
	}

IL_007d:
	{
		// index++;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0083:
	{
	}

IL_0084:
	{
		// while (index < _playbackQueue.Count)
		int32_t L_24 = V_0;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_25 = __this->____playbackQueue_10;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_25, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (L_27)
		{
			goto IL_004d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Stop_mAE97D7DA62BE1426520A642B08816A3B6804004E (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// StopLoading();
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopLoading(System.String) */, __this, (String_t*)NULL);
		// StopSpeaking();
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking(System.String) */, __this, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopLoading(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_StopLoading_mDA8FC3D0A84BD807EE7179F3518527216D7840AC (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___ignoreClipId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// int start = _loadingQueue.Count - 1;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____loadingQueue_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_0, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// for (int i = start; i >= 0; i--)
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_004d;
	}

IL_0013:
	{
		// if (_loadingQueue[i] == null || !_loadingQueue[i].HasClipId(ignoreClipId))
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_3 = __this->____loadingQueue_9;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_3, L_4, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_6 = __this->____loadingQueue_9;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8;
		L_8 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_6, L_7, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		String_t* L_9 = ___ignoreClipId0;
		NullCheck(L_8);
		bool L_10;
		L_10 = TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27(L_8, L_9, NULL);
		G_B4_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 1;
	}

IL_003a:
	{
		V_2 = (bool)G_B4_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// OnLoadCancel(i);
		int32_t L_12 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(System.Int32) */, __this, L_12);
	}

IL_0048:
	{
		// for (int i = start; i >= 0; i--)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_004d:
	{
		// for (int i = start; i >= 0; i--)
		int32_t L_14 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_StopSpeaking_mB8B3BF99482A92EF6BD68DA4C89027E4E2774E46 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___ignoreClipId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// int start = _playbackQueue.Count - 1;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____playbackQueue_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_0, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// for (int i = start; i >= 0; i--)
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_004d;
	}

IL_0013:
	{
		// if (_playbackQueue[i] == null || !_playbackQueue[i].HasClipId(ignoreClipId))
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_3 = __this->____playbackQueue_10;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_3, L_4, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_6 = __this->____playbackQueue_10;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8;
		L_8 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_6, L_7, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		String_t* L_9 = ___ignoreClipId0;
		NullCheck(L_8);
		bool L_10;
		L_10 = TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27(L_8, L_9, NULL);
		G_B4_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 1;
	}

IL_003a:
	{
		V_2 = (bool)G_B4_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// OnPlaybackCancel(i);
		int32_t L_12 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel(System.Int32) */, __this, L_12);
	}

IL_0048:
	{
		// for (int i = start; i >= 0; i--)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_004d:
	{
		// for (int i = start; i >= 0; i--)
		int32_t L_14 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m3E1160A00BC1A52F8C21368EF046FC231DCDEC5F (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, const RuntimeMethod* method) 
{
	{
		// public void Speak(string textToSpeak, TTSDiskCacheSettings diskCacheSettings = null) => Speak(textToSpeak, diskCacheSettings, false);
		String_t* L_0 = ___textToSpeak0;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_1 = ___diskCacheSettings1;
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_0, L_1, (bool)0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, const RuntimeMethod* method) 
{
	{
		// public void SpeakQueued(string textToSpeak, TTSDiskCacheSettings diskCacheSettings = null) => Speak(textToSpeak, diskCacheSettings, true);
		String_t* L_0 = ___textToSpeak0;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_1 = ___diskCacheSettings1;
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_0, L_1, (bool)1);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakFormat(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakFormat_mBE685C05B6CBF5E756A3CABE8EAFFF39F3DC6F63 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___format0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak1, const RuntimeMethod* method) 
{
	{
		// Speak(GetFormattedText(format, textsToSpeak), null, false);
		String_t* L_0 = ___format0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___textsToSpeak1;
		String_t* L_2;
		L_2 = TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846(__this, L_0, L_1, NULL);
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, (bool)0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakFormatQueued(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakFormatQueued_m42FC410038BF745DDAC559F9A366BFC3AFD7F9E5 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___format0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak1, const RuntimeMethod* method) 
{
	{
		// Speak(GetFormattedText(format, textsToSpeak), null, true);
		String_t* L_0 = ___format0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___textsToSpeak1;
		String_t* L_2;
		L_2 = TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846(__this, L_0, L_1, NULL);
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, (bool)1);
		return;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakAsync(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakAsync_m856A9CF7EFA2582E8029413C1FD730845AD857F9 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* L_0 = (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A*)il2cpp_codegen_object_new(U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeakAsyncU3Ed__34__ctor_m14395207D9204E8E41D9B171A0F8EEB17A908E92(L_0, 0, NULL);
		U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* L_2 = L_1;
		String_t* L_3 = ___textToSpeak0;
		NullCheck(L_2);
		L_2->___textToSpeak_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textToSpeak_2), (void*)L_3);
		U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* L_4 = L_2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___diskCacheSettings1;
		NullCheck(L_4);
		L_4->___diskCacheSettings_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___diskCacheSettings_3), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueuedAsync(System.String[],Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_0 = (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818*)il2cpp_codegen_object_new(U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeakQueuedAsyncU3Ed__35__ctor_m9734BA80900926C49871935688E643D2EE28F777(L_0, 0, NULL);
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___textsToSpeak0;
		NullCheck(L_2);
		L_2->___textsToSpeak_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textsToSpeak_2), (void*)L_3);
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_4 = L_2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___diskCacheSettings1;
		NullCheck(L_4);
		L_4->___diskCacheSettings_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___diskCacheSettings_3), (void*)L_5);
		return L_4;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_mD6A1DEBAC71CAC4CEAB5EB5210AAD1DFDEDF7F58 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings1, bool ___addToQueue2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160);
		s_Il2CppMethodInitialized = true;
	}
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* V_0 = NULL;
	String_t* V_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B19_0 = 0;
	{
		// if (prependedText.Length > 0 && !prependedText.EndsWith(" "))
		String_t* L_0 = __this->___prependedText_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2 = __this->___prependedText_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// prependedText += " ";
		String_t* L_5 = __this->___prependedText_6;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		__this->___prependedText_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prependedText_6), (void*)L_6);
	}

IL_0041:
	{
		// if (appendedText.Length > 0 && !appendedText.StartsWith(" "))
		String_t* L_7 = __this->___appendedText_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = __this->___appendedText_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		G_B8_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B8_0 = 0;
	}

IL_0065:
	{
		V_4 = (bool)G_B8_0;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		// appendedText = " " + appendedText;
		String_t* L_12 = __this->___appendedText_7;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_12, NULL);
		__this->___appendedText_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appendedText_7), (void*)L_13);
	}

IL_0083:
	{
		// textToSpeak = prependedText + textToSpeak + appendedText;
		String_t* L_14 = __this->___prependedText_6;
		String_t* L_15 = ___textToSpeak0;
		String_t* L_16 = __this->___appendedText_7;
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, L_15, L_16, NULL);
		___textToSpeak0 = L_17;
		// TTSVoiceSettings voiceSettings = VoiceSettings;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_18;
		L_18 = TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B(__this, NULL);
		V_0 = L_18;
		// if (voiceSettings == null)
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_19 = V_0;
		V_5 = (bool)((((RuntimeObject*)(TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)L_19) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		// VLog.E($"No voice found with preset id: {presetVoiceID}");
		String_t* L_21 = __this->___presetVoiceID_4;
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160, L_21, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_22, NULL);
		// return;
		goto IL_0150;
	}

IL_00c4:
	{
		// if (string.IsNullOrEmpty(textToSpeak))
		String_t* L_23 = ___textToSpeak0;
		bool L_24;
		L_24 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_23, NULL);
		V_6 = L_24;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00de;
		}
	}
	{
		// VLog.E("No text to speak provided");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4, NULL);
		// return;
		goto IL_0150;
	}

IL_00de:
	{
		// string newClipID = _tts.GetClipID(textToSpeak, voiceSettings);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_26 = __this->____tts_11;
		String_t* L_27 = ___textToSpeak0;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_28 = V_0;
		NullCheck(L_26);
		String_t* L_29;
		L_29 = VirtualFuncInvoker2< String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(16 /* System.String Meta.WitAi.TTS.TTSService::GetClipID(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings) */, L_26, L_27, L_28);
		V_1 = L_29;
		// TTSClipData newClip = _tts.GetRuntimeCachedClip(newClipID);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_30 = __this->____tts_11;
		String_t* L_31 = V_1;
		NullCheck(L_30);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32;
		L_32 = TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA(L_30, L_31, NULL);
		V_2 = L_32;
		// if (!addToQueue)
		bool L_33 = ___addToQueue2;
		V_7 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_010d;
		}
	}
	{
		// StopLoading(newClipID);
		String_t* L_35 = V_1;
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopLoading(System.String) */, __this, L_35);
	}

IL_010d:
	{
		// if (newClip != null && newClip.loadState == TTSClipLoadState.Loaded)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_36 = V_2;
		if (!L_36)
		{
			goto IL_011b;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = L_37->___loadState_7;
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)2))? 1 : 0);
		goto IL_011c;
	}

IL_011b:
	{
		G_B19_0 = 0;
	}

IL_011c:
	{
		V_8 = (bool)G_B19_0;
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0142;
		}
	}
	{
		// if (!addToQueue)
		bool L_40 = ___addToQueue2;
		V_9 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0137;
		}
	}
	{
		// StopSpeaking();
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking(System.String) */, __this, (String_t*)NULL);
	}

IL_0137:
	{
		// OnPlaybackReady(newClip);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_42 = V_2;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackReady(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_42);
		goto IL_0150;
	}

IL_0142:
	{
		// OnLoadBegin(textToSpeak, newClipID, voiceSettings, diskCacheSettings, addToQueue);
		String_t* L_43 = ___textToSpeak0;
		String_t* L_44 = V_1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_45 = V_0;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_46 = ___diskCacheSettings1;
		bool L_47 = ___addToQueue2;
		VirtualActionInvoker5< String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(12 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadBegin(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_43, L_44, L_45, L_46, L_47);
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadBegin(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadBegin_m0FE08B59706570A8CE205501C89347F12620FB97 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, String_t* ___clipID1, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings2, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings3, bool ___addToQueue4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass37_0_U3COnLoadBeginU3Eb__0_m4462CE958AED4DDEE5232093A6FE937D05A738DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF454A4B2372B574ECE70DCBBEBE231D6B0D7C6B6);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* V_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B2_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B1_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B4_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* L_0 = (U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass37_0__ctor_m3F90FD81A1B4D186502AAE48CEF1E7556CBDE25B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* L_2 = V_0;
		bool L_3 = ___addToQueue4;
		NullCheck(L_2);
		L_2->___addToQueue_1 = L_3;
		// Events?.OnClipLoadBegin?.Invoke(this, textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_4;
		L_4 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_0035;
	}

IL_0022:
	{
		NullCheck(G_B2_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_6 = G_B2_0->___OnClipLoadBegin_0;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002d;
		}
	}
	{
		goto IL_0035;
	}

IL_002d:
	{
		String_t* L_8 = ___textToSpeak0;
		NullCheck(G_B4_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B4_0, __this, L_8, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_0035:
	{
		// VLog.D($"Load Begin\nText: {textToSpeak}");
		String_t* L_9 = ___textToSpeak0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF454A4B2372B574ECE70DCBBEBE231D6B0D7C6B6, L_9, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_10, NULL);
		// TTSClipData newClip = _tts.Load(textToSpeak, clipID, voiceSettings, diskCacheSettings, (clipData, error) => OnClipLoadComplete(clipData, error, addToQueue));
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_11 = __this->____tts_11;
		String_t* L_12 = ___textToSpeak0;
		String_t* L_13 = ___clipID1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_14 = ___voiceSettings2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_15 = ___diskCacheSettings3;
		U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* L_16 = V_0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_17 = (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*)il2cpp_codegen_object_new(Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_2__ctor_mADCB17A6A021877564862A28F1EFCCB172F56C37(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass37_0_U3COnLoadBeginU3Eb__0_m4462CE958AED4DDEE5232093A6FE937D05A738DB_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18;
		L_18 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, L_11, L_12, L_13, L_14, L_15, L_17);
		V_1 = L_18;
		// _loadingQueue.Add(newClip);
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_19 = __this->____loadingQueue_9;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = V_1;
		NullCheck(L_19);
		List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_inline(L_19, L_20, List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnClipLoadComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnClipLoadComplete_mBFA16B7936B8EA5C1F3DA76F3F73CA0EE4E81E1A (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, bool ___addToQueue2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D43ED35A1484B7524D1809AE8CF299C5C80ABDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A4BA349EAF19BE74CBEDE7FCD8664B1F6F6C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4785CE5B5CD085DD42BF7562B0CC071FE97E15F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B2_0 = NULL;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B3_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B11_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B10_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B13_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B12_0 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B21_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B20_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B23_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B22_0 = NULL;
	String_t* G_B27_0 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B28_0 = NULL;
	String_t* G_B28_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B30_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B29_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B32_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B31_0 = NULL;
	{
		// int index = GetLoadingClipIndex(clipData?.clipID);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_0008:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		int32_t L_3;
		L_3 = TTSSpeaker_GetLoadingClipIndex_mFD06C737FA8F16E0F5F4F212CD7414EFD9494C6B(G_B3_1, G_B3_0, NULL);
		V_0 = L_3;
		// if (index == -1)
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		goto IL_013c;
	}

IL_0022:
	{
		// _loadingQueue.RemoveAt(index);
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_6 = __this->____loadingQueue_9;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0(L_6, L_7, List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		// if (!string.IsNullOrEmpty(error))
		String_t* L_8 = ___error1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		// VLog.E($"Load Failed\nText: {clipData?.textToSpeak}\n{error}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = ___clipData0;
		G_B7_0 = _stringLiteralE4785CE5B5CD085DD42BF7562B0CC071FE97E15F;
		if (L_11)
		{
			G_B8_0 = _stringLiteralE4785CE5B5CD085DD42BF7562B0CC071FE97E15F;
			goto IL_0048;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_0;
		goto IL_004e;
	}

IL_0048:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = ___clipData0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___textToSpeak_0;
		G_B9_0 = L_13;
		G_B9_1 = G_B8_0;
	}

IL_004e:
	{
		String_t* L_14 = ___error1;
		String_t* L_15;
		L_15 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B9_1, G_B9_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_14, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_15, NULL);
		// Events?.OnClipLoadFailed?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_16;
		L_16 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_17 = L_16;
		G_B10_0 = L_17;
		if (L_17)
		{
			G_B11_0 = L_17;
			goto IL_006b;
		}
	}
	{
		goto IL_0083;
	}

IL_006b:
	{
		NullCheck(G_B11_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_18 = G_B11_0->___OnClipLoadFailed_1;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_19 = L_18;
		G_B12_0 = L_19;
		if (L_19)
		{
			G_B13_0 = L_19;
			goto IL_0076;
		}
	}
	{
		goto IL_0083;
	}

IL_0076:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = ___clipData0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___textToSpeak_0;
		NullCheck(G_B13_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B13_0, __this, L_21, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_0083:
	{
		// return;
		goto IL_013c;
	}

IL_0088:
	{
		// if (clipData.clip == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = ___clipData0;
		NullCheck(L_22);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = L_22->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// VLog.E($"Load Failed\nText: {clipData?.textToSpeak}\nNo clip returned");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = ___clipData0;
		G_B17_0 = _stringLiteralE4785CE5B5CD085DD42BF7562B0CC071FE97E15F;
		if (L_26)
		{
			G_B18_0 = _stringLiteralE4785CE5B5CD085DD42BF7562B0CC071FE97E15F;
			goto IL_00a4;
		}
	}
	{
		G_B19_0 = ((String_t*)(NULL));
		G_B19_1 = G_B17_0;
		goto IL_00aa;
	}

IL_00a4:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = ___clipData0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___textToSpeak_0;
		G_B19_0 = L_28;
		G_B19_1 = G_B18_0;
	}

IL_00aa:
	{
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B19_1, G_B19_0, _stringLiteral4D43ED35A1484B7524D1809AE8CF299C5C80ABDD, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_29, NULL);
		// Events?.OnClipLoadFailed?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_30;
		L_30 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_31 = L_30;
		G_B20_0 = L_31;
		if (L_31)
		{
			G_B21_0 = L_31;
			goto IL_00c6;
		}
	}
	{
		goto IL_00de;
	}

IL_00c6:
	{
		NullCheck(G_B21_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_32 = G_B21_0->___OnClipLoadFailed_1;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_33 = L_32;
		G_B22_0 = L_33;
		if (L_33)
		{
			G_B23_0 = L_33;
			goto IL_00d1;
		}
	}
	{
		goto IL_00de;
	}

IL_00d1:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_34 = ___clipData0;
		NullCheck(L_34);
		String_t* L_35 = L_34->___textToSpeak_0;
		NullCheck(G_B23_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B23_0, __this, L_35, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_00de:
	{
		// return;
		goto IL_013c;
	}

IL_00e0:
	{
		// VLog.D($"Load Success\nText: {clipData?.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_36 = ___clipData0;
		G_B26_0 = _stringLiteral54A4BA349EAF19BE74CBEDE7FCD8664B1F6F6C8B;
		if (L_36)
		{
			G_B27_0 = _stringLiteral54A4BA349EAF19BE74CBEDE7FCD8664B1F6F6C8B;
			goto IL_00eb;
		}
	}
	{
		G_B28_0 = ((String_t*)(NULL));
		G_B28_1 = G_B26_0;
		goto IL_00f1;
	}

IL_00eb:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_37 = ___clipData0;
		NullCheck(L_37);
		String_t* L_38 = L_37->___textToSpeak_0;
		G_B28_0 = L_38;
		G_B28_1 = G_B27_0;
	}

IL_00f1:
	{
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B28_1, G_B28_0, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_39, NULL);
		// Events?.OnClipLoadSuccess?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_40;
		L_40 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_41 = L_40;
		G_B29_0 = L_41;
		if (L_41)
		{
			G_B30_0 = L_41;
			goto IL_0108;
		}
	}
	{
		goto IL_0120;
	}

IL_0108:
	{
		NullCheck(G_B30_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_42 = G_B30_0->___OnClipLoadSuccess_2;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_43 = L_42;
		G_B31_0 = L_43;
		if (L_43)
		{
			G_B32_0 = L_43;
			goto IL_0113;
		}
	}
	{
		goto IL_0120;
	}

IL_0113:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_44 = ___clipData0;
		NullCheck(L_44);
		String_t* L_45 = L_44->___textToSpeak_0;
		NullCheck(G_B32_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B32_0, __this, L_45, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_0120:
	{
		// if (!addToQueue)
		bool L_46 = ___addToQueue2;
		V_4 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_4;
		if (!L_47)
		{
			goto IL_0134;
		}
	}
	{
		// StopSpeaking();
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking(System.String) */, __this, (String_t*)NULL);
	}

IL_0134:
	{
		// OnPlaybackReady(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_48 = ___clipData0;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackReady(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_48);
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadCancel_mFF2076D216F78E020CFFBFD919CC31D7AF516883 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B10_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B9_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B12_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B11_0 = NULL;
	{
		// if (index < 0 || index >= _loadingQueue.Count)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___index0;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_2 = __this->____loadingQueue_9;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_2, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_007a;
	}

IL_0020:
	{
		// TTSClipData clipData = _loadingQueue[index];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_5 = __this->____loadingQueue_9;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7;
		L_7 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_5, L_6, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_0 = L_7;
		// _loadingQueue.RemoveAt(index);
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_8 = __this->____loadingQueue_9;
		int32_t L_9 = ___index0;
		NullCheck(L_8);
		List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0(L_8, L_9, List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		// VLog.D($"Load Cancelled\nText: {clipData?.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = V_0;
		G_B6_0 = _stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719;
		if (L_10)
		{
			G_B7_0 = _stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719;
			goto IL_0045;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_0045:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___textToSpeak_0;
		G_B8_0 = L_12;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B8_1, G_B8_0, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_13, NULL);
		// Events?.OnClipLoadAbort?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_14;
		L_14 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_15 = L_14;
		G_B9_0 = L_15;
		if (L_15)
		{
			G_B10_0 = L_15;
			goto IL_0062;
		}
	}
	{
		goto IL_007a;
	}

IL_0062:
	{
		NullCheck(G_B10_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_16 = G_B10_0->___OnClipLoadAbort_3;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_17 = L_16;
		G_B11_0 = L_17;
		if (L_17)
		{
			G_B12_0 = L_17;
			goto IL_006d;
		}
	}
	{
		goto IL_007a;
	}

IL_006d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->___textToSpeak_0;
		NullCheck(G_B12_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B12_0, __this, L_19, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackReady_mEB77E811F7B10DBD6B60A140539E7A6CE5F2C1F8 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2521E50FE503883D464CA60EBBE09AA3F307F2BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C01923136530AB3D466B01CE56D524D05E3FAF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B7_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B6_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B9_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B8_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B12_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B11_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B14_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B13_0 = NULL;
	{
		// if (clipData == null || clipData.clip == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = L_1->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// VLog.E("Clip destroyed prior to playback");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteral49C01923136530AB3D466B01CE56D524D05E3FAF, NULL);
		// return;
		goto IL_00ad;
	}

IL_0028:
	{
		// _playbackQueue.Add(clipData);
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_5 = __this->____playbackQueue_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_5);
		List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_inline(L_5, L_6, List_1_Add_m335C091768A7F0EEB16A78A0F095288A53A968B1_RuntimeMethod_var);
		// VLog.D($"Playback Queued\nText: {clipData.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___clipData0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___textToSpeak_0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2521E50FE503883D464CA60EBBE09AA3F307F2BD, L_8, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_9, NULL);
		// Events?.OnQueuedSpeaking?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_10;
		L_10 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_11 = L_10;
		G_B6_0 = L_11;
		if (L_11)
		{
			G_B7_0 = L_11;
			goto IL_0057;
		}
	}
	{
		goto IL_006f;
	}

IL_0057:
	{
		NullCheck(G_B7_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_12 = G_B7_0->___OnQueuedSpeaking_4;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_13 = L_12;
		G_B8_0 = L_13;
		if (L_13)
		{
			G_B9_0 = L_13;
			goto IL_0062;
		}
	}
	{
		goto IL_006f;
	}

IL_0062:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___clipData0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___textToSpeak_0;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B9_0, __this, L_15, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_006f:
	{
		// Events?.OnClipPlaybackReady?.Invoke(clipData.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_16;
		L_16 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_17 = L_16;
		G_B11_0 = L_17;
		if (L_17)
		{
			G_B12_0 = L_17;
			goto IL_007b;
		}
	}
	{
		goto IL_0092;
	}

IL_007b:
	{
		NullCheck(G_B12_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_18 = G_B12_0->___OnClipPlaybackReady_8;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_19 = L_18;
		G_B13_0 = L_19;
		if (L_19)
		{
			G_B14_0 = L_19;
			goto IL_0086;
		}
	}
	{
		goto IL_0092;
	}

IL_0086:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = ___clipData0;
		NullCheck(L_20);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = L_20->___clip_6;
		NullCheck(G_B14_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B14_0, L_21, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_0092:
	{
		// if (_playbackQueue.Count == 1)
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_22 = __this->____playbackQueue_10;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_22, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00ad;
		}
	}
	{
		// OnPlaybackBegin();
		VirtualActionInvoker0::Invoke(16 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin() */, __this);
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackBegin_m0D9697A756148B67F13DA4128B1ECEC5527165C6 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A3395B74C45CDB5B2B77A5CBEBA8301D73B1A8);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B8_0 = 0;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B11_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B10_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B13_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B12_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B16_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B15_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B18_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B17_0 = NULL;
	{
		// TTSClipData nextClip = _playbackQueue[0];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____playbackQueue_10;
		NullCheck(L_0);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1;
		L_1 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_0, 0, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0043;
	}

IL_0010:
	{
		// OnPlaybackCancel(0);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel(System.Int32) */, __this, 0);
		// if (_playbackQueue.Count > 0)
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_2 = __this->____playbackQueue_10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_2, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// nextClip = _playbackQueue[0];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_5 = __this->____playbackQueue_10;
		NullCheck(L_5);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6;
		L_6 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_5, 0, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0042;
	}

IL_003c:
	{
		// return;
		goto IL_0108;
	}

IL_0042:
	{
	}

IL_0043:
	{
		// while (nextClip == null || nextClip.clip == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = V_0;
		NullCheck(L_8);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = L_8->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B8_0 = ((int32_t)(L_10));
		goto IL_0055;
	}

IL_0054:
	{
		G_B8_0 = 1;
	}

IL_0055:
	{
		V_2 = (bool)G_B8_0;
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		// VLog.D($"Playback Begin\nText: {nextClip.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___textToSpeak_0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral78A3395B74C45CDB5B2B77A5CBEBA8301D73B1A8, L_13, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_14, NULL);
		// AudioSource.PlayOneShot(nextClip.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->___AudioSource_5;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = V_0;
		NullCheck(L_16);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17 = L_16->___clip_6;
		NullCheck(L_15);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_15, L_17, NULL);
		// Events?.OnStartSpeaking?.Invoke(this, nextClip.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_18;
		L_18 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_008d;
		}
	}
	{
		goto IL_00a5;
	}

IL_008d:
	{
		NullCheck(G_B11_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_20 = G_B11_0->___OnStartSpeaking_5;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_21 = L_20;
		G_B12_0 = L_21;
		if (L_21)
		{
			G_B13_0 = L_21;
			goto IL_0098;
		}
	}
	{
		goto IL_00a5;
	}

IL_0098:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = L_22->___textToSpeak_0;
		NullCheck(G_B13_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B13_0, __this, L_23, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_00a5:
	{
		// Events?.OnClipPlaybackStart?.Invoke(nextClip.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_24;
		L_24 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_25 = L_24;
		G_B15_0 = L_25;
		if (L_25)
		{
			G_B16_0 = L_25;
			goto IL_00b1;
		}
	}
	{
		goto IL_00c8;
	}

IL_00b1:
	{
		NullCheck(G_B16_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_26 = G_B16_0->___OnClipPlaybackStart_9;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_27 = L_26;
		G_B17_0 = L_27;
		if (L_27)
		{
			G_B18_0 = L_27;
			goto IL_00bc;
		}
	}
	{
		goto IL_00c8;
	}

IL_00bc:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = V_0;
		NullCheck(L_28);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_29 = L_28->___clip_6;
		NullCheck(G_B18_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B18_0, L_29, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_00c8:
	{
		// if (_waitForCompletion != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30 = __this->____waitForCompletion_12;
		V_3 = (bool)((!(((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_00eb;
		}
	}
	{
		// StopCoroutine(_waitForCompletion);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32 = __this->____waitForCompletion_12;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_32, NULL);
		// _waitForCompletion = null;
		__this->____waitForCompletion_12 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitForCompletion_12), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_00eb:
	{
		// _waitForCompletion = StartCoroutine(WaitForCompletion(nextClip.clip.length));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = V_0;
		NullCheck(L_33);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_34 = L_33->___clip_6;
		NullCheck(L_34);
		float L_35;
		L_35 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_34, NULL);
		RuntimeObject* L_36;
		L_36 = VirtualFuncInvoker1< RuntimeObject*, float >::Invoke(17 /* System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::WaitForCompletion(System.Single) */, __this, L_35);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_37;
		L_37 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_36, NULL);
		__this->____waitForCompletion_12 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitForCompletion_12), (void*)L_37);
	}

IL_0108:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::WaitForCompletion(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_WaitForCompletion_mF110E1D6430426BDD48455FDCD1D8EE94D62CDE8 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, float ___duration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* L_0 = (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423*)il2cpp_codegen_object_new(U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForCompletionU3Ed__43__ctor_m9CE7C2A7D75262CDA6407D16C2D7BE84FEBB39B0(L_0, 0, NULL);
		U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* L_2 = L_1;
		float L_3 = ___duration0;
		NullCheck(L_2);
		L_2->___duration_2 = L_3;
		return L_2;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackComplete_m40F2EE532FF358B690532A7F43FE0F233CBF7A3F (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B8_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B7_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B10_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B9_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B14_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B13_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B16_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B15_0 = NULL;
	{
		// if (_playbackQueue.Count == 0)
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = __this->____playbackQueue_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_0, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_00cf;
	}

IL_0019:
	{
		// TTSClipData clipData = _playbackQueue[0];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_3 = __this->____playbackQueue_10;
		NullCheck(L_3);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_3, 0, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_0 = L_4;
		// VLog.D($"Playback Complete\nText: {clipData?.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = V_0;
		G_B3_0 = _stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C;
		if (L_5)
		{
			G_B4_0 = _stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0037;
	}

IL_0031:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___textToSpeak_0;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0037:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_8, NULL);
		// _playbackQueue.RemoveAt(0);
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_9 = __this->____playbackQueue_10;
		NullCheck(L_9);
		List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0(L_9, 0, List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		// if (clipData != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00b2;
		}
	}
	{
		// Events?.OnFinishedSpeaking?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_12;
		L_12 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_13 = L_12;
		G_B7_0 = L_13;
		if (L_13)
		{
			G_B8_0 = L_13;
			goto IL_0064;
		}
	}
	{
		goto IL_007c;
	}

IL_0064:
	{
		NullCheck(G_B8_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_14 = G_B8_0->___OnFinishedSpeaking_6;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_15 = L_14;
		G_B9_0 = L_15;
		if (L_15)
		{
			G_B10_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_007c;
	}

IL_006f:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->___textToSpeak_0;
		NullCheck(G_B10_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B10_0, __this, L_17, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_007c:
	{
		// if (clipData.clip != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = V_0;
		NullCheck(L_18);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = L_18->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		// Events?.OnClipPlaybackFinished?.Invoke(clipData.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_22;
		L_22 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_23 = L_22;
		G_B13_0 = L_23;
		if (L_23)
		{
			G_B14_0 = L_23;
			goto IL_0099;
		}
	}
	{
		goto IL_00b0;
	}

IL_0099:
	{
		NullCheck(G_B14_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_24 = G_B14_0->___OnClipPlaybackFinished_10;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_25 = L_24;
		G_B15_0 = L_25;
		if (L_25)
		{
			G_B16_0 = L_25;
			goto IL_00a4;
		}
	}
	{
		goto IL_00b0;
	}

IL_00a4:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = V_0;
		NullCheck(L_26);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = L_26->___clip_6;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B16_0, L_27, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_00b0:
	{
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		// if (_playbackQueue.Count > 0)
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_28 = __this->____playbackQueue_10;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_28, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00cf;
		}
	}
	{
		// OnPlaybackBegin();
		VirtualActionInvoker0::Invoke(16 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin() */, __this);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackCancel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackCancel_m834EFD295A39C071F99D3B2A156E45FBC3585F97 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B11_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B10_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B13_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B12_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B17_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B16_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B19_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B18_0 = NULL;
	{
		// if (index < 0 || index >= _playbackQueue.Count)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___index0;
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_2 = __this->____playbackQueue_10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_inline(L_2, List_1_get_Count_m4E8E4B2BE7E3B11210D5F83A423A0F06701E1872_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		goto IL_010c;
	}

IL_0023:
	{
		// TTSClipData clipData = _playbackQueue[index];
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_5 = __this->____playbackQueue_10;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7;
		L_7 = List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A(L_5, L_6, List_1_get_Item_m27AFF4C6A4B243A82DC73F706620BEB3D10B263A_RuntimeMethod_var);
		V_0 = L_7;
		// VLog.D($"Playback Cancelled\nText: {clipData?.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = V_0;
		G_B6_0 = _stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5;
		if (L_8)
		{
			G_B7_0 = _stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5;
			goto IL_003b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_0041;
	}

IL_003b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___textToSpeak_0;
		G_B8_0 = L_10;
		G_B8_1 = G_B7_0;
	}

IL_0041:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B8_1, G_B8_0, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_11, NULL);
		// _playbackQueue.RemoveAt(index);
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_12 = __this->____playbackQueue_10;
		int32_t L_13 = ___index0;
		NullCheck(L_12);
		List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0(L_12, L_13, List_1_RemoveAt_m8901A26B04D15375D661D45F1ED2B539A5E8EDF0_RuntimeMethod_var);
		// if (clipData != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00bc;
		}
	}
	{
		// Events?.OnCancelledSpeaking?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_16;
		L_16 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_17 = L_16;
		G_B10_0 = L_17;
		if (L_17)
		{
			G_B11_0 = L_17;
			goto IL_006e;
		}
	}
	{
		goto IL_0086;
	}

IL_006e:
	{
		NullCheck(G_B11_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_18 = G_B11_0->___OnCancelledSpeaking_7;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_19 = L_18;
		G_B12_0 = L_19;
		if (L_19)
		{
			G_B13_0 = L_19;
			goto IL_0079;
		}
	}
	{
		goto IL_0086;
	}

IL_0079:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___textToSpeak_0;
		NullCheck(G_B13_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B13_0, __this, L_21, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_0086:
	{
		// if (clipData.clip != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = V_0;
		NullCheck(L_22);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = L_22->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00bb;
		}
	}
	{
		// Events?.OnClipPlaybackCancelled?.Invoke(clipData.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_26;
		L_26 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_27 = L_26;
		G_B16_0 = L_27;
		if (L_27)
		{
			G_B17_0 = L_27;
			goto IL_00a3;
		}
	}
	{
		goto IL_00ba;
	}

IL_00a3:
	{
		NullCheck(G_B17_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_28 = G_B17_0->___OnClipPlaybackCancelled_11;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_29 = L_28;
		G_B18_0 = L_29;
		if (L_29)
		{
			G_B19_0 = L_29;
			goto IL_00ae;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ae:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = V_0;
		NullCheck(L_30);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_31 = L_30->___clip_6;
		NullCheck(G_B19_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B19_0, L_31, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_00ba:
	{
	}

IL_00bb:
	{
	}

IL_00bc:
	{
		// if (index == 0)
		int32_t L_32 = ___index0;
		V_4 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_010c;
		}
	}
	{
		// if (_waitForCompletion != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_34 = __this->____waitForCompletion_12;
		V_5 = (bool)((!(((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_35 = V_5;
		if (!L_35)
		{
			goto IL_00ec;
		}
	}
	{
		// StopCoroutine(_waitForCompletion);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_36 = __this->____waitForCompletion_12;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_36, NULL);
		// _waitForCompletion = null;
		__this->____waitForCompletion_12 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitForCompletion_12), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_00ec:
	{
		// if (AudioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37 = __this->___AudioSource_5;
		NullCheck(L_37);
		bool L_38;
		L_38 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_37, NULL);
		V_6 = L_38;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_010b;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_40 = __this->___AudioSource_5;
		NullCheck(L_40);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_40, NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker__ctor_mC03D87085496CBAE60E9116FA70A09543617C3D0 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<TTSClipData> _loadingQueue = new List<TTSClipData>();
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_0 = (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*)il2cpp_codegen_object_new(List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC(L_0, List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC_RuntimeMethod_var);
		__this->____loadingQueue_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadingQueue_9), (void*)L_0);
		// private List<TTSClipData> _playbackQueue = new List<TTSClipData>();
		List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418* L_1 = (List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418*)il2cpp_codegen_object_new(List_1_t1DF0EF4937395717354B128172FDA2DBFFB6C418_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC(L_1, List_1__ctor_mD1096925222869FFB8CD95F0B25C67B30E5FB6CC_RuntimeMethod_var);
		__this->____playbackQueue_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playbackQueue_10), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>b__35_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__35_0_m3566C2146C829910441BC2A451A517E4564DC39F (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// yield return new WaitWhile(() => IsLoading || IsSpeaking);
		bool L_0;
		L_0 = TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		return (bool)G_B3_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m4A636E90258573843CC16CA5134E4EEFEA2B5136 (U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass24_0::<GetLoadingClipIndex>b__0(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CGetLoadingClipIndexU3Eb__0_mCF019074F3F166D67E3D1FCE6576D786061BEE54 (U3CU3Ec__DisplayClass24_0_tBD64D8EDBB61F512485498EEE32C9F3480B265EB* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clip0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// return _loadingQueue.FindIndex((clip) => clip != null && clip.HasClipId(clipId));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clip0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clip0;
		String_t* L_2 = __this->___clipId_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27(L_1, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		return (bool)G_B3_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m1B43838ED02ED7A3E44A4F8E39C6F2E20924FD76 (U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass25_0::<GetPlaybackQueueIndex>b__0(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CGetPlaybackQueueIndexU3Eb__0_m88848425FD1A51AECF7EF4D72CD1EFE4A6D5A190 (U3CU3Ec__DisplayClass25_0_t9A76FD56A2A448955D10AC356B7D1F35D64AB05B* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clip0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// return _playbackQueue.FindIndex((clip) => clip != null && clip.HasClipId(clipId));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clip0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clip0;
		String_t* L_2 = __this->___clipId_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27(L_1, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		return (bool)G_B3_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__34__ctor_m14395207D9204E8E41D9B171A0F8EEB17A908E92 (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__34_System_IDisposable_Dispose_m5E3255D1440514D30037E018ABB003B696FDFFF4 (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeakAsyncU3Ed__34_MoveNext_m09966DE5EF0B8808F92070C639A414010036B8C8 (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Stop();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_3 = __this->___U3CU3E4__this_4;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(8 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, L_3);
		// yield return SpeakQueuedAsync(new string[] {textToSpeak}, diskCacheSettings);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_4 = __this->___U3CU3E4__this_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = __this->___textToSpeak_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_8 = __this->___diskCacheSettings_3;
		NullCheck(L_4);
		RuntimeObject* L_9;
		L_9 = TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D(L_4, L_6, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakAsyncU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5864653AC61838AF77907F1334F08753FF905B6B (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__34_System_Collections_IEnumerator_Reset_m9E82993DA1E4462CC857083334F6BA04552D94F1 (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeakAsyncU3Ed__34_System_Collections_IEnumerator_Reset_m9E82993DA1E4462CC857083334F6BA04552D94F1_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakAsyncU3Ed__34_System_Collections_IEnumerator_get_Current_m0C85F37E5B8819A08B2BB86A70E9C22272486F9C (U3CSpeakAsyncU3Ed__34_tFE881A5C6A5D42E2A6A0438FCD19B477BBA55E8A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35__ctor_m9734BA80900926C49871935688E643D2EE28F777 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35_System_IDisposable_Dispose_mCB01C126C5ABFEF7911B26C1970EC0F8DB054326 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeakQueuedAsyncU3Ed__35_MoveNext_m9875781446C7667023C24AAAF242004D8F1C17E7 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__35_0_m3566C2146C829910441BC2A451A517E4564DC39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00b7;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var textToSpeak in textsToSpeak)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___textsToSpeak_2;
		__this->___U3CU3Es__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_5), (void*)L_3);
		__this->___U3CU3Es__2_6 = 0;
		goto IL_007b;
	}

IL_0039:
	{
		// foreach (var textToSpeak in textsToSpeak)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___U3CU3Es__1_5;
		int32_t L_5 = __this->___U3CU3Es__2_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___U3CtextToSpeakU3E5__3_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextToSpeakU3E5__3_7), (void*)L_7);
		// SpeakQueued(textToSpeak, diskCacheSettings);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_8 = __this->___U3CU3E4__this_4;
		String_t* L_9 = __this->___U3CtextToSpeakU3E5__3_7;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_10 = __this->___diskCacheSettings_3;
		NullCheck(L_8);
		TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278(L_8, L_9, L_10, NULL);
		__this->___U3CtextToSpeakU3E5__3_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextToSpeakU3E5__3_7), (void*)(String_t*)NULL);
		int32_t L_11 = __this->___U3CU3Es__2_6;
		__this->___U3CU3Es__2_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_007b:
	{
		// foreach (var textToSpeak in textsToSpeak)
		int32_t L_12 = __this->___U3CU3Es__2_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___U3CU3Es__1_5;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
		__this->___U3CU3Es__1_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_5), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// yield return new WaitWhile(() => IsLoading || IsSpeaking);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_14 = __this->___U3CU3E4__this_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_15, L_14, (intptr_t)((void*)TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__35_0_m3566C2146C829910441BC2A451A517E4564DC39F_RuntimeMethod_var), NULL);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_16 = (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967*)il2cpp_codegen_object_new(WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C(L_16, L_15, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakQueuedAsyncU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD43892E4F8CD84550708888C4770116B1292F9B3 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_Reset_m426ED030AF4F161851B54927FC9F0DA01BEDFDBA (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_Reset_m426ED030AF4F161851B54927FC9F0DA01BEDFDBA_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_get_Current_mEF64F629906C743BFB330D0632F361136E366B43 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m3F90FD81A1B4D186502AAE48CEF1E7556CBDE25B (U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass37_0::<OnLoadBegin>b__0(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3COnLoadBeginU3Eb__0_m4462CE958AED4DDEE5232093A6FE937D05A738DB (U3CU3Ec__DisplayClass37_0_tAADEE8CBF0084C0976BBE9FB045C2F9A15A0658B* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// TTSClipData newClip = _tts.Load(textToSpeak, clipID, voiceSettings, diskCacheSettings, (clipData, error) => OnClipLoadComplete(clipData, error, addToQueue));
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->___U3CU3E4__this_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		String_t* L_2 = ___error1;
		bool L_3 = __this->___addToQueue_1;
		NullCheck(L_0);
		VirtualActionInvoker3< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, bool >::Invoke(13 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnClipLoadComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean) */, L_0, L_1, L_2, L_3);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__43__ctor_m9CE7C2A7D75262CDA6407D16C2D7BE84FEBB39B0 (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__43_System_IDisposable_Dispose_m656AD55F4DE9DCB0491FF7DC1A36BED44DD06582 (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForCompletionU3Ed__43_MoveNext_m10762CC5A677980C347A144948F8E20489A34C7A (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(duration);
		float L_3 = __this->___duration_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnPlaybackComplete();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(18 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete() */, L_5);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForCompletionU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA365E2B33E989038F2940B3E0C10791D65960261 (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__43_System_Collections_IEnumerator_Reset_m574B4C57455D0C792C5C2F5101AF4BC509C73368 (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForCompletionU3Ed__43_System_Collections_IEnumerator_Reset_m574B4C57455D0C792C5C2F5101AF4BC509C73368_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForCompletionU3Ed__43_System_Collections_IEnumerator_get_Current_m435ECA7BDBE18E12278ED640E99986DD8B8D382E (U3CWaitForCompletionU3Ed__43_t8A9DD3B65296854B051FC7AE76973010341A1423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public string DiskPath => _diskPath;
		String_t* L_0 = __this->____diskPath_4;
		return L_0;
	}
}
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskCacheDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* TTSDiskCache_get_DiskCacheDefaultSettings_mFEB9E0BFBDC93DAFBACF81CCBD7750AA73E11971 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDiskCacheSettings DiskCacheDefaultSettings => _defaultSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_0 = __this->____defaultSettings_5;
		return L_0;
	}
}
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskStreamEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// get => _events;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->____events_6;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::set_DiskStreamEvents(Meta.WitAi.TTS.Events.TTSStreamEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_set_DiskStreamEvents_m6B71DD2A047B71F8E3F4B534D2810052DA090879 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _events = value; }
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = ___value0;
		__this->____events_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_0);
		// set { _events = value; }
		return;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B12_0 = 0;
	{
		// if (!ShouldCacheToDisk(clipData))
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		bool L_1;
		L_1 = TTSDiskCache_ShouldCacheToDisk_m5D6E1265C7354DD9FE92F64AB0A6A5EE513C8361(__this, L_0, NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_3;
		goto IL_00fe;
	}

IL_001b:
	{
		// TTSDiskCacheLocation location = clipData.diskCacheSettings.DiskCacheLocation;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___clipData0;
		NullCheck(L_4);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = L_4->___diskCacheSettings_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___DiskCacheLocation_0;
		V_0 = L_6;
		// string directory = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_7;
		// switch (location)
		int32_t L_8 = V_0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		V_4 = L_9;
		int32_t L_10 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_004b:
	{
		// directory = Application.persistentDataPath;
		String_t* L_11;
		L_11 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		V_1 = L_11;
		// break;
		goto IL_0063;
	}

IL_0053:
	{
		// directory = Application.temporaryCachePath;
		String_t* L_12;
		L_12 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		V_1 = L_12;
		// break;
		goto IL_0063;
	}

IL_005b:
	{
		// directory = Application.streamingAssetsPath;
		String_t* L_13;
		L_13 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		V_1 = L_13;
		// break;
		goto IL_0063;
	}

IL_0063:
	{
		// if (string.IsNullOrEmpty(directory))
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		// return string.Empty;
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_17;
		goto IL_00fe;
	}

IL_007b:
	{
		// directory = Path.Combine(directory, DiskPath);
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_18, L_19, NULL);
		V_1 = L_20;
		// if (location != TTSDiskCacheLocation.Preload || !Application.isPlaying)
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0096;
		}
	}
	{
		bool L_22;
		L_22 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		G_B12_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B12_0 = 1;
	}

IL_0097:
	{
		V_7 = (bool)G_B12_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00cf;
		}
	}
	{
		// if (!IOUtility.CreateDirectory(directory, true))
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = IOUtility_CreateDirectory_m9CEDEFB04138BABAA175B66857EE9867031D5CBB(L_24, (bool)1, NULL);
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_00ce;
		}
	}
	{
		// VLog.E($"Failed to create tts directory\nPath: {directory}\nLocation: {location}");
		String_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F, L_27, L_30, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_31, NULL);
		// return string.Empty;
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_32;
		goto IL_00fe;
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		// return Path.Combine(directory, clipData.clipID + "." + clipData.audioType.ToString().ToLower());
		String_t* L_33 = V_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_34 = ___clipData0;
		NullCheck(L_34);
		String_t* L_35 = L_34->___clipID_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_36 = ___clipData0;
		NullCheck(L_36);
		int32_t* L_37 = (&L_36->___audioType_2);
		Il2CppFakeBox<int32_t> L_38(AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var, L_37);
		String_t* L_39;
		L_39 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_38), NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_39, NULL);
		String_t* L_41;
		L_41 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_35, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_42;
		L_42 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_33, L_41, NULL);
		V_3 = L_42;
		goto IL_00fe;
	}

IL_00fe:
	{
		// }
		String_t* L_43 = V_3;
		return L_43;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSDiskCache::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSDiskCache_ShouldCacheToDisk_m5D6E1265C7354DD9FE92F64AB0A6A5EE513C8361 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return clipData != null && clipData.diskCacheSettings.DiskCacheLocation != TTSDiskCacheLocation.Stream && !string.IsNullOrEmpty(clipData.clipID);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_2 = L_1->___diskCacheSettings_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DiskCacheLocation_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___clipData0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___clipID_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::CheckCachedToDisk(Meta.WitAi.TTS.Data.TTSClipData,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_CheckCachedToDisk_mB9A395CCD6F910CC29445D575BD2A2AC1CF8552B (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* ___onCheckComplete1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* V_0 = NULL;
	String_t* V_1 = NULL;
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* G_B3_0 = NULL;
	Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_0 = (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m64F4743BE69F04B7343534CB468C3999D2F08E66(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_4 = V_0;
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_5 = ___onCheckComplete1;
		NullCheck(L_4);
		L_4->___onCheckComplete_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onCheckComplete_2), (void*)L_5);
		// string cachePath = GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_6 = V_0;
		NullCheck(L_6);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = L_6->___clipData_1;
		String_t* L_8;
		L_8 = TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0(__this, L_7, NULL);
		V_1 = L_8;
		// if (string.IsNullOrEmpty(cachePath))
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		// onCheckComplete?.Invoke(clipData, false);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_12 = V_0;
		NullCheck(L_12);
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_13 = L_12->___onCheckComplete_2;
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_0042;
		}
	}
	{
		goto IL_004f;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_15 = V_0;
		NullCheck(L_15);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = L_15->___clipData_1;
		NullCheck(G_B3_0);
		Action_2_Invoke_m3F27D046697BDCE14C7F53A0C99CA3DC933DBAFF_inline(G_B3_0, L_16, (bool)0, NULL);
	}

IL_004f:
	{
		// return;
		goto IL_008c;
	}

IL_0051:
	{
		// VRequest request = new VRequest();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_17 = (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*)il2cpp_codegen_object_new(VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537(L_17, NULL);
		V_2 = L_17;
		// bool canPerform = request.RequestFileExists(cachePath, (success, error) =>
		// {
		//     // Remove
		//     if (_streamRequests.ContainsKey(clipData.clipID))
		//     {
		//         _streamRequests.Remove(clipData.clipID);
		//     }
		//     // Complete
		//     onCheckComplete(clipData, success);
		// });
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_18 = V_2;
		String_t* L_19 = V_1;
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_20 = V_0;
		RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* L_21 = (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		bool L_22;
		L_22 = VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778(L_18, L_19, L_21, NULL);
		V_3 = L_22;
		// if (canPerform)
		bool L_23 = V_3;
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_008c;
		}
	}
	{
		// _streamRequests[clipData.clipID] = request;
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_25 = __this->____streamRequests_7;
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_26 = V_0;
		NullCheck(L_26);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = L_26->___clipData_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->___clipID_1;
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_29 = V_2;
		NullCheck(L_25);
		Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA(L_25, L_28, L_29, Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::StreamFromDiskCache(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_StreamFromDiskCache_mBDCB7E6F6C095966B34C9006C8E60319E7A834A0 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* V_0 = NULL;
	String_t* V_1 = NULL;
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B2_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B1_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_0 = (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m50208C4947E0F071B327BD30D316628C349D45CB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_1 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___clipData0;
		NullCheck(L_1);
		L_1->___clipData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipData_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// DiskStreamEvents?.OnStreamBegin?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_4;
		L_4 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0021;
		}
	}
	{
		goto IL_0038;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6 = G_B2_0->___OnStreamBegin_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002c;
		}
	}
	{
		goto IL_0038;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = L_8->___clipData_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_9, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0038:
	{
		// string filePath = GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_0;
		String_t* L_12;
		L_12 = TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0(__this, L_11, NULL);
		V_1 = L_12;
		// VRequest request = new VRequest();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_13 = (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*)il2cpp_codegen_object_new(VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537(L_13, NULL);
		V_2 = L_13;
		// bool canPerform = request.RequestAudioClip(new Uri(request.CleanUrl(filePath)), (clip, error) =>
		// {
		//     // Apply clip
		//     clipData.clip = clip;
		//     // Call on complete
		//     OnStreamComplete(clipData, error);
		// }, WitTTSVRequest.TTSAudioType, true, (progress) => clipData.loadProgress = progress);
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_14 = V_2;
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_15 = V_2;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String Meta.WitAi.Requests.VRequest::CleanUrl(System.String) */, L_15, L_16);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_18 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_18, L_17, NULL);
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_19 = V_0;
		RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* L_20 = (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		RequestCompleteDelegate_1__ctor_m0652A714187CBDC14E8660615DE06C82FF11937F(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		int32_t L_21 = ((WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_StaticFields*)il2cpp_codegen_static_fields_for(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var))->___TTSAudioType_20;
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_22 = V_0;
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_23 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		bool L_24;
		L_24 = VRequest_RequestAudioClip_m889F3CDCDB4752DCB79529692CCB23459C855800(L_14, L_18, L_20, L_21, (bool)1, L_23, NULL);
		V_3 = L_24;
		// if (canPerform)
		bool L_25 = V_3;
		V_4 = L_25;
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		// _streamRequests[clipData.clipID] = request;
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_27 = __this->____streamRequests_7;
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_28 = V_0;
		NullCheck(L_28);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_29 = L_28->___clipData_0;
		NullCheck(L_29);
		String_t* L_30 = L_29->___clipID_1;
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_31 = V_2;
		NullCheck(L_27);
		Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA(L_27, L_30, L_31, Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::CancelDiskCacheStream(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_CancelDiskCacheStream_mFCB37FEDC4DEC92008A39A914F540C71040C93C1 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* V_0 = NULL;
	bool V_1 = false;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B6_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B8_0 = NULL;
	{
		// if (!_streamRequests.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_0 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_0, L_2, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_006c;
	}

IL_001c:
	{
		// VRequest request = _streamRequests[clipData.clipID];
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_5 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___clipID_1;
		NullCheck(L_5);
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_8;
		L_8 = Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27(L_5, L_7, Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		V_0 = L_8;
		// _streamRequests.Remove(clipData.clipID);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_9 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___clipData0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___clipID_1;
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_9, L_11, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// request?.Cancel();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_13 = V_0;
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_004c;
	}

IL_0045:
	{
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_14 = V_0;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, L_14);
	}

IL_004c:
	{
		// request = null;
		V_0 = (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*)NULL;
		// DiskStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_15;
		L_15 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_16 = L_15;
		G_B6_0 = L_16;
		if (L_16)
		{
			G_B7_0 = L_16;
			goto IL_005a;
		}
	}
	{
		goto IL_006c;
	}

IL_005a:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_17 = G_B7_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0065;
		}
	}
	{
		goto IL_006c;
	}

IL_0065:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___clipData0;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_19, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::OnStreamComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_OnStreamComplete_mCE3C9BA9FC59D37A936DDC98F5F9CE5B6A567A8F (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B5_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B4_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B7_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B6_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B11_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B13_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B12_0 = NULL;
	{
		// if (!_streamRequests.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_0 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_0, L_2, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_007e;
	}

IL_001c:
	{
		// _streamRequests.Remove(clipData.clipID);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_5 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___clipID_1;
		NullCheck(L_5);
		bool L_8;
		L_8 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_5, L_7, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// if (!string.IsNullOrEmpty(error))
		String_t* L_9 = ___error1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// DiskStreamEvents?.OnStreamError?.Invoke(clipData, error);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_12;
		L_12 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13 = L_12;
		G_B4_0 = L_13;
		if (L_13)
		{
			G_B5_0 = L_13;
			goto IL_0048;
		}
	}
	{
		goto IL_005b;
	}

IL_0048:
	{
		NullCheck(G_B5_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_14 = G_B5_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_15 = L_14;
		G_B6_0 = L_15;
		if (L_15)
		{
			G_B7_0 = L_15;
			goto IL_0053;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___clipData0;
		String_t* L_17 = ___error1;
		NullCheck(G_B7_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B7_0, L_16, L_17, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_005b:
	{
		goto IL_007e;
	}

IL_005e:
	{
		// DiskStreamEvents?.OnStreamReady?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_18;
		L_18 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_006b;
		}
	}
	{
		goto IL_007d;
	}

IL_006b:
	{
		NullCheck(G_B11_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_20 = G_B11_0->___OnStreamReady_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_21 = L_20;
		G_B12_0 = L_21;
		if (L_21)
		{
			G_B13_0 = L_21;
			goto IL_0076;
		}
	}
	{
		goto IL_007d;
	}

IL_0076:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = ___clipData0;
		NullCheck(G_B13_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B13_0, L_22, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_007d:
	{
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache__ctor_m13B05E4F26D177A1A9142111BEABBF04A28F4683 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _diskPath = "TTS/";
		__this->____diskPath_4 = _stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskPath_4), (void*)_stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D);
		// [SerializeField] private TTSDiskCacheSettings _defaultSettings = new TTSDiskCacheSettings();
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_0 = (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)il2cpp_codegen_object_new(TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSDiskCacheSettings__ctor_m40DDC2AC27F34F5C35BB57426DF1DC9FD96B29F1(L_0, NULL);
		__this->____defaultSettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultSettings_5), (void*)L_0);
		// [SerializeField] private TTSStreamEvents _events = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_1 = (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*)il2cpp_codegen_object_new(TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F(L_1, NULL);
		__this->____events_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_1);
		// private Dictionary<string, VRequest> _streamRequests = new Dictionary<string, VRequest>();
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_2 = (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*)il2cpp_codegen_object_new(Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F(L_2, Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		__this->____streamRequests_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamRequests_7), (void*)L_2);
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
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m64F4743BE69F04B7343534CB468C3999D2F08E66 (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::<CheckCachedToDisk>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144 (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* __this, bool ___success0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_streamRequests.ContainsKey(clipData.clipID))
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_1 = L_0->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_1, L_3, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// _streamRequests.Remove(clipData.clipID);
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_6 = __this->___U3CU3E4__this_0;
		NullCheck(L_6);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_7 = L_6->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = __this->___clipData_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___clipID_1;
		NullCheck(L_7);
		bool L_10;
		L_10 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_7, L_9, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
	}

IL_003e:
	{
		// onCheckComplete(clipData, success);
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_11 = __this->___onCheckComplete_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = __this->___clipData_1;
		bool L_13 = ___success0;
		NullCheck(L_11);
		Action_2_Invoke_m3F27D046697BDCE14C7F53A0C99CA3DC933DBAFF_inline(L_11, L_12, L_13, NULL);
		// });
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
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m50208C4947E0F071B327BD30D316628C349D45CB (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<StreamFromDiskCache>b__0(UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// clipData.clip = clip;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		NullCheck(L_0);
		L_0->___clip_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___clip_6), (void*)L_1);
		// OnStreamComplete(clipData, error);
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_2 = __this->___U3CU3E4__this_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = __this->___clipData_0;
		String_t* L_4 = ___error1;
		NullCheck(L_2);
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(12 /* System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::OnStreamComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String) */, L_2, L_3, L_4);
		// }, WitTTSVRequest.TTSAudioType, true, (progress) => clipData.loadProgress = progress);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<StreamFromDiskCache>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// }, WitTTSVRequest.TTSAudioType, true, (progress) => clipData.loadProgress = progress);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_0;
		float L_1 = ___progress0;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
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
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipAdded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipAddedU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::set_OnClipAdded(Meta.WitAi.TTS.Events.TTSClipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_set_OnClipAdded_mCDB36FA05C3B39718667C432B8C9EEB2A9C0CE16 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = ___value0;
		__this->___U3COnClipAddedU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipAddedU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipRemovedU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::set_OnClipRemoved(Meta.WitAi.TTS.Events.TTSClipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_set_OnClipRemoved_mDA7A4713EFF72DD02657B175587765CE17059801 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = ___value0;
		__this->___U3COnClipRemovedU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipRemovedU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSRuntimeCache_GetClips_mC3EC38F11CEE60F9463244AB3610ED1105C98023 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipData[] GetClips() => _clips.Values.ToArray();
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		NullCheck(L_0);
		ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* L_1;
		L_1 = Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442(L_0, Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442_RuntimeMethod_var);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_2;
		L_2 = Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB(L_1, Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB_RuntimeMethod_var);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSRuntimeCache_GetClip_mA02A4C4B6B31E669D864BE44E2A9320E3E0A1941 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, String_t* ___clipID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_2 = NULL;
	{
		// if (!_clips.ContainsKey(clipID))
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		String_t* L_1 = ___clipID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643(L_0, L_1, Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		V_2 = (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)NULL;
		goto IL_004f;
	}

IL_0019:
	{
		// int clipIndex = _clipOrder.IndexOf(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->____clipOrder_11;
		String_t* L_5 = ___clipID0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_4, L_5, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_6;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->____clipOrder_11;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_7, L_8, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// _clipOrder.Add(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->____clipOrder_11;
		String_t* L_10 = ___clipID0;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_10, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return _clips[clipID];
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_11 = __this->____clips_10;
		String_t* L_12 = ___clipID0;
		NullCheck(L_11);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13;
		L_13 = Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9(L_11, L_12, Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		V_2 = L_13;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::AddClip(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_AddClip_m5058C7C384009C82F7BBD96BDC5A98B9E544FEAA (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B16_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B15_0 = NULL;
	{
		// if (clipData == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___clipData0;
		V_2 = (bool)((((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00e8;
	}

IL_0011:
	{
		// bool wasAdded = true;
		V_0 = (bool)1;
		// int clipIndex = _clipOrder.IndexOf(clipData.clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->____clipOrder_11;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___clipID_1;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_2, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_5;
		// if (clipIndex != -1)
		int32_t L_6 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// wasAdded = false;
		V_0 = (bool)0;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____clipOrder_11;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_8, L_9, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
	}

IL_0043:
	{
		// _clips[clipData.clipID] = clipData;
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_10 = __this->____clips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = ___clipData0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___clipID_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___clipData0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3(L_10, L_12, L_13, Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3_RuntimeMethod_var);
		// _clipOrder.Add(clipData.clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->____clipOrder_11;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___clipData0;
		NullCheck(L_15);
		String_t* L_16 = L_15->___clipID_1;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_007f;
	}

IL_006a:
	{
		// RemoveClip(_clipOrder[0]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = __this->____clipOrder_11;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_17, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		TTSRuntimeCache_RemoveClip_mA5B7062558B1F632383BFBE6D678B2D97EFFBB74(__this, L_18, NULL);
	}

IL_007f:
	{
		// while (IsCacheFull() && _clipOrder.Count > 0)
		bool L_19;
		L_19 = TTSRuntimeCache_IsCacheFull_mEC7332D863C614DE241703ACAB66A1C3A706E12A(__this, NULL);
		if (!L_19)
		{
			goto IL_0097;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = __this->____clipOrder_11;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_20, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		G_B9_0 = ((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B9_0 = 0;
	}

IL_0098:
	{
		V_5 = (bool)G_B9_0;
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_006a;
		}
	}
	{
		// if (wasAdded && _clips.Keys.Count > 0)
		bool L_23 = V_0;
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_24 = __this->____clips_10;
		NullCheck(L_24);
		KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* L_25;
		L_25 = Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A(L_24, Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C(L_25, KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var);
		G_B13_0 = ((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B13_0 = 0;
	}

IL_00b7:
	{
		V_6 = (bool)G_B13_0;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00d2;
		}
	}
	{
		// OnClipAdded?.Invoke(clipData);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_28;
		L_28 = TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB_inline(__this, NULL);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_29 = L_28;
		G_B15_0 = L_29;
		if (L_29)
		{
			G_B16_0 = L_29;
			goto IL_00ca;
		}
	}
	{
		goto IL_00d1;
	}

IL_00ca:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = ___clipData0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B16_0, L_30, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_00d1:
	{
	}

IL_00d2:
	{
		// return _clips.Keys.Count > 0;
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_31 = __this->____clips_10;
		NullCheck(L_31);
		KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* L_32;
		L_32 = Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A(L_31, Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C(L_32, KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_33) > ((int32_t)0))? 1 : 0);
		goto IL_00e8;
	}

IL_00e8:
	{
		// }
		bool L_34 = V_3;
		return L_34;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RemoveClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_RemoveClip_mA5B7062558B1F632383BFBE6D678B2D97EFFBB74 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, String_t* ___clipID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	{
		// if (!_clips.ContainsKey(clipID))
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		String_t* L_1 = ___clipID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643(L_0, L_1, Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		goto IL_005e;
	}

IL_0017:
	{
		// TTSClipData clipData = _clips[clipID];
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_4 = __this->____clips_10;
		String_t* L_5 = ___clipID0;
		NullCheck(L_4);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6;
		L_6 = Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9(L_4, L_5, Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		V_0 = L_6;
		// _clips.Remove(clipID);
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_7 = __this->____clips_10;
		String_t* L_8 = ___clipID0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79(L_7, L_8, Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79_RuntimeMethod_var);
		// int clipIndex = _clipOrder.IndexOf(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = __this->____clipOrder_11;
		String_t* L_11 = ___clipID0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_10, L_11, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_12;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->____clipOrder_11;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_13, L_14, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// OnClipRemoved?.Invoke(clipData);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_15;
		L_15 = TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6_inline(__this, NULL);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_16 = L_15;
		G_B3_0 = L_16;
		if (L_16)
		{
			G_B4_0 = L_16;
			goto IL_0057;
		}
	}
	{
		goto IL_005e;
	}

IL_0057:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = V_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_17, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::IsCacheFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_IsCacheFull_mEC7332D863C614DE241703ACAB66A1C3A706E12A (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (ClipLimit && _clipOrder.Count > ClipCapacity)
		bool L_0 = __this->___ClipLimit_4;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->____clipOrder_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_3 = __this->___ClipCapacity_5;
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_0028:
	{
		// if (RamLimit && GetCacheDiskSize() > RamCapacity)
		bool L_5 = __this->___RamLimit_6;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6;
		L_6 = TTSRuntimeCache_GetCacheDiskSize_m1EF520F3243A4581F86E09B3070EFE12737A011C(__this, NULL);
		int32_t L_7 = __this->___RamCapacity_7;
		G_B8_0 = ((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B8_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_004a:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetCacheDiskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSRuntimeCache_GetCacheDiskSize_m1EF520F3243A4581F86E09B3070EFE12737A011C (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// long total = 0;
		V_0 = ((int64_t)0);
		// foreach (var key in _clips.Keys)
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		NullCheck(L_0);
		KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* L_1;
		L_1 = Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A(L_0, Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A L_2;
		L_2 = KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D(L_1, KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608((&V_1), Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0018_1:
			{
				// foreach (var key in _clips.Keys)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_inline((&V_1), Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_RuntimeMethod_var);
				V_2 = L_3;
				// total += GetClipBytes(_clips[key].clip);
				int64_t L_4 = V_0;
				Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_5 = __this->____clips_10;
				String_t* L_6 = V_2;
				NullCheck(L_5);
				TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7;
				L_7 = Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9(L_5, L_6, Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
				NullCheck(L_7);
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___clip_6;
				int64_t L_9;
				L_9 = TTSRuntimeCache_GetClipBytes_mDED74477FE1D25D3028FEAFB695127DF56444CCA(L_8, NULL);
				V_0 = ((int64_t)il2cpp_codegen_add(L_4, L_9));
			}

IL_003b_1:
			{
				// foreach (var key in _clips.Keys)
				bool L_10;
				L_10 = Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7((&V_1), Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// return (int)(total / (long)1024) + 1;
		int64_t L_11 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)(L_11/((int64_t)((int32_t)1024))))), 1));
		goto IL_0063;
	}

IL_0063:
	{
		// }
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Int64 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClipBytes(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TTSRuntimeCache_GetClipBytes_mDED74477FE1D25D3028FEAFB695127DF56444CCA (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	{
		// if (clip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return 0;
		V_1 = ((int64_t)0);
		goto IL_0025;
	}

IL_0012:
	{
		// return ((clip.samples * clip.channels) * 2);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_3, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___clip0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_5, NULL);
		V_1 = ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_4, L_6)), 2)));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int64_t L_7 = V_1;
		return L_7;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache__ctor_m9116340D8664757DBA325C539FBD859746288574 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool ClipLimit = true;
		__this->___ClipLimit_4 = (bool)1;
		// [Min(1)] public int ClipCapacity = 20;
		__this->___ClipCapacity_5 = ((int32_t)20);
		// public bool RamLimit = true;
		__this->___RamLimit_6 = (bool)1;
		// [Min(1)] public int RamCapacity = 32768;
		__this->___RamCapacity_7 = ((int32_t)32768);
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_0, NULL);
		__this->___U3COnClipAddedU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipAddedU3Ek__BackingField_8), (void*)L_0);
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_1 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_1, NULL);
		__this->___U3COnClipRemovedU3Ek__BackingField_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipRemovedU3Ek__BackingField_9), (void*)L_1);
		// private Dictionary<string, TTSClipData> _clips = new Dictionary<string, TTSClipData>();
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_2 = (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*)il2cpp_codegen_object_new(Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7(L_2, Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7_RuntimeMethod_var);
		__this->____clips_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clips_10), (void*)L_2);
		// private List<string> _clipOrder = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____clipOrder_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clipOrder_11), (void*)L_3);
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
// System.Void Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWitVoiceSettings__ctor_mF02F476EE719E6BE0B984429F0DCF3CE82E4BD24 (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string voice = DEFAULT_VOICE;
		__this->___voice_4 = _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voice_4), (void*)_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		// public string style = DEFAULT_STYLE;
		__this->___style_5 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___style_5), (void*)_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		// public int speed = 100;
		__this->___speed_6 = ((int32_t)100);
		// public int pitch = 100;
		__this->___pitch_7 = ((int32_t)100);
		// public int gain = 50;
		__this->___gain_8 = ((int32_t)50);
		TTSVoiceSettings__ctor_m70BCB36D2CDEE8D24E90613CA3B3B7B1232EF018(__this, NULL);
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
// Conversion methods for marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_pinvoke(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_pinvoke_back(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke& marshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_pinvoke_cleanup(TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_com(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com& marshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_com_back(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com& marshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_com_cleanup(TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com& marshaled)
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
// Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.Integrations.TTSWit::get_VoiceProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_VoiceProvider_mB74E755EA57ECEE40414FEBE5805C041EF9AB6F0 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public override ITTSVoiceProvider VoiceProvider => this;
		return __this;
	}
}
// Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.Integrations.TTSWit::get_WebHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_WebHandler_m772B61BC778C5E10F14A753844B27A5E06A04D44 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public override ITTSWebHandler WebHandler => this;
		return __this;
	}
}
// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::get_RuntimeCacheHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_RuntimeCacheHandler_m18C9545B083E3E2DA72D04BDB535BCAA1DC794F8 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (_runtimeCache == null)
		RuntimeObject* L_0 = __this->____runtimeCache_10;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _runtimeCache = gameObject.GetComponent<ITTSRuntimeCacheHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0(L_2, GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0_RuntimeMethod_var);
		__this->____runtimeCache_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeCache_10), (void*)L_3);
	}

IL_0021:
	{
		// return _runtimeCache;
		RuntimeObject* L_4 = __this->____runtimeCache_10;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::get_DiskCacheHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_DiskCacheHandler_mD05E4DC591DED79855E6AB2CB1DCB92116828B97 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (_diskCache == null)
		RuntimeObject* L_0 = __this->____diskCache_11;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _diskCache = gameObject.GetComponent<ITTSDiskCacheHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9(L_2, GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9_RuntimeMethod_var);
		__this->____diskCache_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskCache_11), (void*)L_3);
	}

IL_0021:
	{
		// return _diskCache;
		RuntimeObject* L_4 = __this->____diskCache_11;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebStreamEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->___U3CWebStreamEventsU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::set_WebStreamEvents(Meta.WitAi.TTS.Events.TTSStreamEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_set_WebStreamEvents_m56ED8CD636CF4E2D56B651D0BBAE3AAA8135A077 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = ___value0;
		__this->___U3CWebStreamEventsU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebStreamEventsU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSWit::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_GetInvalidError_m81BA9B33C844782CFEA18C1D456A2796159BD443 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B1000C31CF4895724E513340B19C099E04353C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// string invalidError = base.GetInvalidError();
		String_t* L_0;
		L_0 = TTSService_GetInvalidError_m89FADBC1414326B563501B9952CA615519302AFE(__this, NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return invalidError;
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_0064;
	}

IL_001a:
	{
		// if (RequestSettings.configuration == null)
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_5 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_6 = L_5->___configuration_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		// return "No WitConfiguration Set";
		V_2 = _stringLiteralC2B1000C31CF4895724E513340B19C099E04353C;
		goto IL_0064;
	}

IL_0038:
	{
		// if (string.IsNullOrEmpty(RequestSettings.configuration.GetClientAccessToken()))
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_9 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_10 = L_9->___configuration_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47(L_10, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// return "No WitConfiguration Client Token";
		V_2 = _stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1;
		goto IL_0064;
	}

IL_005c:
	{
		// return string.Empty;
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_14;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		String_t* L_15 = V_2;
		return L_15;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSWit::IsTextValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsTextValid_mB273DD030A0FD2C47DC748C8E3D982091B0AE539 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, String_t* ___textToSpeak0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string IsTextValid(string textToSpeak) => string.IsNullOrEmpty(textToSpeak) ? WitConstants.ENDPOINT_TTS_NO_TEXT : string.Empty;
		String_t* L_0 = ___textToSpeak0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_2;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9;
	}

IL_0014:
	{
		return G_B3_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::RequestStreamFromWeb(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_RequestStreamFromWeb_m40321900B94E938C2F4F1EEE715150AB3A1869CC (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* V_0 = NULL;
	String_t* V_1 = NULL;
	WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B2_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B1_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B8_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B10_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_0 = (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m5805D2BA21D4AE309D44DD9EA35936B0A2AD7F79(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		// WebStreamEvents?.OnStreamBegin?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_4;
		L_4 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0021;
		}
	}
	{
		goto IL_0038;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6 = G_B2_0->___OnStreamBegin_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002c;
		}
	}
	{
		goto IL_0038;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = L_8->___clipData_1;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_9, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0038:
	{
		// string validError = IsRequestValid(clipData, RequestSettings.configuration);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_1;
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_12 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_13 = L_12->___configuration_0;
		String_t* L_14;
		L_14 = TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA(__this, L_11, L_13, NULL);
		V_1 = L_14;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		V_3 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		// WebStreamEvents?.OnStreamError?.Invoke(clipData, validError);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_18;
		L_18 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_19 = L_18;
		G_B7_0 = L_19;
		if (L_19)
		{
			G_B8_0 = L_19;
			goto IL_006a;
		}
	}
	{
		goto IL_0082;
	}

IL_006a:
	{
		NullCheck(G_B8_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_20 = G_B8_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_21 = L_20;
		G_B9_0 = L_21;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0075;
		}
	}
	{
		goto IL_0082;
	}

IL_0075:
	{
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_22 = V_0;
		NullCheck(L_22);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23 = L_22->___clipData_1;
		String_t* L_24 = V_1;
		NullCheck(G_B10_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B10_0, L_23, L_24, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0082:
	{
		// return;
		goto IL_0110;
	}

IL_0087:
	{
		// if (_webStreams.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_25 = __this->____webStreams_14;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_26 = V_0;
		NullCheck(L_26);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = L_26->___clipData_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->___clipID_1;
		NullCheck(L_25);
		bool L_29;
		L_29 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_25, L_28, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		V_4 = L_29;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00b2;
		}
	}
	{
		// CancelWebStream(clipData);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_31 = V_0;
		NullCheck(L_31);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32 = L_31->___clipData_1;
		bool L_33;
		L_33 = TTSWit_CancelWebStream_m65761464CCCFAF8DC17976EB7AD6BC7BE6D68578(__this, L_32, NULL);
	}

IL_00b2:
	{
		// WitTTSVRequest request = new WitTTSVRequest(RequestSettings.configuration);
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_34 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_35 = L_34->___configuration_0;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_36 = (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0*)il2cpp_codegen_object_new(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6(L_36, L_35, NULL);
		V_2 = L_36;
		// request.RequestStream(clipData.textToSpeak, clipData.queryParameters,
		//     (clip, error) =>
		//     {
		//         _webStreams.Remove(clipData.clipID);
		//         clipData.clip = clip;
		//         if (string.IsNullOrEmpty(error))
		//         {
		//             WebStreamEvents?.OnStreamReady?.Invoke(clipData);
		//         }
		//         else
		//         {
		//             if (string.Equals(error, VRequest.CANCEL_ERROR, StringComparison.CurrentCultureIgnoreCase))
		//             {
		//                 WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		//             }
		//             else
		//             {
		//                 WebStreamEvents?.OnStreamError?.Invoke(clipData, error);
		//             }
		//         }
		//     },
		//     (progress) => clipData.loadProgress = progress);
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_37 = V_2;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_38 = V_0;
		NullCheck(L_38);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_39 = L_38->___clipData_1;
		NullCheck(L_39);
		String_t* L_40 = L_39->___textToSpeak_0;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_41 = V_0;
		NullCheck(L_41);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_42 = L_41->___clipData_1;
		NullCheck(L_42);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = L_42->___queryParameters_5;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_44 = V_0;
		RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* L_45 = (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		RequestCompleteDelegate_1__ctor_m0652A714187CBDC14E8660615DE06C82FF11937F(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_46 = V_0;
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_47 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_47, L_46, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		bool L_48;
		L_48 = WitTTSVRequest_RequestStream_m543A1147518C743CEB7925E4B69D72A1C9784508(L_37, L_40, L_43, L_45, L_47, NULL);
		// _webStreams[clipData.clipID] = request;
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_49 = __this->____webStreams_14;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_50 = V_0;
		NullCheck(L_50);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_51 = L_50->___clipData_1;
		NullCheck(L_51);
		String_t* L_52 = L_51->___clipID_1;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_53 = V_2;
		NullCheck(L_49);
		Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA(L_49, L_52, L_53, Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebStream(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebStream_m65761464CCCFAF8DC17976EB7AD6BC7BE6D68578 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B6_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B8_0 = NULL;
	{
		// if (!_webStreams.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_0 = __this->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_0, L_2, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0072;
	}

IL_001e:
	{
		// VRequest request = _webStreams[clipData.clipID];
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_5 = __this->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___clipID_1;
		NullCheck(L_5);
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_8;
		L_8 = Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27(L_5, L_7, Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		V_0 = L_8;
		// _webStreams.Remove(clipData.clipID);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_9 = __this->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___clipData0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___clipID_1;
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_9, L_11, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// request?.Cancel();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_13 = V_0;
		if (L_13)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_004e;
	}

IL_0047:
	{
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_14 = V_0;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, L_14);
	}

IL_004e:
	{
		// request = null;
		V_0 = (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*)NULL;
		// WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_15;
		L_15 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_16 = L_15;
		G_B6_0 = L_16;
		if (L_16)
		{
			G_B7_0 = L_16;
			goto IL_005c;
		}
	}
	{
		goto IL_006e;
	}

IL_005c:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_17 = G_B7_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0067;
		}
	}
	{
		goto IL_006e;
	}

IL_0067:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___clipData0;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_19, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_006e:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0072;
	}

IL_0072:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebDownloadEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_0 = __this->___U3CWebDownloadEventsU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::set_WebDownloadEvents(Meta.WitAi.TTS.Events.TTSDownloadEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_set_WebDownloadEvents_m883C532E3511F60C09FAAF10918FB99045D1E2AC (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___value0, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_0 = ___value0;
		__this->___U3CWebDownloadEventsU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebDownloadEventsU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::RequestDownloadFromWeb(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_RequestDownloadFromWeb_m5A5137C8D274639E8B09B53846F08871A7624E27 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* V_0 = NULL;
	String_t* V_1 = NULL;
	WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B2_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B1_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B4_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B3_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B8_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B10_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_0 = (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass25_0__ctor_m5BC4C7E86F42C61955F5AD77E3ECDD2D69218CC9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___clipData0;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_4 = V_0;
		String_t* L_5 = ___downloadPath1;
		NullCheck(L_4);
		L_4->___downloadPath_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___downloadPath_2), (void*)L_5);
		// WebDownloadEvents?.OnDownloadBegin?.Invoke(clipData, downloadPath);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_6;
		L_6 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(__this, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0028;
		}
	}
	{
		goto IL_0045;
	}

IL_0028:
	{
		NullCheck(G_B2_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_8 = G_B2_0->___OnDownloadBegin_0;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0033;
		}
	}
	{
		goto IL_0045;
	}

IL_0033:
	{
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_1;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___downloadPath_2;
		NullCheck(G_B4_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B4_0, L_11, L_13, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0045:
	{
		// string validError = IsRequestValid(clipData, RequestSettings.configuration);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_14 = V_0;
		NullCheck(L_14);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = L_14->___clipData_1;
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_16 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_17 = L_16->___configuration_0;
		String_t* L_18;
		L_18 = TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA(__this, L_15, L_17, NULL);
		V_1 = L_18;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_009a;
		}
	}
	{
		// WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, validError);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_22;
		L_22 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(__this, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_23 = L_22;
		G_B7_0 = L_23;
		if (L_23)
		{
			G_B8_0 = L_23;
			goto IL_0077;
		}
	}
	{
		goto IL_0095;
	}

IL_0077:
	{
		NullCheck(G_B8_0);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_24 = G_B8_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_25 = L_24;
		G_B9_0 = L_25;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0082;
		}
	}
	{
		goto IL_0095;
	}

IL_0082:
	{
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_26 = V_0;
		NullCheck(L_26);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = L_26->___clipData_1;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = L_28->___downloadPath_2;
		String_t* L_30 = V_1;
		NullCheck(G_B10_0);
		UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A(G_B10_0, L_27, L_29, L_30, UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
	}

IL_0095:
	{
		// return;
		goto IL_012f;
	}

IL_009a:
	{
		// if (_webDownloads.ContainsKey(clipData.clipID))
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_31 = __this->____webDownloads_16;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_32 = V_0;
		NullCheck(L_32);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = L_32->___clipData_1;
		NullCheck(L_33);
		String_t* L_34 = L_33->___clipID_1;
		NullCheck(L_31);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5(L_31, L_34, Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		V_4 = L_35;
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		// CancelWebDownload(clipData, downloadPath);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_37 = V_0;
		NullCheck(L_37);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_38 = L_37->___clipData_1;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = L_39->___downloadPath_2;
		bool L_41;
		L_41 = TTSWit_CancelWebDownload_m668EECF084A405833C0F6A10ED18128521EF5F63(__this, L_38, L_40, NULL);
	}

IL_00cb:
	{
		// WitTTSVRequest request = new WitTTSVRequest(RequestSettings.configuration);
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_42 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_43 = L_42->___configuration_0;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_44 = (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0*)il2cpp_codegen_object_new(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6(L_44, L_43, NULL);
		V_2 = L_44;
		// request.RequestDownload(downloadPath, clipData.textToSpeak, clipData.queryParameters,
		//     (success, error) =>
		//     {
		//         _webDownloads.Remove(clipData.clipID);
		//         if (string.IsNullOrEmpty(error))
		//         {
		//             WebDownloadEvents?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		//         }
		//         else
		//         {
		//             WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		//         }
		//     },
		//     (progress) => clipData.loadProgress = progress);
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_45 = V_2;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = L_46->___downloadPath_2;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_48 = V_0;
		NullCheck(L_48);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_49 = L_48->___clipData_1;
		NullCheck(L_49);
		String_t* L_50 = L_49->___textToSpeak_0;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_51 = V_0;
		NullCheck(L_51);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_52 = L_51->___clipData_1;
		NullCheck(L_52);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = L_52->___queryParameters_5;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_54 = V_0;
		RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* L_55 = (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5(L_55, L_54, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_56 = V_0;
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_57 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_57, L_56, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		bool L_58;
		L_58 = WitTTSVRequest_RequestDownload_mC18DF9CEEB421F2A33282F36F70844C508731D3B(L_45, L_47, L_50, L_53, L_55, L_57, NULL);
		// _webDownloads[clipData.clipID] = request;
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_59 = __this->____webDownloads_16;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_60 = V_0;
		NullCheck(L_60);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_61 = L_60->___clipData_1;
		NullCheck(L_61);
		String_t* L_62 = L_61->___clipID_1;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_63 = V_2;
		NullCheck(L_59);
		Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E(L_59, L_62, L_63, Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E_RuntimeMethod_var);
	}

IL_012f:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebDownload(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebDownload_m668EECF084A405833C0F6A10ED18128521EF5F63 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, String_t* ___downloadPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B9_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B8_0 = NULL;
	{
		// if (!_webDownloads.ContainsKey(clipData.clipID))
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_0 = __this->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___clipData0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5(L_0, L_2, Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0073;
	}

IL_001e:
	{
		// WitVRequest request = _webDownloads[clipData.clipID];
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_5 = __this->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___clipData0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___clipID_1;
		NullCheck(L_5);
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_8;
		L_8 = Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955(L_5, L_7, Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955_RuntimeMethod_var);
		V_0 = L_8;
		// _webDownloads.Remove(clipData.clipID);
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_9 = __this->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___clipData0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___clipID_1;
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027(L_9, L_11, Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		// request?.Cancel();
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_13 = V_0;
		if (L_13)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_004e;
	}

IL_0047:
	{
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_14 = V_0;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, L_14);
	}

IL_004e:
	{
		// request = null;
		V_0 = (WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534*)NULL;
		// WebDownloadEvents?.OnDownloadCancel?.Invoke(clipData, downloadPath);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_15;
		L_15 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(__this, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_16 = L_15;
		G_B6_0 = L_16;
		if (L_16)
		{
			G_B7_0 = L_16;
			goto IL_005c;
		}
	}
	{
		goto IL_006f;
	}

IL_005c:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_17 = G_B7_0->___OnDownloadCancel_2;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0067;
		}
	}
	{
		goto IL_006f;
	}

IL_0067:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___clipData0;
		String_t* L_20 = ___downloadPath1;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B9_0, L_19, L_20, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_006f:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		bool L_21 = V_2;
		return L_21;
	}
}
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::get_PresetWitVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* TTSWit_get_PresetWitVoiceSettings_m9C76F443CF45666E3DBB0D8C1F4780BC4D24CEFE (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSWitVoiceSettings[] PresetWitVoiceSettings => _presetVoiceSettings;
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_0 = __this->____presetVoiceSettings_17;
		return L_0;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::get_PresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSWit_get_PresetVoiceSettings_m6D39B210468DFD1C57B1F93A4BCA1B1BC3868AF9 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* V_1 = NULL;
	TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (_presetVoiceSettings == null || _presetVoiceSettings.Length == 0)
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_0 = __this->____presetVoiceSettings_17;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_1 = __this->____presetVoiceSettings_17;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// _presetVoiceSettings = new TTSWitVoiceSettings[] { new TTSWitVoiceSettings() };
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_3 = (TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31*)(TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31*)SZArrayNew(TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31_il2cpp_TypeInfo_var, (uint32_t)1);
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_4 = L_3;
		TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* L_5 = (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29*)il2cpp_codegen_object_new(TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TTSWitVoiceSettings__ctor_mF02F476EE719E6BE0B984429F0DCF3CE82E4BD24(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29*)L_5);
		__this->____presetVoiceSettings_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____presetVoiceSettings_17), (void*)L_4);
	}

IL_0030:
	{
		// return _presetVoiceSettings;
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_6 = __this->____presetVoiceSettings_17;
		V_1 = (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*)L_6;
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_7 = V_1;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_8 = V_2;
		return L_8;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Integrations.TTSWit::get_VoiceDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSWit_get_VoiceDefaultSettings_m61180B725394044CD43A7E9E6CE5F4C5AC94A3E3 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSVoiceSettings VoiceDefaultSettings => PresetVoiceSettings[0];
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_0;
		L_0 = TTSWit_get_PresetVoiceSettings_m6D39B210468DFD1C57B1F93A4BCA1B1BC3868AF9(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Integrations.TTSWit::EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* TTSWit_EncodeVoiceSettings_m5AB213BBDD047EE7E87C94A8C41D5E1A210FB403 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_2 = NULL;
	int32_t V_3 = 0;
	FieldInfo_t* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_14 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// Dictionary<string, string> parameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if (voiceSettings != null)
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_1 = ___voiceSettings0;
		V_1 = (bool)((!(((RuntimeObject*)(TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0157;
		}
	}
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_3 = ___voiceSettings0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		NullCheck(L_4);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5;
		L_5 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_4, NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_00db;
	}

IL_0027:
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		FieldInfo_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// if (!string.Equals(field.Name, SETTINGS_KEY, StringComparison.CurrentCultureIgnoreCase))
		FieldInfo_t* L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		bool L_12;
		L_12 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_11, _stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21, 1, NULL);
		V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00d6;
		}
	}
	{
		// object fieldVal = field.GetValue(voiceSettings);
		FieldInfo_t* L_14 = V_4;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_15 = ___voiceSettings0;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_14, L_15);
		V_6 = L_16;
		// RangeAttribute range = field.GetCustomAttribute<RangeAttribute>();
		FieldInfo_t* L_17 = V_4;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_18;
		L_18 = CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED(L_17, CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED_RuntimeMethod_var);
		V_7 = L_18;
		// if (range != null && field.FieldType == typeof(int))
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_19 = V_7;
		if (!L_19)
		{
			goto IL_007b;
		}
	}
	{
		FieldInfo_t* L_20 = V_4;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_20);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B6_0 = ((int32_t)(L_24));
		goto IL_007c;
	}

IL_007b:
	{
		G_B6_0 = 0;
	}

IL_007c:
	{
		V_8 = (bool)G_B6_0;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// int oldFloat = (int) fieldVal;
		RuntimeObject* L_26 = V_6;
		V_9 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_26, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// int newFloat = Mathf.Clamp(oldFloat, (int)range.min, (int)range.max);
		int32_t L_27 = V_9;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_28 = V_7;
		NullCheck(L_28);
		float L_29 = L_28->___min_0;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_30 = V_7;
		NullCheck(L_30);
		float L_31 = L_30->___max_1;
		int32_t L_32;
		L_32 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_27, il2cpp_codegen_cast_double_to_int<int32_t>(L_29), il2cpp_codegen_cast_double_to_int<int32_t>(L_31), NULL);
		V_10 = L_32;
		// if (oldFloat != newFloat)
		int32_t L_33 = V_9;
		int32_t L_34 = V_10;
		V_11 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00bf;
		}
	}
	{
		// fieldVal = newFloat;
		int32_t L_36 = V_10;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		V_6 = L_38;
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		// parameters[field.Name] = fieldVal.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = V_0;
		FieldInfo_t* L_40 = V_4;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_40);
		RuntimeObject* L_42 = V_6;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		NullCheck(L_39);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_39, L_41, L_43, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_00d6:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00db:
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		int32_t L_45 = V_3;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_46 = V_2;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (!parameters.ContainsKey(VOICE_KEY) || string.IsNullOrEmpty(parameters[VOICE_KEY]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47 = V_0;
		NullCheck(L_47);
		bool L_48;
		L_48 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_47, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_48)
		{
			goto IL_0103;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_49, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_51;
		L_51 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_50, NULL);
		G_B16_0 = ((int32_t)(L_51));
		goto IL_0104;
	}

IL_0103:
	{
		G_B16_0 = 1;
	}

IL_0104:
	{
		V_12 = (bool)G_B16_0;
		bool L_52 = V_12;
		if (!L_52)
		{
			goto IL_011d;
		}
	}
	{
		// parameters[VOICE_KEY] = TTSWitVoiceSettings.DEFAULT_VOICE;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = V_0;
		NullCheck(L_53);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_53, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_011d:
	{
		// if (!parameters.ContainsKey(STYLE_KEY) || string.IsNullOrEmpty(parameters[STYLE_KEY]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_54 = V_0;
		NullCheck(L_54);
		bool L_55;
		L_55 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_54, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_55)
		{
			goto IL_013c;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_56 = V_0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_56, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_58;
		L_58 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_57, NULL);
		G_B21_0 = ((int32_t)(L_58));
		goto IL_013d;
	}

IL_013c:
	{
		G_B21_0 = 1;
	}

IL_013d:
	{
		V_13 = (bool)G_B21_0;
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_0156;
		}
	}
	{
		// parameters[STYLE_KEY] = TTSWitVoiceSettings.DEFAULT_STYLE;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_60 = V_0;
		NullCheck(L_60);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_60, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0156:
	{
	}

IL_0157:
	{
		// return parameters;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_61 = V_0;
		V_14 = L_61;
		goto IL_015c;
	}

IL_015c:
	{
		// }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_62 = V_14;
		return L_62;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSWit::IsRequestValid(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData0, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// string invalidError = GetInvalidError();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Meta.WitAi.TTS.TTSService::GetInvalidError() */, __this);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return invalidError;
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_0033;
	}

IL_001a:
	{
		// if (clipData == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___clipData0;
		V_3 = (bool)((((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return "No clip data provided";
		V_2 = _stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE;
		goto IL_0033;
	}

IL_002b:
	{
		// return string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_7;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit__ctor_m19DD1DBAAB80D063C85E9BA05423B0B9A363CA54 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*)il2cpp_codegen_object_new(TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F(L_0, NULL);
		__this->___U3CWebStreamEventsU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebStreamEventsU3Ek__BackingField_13), (void*)L_0);
		// private Dictionary<string, VRequest> _webStreams = new Dictionary<string, VRequest>();
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_1 = (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*)il2cpp_codegen_object_new(Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F(L_1, Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		__this->____webStreams_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webStreams_14), (void*)L_1);
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_2 = (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*)il2cpp_codegen_object_new(TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84(L_2, NULL);
		__this->___U3CWebDownloadEventsU3Ek__BackingField_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebDownloadEventsU3Ek__BackingField_15), (void*)L_2);
		// private Dictionary<string, WitVRequest> _webDownloads = new Dictionary<string, WitVRequest>();
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_3 = (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*)il2cpp_codegen_object_new(Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8(L_3, Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8_RuntimeMethod_var);
		__this->____webDownloads_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webDownloads_16), (void*)L_3);
		TTSService__ctor_m0F6DF7E82B702325C181B6D966D0934A143973DE(__this, NULL);
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
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m5805D2BA21D4AE309D44DD9EA35936B0A2AD7F79 (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<RequestStreamFromWeb>b__0(UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317 (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B3_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B2_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B5_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B12_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B11_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B16_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B15_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B18_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B17_0 = NULL;
	{
		// _webStreams.Remove(clipData.clipID);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_1 = L_0->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_1, L_3, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// clipData.clip = clip;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = __this->___clipData_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = ___clip0;
		NullCheck(L_5);
		L_5->___clip_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___clip_6), (void*)L_6);
		// if (string.IsNullOrEmpty(error))
		String_t* L_7 = ___error1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// WebStreamEvents?.OnStreamReady?.Invoke(clipData);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_10 = __this->___U3CU3E4__this_0;
		NullCheck(L_10);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_11;
		L_11 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(L_10, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_12 = L_11;
		G_B2_0 = L_12;
		if (L_12)
		{
			G_B3_0 = L_12;
			goto IL_0045;
		}
	}
	{
		goto IL_005c;
	}

IL_0045:
	{
		NullCheck(G_B3_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_13 = G_B3_0->___OnStreamReady_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_14 = L_13;
		G_B4_0 = L_14;
		if (L_14)
		{
			G_B5_0 = L_14;
			goto IL_0050;
		}
	}
	{
		goto IL_005c;
	}

IL_0050:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = __this->___clipData_1;
		NullCheck(G_B5_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B5_0, L_15, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_005c:
	{
		goto IL_00c8;
	}

IL_005f:
	{
		// if (string.Equals(error, VRequest.CANCEL_ERROR, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_16 = ___error1;
		bool L_17;
		L_17 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_16, _stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA, 1, NULL);
		V_1 = L_17;
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		// WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_19 = __this->___U3CU3E4__this_0;
		NullCheck(L_19);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_20;
		L_20 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(L_19, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_21 = L_20;
		G_B9_0 = L_21;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0082;
		}
	}
	{
		goto IL_0099;
	}

IL_0082:
	{
		NullCheck(G_B10_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_22 = G_B10_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_23 = L_22;
		G_B11_0 = L_23;
		if (L_23)
		{
			G_B12_0 = L_23;
			goto IL_008d;
		}
	}
	{
		goto IL_0099;
	}

IL_008d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_24 = __this->___clipData_1;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B12_0, L_24, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0099:
	{
		goto IL_00c7;
	}

IL_009c:
	{
		// WebStreamEvents?.OnStreamError?.Invoke(clipData, error);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_25 = __this->___U3CU3E4__this_0;
		NullCheck(L_25);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_26;
		L_26 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(L_25, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_27 = L_26;
		G_B15_0 = L_27;
		if (L_27)
		{
			G_B16_0 = L_27;
			goto IL_00ae;
		}
	}
	{
		goto IL_00c6;
	}

IL_00ae:
	{
		NullCheck(G_B16_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_28 = G_B16_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_29 = L_28;
		G_B17_0 = L_29;
		if (L_29)
		{
			G_B18_0 = L_29;
			goto IL_00b9;
		}
	}
	{
		goto IL_00c6;
	}

IL_00b9:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = __this->___clipData_1;
		String_t* L_31 = ___error1;
		NullCheck(G_B18_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B18_0, L_30, L_31, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_00c6:
	{
	}

IL_00c7:
	{
	}

IL_00c8:
	{
		// },
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<RequestStreamFromWeb>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// (progress) => clipData.loadProgress = progress);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_1;
		float L_1 = ___progress0;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
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
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m5BC4C7E86F42C61955F5AD77E3ECDD2D69218CC9 (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<RequestDownloadFromWeb>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, bool ___success0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B3_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B2_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B5_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B9_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B8_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B11_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B10_0 = NULL;
	{
		// _webDownloads.Remove(clipData.clipID);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_1 = L_0->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027(L_1, L_3, Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		// if (string.IsNullOrEmpty(error))
		String_t* L_5 = ___error1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// WebDownloadEvents?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_8 = __this->___U3CU3E4__this_0;
		NullCheck(L_8);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_9;
		L_9 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(L_8, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_10 = L_9;
		G_B2_0 = L_10;
		if (L_10)
		{
			G_B3_0 = L_10;
			goto IL_0039;
		}
	}
	{
		goto IL_0056;
	}

IL_0039:
	{
		NullCheck(G_B3_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_11 = G_B3_0->___OnDownloadSuccess_1;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_0044;
		}
	}
	{
		goto IL_0056;
	}

IL_0044:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = __this->___clipData_1;
		String_t* L_14 = __this->___downloadPath_2;
		NullCheck(G_B5_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B5_0, L_13, L_14, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0056:
	{
		goto IL_008a;
	}

IL_0059:
	{
		// WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_15 = __this->___U3CU3E4__this_0;
		NullCheck(L_15);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_16;
		L_16 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(L_15, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_17 = L_16;
		G_B8_0 = L_17;
		if (L_17)
		{
			G_B9_0 = L_17;
			goto IL_006b;
		}
	}
	{
		goto IL_0089;
	}

IL_006b:
	{
		NullCheck(G_B9_0);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_18 = G_B9_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_0076;
		}
	}
	{
		goto IL_0089;
	}

IL_0076:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = __this->___clipData_1;
		String_t* L_21 = __this->___downloadPath_2;
		String_t* L_22 = ___error1;
		NullCheck(G_B11_0);
		UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A(G_B11_0, L_20, L_21, L_22, UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
	}

IL_0089:
	{
	}

IL_008a:
	{
		// },
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<RequestDownloadFromWeb>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4 (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// (progress) => clipData.loadProgress = progress);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_1;
		float L_1 = ___progress0;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
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
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6 (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8(__this, UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadErrorEvent__ctor_mB66278711D1E80AB517F53B5ED7D92C197E71C1A (TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A(__this, UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSDownloadEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84 (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipDownloadEvent OnDownloadBegin = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_0 = (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6(L_0, NULL);
		__this->___OnDownloadBegin_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadBegin_0), (void*)L_0);
		// public TTSClipDownloadEvent OnDownloadSuccess = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_1 = (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6(L_1, NULL);
		__this->___OnDownloadSuccess_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadSuccess_1), (void*)L_1);
		// public TTSClipDownloadEvent OnDownloadCancel = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_2 = (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6(L_2, NULL);
		__this->___OnDownloadCancel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadCancel_2), (void*)L_2);
		// public TTSClipDownloadErrorEvent OnDownloadError = new TTSClipDownloadErrorEvent();
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_3 = (TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7*)il2cpp_codegen_object_new(TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSClipDownloadErrorEvent__ctor_mB66278711D1E80AB517F53B5ED7D92C197E71C1A(L_3, NULL);
		__this->___OnDownloadError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadError_3), (void*)L_3);
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
// System.Void Meta.WitAi.TTS.Events.TTSServiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceEvents__ctor_m82EF258C00AB920E79E011CF464D9B6E1EBCB353 (TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipEvent OnClipCreated  = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_0, NULL);
		__this->___OnClipCreated_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnClipCreated_0), (void*)L_0);
		// public TTSClipEvent OnClipUnloaded  = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_1 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_1, NULL);
		__this->___OnClipUnloaded_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnClipUnloaded_1), (void*)L_1);
		// public TTSStreamEvents Stream = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_2 = (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*)il2cpp_codegen_object_new(TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F(L_2, NULL);
		__this->___Stream_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_2), (void*)L_2);
		// public TTSDownloadEvents Download = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_3 = (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*)il2cpp_codegen_object_new(TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84(L_3, NULL);
		__this->___Download_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Download_3), (void*)L_3);
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
// System.Void Meta.WitAi.TTS.Events.TTSClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9 (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336(__this, UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSClipErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipErrorEvent__ctor_mD7FE85AFFFD6A1445E8775CE5B1D619D29C77221 (TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8(__this, UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSStreamEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipEvent OnStreamBegin = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_0, NULL);
		__this->___OnStreamBegin_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamBegin_0), (void*)L_0);
		// public TTSClipEvent OnStreamReady = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_1 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_1, NULL);
		__this->___OnStreamReady_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamReady_1), (void*)L_1);
		// public TTSClipEvent OnStreamCancel = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_2 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_2, NULL);
		__this->___OnStreamCancel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamCancel_2), (void*)L_2);
		// public TTSClipErrorEvent OnStreamError = new TTSClipErrorEvent();
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_3 = (TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689*)il2cpp_codegen_object_new(TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSClipErrorEvent__ctor_mD7FE85AFFFD6A1445E8775CE5B1D619D29C77221(L_3, NULL);
		__this->___OnStreamError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamError_3), (void*)L_3);
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
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_Equals_mBBD2D9ADEC1CD3F4D868DFA3F600236004DEC51F (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (obj is TTSClipData other)
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)IsInstClass((RuntimeObject*)L_0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return Equals(other);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = V_0;
		bool L_4;
		L_4 = TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_001f;
	}

IL_001b:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::Equals(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return HasClipId(other.clipID);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___clipID_1;
		bool L_2;
		L_2 = TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::HasClipId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, String_t* ___clipId0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return string.Equals(clipID, clipId, StringComparison.CurrentCultureIgnoreCase);
		String_t* L_0 = __this->___clipID_1;
		String_t* L_1 = ___clipId0;
		bool L_2;
		L_2 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_0, L_1, 1, NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Meta.WitAi.TTS.Data.TTSClipData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSClipData_GetHashCode_m332C85DC8F398D421314EE2F5E892BE623245018 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 31 + clipID.GetHashCode();
		int32_t L_0 = V_0;
		String_t* L_1 = __this->___clipID_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2));
		// return hash;
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Meta.WitAi.TTS.Data.TTSClipData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipData__ctor_m8E8813962847F69D286A609B0CC34ECFAB6AACF7 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) 
{
	{
		// public AudioType audioType = AudioType.WAV; // Default
		__this->___audioType_2 = ((int32_t)20);
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
// System.Void Meta.WitAi.TTS.Data.TTSDiskCacheSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCacheSettings__ctor_m40DDC2AC27F34F5C35BB57426DF1DC9FD96B29F1 (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDiskCacheLocation DiskCacheLocation = TTSDiskCacheLocation.Stream;
		__this->___DiskCacheLocation_0 = 0;
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
// System.Void Meta.WitAi.TTS.Data.TTSVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSVoiceSettings__ctor_m70BCB36D2CDEE8D24E90613CA3B3B7B1232EF018 (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string settingsID = DEFAULT_ID;
		__this->___settingsID_1 = _stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settingsID_1), (void*)_stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = __this->____events_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_0 = __this->____events_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public string DiskPath => _diskPath;
		String_t* L_0 = __this->____diskPath_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// get => _events;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->____events_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipAddedU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipRemovedU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->___U3CWebStreamEventsU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_0 = __this->___U3CWebDownloadEventsU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
