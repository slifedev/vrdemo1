﻿#include "pch-cpp.hpp"

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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<TMPro.TMP_Text,DG.Tweening.DOTweenTMPAnimator>
struct Dictionary_2_tDC2DB168C23D3A6A612BE9A9492FD23181B44978;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform>
struct List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// DG.Tweening.DOTweenTMPAnimator/CharTransform[]
struct CharTransformU5BU5D_t027CA846E6C48A4EDD42A279BB9702B4381DDD35;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// DG.Tweening.DOTweenTMPAnimator
struct DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t09656E8593E5C6344F4AE7D0D93A8DDE574CB429;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tF822D07EEE46DD84F61E72B6926065FE5329C453;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t0F0255D2D37CFDD4B19AB446DFCA9D4C4DB28031;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tEE63B4E7F1084F4A16F88E2D8B794E69E0AA121D;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t90DE4730EC2C2A967665AB5A76AE8DEF888FE07C;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t3F3D54559BB8044DDB614F8D4AD84FBBB2043C96;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tC76E532D1100C91B394F62DAEB4717C22E80740D;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_tB4484EAA82F768AF1743E93B4D534B7DC03994DE;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t660813CEEC780742F4D5C16C90A393DA173A0B5D;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t0638BCEEA72649977FD877A709BD683AB85AD129;
// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t88EECD72E0A5A5BFDCDA6B3548B9E3BD722F5222;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B;;
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com;
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com;;
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke;
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke;;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform>
struct List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharTransformU5BU5D_t027CA846E6C48A4EDD42A279BB9702B4381DDD35* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharTransformU5BU5D_t027CA846E6C48A4EDD42A279BB9702B4381DDD35* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// DG.Tweening.DOTweenTMPAnimator
struct DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7  : public RuntimeObject
{
	// TMPro.TMP_Text DG.Tweening.DOTweenTMPAnimator::<target>k__BackingField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___U3CtargetU3Ek__BackingField_1;
	// TMPro.TMP_TextInfo DG.Tweening.DOTweenTMPAnimator::<textInfo>k__BackingField
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform> DG.Tweening.DOTweenTMPAnimator::_charTransforms
	List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* ____charTransforms_3;
	// TMPro.TMP_MeshInfo[] DG.Tweening.DOTweenTMPAnimator::_cachedMeshInfos
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ____cachedMeshInfos_4;
	// System.Boolean DG.Tweening.DOTweenTMPAnimator::_ignoreTextChangedEvent
	bool ____ignoreTextChangedEvent_5;
};

struct DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TMPro.TMP_Text,DG.Tweening.DOTweenTMPAnimator> DG.Tweening.DOTweenTMPAnimator::_targetToAnimator
	Dictionary_2_tDC2DB168C23D3A6A612BE9A9492FD23181B44978* ____targetToAnimator_0;
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

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t09656E8593E5C6344F4AE7D0D93A8DDE574CB429  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tF822D07EEE46DD84F61E72B6926065FE5329C453  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t0F0255D2D37CFDD4B19AB446DFCA9D4C4DB28031  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tEE63B4E7F1084F4A16F88E2D8B794E69E0AA121D  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t90DE4730EC2C2A967665AB5A76AE8DEF888FE07C  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t3F3D54559BB8044DDB614F8D4AD84FBBB2043C96  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tC76E532D1100C91B394F62DAEB4717C22E80740D  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_tB4484EAA82F768AF1743E93B4D534B7DC03994DE  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t660813CEEC780742F4D5C16C90A393DA173A0B5D  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t0638BCEEA72649977FD877A709BD683AB85AD129  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0::charIndex
	int32_t ___charIndex_1;
};

// DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t88EECD72E0A5A5BFDCDA6B3548B9E3BD722F5222  : public RuntimeObject
{
	// DG.Tweening.DOTweenTMPAnimator DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0::<>4__this
	DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* ___U3CU3E4__this_0;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0::charIndex
	int32_t ___charIndex_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A_StaticFields
{
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___k_Zero_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// DG.Tweening.DOTweenTMPAnimator/CharVertices
struct CharVertices_t1E106A12ECED72454F616393B690FE3292473154 
{
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharVertices::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_0;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharVertices::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_1;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharVertices::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_2;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharVertices::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// DG.Tweening.DOTweenTMPAnimator/CharTransform
struct CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 
{
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/CharTransform::charIndex
	int32_t ___charIndex_0;
	// System.Boolean DG.Tweening.DOTweenTMPAnimator/CharTransform::<isVisible>k__BackingField
	bool ___U3CisVisibleU3Ek__BackingField_1;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_2;
	// UnityEngine.Quaternion DG.Tweening.DOTweenTMPAnimator/CharTransform::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::_topLeftShift
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____topLeftShift_5;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::_topRightShift
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____topRightShift_6;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::_bottomLeftShift
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bottomLeftShift_7;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::_bottomRightShift
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bottomRightShift_8;
	// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/CharTransform::_charMidBaselineOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____charMidBaselineOffset_9;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/CharTransform::_matIndex
	int32_t ____matIndex_10;
	// System.Int32 DG.Tweening.DOTweenTMPAnimator/CharTransform::_firstVertexIndex
	int32_t ____firstVertexIndex_11;
	// TMPro.TMP_MeshInfo DG.Tweening.DOTweenTMPAnimator/CharTransform::_meshInfo
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B ____meshInfo_12;
};
// Native definition for P/Invoke marshalling of DG.Tweening.DOTweenTMPAnimator/CharTransform
struct CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_pinvoke
{
	int32_t ___charIndex_0;
	int32_t ___U3CisVisibleU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____topLeftShift_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____topRightShift_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bottomLeftShift_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bottomRightShift_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____charMidBaselineOffset_9;
	int32_t ____matIndex_10;
	int32_t ____firstVertexIndex_11;
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke ____meshInfo_12;
};
// Native definition for COM marshalling of DG.Tweening.DOTweenTMPAnimator/CharTransform
struct CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_com
{
	int32_t ___charIndex_0;
	int32_t ___U3CisVisibleU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____topLeftShift_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____topRightShift_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bottomLeftShift_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bottomRightShift_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____charMidBaselineOffset_9;
	int32_t ____matIndex_10;
	int32_t ____firstVertexIndex_11;
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com ____meshInfo_12;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B m_Items[1];

	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke(const TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B& unmarshaled, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke_back(const TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke& marshaled, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B& unmarshaled);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke_cleanup(TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_com(const TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B& unmarshaled, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_com_back(const TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com& marshaled, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B& unmarshaled);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_com_cleanup(TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com& marshaled);

// T System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_gshared (List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_gshared (List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* __this, int32_t ___index0, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 ___value1, const RuntimeMethod* method) ;

// System.Void DG.Tweening.DOTweenTMPAnimator/CharVertices::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVertices__ctor_mCBBF285612E5301C4CA25ADFEA1FB7B8C0CC25AE (CharVertices_t1E106A12ECED72454F616393B690FE3292473154* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight3, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.DOTweenTMPAnimator/CharTransform::get_isVisible()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharTransform_get_isVisible_m4F562BFB1D033A2F1AA81B6A50DBEEB0DF4E91D1_inline (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::set_isVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharTransform_set_isVisible_m736C2A4DC666930DB651A49059A23C25C0BD3F26_inline (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::Refresh(TMPro.TMP_TextInfo,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_Refresh_m0384D72BEFC9114E8A0361CC553E8F4D15219B30 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::.ctor(System.Int32,TMPro.TMP_TextInfo,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform__ctor_mD4454207267D4E9B1F38C11FEE8366B5E864B338 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, int32_t ___charIndex0, TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetGeometry(TMPro.TMP_Text,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetGeometry_m9C5E05B19CFC04D39999302C10AAAA2FA362BB2C (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetColors(TMPro.TMP_Text,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetColors_m7B16E391D34AE5D51BF9EDE2CABC56433E058049 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetAll(TMPro.TMP_Text,TMPro.TMP_MeshInfo[],TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetAll_m039FC911C41EF9E433983E0FD7AB63B7A3DED2F3 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos2, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetTransformationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetTransformationData_mD9C57EDE2CB89AA9E2A9579C049711C0181AF9F4 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color32 DG.Tweening.DOTweenTMPAnimator/CharTransform::GetColor(TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B CharTransform_GetColor_mA5DFD1359D2B295D655849443B67A0366C71C18A (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos0, const RuntimeMethod* method) ;
// DG.Tweening.DOTweenTMPAnimator/CharVertices DG.Tweening.DOTweenTMPAnimator/CharTransform::GetVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharVertices_t1E106A12ECED72454F616393B690FE3292473154 CharTransform_GetVertices_mA39F57132658B5C014476633535454690F9DE93D (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::UpdateAlpha(TMPro.TMP_Text,UnityEngine.Color,TMPro.TMP_MeshInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_UpdateAlpha_m2B56F698CF4EE54A4DB6AC2BA35E3CB2ED8D9CC6 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___alphaColor1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos2, bool ___apply3, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::UpdateColor(TMPro.TMP_Text,UnityEngine.Color32,TMPro.TMP_MeshInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_UpdateColor_mA2BFFFFF412146862CBC748A404C2A95AC97D857 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos2, bool ___apply3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::UpdateGeometry(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,TMPro.TMP_MeshInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale3, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos4, bool ___apply5, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ShiftVertices(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ShiftVertices_mD60C35E7D9324EEB1E6C8E64298BDC207894B901 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeftShift1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRightShift2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeftShift3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRightShift4, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetVerticesShift(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetVerticesShift_m684118918795B18382E3B9456AE2A4DDD4C7323E (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform>::get_Item(System.Int32)
inline CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561 (List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 (*) (List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD*, int32_t, const RuntimeMethod*))List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_gshared)(__this, ___index0, method);
}
// TMPro.TMP_TextInfo DG.Tweening.DOTweenTMPAnimator::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* DOTweenTMPAnimator_get_textInfo_mAA123F3C17044974AA8939E42703055795916188_inline (DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// TMPro.TMP_Text DG.Tweening.DOTweenTMPAnimator::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline (DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DG.Tweening.DOTweenTMPAnimator/CharTransform>::set_Item(System.Int32,T)
inline void List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964 (List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* __this, int32_t ___index0, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD*, int32_t, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3, const RuntimeMethod*))List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_gshared)(__this, ___index0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenTMPAnimator/CharVertices::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVertices__ctor_mCBBF285612E5301C4CA25ADFEA1FB7B8C0CC25AE (CharVertices_t1E106A12ECED72454F616393B690FE3292473154* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight3, const RuntimeMethod* method) 
{
	{
		// this.bottomLeft = bottomLeft;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___bottomLeft0;
		__this->___bottomLeft_0 = L_0;
		// this.topLeft = topLeft;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___topLeft1;
		__this->___topLeft_1 = L_1;
		// this.topRight = topRight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___topRight2;
		__this->___topRight_2 = L_2;
		// this.bottomRight = bottomRight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___bottomRight3;
		__this->___bottomRight_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharVertices__ctor_mCBBF285612E5301C4CA25ADFEA1FB7B8C0CC25AE_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight3, const RuntimeMethod* method)
{
	CharVertices_t1E106A12ECED72454F616393B690FE3292473154* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharVertices_t1E106A12ECED72454F616393B690FE3292473154*>(__this + _offset);
	CharVertices__ctor_mCBBF285612E5301C4CA25ADFEA1FB7B8C0CC25AE(_thisAdjusted, ___bottomLeft0, ___topLeft1, ___topRight2, ___bottomRight3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: DG.Tweening.DOTweenTMPAnimator/CharTransform
IL2CPP_EXTERN_C void CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshal_pinvoke(const CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3& unmarshaled, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_pinvoke& marshaled)
{
	Exception_t* ____meshInfo_12Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_meshInfo' of type 'CharTransform'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____meshInfo_12Exception, NULL);
}
IL2CPP_EXTERN_C void CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshal_pinvoke_back(const CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_pinvoke& marshaled, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3& unmarshaled)
{
	Exception_t* ____meshInfo_12Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_meshInfo' of type 'CharTransform'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____meshInfo_12Exception, NULL);
}
// Conversion method for clean up from marshalling of: DG.Tweening.DOTweenTMPAnimator/CharTransform
IL2CPP_EXTERN_C void CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshal_pinvoke_cleanup(CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: DG.Tweening.DOTweenTMPAnimator/CharTransform
IL2CPP_EXTERN_C void CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshal_com(const CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3& unmarshaled, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_com& marshaled)
{
	Exception_t* ____meshInfo_12Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_meshInfo' of type 'CharTransform'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____meshInfo_12Exception, NULL);
}
IL2CPP_EXTERN_C void CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshal_com_back(const CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_com& marshaled, CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3& unmarshaled)
{
	Exception_t* ____meshInfo_12Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_meshInfo' of type 'CharTransform'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____meshInfo_12Exception, NULL);
}
// Conversion method for clean up from marshalling of: DG.Tweening.DOTweenTMPAnimator/CharTransform
IL2CPP_EXTERN_C void CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshal_com_cleanup(CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3_marshaled_com& marshaled)
{
}
// System.Boolean DG.Tweening.DOTweenTMPAnimator/CharTransform::get_isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharTransform_get_isVisible_m4F562BFB1D033A2F1AA81B6A50DBEEB0DF4E91D1 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) 
{
	{
		// public bool isVisible { get; private set; } // FALSE both if it's invisible or if it's a space
		bool L_0 = __this->___U3CisVisibleU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool CharTransform_get_isVisible_m4F562BFB1D033A2F1AA81B6A50DBEEB0DF4E91D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	bool _returnValue;
	_returnValue = CharTransform_get_isVisible_m4F562BFB1D033A2F1AA81B6A50DBEEB0DF4E91D1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::set_isVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_set_isVisible_m736C2A4DC666930DB651A49059A23C25C0BD3F26 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isVisible { get; private set; } // FALSE both if it's invisible or if it's a space
		bool L_0 = ___value0;
		__this->___U3CisVisibleU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_set_isVisible_m736C2A4DC666930DB651A49059A23C25C0BD3F26_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_set_isVisible_m736C2A4DC666930DB651A49059A23C25C0BD3F26_inline(_thisAdjusted, ___value0, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::.ctor(System.Int32,TMPro.TMP_TextInfo,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform__ctor_mD4454207267D4E9B1F38C11FEE8366B5E864B338 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, int32_t ___charIndex0, TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos2, const RuntimeMethod* method) 
{
	{
		// public CharTransform(int charIndex, TMP_TextInfo textInfo, TMP_MeshInfo[] cachedMeshInfos) : this()
		il2cpp_codegen_initobj(__this, sizeof(CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3));
		// this.charIndex = charIndex;
		int32_t L_0 = ___charIndex0;
		__this->___charIndex_0 = L_0;
		// offset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___offset_2 = L_1;
		// rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_3 = L_2;
		// scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___scale_4 = L_3;
		// Refresh(textInfo, cachedMeshInfos);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_4 = ___textInfo1;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_5 = ___cachedMeshInfos2;
		CharTransform_Refresh_m0384D72BEFC9114E8A0361CC553E8F4D15219B30(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform__ctor_mD4454207267D4E9B1F38C11FEE8366B5E864B338_AdjustorThunk (RuntimeObject* __this, int32_t ___charIndex0, TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos2, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform__ctor_mD4454207267D4E9B1F38C11FEE8366B5E864B338(_thisAdjusted, ___charIndex0, ___textInfo1, ___cachedMeshInfos2, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::Refresh(TMPro.TMP_TextInfo,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_Refresh_m0384D72BEFC9114E8A0361CC553E8F4D15219B30 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos1, const RuntimeMethod* method) 
{
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* G_B2_0 = NULL;
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* G_B3_1 = NULL;
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* G_B5_0 = NULL;
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* G_B4_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* G_B6_1 = NULL;
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[charIndex];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_0 = ___textInfo0;
		NullCheck(L_0);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_1 = L_0->___characterInfo_11;
		int32_t L_2 = __this->___charIndex_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// bool isSpaceChar = charInfo.character == ' ';
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_5 = V_0;
		Il2CppChar L_6 = L_5.___character_0;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)32)))? 1 : 0);
		// isVisible = charInfo.isVisible && !isSpaceChar;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_7 = V_0;
		bool L_8 = L_7.___isVisible_40;
		G_B1_0 = __this;
		if (!L_8)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		bool L_9 = V_1;
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		CharTransform_set_isVisible_m736C2A4DC666930DB651A49059A23C25C0BD3F26_inline(G_B3_1, (bool)G_B3_0, NULL);
		// _matIndex = charInfo.materialReferenceIndex;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_10 = V_0;
		int32_t L_11 = L_10.___materialReferenceIndex_9;
		__this->____matIndex_10 = L_11;
		// _firstVertexIndex = charInfo.vertexIndex;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_12 = V_0;
		int32_t L_13 = L_12.___vertexIndex_14;
		__this->____firstVertexIndex_11 = L_13;
		// _meshInfo = textInfo.meshInfo[_matIndex];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_14 = ___textInfo0;
		NullCheck(L_14);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_15 = L_14->___meshInfo_16;
		int32_t L_16 = __this->____matIndex_10;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->____meshInfo_12 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____meshInfo_12))->___material_13), (void*)NULL);
		#endif
		// Vector3[] cachedVertices = cachedMeshInfos[_matIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_19 = ___cachedMeshInfos1;
		int32_t L_20 = __this->____matIndex_10;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___vertices_6;
		V_2 = L_21;
		// _charMidBaselineOffset = isSpaceChar
		//     ? Vector3.zero
		//     : (cachedVertices[_firstVertexIndex] + cachedVertices[_firstVertexIndex + 2]) * 0.5f;
		bool L_22 = V_1;
		G_B4_0 = __this;
		if (L_22)
		{
			G_B5_0 = __this;
			goto IL_00a4;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_2;
		int32_t L_24 = __this->____firstVertexIndex_11;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = V_2;
		int32_t L_28 = __this->____firstVertexIndex_11;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, (0.5f), NULL);
		G_B6_0 = L_32;
		G_B6_1 = G_B4_0;
		goto IL_00a9;
	}

IL_00a4:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B6_0 = L_33;
		G_B6_1 = G_B5_0;
	}

IL_00a9:
	{
		G_B6_1->____charMidBaselineOffset_9 = G_B6_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_Refresh_m0384D72BEFC9114E8A0361CC553E8F4D15219B30_AdjustorThunk (RuntimeObject* __this, TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos1, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_Refresh_m0384D72BEFC9114E8A0361CC553E8F4D15219B30(_thisAdjusted, ___textInfo0, ___cachedMeshInfos1, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetAll(TMPro.TMP_Text,TMPro.TMP_MeshInfo[],TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetAll_m039FC911C41EF9E433983E0FD7AB63B7A3DED2F3 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos2, const RuntimeMethod* method) 
{
	{
		// ResetGeometry(target, cachedMeshInfos);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___target0;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_1 = ___cachedMeshInfos2;
		CharTransform_ResetGeometry_m9C5E05B19CFC04D39999302C10AAAA2FA362BB2C(__this, L_0, L_1, NULL);
		// ResetColors(target, meshInfos);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = ___target0;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_3 = ___meshInfos1;
		CharTransform_ResetColors_m7B16E391D34AE5D51BF9EDE2CABC56433E058049(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_ResetAll_m039FC911C41EF9E433983E0FD7AB63B7A3DED2F3_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos2, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_ResetAll_m039FC911C41EF9E433983E0FD7AB63B7A3DED2F3(_thisAdjusted, ___target0, ___meshInfos1, ___cachedMeshInfos2, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetTransformationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetTransformationData_mD9C57EDE2CB89AA9E2A9579C049711C0181AF9F4 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// offset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___offset_2 = L_0;
		// rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_3 = L_1;
		// scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___scale_4 = L_2;
		// _topLeftShift = _topRightShift = _bottomLeftShift = _bottomRightShift = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3;
		V_0 = L_4;
		__this->____bottomRightShift_8 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		V_0 = L_6;
		__this->____bottomLeftShift_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7;
		V_0 = L_8;
		__this->____topRightShift_6 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		__this->____topLeftShift_5 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_ResetTransformationData_mD9C57EDE2CB89AA9E2A9579C049711C0181AF9F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_ResetTransformationData_mD9C57EDE2CB89AA9E2A9579C049711C0181AF9F4(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetGeometry(TMPro.TMP_Text,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetGeometry_m9C5E05B19CFC04D39999302C10AAAA2FA362BB2C (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos1, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	{
		// ResetTransformationData();
		CharTransform_ResetTransformationData_mD9C57EDE2CB89AA9E2A9579C049711C0181AF9F4(__this, NULL);
		// Vector3[] destinationVertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_0 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0->___vertices_6;
		V_0 = L_1;
		// Vector3[] cachedVertices = cachedMeshInfos[_matIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_2 = ___cachedMeshInfos1;
		int32_t L_3 = __this->____matIndex_10;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___vertices_6;
		V_1 = L_4;
		// destinationVertices[_firstVertexIndex + 0] = cachedVertices[_firstVertexIndex + 0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_0;
		int32_t L_6 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_1;
		int32_t L_8 = __this->____firstVertexIndex_11;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// destinationVertices[_firstVertexIndex + 1] = cachedVertices[_firstVertexIndex + 1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		int32_t L_12 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_1;
		int32_t L_14 = __this->____firstVertexIndex_11;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// destinationVertices[_firstVertexIndex + 2] = cachedVertices[_firstVertexIndex + 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_0;
		int32_t L_18 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_1;
		int32_t L_20 = __this->____firstVertexIndex_11;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_22);
		// destinationVertices[_firstVertexIndex + 3] = cachedVertices[_firstVertexIndex + 3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_0;
		int32_t L_24 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_1;
		int32_t L_26 = __this->____firstVertexIndex_11;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		// _meshInfo.mesh.vertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_29 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = L_29->___mesh_4;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_31 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = L_31->___vertices_6;
		NullCheck(L_30);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_30, L_32, NULL);
		// target.UpdateGeometry(_meshInfo.mesh, _matIndex);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_33 = ___target0;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_34 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = L_34->___mesh_4;
		int32_t L_36 = __this->____matIndex_10;
		NullCheck(L_33);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_33, L_35, L_36);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_ResetGeometry_m9C5E05B19CFC04D39999302C10AAAA2FA362BB2C_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos1, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_ResetGeometry_m9C5E05B19CFC04D39999302C10AAAA2FA362BB2C(_thisAdjusted, ___target0, ___cachedMeshInfos1, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetColors(TMPro.TMP_Text,TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetColors_m7B16E391D34AE5D51BF9EDE2CABC56433E058049 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_1 = NULL;
	{
		// Color color = target.color;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___target0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		V_0 = L_1;
		// Color32[] vertexCols = meshInfos[_matIndex].colors32;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_2 = ___meshInfos1;
		int32_t L_3 = __this->____matIndex_10;
		NullCheck(L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___colors32_11;
		V_1 = L_4;
		// vertexCols[_firstVertexIndex] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = V_1;
		int32_t L_6 = __this->____firstVertexIndex_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		L_8 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_7, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_8);
		// vertexCols[_firstVertexIndex + 1] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = V_1;
		int32_t L_10 = __this->____firstVertexIndex_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		L_12 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_11, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 1))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_12);
		// vertexCols[_firstVertexIndex + 2] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = V_1;
		int32_t L_14 = __this->____firstVertexIndex_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		L_16 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_15, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, 2))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_16);
		// vertexCols[_firstVertexIndex + 3] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_17 = V_1;
		int32_t L_18 = __this->____firstVertexIndex_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20;
		L_20 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_19, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 3))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_20);
		// target.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = ___target0;
		NullCheck(L_21);
		VirtualActionInvoker1< int32_t >::Invoke(108 /* System.Void TMPro.TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */, L_21, ((int32_t)16));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_ResetColors_m7B16E391D34AE5D51BF9EDE2CABC56433E058049_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos1, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_ResetColors_m7B16E391D34AE5D51BF9EDE2CABC56433E058049(_thisAdjusted, ___target0, ___meshInfos1, method);
}
// UnityEngine.Color32 DG.Tweening.DOTweenTMPAnimator/CharTransform::GetColor(TMPro.TMP_MeshInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B CharTransform_GetColor_mA5DFD1359D2B295D655849443B67A0366C71C18A (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return meshInfos[_matIndex].colors32[_firstVertexIndex];
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_0 = ___meshInfos0;
		int32_t L_1 = __this->____matIndex_10;
		NullCheck(L_0);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___colors32_11;
		int32_t L_3 = __this->____firstVertexIndex_11;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B CharTransform_GetColor_mA5DFD1359D2B295D655849443B67A0366C71C18A_AdjustorThunk (RuntimeObject* __this, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos0, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B _returnValue;
	_returnValue = CharTransform_GetColor_mA5DFD1359D2B295D655849443B67A0366C71C18A(_thisAdjusted, ___meshInfos0, method);
	return _returnValue;
}
// DG.Tweening.DOTweenTMPAnimator/CharVertices DG.Tweening.DOTweenTMPAnimator/CharTransform::GetVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharVertices_t1E106A12ECED72454F616393B690FE3292473154 CharTransform_GetVertices_mA39F57132658B5C014476633535454690F9DE93D (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) 
{
	CharVertices_t1E106A12ECED72454F616393B690FE3292473154 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new CharVertices(
		//     _meshInfo.vertices[_firstVertexIndex], _meshInfo.vertices[_firstVertexIndex + 1],
		//     _meshInfo.vertices[_firstVertexIndex + 2], _meshInfo.vertices[_firstVertexIndex + 3]
		// );
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_0 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0->___vertices_6;
		int32_t L_2 = __this->____firstVertexIndex_11;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_5 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = L_5->___vertices_6;
		int32_t L_7 = __this->____firstVertexIndex_11;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_10 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = L_10->___vertices_6;
		int32_t L_12 = __this->____firstVertexIndex_11;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_15 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = L_15->___vertices_6;
		int32_t L_17 = __this->____firstVertexIndex_11;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		CharVertices_t1E106A12ECED72454F616393B690FE3292473154 L_20;
		memset((&L_20), 0, sizeof(L_20));
		CharVertices__ctor_mCBBF285612E5301C4CA25ADFEA1FB7B8C0CC25AE((&L_20), L_4, L_9, L_14, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		CharVertices_t1E106A12ECED72454F616393B690FE3292473154 L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C  CharVertices_t1E106A12ECED72454F616393B690FE3292473154 CharTransform_GetVertices_mA39F57132658B5C014476633535454690F9DE93D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharVertices_t1E106A12ECED72454F616393B690FE3292473154 _returnValue;
	_returnValue = CharTransform_GetVertices_mA39F57132658B5C014476633535454690F9DE93D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::UpdateAlpha(TMPro.TMP_Text,UnityEngine.Color,TMPro.TMP_MeshInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_UpdateAlpha_m2B56F698CF4EE54A4DB6AC2BA35E3CB2ED8D9CC6 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___alphaColor1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos2, bool ___apply3, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_1 = NULL;
	bool V_2 = false;
	{
		// byte alphaByte = (byte)(alphaColor.a * 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___alphaColor1;
		float L_1 = L_0.___a_3;
		V_0 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_1, (255.0f))));
		// Color32[] vertexCols = meshInfos[_matIndex].colors32;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_2 = ___meshInfos2;
		int32_t L_3 = __this->____matIndex_10;
		NullCheck(L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___colors32_11;
		V_1 = L_4;
		// vertexCols[_firstVertexIndex].a = alphaByte;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = V_1;
		int32_t L_6 = __this->____firstVertexIndex_11;
		NullCheck(L_5);
		uint8_t L_7 = V_0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___a_4 = L_7;
		// vertexCols[_firstVertexIndex + 1].a = alphaByte;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_8 = V_1;
		int32_t L_9 = __this->____firstVertexIndex_11;
		NullCheck(L_8);
		uint8_t L_10 = V_0;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, 1)))))->___a_4 = L_10;
		// vertexCols[_firstVertexIndex + 2].a = alphaByte;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_11 = V_1;
		int32_t L_12 = __this->____firstVertexIndex_11;
		NullCheck(L_11);
		uint8_t L_13 = V_0;
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, 2)))))->___a_4 = L_13;
		// vertexCols[_firstVertexIndex + 3].a = alphaByte;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_14 = V_1;
		int32_t L_15 = __this->____firstVertexIndex_11;
		NullCheck(L_14);
		uint8_t L_16 = V_0;
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, 3)))))->___a_4 = L_16;
		// if (apply) target.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		bool L_17 = ___apply3;
		V_2 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		// if (apply) target.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = ___target0;
		NullCheck(L_19);
		VirtualActionInvoker1< int32_t >::Invoke(108 /* System.Void TMPro.TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */, L_19, ((int32_t)16));
	}

IL_007e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_UpdateAlpha_m2B56F698CF4EE54A4DB6AC2BA35E3CB2ED8D9CC6_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___alphaColor1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos2, bool ___apply3, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_UpdateAlpha_m2B56F698CF4EE54A4DB6AC2BA35E3CB2ED8D9CC6(_thisAdjusted, ___target0, ___alphaColor1, ___meshInfos2, ___apply3, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::UpdateColor(TMPro.TMP_Text,UnityEngine.Color32,TMPro.TMP_MeshInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_UpdateColor_mA2BFFFFF412146862CBC748A404C2A95AC97D857 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos2, bool ___apply3, const RuntimeMethod* method) 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	bool V_1 = false;
	{
		// Color32[] vertexCols = meshInfos[_matIndex].colors32;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_0 = ___meshInfos2;
		int32_t L_1 = __this->____matIndex_10;
		NullCheck(L_0);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___colors32_11;
		V_0 = L_2;
		// vertexCols[_firstVertexIndex] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = V_0;
		int32_t L_4 = __this->____firstVertexIndex_11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___color1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_5);
		// vertexCols[_firstVertexIndex + 1] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_0;
		int32_t L_7 = __this->____firstVertexIndex_11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = ___color1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_8);
		// vertexCols[_firstVertexIndex + 2] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = V_0;
		int32_t L_10 = __this->____firstVertexIndex_11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = ___color1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 2))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_11);
		// vertexCols[_firstVertexIndex + 3] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12 = V_0;
		int32_t L_13 = __this->____firstVertexIndex_11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = ___color1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 3))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_14);
		// if (apply) target.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		bool L_15 = ___apply3;
		V_1 = L_15;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_005c;
		}
	}
	{
		// if (apply) target.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = ___target0;
		NullCheck(L_17);
		VirtualActionInvoker1< int32_t >::Invoke(108 /* System.Void TMPro.TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */, L_17, ((int32_t)16));
	}

IL_005c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_UpdateColor_mA2BFFFFF412146862CBC748A404C2A95AC97D857_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfos2, bool ___apply3, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_UpdateColor_mA2BFFFFF412146862CBC748A404C2A95AC97D857(_thisAdjusted, ___target0, ___color1, ___meshInfos2, ___apply3, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::UpdateGeometry(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,TMPro.TMP_MeshInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale3, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos4, bool ___apply5, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// this.offset = offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___offset1;
		__this->___offset_2 = L_0;
		// this.rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation2;
		__this->___rotation_3 = L_1;
		// this.scale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___scale3;
		__this->___scale_4 = L_2;
		// if (!apply) return;
		bool L_3 = ___apply5;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// if (!apply) return;
		goto IL_0208;
	}

IL_0025:
	{
		// Vector3[] destinationVertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_5 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = L_5->___vertices_6;
		V_0 = L_6;
		// Vector3[] cachedVertices = cachedMeshInfos[_matIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_7 = ___cachedMeshInfos4;
		int32_t L_8 = __this->____matIndex_10;
		NullCheck(L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___vertices_6;
		V_1 = L_9;
		// destinationVertices[_firstVertexIndex] = cachedVertices[_firstVertexIndex + 0] - _charMidBaselineOffset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		int32_t L_11 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_1;
		int32_t L_13 = __this->____firstVertexIndex_11;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// destinationVertices[_firstVertexIndex + 1] = cachedVertices[_firstVertexIndex + 1] - _charMidBaselineOffset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		int32_t L_19 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = V_1;
		int32_t L_21 = __this->____firstVertexIndex_11;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// destinationVertices[_firstVertexIndex + 2] = cachedVertices[_firstVertexIndex + 2] - _charMidBaselineOffset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_0;
		int32_t L_27 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_1;
		int32_t L_29 = __this->____firstVertexIndex_11;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_32, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_33);
		// destinationVertices[_firstVertexIndex + 3] = cachedVertices[_firstVertexIndex + 3] - _charMidBaselineOffset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_0;
		int32_t L_35 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = V_1;
		int32_t L_37 = __this->____firstVertexIndex_11;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_39, L_40, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_41);
		// Matrix4x4 matrix = Matrix4x4.TRS(this.offset, this.rotation, this.scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = __this->___offset_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43 = __this->___rotation_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = __this->___scale_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_45;
		L_45 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_42, L_43, L_44, NULL);
		V_2 = L_45;
		// destinationVertices[_firstVertexIndex]
		//     = matrix.MultiplyPoint3x4(destinationVertices[_firstVertexIndex + 0]) + _charMidBaselineOffset + _bottomLeftShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = V_0;
		int32_t L_47 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = V_0;
		int32_t L_49 = __this->____firstVertexIndex_11;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = __this->____bottomLeftShift_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_55, NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_56);
		// destinationVertices[_firstVertexIndex + 1]
		//     = matrix.MultiplyPoint3x4(destinationVertices[_firstVertexIndex + 1]) + _charMidBaselineOffset + _topLeftShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_57 = V_0;
		int32_t L_58 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = V_0;
		int32_t L_60 = __this->____firstVertexIndex_11;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = __this->____topLeftShift_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_66, NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_67);
		// destinationVertices[_firstVertexIndex + 2]
		//     = matrix.MultiplyPoint3x4(destinationVertices[_firstVertexIndex + 2]) + _charMidBaselineOffset + _topRightShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_0;
		int32_t L_69 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = V_0;
		int32_t L_71 = __this->____firstVertexIndex_11;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_73, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_74, L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = __this->____topRightShift_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_76, L_77, NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_78);
		// destinationVertices[_firstVertexIndex + 3]
		//     = matrix.MultiplyPoint3x4(destinationVertices[_firstVertexIndex + 3]) + _charMidBaselineOffset + _bottomRightShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = V_0;
		int32_t L_80 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = V_0;
		int32_t L_82 = __this->____firstVertexIndex_11;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = __this->____charMidBaselineOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = __this->____bottomRightShift_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_87, L_88, NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_89);
		// _meshInfo.mesh.vertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_90 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_91 = L_90->___mesh_4;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_92 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = L_92->___vertices_6;
		NullCheck(L_91);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_91, L_93, NULL);
		// target.UpdateGeometry(_meshInfo.mesh, _matIndex);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_94 = ___target0;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_95 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_96 = L_95->___mesh_4;
		int32_t L_97 = __this->____matIndex_10;
		NullCheck(L_94);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_94, L_96, L_97);
	}

IL_0208:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale3, TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___cachedMeshInfos4, bool ___apply5, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2(_thisAdjusted, ___target0, ___offset1, ___rotation2, ___scale3, ___cachedMeshInfos4, ___apply5, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ShiftVertices(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ShiftVertices_mD60C35E7D9324EEB1E6C8E64298BDC207894B901 (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeftShift1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRightShift2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeftShift3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRightShift4, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		// _topLeftShift += topLeftShift;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____topLeftShift_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___topLeftShift1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		__this->____topLeftShift_5 = L_2;
		// _topRightShift += topRightShift;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____topRightShift_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___topRightShift2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		__this->____topRightShift_6 = L_5;
		// _bottomLeftShift += bottomLeftShift;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____bottomLeftShift_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___bottomLeftShift3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		__this->____bottomLeftShift_7 = L_8;
		// _bottomRightShift += bottomRightShift;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->____bottomRightShift_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___bottomRightShift4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		__this->____bottomRightShift_8 = L_11;
		// Vector3[] destinationVertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_12 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_12->___vertices_6;
		V_0 = L_13;
		// destinationVertices[_firstVertexIndex] = destinationVertices[_firstVertexIndex] + _bottomLeftShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		int32_t L_15 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_0;
		int32_t L_17 = __this->____firstVertexIndex_11;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____bottomLeftShift_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_20, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		// destinationVertices[_firstVertexIndex + 1] = destinationVertices[_firstVertexIndex + 1] + _topLeftShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
		int32_t L_23 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_0;
		int32_t L_25 = __this->____firstVertexIndex_11;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->____topLeftShift_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_28, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		// destinationVertices[_firstVertexIndex + 2] = destinationVertices[_firstVertexIndex + 2] + _topRightShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = V_0;
		int32_t L_31 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_0;
		int32_t L_33 = __this->____firstVertexIndex_11;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->____topRightShift_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_36, NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_37);
		// destinationVertices[_firstVertexIndex + 3] = destinationVertices[_firstVertexIndex + 3] + _bottomRightShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_0;
		int32_t L_39 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = V_0;
		int32_t L_41 = __this->____firstVertexIndex_11;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = __this->____bottomRightShift_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_44, NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_45);
		// _meshInfo.mesh.vertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_46 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = L_46->___mesh_4;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_48 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49 = L_48->___vertices_6;
		NullCheck(L_47);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_47, L_49, NULL);
		// target.UpdateGeometry(_meshInfo.mesh, _matIndex);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_50 = ___target0;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_51 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_52 = L_51->___mesh_4;
		int32_t L_53 = __this->____matIndex_10;
		NullCheck(L_50);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_50, L_52, L_53);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_ShiftVertices_mD60C35E7D9324EEB1E6C8E64298BDC207894B901_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeftShift1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRightShift2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeftShift3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRightShift4, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_ShiftVertices_mD60C35E7D9324EEB1E6C8E64298BDC207894B901(_thisAdjusted, ___target0, ___topLeftShift1, ___topRightShift2, ___bottomLeftShift3, ___bottomRightShift4, method);
}
// System.Void DG.Tweening.DOTweenTMPAnimator/CharTransform::ResetVerticesShift(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharTransform_ResetVerticesShift_m684118918795B18382E3B9456AE2A4DDD4C7323E (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3[] destinationVertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_0 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0->___vertices_6;
		V_0 = L_1;
		// destinationVertices[_firstVertexIndex] = destinationVertices[_firstVertexIndex] - _bottomLeftShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		int32_t L_3 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		int32_t L_5 = __this->____firstVertexIndex_11;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____bottomLeftShift_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_8, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		// destinationVertices[_firstVertexIndex + 1] = destinationVertices[_firstVertexIndex + 1] - _topLeftShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		int32_t L_11 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_0;
		int32_t L_13 = __this->____firstVertexIndex_11;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->____topLeftShift_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// destinationVertices[_firstVertexIndex + 2] = destinationVertices[_firstVertexIndex + 2] - _topRightShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		int32_t L_19 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = V_0;
		int32_t L_21 = __this->____firstVertexIndex_11;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->____topRightShift_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// destinationVertices[_firstVertexIndex + 3] = destinationVertices[_firstVertexIndex + 3] - _bottomRightShift;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_0;
		int32_t L_27 = __this->____firstVertexIndex_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_0;
		int32_t L_29 = __this->____firstVertexIndex_11;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->____bottomRightShift_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_32, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_33);
		// _meshInfo.mesh.vertices = _meshInfo.vertices;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_34 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = L_34->___mesh_4;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_36 = (&__this->____meshInfo_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = L_36->___vertices_6;
		NullCheck(L_35);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_35, L_37, NULL);
		// target.UpdateGeometry(_meshInfo.mesh, _matIndex);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_38 = ___target0;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* L_39 = (&__this->____meshInfo_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_40 = L_39->___mesh_4;
		int32_t L_41 = __this->____matIndex_10;
		NullCheck(L_38);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_38, L_40, L_41);
		// _topLeftShift = _topRightShift = _bottomLeftShift = _bottomRightShift = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42;
		V_1 = L_43;
		__this->____bottomRightShift_8 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44;
		V_1 = L_45;
		__this->____bottomLeftShift_7 = L_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46;
		V_1 = L_47;
		__this->____topRightShift_6 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		__this->____topLeftShift_5 = L_48;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharTransform_ResetVerticesShift_m684118918795B18382E3B9456AE2A4DDD4C7323E_AdjustorThunk (RuntimeObject* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___target0, const RuntimeMethod* method)
{
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3*>(__this + _offset);
	CharTransform_ResetVerticesShift_m684118918795B18382E3B9456AE2A4DDD4C7323E(_thisAdjusted, ___target0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mA25851FA3313187F6AB81ADD677B88F18BB96C40 (U3CU3Ec__DisplayClass34_0_t09656E8593E5C6344F4AE7D0D93A8DDE574CB429* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0::<DOFadeChar>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass34_0_U3CDOFadeCharU3Eb__0_m65D863BE31BCC1A5AF582FDC228BAD6D8E4A0342 (U3CU3Ec__DisplayClass34_0_t09656E8593E5C6344F4AE7D0D93A8DDE574CB429* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => _charTransforms[charIndex].GetColor(textInfo.meshInfo), x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_5;
		L_5 = DOTweenTMPAnimator_get_textInfo_mAA123F3C17044974AA8939E42703055795916188_inline(L_4, NULL);
		NullCheck(L_5);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_6 = L_5->___meshInfo_16;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = CharTransform_GetColor_mA5DFD1359D2B295D655849443B67A0366C71C18A((&V_0), L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		return L_8;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass34_0::<DOFadeChar>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CDOFadeCharU3Eb__1_mE8E8597D4F53B4E04355E27861D8B7F85CB1880D (U3CU3Ec__DisplayClass34_0_t09656E8593E5C6344F4AE7D0D93A8DDE574CB429* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _charTransforms[charIndex].UpdateAlpha(target, x, textInfo.meshInfo);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___x0;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_7 = __this->___U3CU3E4__this_0;
		NullCheck(L_7);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_8;
		L_8 = DOTweenTMPAnimator_get_textInfo_mAA123F3C17044974AA8939E42703055795916188_inline(L_7, NULL);
		NullCheck(L_8);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_9 = L_8->___meshInfo_16;
		CharTransform_UpdateAlpha_m2B56F698CF4EE54A4DB6AC2BA35E3CB2ED8D9CC6((&V_0), L_5, L_6, L_9, (bool)1, NULL);
		// }, endValue, duration);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_mD83C14FF258D99330CD8C3702364E565E4C8F5B8 (U3CU3Ec__DisplayClass35_0_tF822D07EEE46DD84F61E72B6926065FE5329C453* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0::<DOColorChar>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass35_0_U3CDOColorCharU3Eb__0_m90D95A636581CA31C79C29B950DBC617D40909C4 (U3CU3Ec__DisplayClass35_0_tF822D07EEE46DD84F61E72B6926065FE5329C453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => _charTransforms[charIndex].GetColor(textInfo.meshInfo), x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_5;
		L_5 = DOTweenTMPAnimator_get_textInfo_mAA123F3C17044974AA8939E42703055795916188_inline(L_4, NULL);
		NullCheck(L_5);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_6 = L_5->___meshInfo_16;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = CharTransform_GetColor_mA5DFD1359D2B295D655849443B67A0366C71C18A((&V_0), L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		return L_8;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass35_0::<DOColorChar>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CDOColorCharU3Eb__1_m4B7F75E37189356F688C2DC3C0365C05A74124FF (U3CU3Ec__DisplayClass35_0_tF822D07EEE46DD84F61E72B6926065FE5329C453* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _charTransforms[charIndex].UpdateColor(target, x, textInfo.meshInfo);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___x0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_6, NULL);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_8 = __this->___U3CU3E4__this_0;
		NullCheck(L_8);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_9;
		L_9 = DOTweenTMPAnimator_get_textInfo_mAA123F3C17044974AA8939E42703055795916188_inline(L_8, NULL);
		NullCheck(L_9);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_10 = L_9->___meshInfo_16;
		CharTransform_UpdateColor_mA2BFFFFF412146862CBC748A404C2A95AC97D857((&V_0), L_5, L_7, L_10, (bool)1, NULL);
		// }, endValue, duration);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m7038B32A3B81A54058CBDB279D574245AAA0D83A (U3CU3Ec__DisplayClass36_0_t0F0255D2D37CFDD4B19AB446DFCA9D4C4DB28031* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0::<DOOffsetChar>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass36_0_U3CDOOffsetCharU3Eb__0_m0F969B53A3FF423103D62A7BE9312476A42E7C63 (U3CU3Ec__DisplayClass36_0_t0F0255D2D37CFDD4B19AB446DFCA9D4C4DB28031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => _charTransforms[charIndex].offset, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___offset_2;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass36_0::<DOOffsetChar>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CDOOffsetCharU3Eb__1_m6C0D4F6443BBEB97B65035C0E941147EDAF4638E (U3CU3Ec__DisplayClass36_0_t0F0255D2D37CFDD4B19AB446DFCA9D4C4DB28031* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, x, charT.rotation, charT.scale, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___x0;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___rotation_3;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___scale_4;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_6, L_8, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, endValue, duration);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_mD0A049E116222E5FB5B1C4DCA3EFABCD0C4A3443 (U3CU3Ec__DisplayClass37_0_tEE63B4E7F1084F4A16F88E2D8B794E69E0AA121D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0::<DORotateChar>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 U3CU3Ec__DisplayClass37_0_U3CDORotateCharU3Eb__0_mADC24EAC04CCF00015FDBD71973EB3BD41E4C9FA (U3CU3Ec__DisplayClass37_0_tEE63B4E7F1084F4A16F88E2D8B794E69E0AA121D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TweenerCore<Quaternion, Vector3, QuaternionOptions> t = DOTween.To(() => _charTransforms[charIndex].rotation, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = L_3.___rotation_3;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass37_0::<DORotateChar>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3CDORotateCharU3Eb__1_mF913E42E2F085C951B6113AF15E1BF762A190A11 (U3CU3Ec__DisplayClass37_0_tEE63B4E7F1084F4A16F88E2D8B794E69E0AA121D* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, charT.offset, x, charT.scale, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___offset_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___x0;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___scale_4;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_7, L_8, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, endValue, duration);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_mEA00D53BE49F9D8BCCD46C5F9A5C8A75EF5D3185 (U3CU3Ec__DisplayClass39_0_t90DE4730EC2C2A967665AB5A76AE8DEF888FE07C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0::<DOScaleChar>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass39_0_U3CDOScaleCharU3Eb__0_mD95342D2C7D410038AD6E16410D1302B0E7FF96C (U3CU3Ec__DisplayClass39_0_t90DE4730EC2C2A967665AB5A76AE8DEF888FE07C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => _charTransforms[charIndex].scale, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___scale_4;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass39_0::<DOScaleChar>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0_U3CDOScaleCharU3Eb__1_m925A3CCE63400F7B5004BE18FE1F2B860C6962BF (U3CU3Ec__DisplayClass39_0_t90DE4730EC2C2A967665AB5A76AE8DEF888FE07C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, charT.offset, charT.rotation, x, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___offset_2;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___x0;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_7, L_9, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, endValue, duration);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mCB2A9C4E7EDFD7B564CDA05EA33BB81E7EEF17ED (U3CU3Ec__DisplayClass40_0_t3F3D54559BB8044DDB614F8D4AD84FBBB2043C96* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0::<DOPunchCharOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass40_0_U3CDOPunchCharOffsetU3Eb__0_mE2BB6D969E330A3A77C60085E134998FCD7A0DB4 (U3CU3Ec__DisplayClass40_0_t3F3D54559BB8044DDB614F8D4AD84FBBB2043C96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DOTween.Punch(() => _charTransforms[charIndex].offset, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___offset_2;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass40_0::<DOPunchCharOffset>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CDOPunchCharOffsetU3Eb__1_mE96446EF9A5F2ADF197F04DB562A63765A821C95 (U3CU3Ec__DisplayClass40_0_t3F3D54559BB8044DDB614F8D4AD84FBBB2043C96* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, x, charT.rotation, charT.scale, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___x0;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___rotation_3;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___scale_4;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_6, L_8, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, punch, duration, vibrato, elasticity);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mBE5A256494FC12410FE2F1067479C75FC5B8AF8C (U3CU3Ec__DisplayClass41_0_tC76E532D1100C91B394F62DAEB4717C22E80740D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0::<DOPunchCharRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass41_0_U3CDOPunchCharRotationU3Eb__0_m862ECD68FA8EA084A40ACA70B968AE81FE2FE48E (U3CU3Ec__DisplayClass41_0_tC76E532D1100C91B394F62DAEB4717C22E80740D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return DOTween.Punch(() => _charTransforms[charIndex].rotation.eulerAngles, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = (&(&V_0)->___rotation_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_4, NULL);
		return L_5;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass41_0::<DOPunchCharRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0_U3CDOPunchCharRotationU3Eb__1_m994B3A3D7D39FD2D5018C013CACBAD047D9EEE52 (U3CU3Ec__DisplayClass41_0_tC76E532D1100C91B394F62DAEB4717C22E80740D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, charT.offset, Quaternion.Euler(x), charT.scale, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___offset_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___x0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___scale_4;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_12 = __this->___U3CU3E4__this_0;
		NullCheck(L_12);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_13 = L_12->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_7, L_9, L_11, L_13, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_14 = __this->___U3CU3E4__this_0;
		NullCheck(L_14);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_15 = L_14->____charTransforms_3;
		int32_t L_16 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_17 = V_0;
		NullCheck(L_15);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_15, L_16, L_17, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, punch, duration, vibrato, elasticity);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m9113EE317A2DB211DB03A8141BAB6EF7F26D349A (U3CU3Ec__DisplayClass43_0_tB4484EAA82F768AF1743E93B4D534B7DC03994DE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0::<DOPunchCharScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass43_0_U3CDOPunchCharScaleU3Eb__0_m2D2E53BDAD4C9CA46159AE6BCB08921D0B296F2D (U3CU3Ec__DisplayClass43_0_tB4484EAA82F768AF1743E93B4D534B7DC03994DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DOTween.Punch(() => _charTransforms[charIndex].scale, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___scale_4;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass43_0::<DOPunchCharScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0_U3CDOPunchCharScaleU3Eb__1_mA0CC8C15781E737C064080C3D83322C39FEAE35E (U3CU3Ec__DisplayClass43_0_tB4484EAA82F768AF1743E93B4D534B7DC03994DE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, charT.offset, charT.rotation, x, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___offset_2;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___x0;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_7, L_9, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, punch, duration, vibrato, elasticity);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m280A49DB0530E5E5D5C0B4BBE1FEB6E3C72ECC0B (U3CU3Ec__DisplayClass45_0_t660813CEEC780742F4D5C16C90A393DA173A0B5D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0::<DOShakeCharOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass45_0_U3CDOShakeCharOffsetU3Eb__0_mFDE8069D76ACC0264AE54265B50BE35F6A033B2B (U3CU3Ec__DisplayClass45_0_t660813CEEC780742F4D5C16C90A393DA173A0B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DOTween.Shake(() => _charTransforms[charIndex].offset, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___offset_2;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass45_0::<DOShakeCharOffset>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CDOShakeCharOffsetU3Eb__1_mCEB18235B483FEC6C04394ABA1D5C51911808A39 (U3CU3Ec__DisplayClass45_0_t660813CEEC780742F4D5C16C90A393DA173A0B5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, x, charT.rotation, charT.scale, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___x0;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___rotation_3;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___scale_4;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_6, L_8, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, duration, strength, vibrato, randomness, fadeOut);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0__ctor_m494AF40CFC4D4399B2B35016FD6921E4CAA328E5 (U3CU3Ec__DisplayClass46_0_t0638BCEEA72649977FD877A709BD683AB85AD129* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0::<DOShakeCharRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass46_0_U3CDOShakeCharRotationU3Eb__0_mC41D01CC00372332340A801E2C1CE5932A63CC19 (U3CU3Ec__DisplayClass46_0_t0638BCEEA72649977FD877A709BD683AB85AD129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return DOTween.Shake(() => _charTransforms[charIndex].rotation.eulerAngles, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = (&(&V_0)->___rotation_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_4, NULL);
		return L_5;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass46_0::<DOShakeCharRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0_U3CDOShakeCharRotationU3Eb__1_m74B36B714175392127A556B2A0914DE9B3D5F539 (U3CU3Ec__DisplayClass46_0_t0638BCEEA72649977FD877A709BD683AB85AD129* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, charT.offset, Quaternion.Euler(x), charT.scale, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___offset_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___x0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___scale_4;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_12 = __this->___U3CU3E4__this_0;
		NullCheck(L_12);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_13 = L_12->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_7, L_9, L_11, L_13, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_14 = __this->___U3CU3E4__this_0;
		NullCheck(L_14);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_15 = L_14->____charTransforms_3;
		int32_t L_16 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_17 = V_0;
		NullCheck(L_15);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_15, L_16, L_17, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, duration, strength, vibrato, randomness, fadeOut);
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
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m0409DDF6DAC239485F3352F3CFB5F6BF68A8BEB7 (U3CU3Ec__DisplayClass48_0_t88EECD72E0A5A5BFDCDA6B3548B9E3BD722F5222* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0::<DOShakeCharScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass48_0_U3CDOShakeCharScaleU3Eb__0_mFC72963020C5BA697DCD96DC6CBE28A364B2DB47 (U3CU3Ec__DisplayClass48_0_t88EECD72E0A5A5BFDCDA6B3548B9E3BD722F5222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DOTween.Shake(() => _charTransforms[charIndex].scale, x => {
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___scale_4;
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenTMPAnimator/<>c__DisplayClass48_0::<DOShakeCharScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CDOShakeCharScaleU3Eb__1_m128969A36598D2139BCEF8ED699275C6BF51A8AD (U3CU3Ec__DisplayClass48_0_t88EECD72E0A5A5BFDCDA6B3548B9E3BD722F5222* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CharTransform charT = _charTransforms[charIndex];
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_1 = L_0->____charTransforms_3;
		int32_t L_2 = __this->___charIndex_1;
		NullCheck(L_1);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_3;
		L_3 = List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561(L_1, L_2, List_1_get_Item_m0A3C4C882B5485D93087C21AE1A2E08C83F48561_RuntimeMethod_var);
		V_0 = L_3;
		// charT.UpdateGeometry(target, charT.offset, charT.rotation, x, _cachedMeshInfos);
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline(L_4, NULL);
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___offset_2;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_8 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___x0;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_12 = L_11->____cachedMeshInfos_4;
		CharTransform_UpdateGeometry_m895F6B5D56A67532D06B96ACBA7EB47F3C4556A2((&V_0), L_5, L_7, L_9, L_10, L_12, (bool)1, NULL);
		// _charTransforms[charIndex] = charT;
		DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		List_1_t7B3F257CF0DCABDD3EED05DC186BFB27773D4FAD* L_14 = L_13->____charTransforms_3;
		int32_t L_15 = __this->___charIndex_1;
		CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3 L_16 = V_0;
		NullCheck(L_14);
		List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964(L_14, L_15, L_16, List_1_set_Item_m4BC0A9B1FE82B5B47923AB1E17B21783DE806964_RuntimeMethod_var);
		// }, duration, strength, vibrato, randomness, fadeOut);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharTransform_get_isVisible_m4F562BFB1D033A2F1AA81B6A50DBEEB0DF4E91D1_inline (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, const RuntimeMethod* method) 
{
	{
		// public bool isVisible { get; private set; } // FALSE both if it's invisible or if it's a space
		bool L_0 = __this->___U3CisVisibleU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharTransform_set_isVisible_m736C2A4DC666930DB651A49059A23C25C0BD3F26_inline (CharTransform_t261A12D563F1399A48E5924D39CAB027B9023BE3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isVisible { get; private set; } // FALSE both if it's invisible or if it's a space
		bool L_0 = ___value0;
		__this->___U3CisVisibleU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* DOTweenTMPAnimator_get_textInfo_mAA123F3C17044974AA8939E42703055795916188_inline (DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* __this, const RuntimeMethod* method) 
{
	{
		// public TMP_TextInfo textInfo { get; private set; }
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_0 = __this->___U3CtextInfoU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* DOTweenTMPAnimator_get_target_mED36C573645C76062A998A7D3BF56079350A6A25_inline (DOTweenTMPAnimator_tB3C23F563B8AC6BD594C93570D96802A3BC746D7* __this, const RuntimeMethod* method) 
{
	{
		// public TMP_Text target { get; private set; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___U3CtargetU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
