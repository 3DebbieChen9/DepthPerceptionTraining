#include "pch-cpp.hpp"

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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<TMPro.TextMeshProUGUI>
struct Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
// UnityEngine.UI.TableUI.ListWrapper`1<System.Boolean>
struct ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88;
// UnityEngine.UI.TableUI.ListWrapper`1<System.Object>
struct ListWrapper_1_t6D238F37C94D518CD4F93A9B9A9A6A6A16E3C8B2;
// UnityEngine.UI.TableUI.ListWrapper`1<TMPro.TextMeshProUGUI>
struct ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D;
// System.Collections.Generic.List`1<UnityEngine.UIVertex[]>
struct List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F;
// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>
struct List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_tAB7976FADCF872E418770E60783056C23394843D;
// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>
struct List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>
struct List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UIVertex[][]
struct UIVertexU5BU5DU5BU5D_t9773ED8C3DB744032B1D2D980863FD816AAD7EE7;
// UnityEngine.UI.TableUI.BoolList[]
struct BoolListU5BU5D_t9A49983A576343F002E69C50EA9667F887F0EFAD;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// UnityEngine.UI.TableUI.TextProperties[]
struct TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.TableUI.TableUI/TextMeshList[]
struct TextMeshListU5BU5D_t787DE3DF195910767821631AB530F6B861331310;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.TableUI.BoolList
struct BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// TMPro.KerningTable
struct KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.TableUI.SelectionGrid
struct SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA;
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
// UnityEngine.UI.TableUI.TableUI
struct TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.UI.TableUI.TextProperties
struct TextProperties_t61A04E65151B984920F334D64F0069EF211810DA;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.UI.TableUI.UILineRenderer
struct UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.TableUI.Utils
struct Utils_t008A189A11924F38490005A4FF6C5A2781227B63;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass82_0
struct U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7;
// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass83_0
struct U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1;
// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass85_0
struct U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D;
// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8;
// UnityEngine.UI.TableUI.TableUI/TextMeshList
struct TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90;
// UnityEngine.UI.TableUI.TableUI/v3Fun
struct v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2;
// UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent
struct TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BorderType_t88ACCEBBBA7FBA3761409A7CD73085B68F477A6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E7CEA65A78D404CA66F61EFE31DDE74A9102DCB;
IL2CPP_EXTERN_C String_t* _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138;
IL2CPP_EXTERN_C String_t* _stringLiteral1F548925FB56982D6E0D66F68CD5F05175D538DF;
IL2CPP_EXTERN_C String_t* _stringLiteral2265F5D61F5055E7A323259B86304FC3DCF1B325;
IL2CPP_EXTERN_C String_t* _stringLiteral3418BA1E1168E1BE4FCE03CFBDB0B057027061C5;
IL2CPP_EXTERN_C String_t* _stringLiteral421DB428A0E2F250E0ADBFAE3468F9C525A18B9E;
IL2CPP_EXTERN_C String_t* _stringLiteral4B3BB98D99E35689C7B3DBEAA46DBDAF5908B39C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4CE447E8F8D42258FCBE3756D4615C309989EB;
IL2CPP_EXTERN_C String_t* _stringLiteral589A74837A2634FEA2C0BAECCD5E79EA1BBE5386;
IL2CPP_EXTERN_C String_t* _stringLiteral64A3A93F16AE39DA5F2296574C2BFD9118AAD52E;
IL2CPP_EXTERN_C String_t* _stringLiteral65D715095A1561177161BA4B4CA07AC18D3B9431;
IL2CPP_EXTERN_C String_t* _stringLiteral6A9A67B54F7C32E4F294A3CCEE13A3BA9100A6C3;
IL2CPP_EXTERN_C String_t* _stringLiteral75CCF9976503B89EFABAED874CC944E7685EDA23;
IL2CPP_EXTERN_C String_t* _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA;
IL2CPP_EXTERN_C String_t* _stringLiteral785F2AD792C68319B5883F0DFC0DD2C7C3772134;
IL2CPP_EXTERN_C String_t* _stringLiteral81E4116F4DF59CA2D286D9CCB6D03C41846AD39D;
IL2CPP_EXTERN_C String_t* _stringLiteral8642394DAB8A9C9F22DAF9F5E0D8F2CF2377D31D;
IL2CPP_EXTERN_C String_t* _stringLiteral8C97AF4C5368CAFA5EF27C9CA4914382F6B93B81;
IL2CPP_EXTERN_C String_t* _stringLiteral8D18D41C3CA40217AB14C2E3DC0654E77A3140CA;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA6C551E3295452328A321651DAB71B5BE4E640;
IL2CPP_EXTERN_C String_t* _stringLiteral95AF4C33646E5C4C741EEC46E6A8489E8C2F9F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5C7EA7F45892C691F1DE24423066475F2E5026C;
IL2CPP_EXTERN_C String_t* _stringLiteralA80C57433B9B6B9A44EBEA0A90482BA2D67568E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA914EFBE73739B6FE2F741B8AFCBEB94F3835B9F;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAA7E5F5F3B1AAA876E53AB23C7C3D1F3E0C2FA;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1;
IL2CPP_EXTERN_C String_t* _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC1CBB6587B9CB9A5FABEF74242F50F5C4647CA59;
IL2CPP_EXTERN_C String_t* _stringLiteralC7FE8AB16F922127B0F7E118A9CC519BCCD5ACFC;
IL2CPP_EXTERN_C String_t* _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0;
IL2CPP_EXTERN_C String_t* _stringLiteralD2F90B879E9C875DD5A61CDA1C1FDE5C0B9C1550;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C0332D9B3D625D6EA02B86B4A4F1FD0FD3ACF4;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8A556F0A8E6FC1246068E30375330FBE1867F0;
IL2CPP_EXTERN_C String_t* _stringLiteralEF94427D72D8E7DBB1FA2C1AF19F0F19A8A41881;
IL2CPP_EXTERN_C String_t* _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_m10DE66888A1B510306C0DB6732BDE81946F13DB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m3A387633F028BC451972FCA5F9ABC2EFA423BD81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWrapper_1__ctor_m99557073542244D4B9234736CAC9B329DFFDF588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD13CB4A2DFFD0D6658102019CAAB5A8E4DE1EC8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFE7DE0F2BAFF34A195D6DB7C1C2A23AB8D7B6E9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m40B14D9AE53DAEC6A897EAC0C1F45BC465C8A33E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC364CD8A53DBD0C6F0DA93CCEF237EBD66C9D782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC84E55BAB12C038D1130D0097E80C8CB8EC5103E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m05B894174509EB79F5EBD381345E1CF713BBCB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74DD8A4333A1A043A7B36F3160548D8E90D9C3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9D4D1699D236F2C033EB8F9971496CE0C70233C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2B62A3EFFCB4F00253FDE3F36D0B70FF16288436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m848E5495D0C2ED884A6CFC8CF008F61269DB334A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA1AB4EC7E746BBFD9CF47D2A0613C0305BB1BA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_m7CE1759F36FB0A0D338DF98AC56EE9D073955BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TableUI_RefreshBodyTextProperties_mF1E1BA1C6A5FF3716B156CA4640EBD365451B70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TableUI_RefreshHeaderTextProperties_mA187DA6F1E41F1C8EF15FDFC79B62ECD403982F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextProperties_U3Cset_AutoSizeU3Eb__19_0_m3CA78E732FBBDE252A8A3D452198A13C4DA3C8B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass82_0_U3CGenerateVerticalBordersU3Eb__0_mDBE4927E47133955044C6CC15B1B925453AE595F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass83_0_U3CGenerateHorizontalBordersU3Eb__0_mADCF414E9728583D591C631A8764AFBB3937E839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass85_0_U3CGenerateHeaderBorderU3Eb__0_mC01FB3D7C7A44705F7584698A3CE0E0F97478128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass86_0_U3CGenerateOuterBorderU3Eb__0_mF06DF58298D3EC614902165A605EF2B454AC37E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
struct TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE2CC53B29E3130F1DF713307B54DE4BBA9D012F9 
{
};

// UnityEngine.UI.TableUI.ListWrapper`1<System.Boolean>
struct ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.UI.TableUI.ListWrapper`1::list
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___list_0;
};

// UnityEngine.UI.TableUI.ListWrapper`1<TMPro.TextMeshProUGUI>
struct ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.UI.TableUI.ListWrapper`1::list
	List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* ___list_0;
};

// System.Collections.Generic.List`1<UnityEngine.UIVertex[]>
struct List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5DU5BU5D_t9773ED8C3DB744032B1D2D980863FD816AAD7EE7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIVertexU5BU5DU5BU5D_t9773ED8C3DB744032B1D2D980863FD816AAD7EE7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>
struct List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoolListU5BU5D_t9A49983A576343F002E69C50EA9667F887F0EFAD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoolListU5BU5D_t9A49983A576343F002E69C50EA9667F887F0EFAD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>
struct List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>
struct List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextMeshListU5BU5D_t787DE3DF195910767821631AB530F6B861331310* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextMeshListU5BU5D_t787DE3DF195910767821631AB530F6B861331310* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// UnityEngine.UI.TableUI.Utils
struct Utils_t008A189A11924F38490005A4FF6C5A2781227B63  : public RuntimeObject
{
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

// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass82_0
struct U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7  : public RuntimeObject
{
	// UnityEngine.Transform UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass82_0::content
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___content_0;
};

// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass83_0
struct U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1  : public RuntimeObject
{
	// UnityEngine.Transform UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass83_0::content
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___content_0;
};

// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass85_0
struct U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D  : public RuntimeObject
{
	// UnityEngine.Transform UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass85_0::content
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___content_0;
};

// UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8  : public RuntimeObject
{
	// UnityEngine.Transform UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass86_0::borders
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___borders_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Single>
struct Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	float ____current_3;
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

// UnityEngine.UI.TableUI.BoolList
struct BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF  : public ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF 
{
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;
};
// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.UI.TableUI.TableUI/TextMeshList
struct TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90  : public ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D
{
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.TableUI.SelectionGrid
struct SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC  : public RuntimeObject
{
	// UnityEngine.GUISkin UnityEngine.UI.TableUI.SelectionGrid::skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___skin_0;
	// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList> UnityEngine.UI.TableUI.SelectionGrid::_values
	List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* ____values_1;
	// UnityEngine.Vector2Int UnityEngine.UI.TableUI.SelectionGrid::chosenCell
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___chosenCell_2;
};

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
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

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
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

// System.Action`1<TMPro.TextMeshProUGUI>
struct Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// TMPro.TMP_Asset
struct TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.UI.TableUI.TableUI/v3Fun
struct v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2  : public MulticastDelegate_t
{
};

// UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent
struct TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B  : public MulticastDelegate_t
{
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160  : public TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969
{
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0* ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8* ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_tAB7976FADCF872E418770E60783056C23394843D* ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B* ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA* ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_MissingUnicodesFromFontFile_68;
};

struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_GlyphIndexArray_69;
};

// UnityEngine.UI.TableUI.TableUI
struct TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.TableUI.SelectionGrid UnityEngine.UI.TableUI.TableUI::selectionGrid
	SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* ___selectionGrid_4;
	// System.Collections.Generic.List`1<System.Single> UnityEngine.UI.TableUI.TableUI::_columnsWidth
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____columnsWidth_9;
	// System.Collections.Generic.List`1<System.Single> UnityEngine.UI.TableUI.TableUI::_rowsHeight
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____rowsHeight_10;
	// System.Boolean UnityEngine.UI.TableUI.TableUI::_textAutoScale
	bool ____textAutoScale_11;
	// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList> UnityEngine.UI.TableUI.TableUI::data
	List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* ___data_12;
	// System.Int32 UnityEngine.UI.TableUI.TableUI::_columns
	int32_t ____columns_13;
	// System.Int32 UnityEngine.UI.TableUI.TableUI::_rows
	int32_t ____rows_14;
	// UnityEngine.UI.TableUI.TextProperties UnityEngine.UI.TableUI.TableUI::headerCellProperties
	TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* ___headerCellProperties_15;
	// UnityEngine.UI.TableUI.TextProperties UnityEngine.UI.TableUI.TableUI::bodyCellProperties
	TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* ___bodyCellProperties_16;
	// System.Boolean UnityEngine.UI.TableUI.TableUI::_striped
	bool ____striped_17;
	// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::_mainColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____mainColor_18;
	// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::_secondaryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____secondaryColor_19;
	// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::_borderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____borderColor_20;
	// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::_headerColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____headerColor_21;
	// UnityEngine.UI.TableUI.BorderType UnityEngine.UI.TableUI.TableUI::_borderType
	int32_t ____borderType_22;
	// System.Single UnityEngine.UI.TableUI.TableUI::_borderThickness
	float ____borderThickness_23;
	// System.Boolean UnityEngine.UI.TableUI.TableUI::_header
	bool ____header_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.UI.TableUI.TableUI::rows
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___rows_25;
	// System.String UnityEngine.UI.TableUI.TableUI::undoRedoEvent
	String_t* ___undoRedoEvent_26;
};

struct TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields
{
	// System.Int32 UnityEngine.UI.TableUI.TableUI::MAX_ROWS
	int32_t ___MAX_ROWS_5;
	// System.Int32 UnityEngine.UI.TableUI.TableUI::MIN_ROWS
	int32_t ___MIN_ROWS_6;
	// System.Int32 UnityEngine.UI.TableUI.TableUI::MAX_COL
	int32_t ___MAX_COL_7;
	// System.Int32 UnityEngine.UI.TableUI.TableUI::MIN_COL
	int32_t ___MIN_COL_8;
};

// UnityEngine.UI.TableUI.TextProperties
struct TextProperties_t61A04E65151B984920F334D64F0069EF211810DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.TableUI.TextProperties/GroupSelectionMethod UnityEngine.UI.TableUI.TextProperties::groupSelectionMethod
	int32_t ___groupSelectionMethod_4;
	// UnityEngine.Vector2Int UnityEngine.UI.TableUI.TextProperties::min
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___min_5;
	// UnityEngine.Vector2Int UnityEngine.UI.TableUI.TextProperties::max
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___max_6;
	// TMPro.TMP_FontAsset UnityEngine.UI.TableUI.TextProperties::_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ____fontAsset_7;
	// System.Int32 UnityEngine.UI.TableUI.TextProperties::_fontStyle
	int32_t ____fontStyle_8;
	// System.Single UnityEngine.UI.TableUI.TextProperties::_fontSize
	float ____fontSize_9;
	// System.Boolean UnityEngine.UI.TableUI.TextProperties::_autoSize
	bool ____autoSize_10;
	// System.Single UnityEngine.UI.TableUI.TextProperties::_fontSizeMin
	float ____fontSizeMin_11;
	// System.Single UnityEngine.UI.TableUI.TextProperties::_fontSizeMax
	float ____fontSizeMax_12;
	// System.Single UnityEngine.UI.TableUI.TextProperties::_characterWidthAdjustment
	float ____characterWidthAdjustment_13;
	// System.Single UnityEngine.UI.TableUI.TextProperties::_lineSpacingAdjustment
	float ____lineSpacingAdjustment_14;
	// UnityEngine.Color UnityEngine.UI.TableUI.TextProperties::_vertexColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____vertexColor_15;
	// TMPro.TextAlignmentOptions UnityEngine.UI.TableUI.TextProperties::_alignment
	int32_t ____alignment_16;
	// System.Single UnityEngine.UI.TableUI.TextProperties::_wrapMixWC
	float ____wrapMixWC_17;
	// UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent UnityEngine.UI.TableUI.TextProperties::textPropertiesUndoEvent
	TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* ___textPropertiesUndoEvent_18;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.TableUI.UILineRenderer
struct UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.Single UnityEngine.UI.TableUI.UILineRenderer::_lineThickness
	float ____lineThickness_36;
	// UnityEngine.Vector2[] UnityEngine.UI.TableUI.UILineRenderer::m_points
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_points_37;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.TableUI.TextProperties[]
struct TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186  : public RuntimeArray
{
	ALIGN_FIELD (8) TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* m_Items[1];

	inline TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextProperties_t61A04E65151B984920F334D64F0069EF211810DA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextProperties_t61A04E65151B984920F334D64F0069EF211810DA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.ListWrapper`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListWrapper_1__ctor_mDED09F55C95E45CCA87CB87AD7A46E95969F84C2_gshared (ListWrapper_1_t6D238F37C94D518CD4F93A9B9A9A6A6A16E3C8B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.ListWrapper`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD_gshared (ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateRowHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateRowHeight_m75218EB96C2C155A12BA36C461F158D0469D460E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>::get_Item(System.Int32)
inline TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5 (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* (*) (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::get_Item(System.Int32)
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateColumns(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateColumns_m49BC1ED794ECC65863F43AE4B803011502824B2D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___columnNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateColumnsWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateRowsWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateTableSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateBorders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateRows(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateRows_m413255DE9B468ACC764E9882FC7E54F078CB476E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___rowNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateColor_m6BA08F3C8523A3356F9DEEE6124B9BC1A591513D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.TableUI.UILineRenderer>()
inline UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.Utils::SetDirty(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateHeaderColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateHeaderColor_m84C815FAABB29B7E9E14622A928B6C3ECFCCA44D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.UILineRenderer::set_LineThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_set_LineThickness_mCFE1CE39ED210D7B36BD5F8D05ED57F07DD6CF61 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.TableUI.TableUI::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_HeaderColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_HeaderColor_mF8C823F563211A455DDB76A424B19B12747D0B3A_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TextProperties::set_FontStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_FontStyle_mA9FF253CF619B85293165E481B397CF53D95D622 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::GetRowColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_GetRowColor_mB3A71596F274ABAC287283AC42990F190A84A44C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.SelectionGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGrid__ctor_m31F71AB683BB1F62DCC4A635525BECF9CB86CD65 (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GUISkin>(System.String)
inline GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* Resources_Load_TisGUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_m7CE1759F36FB0A0D338DF98AC56EE9D073955BF9 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<UnityEngine.UI.TableUI.TextProperties>()
inline TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186* Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPropertiesUndoEvent__ctor_m6DEC92DFD5EA5E962CECFDB9E253E5F5EE6B34A8 (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI::GetRectSize(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TableUI_GetRectSize_m8D902702636A56CC20EA2855DFBE295674CBEDDB (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>::.ctor()
inline void List_1__ctor_m74DD8A4333A1A043A7B36F3160548D8E90D9C3C0 (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m491B4D39E33A8A136336429BAF702E30FF85F45A (String_t* ___htmlString0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::set_BorderColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_BorderColor_m264355C34561B8F6C7B1E070321BCCD9FA53BC60 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>::.ctor()
inline void List_1__ctor_m9D4D1699D236F2C033EB8F9971496CE0C70233C1 (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.BoolList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolList__ctor_m06514AEB507E58BBB0F25609245C37686C9BEC46 (BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
inline void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList> UnityEngine.UI.TableUI.SelectionGrid::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>::Add(T)
inline void List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_inline (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* __this, BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511*, BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_Rows(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Rows_mED2731FB15BE5BF122DCEC8F7A02F6DA6564A3B3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::set_Columns(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Columns_m145EC6A2DDE616D45FDB69F03CD43253B7FB6DDA (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::set_BorderType(UnityEngine.UI.TableUI.BorderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_BorderType_mF19BC37446F2F95586122F3096993A366C8FA642 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::set_Header(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Header_mEF5A9FA3C1B4D39A17BFA1ED5B2E823FDE831F8D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::set_Striped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Striped_m490725F976810B2ADF1A5F0C3CC7717FE77EA961 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::set_BorderThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_BorderThickness_m957A3435D458BC0470EE72D2D669FCE1F82D5B68 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetLocalCorners_m18B3E5ED5EB24AD46279199A134CD7F218D3DD11 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___fourCornersArray0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.TableUI.TableUI::get_Rows()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.Utils::RegisterFullObjectHierarchyUndo(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RegisterFullObjectHierarchyUndo_mEEC014ABEC4E241F56A61026AA4FAC69903BE7C0 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>::get_Count()
inline int32_t List_1_get_Count_mA1AB4EC7E746BBFD9CF47D2A0613C0305BB1BA4A_inline (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m40B14D9AE53DAEC6A897EAC0C1F45BC465C8A33E (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>::get_Count()
inline int32_t List_1_get_Count_m848E5495D0C2ED884A6CFC8CF008F61269DB334A_inline (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC364CD8A53DBD0C6F0DA93CCEF237EBD66C9D782 (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.TableUI.Utils::DestroyObjectImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_DestroyObjectImmediate_mA373C0890F5922FF051E846F78B0AFB22C783BB5 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Single> UnityEngine.UI.TableUI.TableUI::get_RowsHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TableUI::sumAllValuesInList(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateRow(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateRow_mA50A86194D066BE96B38F1E0425E0BA81EE5CF33 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, String_t* ___name0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.Utils::RegisterCreatedObjectUndo(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RegisterCreatedObjectUndo_m8E178E224CB09F0C7386F5DAF03DCF2F0BF169E9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.HorizontalLayoutGroup>()
inline HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childForceExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childForceExpandWidth_m351827AA1A453ACD17C2EAC7B4DAB9C5DB1760E5 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childForceExpandHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_mA144CF421614F41813DE346AA9D1C64621C6C2E5 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI/TextMeshList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshList__ctor_m590EB29929C2042C0D9CC20D7C54F8E93C26FC5E (TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::.ctor()
inline void List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7 (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TMPro.TextMeshProUGUI UnityEngine.UI.TableUI.TableUI::GenerateColumnInRow(System.String,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* TableUI_GenerateColumnInRow_mC9628CE2C894FC2618B45A94BBFB562E965A3BD3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, String_t* ___name0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___row1, int32_t ___rowN2, int32_t ___columnN3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::Add(T)
inline void List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_inline (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>::get_Item(System.Int32)
inline BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2 (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* (*) (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.UI.TableUI.TableUI::get_Columns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.TableUI.TableUI/TextMeshList>::Add(T)
inline void List_1_Add_mFE7DE0F2BAFF34A195D6DB7C1C2A23AB8D7B6E9D_inline (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* __this, TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17*, TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.UI.TableUI.TableUI::get_Striped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TableUI_get_Striped_m124B38EE2D0932CD163E03145275CD4C2CC92A5C_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_MainColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_MainColor_m98D48E24508EEFF021085118575FD331059AFA7A_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_SecondaryColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_SecondaryColor_m2C47EE1F1E889FCA6C2B58D74A31FA1E22702FFE_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::get_Count()
inline int32_t List_1_get_Count_m2B62A3EFFCB4F00253FDE3F36D0B70FF16288436_inline (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC84E55BAB12C038D1130D0097E80C8CB8EC5103E (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
inline int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<System.Single> UnityEngine.UI.TableUI.TableUI::get_ColumnsWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateColumnInAllRows(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateColumnInAllRows_mC27310A3B9D2407F1ADE3AB26128EC67B6F24B1E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, String_t* ___name0, int32_t ___columnN1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.TextProperties::CopyAllValues(TMPro.TextMeshProUGUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_CopyAllValues_mED1E0BCFB3ED0352A501179B7C9A89D49752C955 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tmp0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
inline void List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, float, const RuntimeMethod*))List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_gshared)(__this, ___index0, ___value1, method);
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateTableSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateTableSize_mAEB7152379F1A6EC34477738EBA873EEA76D1727 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.TableUI.TableUI::get_TextAutoScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TableUI_get_TextAutoScale_mA6C5014AD69187FD931DE9941D1B04C4079FE5B3_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___axis0, float ___size1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.TableUI.UILineRenderer>()
inline UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* GameObject_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m3A387633F028BC451972FCA5F9ABC2EFA423BD81 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::set_Points(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.TableUI.BorderType UnityEngine.UI.TableUI.TableUI::get_BorderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TableUI_get_BorderType_m615506D59DBDD585643E8FB7DAC41AEF3FF81E5C_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateHorizontalBorders(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateHorizontalBorders_m3CC580EADFDBE14E1387728FBCE5D89EB311CD54 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___concatenate0, bool ___extended1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateVerticalBorders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateVerticalBorders_m1353AD81A4C60373253A8B015D2697E37A50CB5C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___concatenate0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateOuterBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateOuterBorder_m0C3D67E98454176FEFF641C7368FD9699D1EEB37 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateHeaderBorder(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateHeaderBorder_mFFADD04B1EF414CA6703A53C74183C4026A92F6E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___concatenate0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass82_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0__ctor_m4C24D12E98AFEA9AF148B134188D1BEFDE1DE6A1 (U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___fourCornersArray0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI/v3Fun::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v3Fun__ctor_m40ADB9265AF1D37C18A1C71608EA27DDDA678D38 (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.UI.TableUI.TableUI::applyFuncionOnVector3Array(UnityEngine.Vector3[],UnityEngine.UI.TableUI.TableUI/v3Fun)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* TableUI_applyFuncionOnVector3Array_m28749B66930712F0DBBBFFE8465F25BB2AE97E0D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___v30, v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* ___fun1, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.UI.TableUI.UILineRenderer::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass83_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_0__ctor_m86207CB76397AB05D5B1F876FCAC0C36B0077D22 (U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TableUI::get_BorderThickness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TableUI_get_BorderThickness_m9AFD56E3D296A5BCD0A681629573404C0D7318C0_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
inline Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::Dispose()
inline void Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
inline float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
inline bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209 (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass85_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0__ctor_m2B43A531FAA2BF210784979D1D40A9E43DE1021C (U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass86_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0__ctor_mCF838FB5B6B5FD1ABCEFE2F3EFD7A0A041A2D052 (U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.TableUI.TableUI::mod(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableUI_mod_mEAD0A6F7841380B8A4073E41DB53AFBE604BBBDD (int32_t ___x0, int32_t ___m1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/v3Fun::Invoke(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_inline (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.Utils::RecordObject(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RecordObject_m062211731B59AC6413D8C428C33343B1695470A8 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, String_t* ___name1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::ToArray()
inline TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305 (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.Utils::RecordObjects(UnityEngine.Object[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RecordObjects_m371EC3BF8352C45E02FC92F2EE4CC36DE4C5B523 (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___targets0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::RefreshBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_RefreshBorder_m30315EB124156DCA239DBF52CAE19FB34FC948E5 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::RefreshColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_RefreshColor_m7F694BDBF01A5C8A84A9E3E3BF85EAF843BC30C2 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TableUI::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_Refresh_mF7559227A9BF825BA0FEFB79A8D36ECC02840F4B (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.ListWrapper`1<TMPro.TextMeshProUGUI>::.ctor()
inline void ListWrapper_1__ctor_m99557073542244D4B9234736CAC9B329DFFDF588 (ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D* __this, const RuntimeMethod* method)
{
	((  void (*) (ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*, const RuntimeMethod*))ListWrapper_1__ctor_mDED09F55C95E45CCA87CB87AD7A46E95969F84C2_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.ListWrapper`1<System.Boolean>::.ctor()
inline void ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD (ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88* __this, const RuntimeMethod* method)
{
	((  void (*) (ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*, const RuntimeMethod*))ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.TextProperties::ApplyProperty(System.String,System.String,System.Action`1<TMPro.TextMeshProUGUI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, String_t* ___oriProp0, String_t* ___targetProp1, Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* ___extraAction2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.TableUI.TextProperties::get_FontStyle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextProperties_get_FontStyle_m8F62D580F3A5DB34BFAF748412D349F8B50ADC9B_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<TMPro.TextMeshProUGUI>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m960298CE98322FE4A666992B60A252A31E7A4E68 (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.TableUI.TableUI>()
inline TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* Component_GetComponent_TisTableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_m10DE66888A1B510306C0DB6732BDE81946F13DB3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.TableUI.TextProperties::UpdateMinMaxValues(UnityEngine.UI.TableUI.TableUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_UpdateMinMaxValues_mFE5E64B66C13EBD58E3F019985BCA0F1AADACAC6 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* ___tu0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo_SetValue_m67B3A509C7EB945C3DA97D096EF1231C805C92D3 (PropertyInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<TMPro.TextMeshProUGUI>::Invoke(T)
inline void Action_1_Invoke_m695F4E4EF75EE9AABCE13D3BB89E468276443065_inline (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TMPro.TMP_FontAsset UnityEngine.UI.TableUI.TextProperties::get_FontAsset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* TextProperties_get_FontAsset_m680A10E5714D34C5252D397E9AEC343263818705_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_font(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontStyle(TMPro.FontStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TextProperties::get_FontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_FontSize_m81CE05CED3DF91F53D4F34A9AEE5026A2634C07B_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.TableUI.TextProperties::get_AutoSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextProperties_get_AutoSize_m199DC590207B8C9D347474E0A12498A2F9776DDC_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_enableAutoSizing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_enableAutoSizing_mDD34BC7AA735EEBEB916FF5C9791B1502F65FBCA (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TextProperties::get_FontSizeMin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_FontSizeMin_m710388466D4389820D47F8158F3682ADE7E2A4FE_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSizeMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSizeMin_mEAF970BB9CA053DF953AF83E638EA0F1D885358F (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TextProperties::get_FontSizeMax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_FontSizeMax_mD5FA16184862FCE8791A44A8BB6EE22CBBE321A0_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSizeMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSizeMax_mC84B7090F5CE69BA63556A71FD63ABD67C911750 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TextProperties::get_CharacterWidthAdjustment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_CharacterWidthAdjustment_mF652AFBF258FF12EEC0AF64506447BC26D28C403_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_characterWidthAdjustment(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_characterWidthAdjustment_m11B7CC28C0A7FFC6434DB671C635691B529071BE (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TextProperties::get_LineSpacingAdjustment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_LineSpacingAdjustment_m89819D92D4763EC3BF7E960CC484F5B5443F95F4_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_lineSpacingAdjustment(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_lineSpacingAdjustment_mAC9A57D852EBAD8DD53ED2F1DE316C0DA52659FB (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UI.TableUI.TextProperties::get_VertexColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextProperties_get_VertexColor_mABB9BF3151214EC54846EB945029704118FDF65C_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// TMPro.TextAlignmentOptions UnityEngine.UI.TableUI.TextProperties::get_Alignment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextProperties_get_Alignment_m1BC2C51BEA0B88FB91860055BEF2F36B0B33B06F_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_alignment(TMPro.TextAlignmentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.TextProperties::get_WrapMixWC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_WrapMixWC_m08D3C517A65473457A694F9A16CBE00EC6CE20FA_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_wordWrappingRatios(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_wordWrappingRatios_m83A82AE875C4CD836D5802A1C051AF07CA2A0D85 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline (const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSizeMin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSizeMin_m5F97E2EFFE86CB4BFFFC31E167E1E577134EF05D_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSizeMax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSizeMax_m8FAB0C39D22B722F6AA6CF15E6C0636715D64BD4_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_characterWidthAdjustment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_characterWidthAdjustment_mE879BF9A6273376AEE54BE88745ABE7944DBF26A_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_lineSpacingAdjustment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_lineSpacingAdjustment_m3858BA838BBFBA60A0A1DDCB195075C6620CF637_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex[]>::.ctor()
inline void List_1__ctor_m05B894174509EB79F5EBD381345E1CF713BBCB5C (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex[]>::get_Count()
inline int32_t List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_inline (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex[]>::get_Item(System.Int32)
inline UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765 (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* (*) (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.UIVertex[] UnityEngine.UI.TableUI.UILineRenderer::CreateLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* UILineRenderer_CreateLineSegment_mB5C8665958D31B6C6130B12D0769B4D41AD07635 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___end1, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___previousVert2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex[]>::Add(T)
inline void List_1_Add_mD13CB4A2DFFD0D6658102019CAAB5A8E4DE1EC8C_inline (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F*, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexQuad_m6AC21081F2A5A48D22BC3497E527D0A9AB8278B0 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___verts0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.TableUI.UILineRenderer::PopulateMesh(UnityEngine.UI.VertexHelper,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_PopulateMesh_m4CFB15C01F67626215FCE615F72110B6E39A18B6 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___pointsToDraw1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_LineThickness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UILineRenderer_get_LineThickness_m799E27E9409AC998A6A9DB55023FEBDC000A5021_inline (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.UIVertex[] UnityEngine.UI.TableUI.UILineRenderer::SetVbo(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* UILineRenderer_SetVbo_mDBF95D3B98A944376E0CE722516821C1ED9A2E55 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vertices0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
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
// System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList> UnityEngine.UI.TableUI.SelectionGrid::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* __this, const RuntimeMethod* method) 
{
	{
		// get { return _values; }
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_0 = __this->____values_1;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.SelectionGrid::set_Values(System.Collections.Generic.List`1<UnityEngine.UI.TableUI.BoolList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGrid_set_Values_m0DFFF5C7DC1FC2A7A6397000318B0EF4F156E845 (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* __this, List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.SelectionGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGrid__ctor_m31F71AB683BB1F62DCC4A635525BECF9CB86CD65 (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int chosenCell = new Vector2Int(-1, -1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_0), (-1), (-1), /*hidden argument*/NULL);
		__this->___chosenCell_2 = L_0;
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
// System.Collections.Generic.List`1<System.Single> UnityEngine.UI.TableUI.TableUI::get_ColumnsWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return _columnsWidth; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->____columnsWidth_9;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_ColumnsWidth(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_ColumnsWidth_m5C87834F754B3DB08DC2D454B789901C80B31D1A (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___value0, const RuntimeMethod* method) 
{
	{
		// set { if (_columnsWidth == value) return; _columnsWidth = value; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->____columnsWidth_9;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_1 = ___value0;
		if ((!(((RuntimeObject*)(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)L_0) == ((RuntimeObject*)(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (_columnsWidth == value) return; _columnsWidth = value; }
		return;
	}

IL_000a:
	{
		// set { if (_columnsWidth == value) return; _columnsWidth = value; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = ___value0;
		__this->____columnsWidth_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____columnsWidth_9), (void*)L_2);
		// set { if (_columnsWidth == value) return; _columnsWidth = value; }
		return;
	}
}
// System.Collections.Generic.List`1<System.Single> UnityEngine.UI.TableUI.TableUI::get_RowsHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return _rowsHeight; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->____rowsHeight_10;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_RowsHeight(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_RowsHeight_m93E3D044EC8130AFF243478477E850B88DD6EE66 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___value0, const RuntimeMethod* method) 
{
	{
		// private set { }
		return;
	}
}
// System.Boolean UnityEngine.UI.TableUI.TableUI::get_TextAutoScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableUI_get_TextAutoScale_mA6C5014AD69187FD931DE9941D1B04C4079FE5B3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return _textAutoScale; }
		bool L_0 = __this->____textAutoScale_11;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_TextAutoScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_TextAutoScale_m4FDF743900930C126A377D64FA2DA36A50B8B055 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (_textAutoScale == value)
		bool L_0 = __this->____textAutoScale_11;
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _textAutoScale = value;
		bool L_2 = ___value0;
		__this->____textAutoScale_11 = L_2;
		// UpdateRowHeight();
		TableUI_UpdateRowHeight_m75218EB96C2C155A12BA36C461F158D0469D460E(__this, NULL);
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI UnityEngine.UI.TableUI.TableUI::GetCell(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* TableUI_GetCell_mF9C53D373EE2A2C6817E79ECEA55576C6066309E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return data[row].list[column];
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_0 = __this->___data_12;
		int32_t L_1 = ___row0;
		NullCheck(L_0);
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_2;
		L_2 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_0, L_1, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_3 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_2)->___list_0;
		int32_t L_4 = ___column1;
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5;
		L_5 = List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F(L_3, L_4, List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F_RuntimeMethod_var);
		return L_5;
	}
}
// System.Int32 UnityEngine.UI.TableUI.TableUI::get_Columns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _columns;
		int32_t L_0 = __this->____columns_13;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_Columns(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Columns_m145EC6A2DDE616D45FDB69F03CD43253B7FB6DDA (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_columns == value || value < MIN_COL || value > MAX_COL)
		int32_t L_0 = __this->____columns_13;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		int32_t L_3 = ((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MIN_COL_8;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		int32_t L_5 = ((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MAX_COL_7;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// GenerateColumns(value);
		int32_t L_6 = ___value0;
		TableUI_GenerateColumns_m49BC1ED794ECC65863F43AE4B803011502824B2D(__this, L_6, NULL);
		// UpdateColumnsWidth();
		TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7(__this, NULL);
		// UpdateRowsWidth();
		TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52(__this, NULL);
		// UpdateTableSize();
		TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0(__this, NULL);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.UI.TableUI.TableUI::get_Rows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _rows;
		int32_t L_0 = __this->____rows_14;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_Rows(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Rows_mED2731FB15BE5BF122DCEC8F7A02F6DA6564A3B3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_rows == value || value < MIN_ROWS || value > MAX_ROWS)
		int32_t L_0 = __this->____rows_14;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		int32_t L_3 = ((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MIN_ROWS_6;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		int32_t L_5 = ((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MAX_ROWS_5;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// GenerateRows(value);
		int32_t L_6 = ___value0;
		TableUI_GenerateRows_m413255DE9B468ACC764E9882FC7E54F078CB476E(__this, L_6, NULL);
		// UpdateRowsWidth();
		TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52(__this, NULL);
		// UpdateTableSize();
		TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0(__this, NULL);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.TableUI.TableUI::get_Striped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableUI_get_Striped_m124B38EE2D0932CD163E03145275CD4C2CC92A5C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _striped;
		bool L_0 = __this->____striped_17;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_Striped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Striped_m490725F976810B2ADF1A5F0C3CC7717FE77EA961 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { if (_striped == value) return; _striped = value; UpdateColor(); }
		bool L_0 = __this->____striped_17;
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (_striped == value) return; _striped = value; UpdateColor(); }
		return;
	}

IL_000a:
	{
		// set { if (_striped == value) return; _striped = value; UpdateColor(); }
		bool L_2 = ___value0;
		__this->____striped_17 = L_2;
		// set { if (_striped == value) return; _striped = value; UpdateColor(); }
		TableUI_UpdateColor_m6BA08F3C8523A3356F9DEEE6124B9BC1A591513D(__this, NULL);
		// set { if (_striped == value) return; _striped = value; UpdateColor(); }
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_MainColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_MainColor_m98D48E24508EEFF021085118575FD331059AFA7A (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____mainColor_18;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_MainColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_MainColor_m7D6093163B424E2D8AC9C926763E46117C752049 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____mainColor_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		return;
	}

IL_000f:
	{
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value0;
		__this->____mainColor_18 = L_3;
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		TableUI_UpdateColor_m6BA08F3C8523A3356F9DEEE6124B9BC1A591513D(__this, NULL);
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_SecondaryColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_SecondaryColor_m2C47EE1F1E889FCA6C2B58D74A31FA1E22702FFE (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____secondaryColor_19;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_SecondaryColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_SecondaryColor_mAEDF129A2E3532316AB67E282C0DEEA14131B62C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____secondaryColor_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		return;
	}

IL_000f:
	{
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value0;
		__this->____secondaryColor_19 = L_3;
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		TableUI_UpdateColor_m6BA08F3C8523A3356F9DEEE6124B9BC1A591513D(__this, NULL);
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_BorderColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_BorderColor_mC1CE20E7CF0851AACF8CF62FCEA8162F003903E0 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _borderColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____borderColor_20;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_BorderColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_BorderColor_m264355C34561B8F6C7B1E070321BCCD9FA53BC60 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_borderColor == value)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____borderColor_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
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
		// _borderColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value0;
		__this->____borderColor_20 = L_3;
		// Transform borders = transform.Find("Borders");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		// borders.GetComponent<UILineRenderer>().color = _borderColor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5;
		NullCheck(L_6);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_7;
		L_7 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_6, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->____borderColor_20;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// borders.GetComponent<UILineRenderer>().SetAllDirty();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_6;
		NullCheck(L_9);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_10;
		L_10 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_9, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		NullCheck(L_10);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_10);
		// Utils.SetDirty(borders);
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_9, NULL);
		// }
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::get_HeaderColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_HeaderColor_mF8C823F563211A455DDB76A424B19B12747D0B3A (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____headerColor_21;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_HeaderColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_HeaderColor_m8566C525D077BEE5EA79F0AC80CBC80DFA37D070 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____headerColor_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		return;
	}

IL_000f:
	{
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value0;
		__this->____headerColor_21 = L_3;
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		TableUI_UpdateHeaderColor_m84C815FAABB29B7E9E14622A928B6C3ECFCCA44D(__this, NULL);
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		return;
	}
}
// UnityEngine.UI.TableUI.BorderType UnityEngine.UI.TableUI.TableUI::get_BorderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableUI_get_BorderType_m615506D59DBDD585643E8FB7DAC41AEF3FF81E5C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _borderType;
		int32_t L_0 = __this->____borderType_22;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_BorderType(UnityEngine.UI.TableUI.BorderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_BorderType_mF19BC37446F2F95586122F3096993A366C8FA642 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BorderType_t88ACCEBBBA7FBA3761409A7CD73085B68F477A6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_borderType.Equals(value))
		int32_t* L_0 = (&__this->____borderType_22);
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(BorderType_t88ACCEBBBA7FBA3761409A7CD73085B68F477A6B_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<int32_t> L_4(BorderType_t88ACCEBBBA7FBA3761409A7CD73085B68F477A6B_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// _borderType = value;
		int32_t L_6 = ___value0;
		__this->____borderType_22 = L_6;
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TableUI::get_BorderThickness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TableUI_get_BorderThickness_m9AFD56E3D296A5BCD0A681629573404C0D7318C0 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _borderThickness;
		float L_0 = __this->____borderThickness_23;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_BorderThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_BorderThickness_m957A3435D458BC0470EE72D2D669FCE1F82D5B68 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_borderThickness == value)
		float L_0 = __this->____borderThickness_23;
		float L_1 = ___value0;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _borderThickness = value;
		float L_2 = ___value0;
		__this->____borderThickness_23 = L_2;
		// Transform borders = transform.Find("Borders");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		// borders.GetComponent<UILineRenderer>().LineThickness = _borderThickness;
		NullCheck(L_4);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_5;
		L_5 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_4, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		float L_6 = __this->____borderThickness_23;
		NullCheck(L_5);
		UILineRenderer_set_LineThickness_mCFE1CE39ED210D7B36BD5F8D05ED57F07DD6CF61(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.TableUI.TableUI::get_Header()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public bool Header { get => _header;
		bool L_0 = __this->____header_24;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::set_Header(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_set_Header_mEF5A9FA3C1B4D39A17BFA1ED5B2E823FDE831F8D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == _header || _rows <= 0)
		bool L_0 = ___value0;
		bool L_1 = __this->____header_24;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = __this->____rows_14;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// _header = value;
		bool L_3 = ___value0;
		__this->____header_24 = L_3;
		// if (Header)
		bool L_4;
		L_4 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		// rows[0].transform.Find("panel").GetComponent<Image>().color = HeaderColor;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___rows_25;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_7, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_8, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = TableUI_get_HeaderColor_mF8C823F563211A455DDB76A424B19B12747D0B3A_inline(__this, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// headerCellProperties.FontStyle = (int)FontStyles.Bold;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_11 = __this->___headerCellProperties_15;
		NullCheck(L_11);
		TextProperties_set_FontStyle_mA9FF253CF619B85293165E481B397CF53D95D622(L_11, 1, NULL);
		goto IL_0093;
	}

IL_005b:
	{
		// rows[0].transform.Find("panel").GetComponent<Image>().color = GetRowColor(0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___rows_25;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_14, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		NullCheck(L_15);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16;
		L_16 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_15, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = TableUI_GetRowColor_mB3A71596F274ABAC287283AC42990F190A84A44C(__this, 0, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// headerCellProperties.FontStyle = (int)FontStyles.Normal;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_18 = __this->___headerCellProperties_15;
		NullCheck(L_18);
		TextProperties_set_FontStyle_mA9FF253CF619B85293165E481B397CF53D95D622(L_18, 0, NULL);
	}

IL_0093:
	{
		// Utils.SetDirty(rows[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___rows_25;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_20, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_Init_m588E2B3E39D91F23768DC04353B5277D1AAB0CC6 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74DD8A4333A1A043A7B36F3160548D8E90D9C3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9D4D1699D236F2C033EB8F9971496CE0C70233C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_m7CE1759F36FB0A0D338DF98AC56EE9D073955BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableUI_RefreshBodyTextProperties_mF1E1BA1C6A5FF3716B156CA4640EBD365451B70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableUI_RefreshHeaderTextProperties_mA187DA6F1E41F1C8EF15FDFC79B62ECD403982F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8642394DAB8A9C9F22DAF9F5E0D8F2CF2377D31D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA6C551E3295452328A321651DAB71B5BE4E640);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAA7E5F5F3B1AAA876E53AB23C7C3D1F3E0C2FA);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* V_1 = NULL;
	{
		// this.selectionGrid = new SelectionGrid();
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_0 = (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC*)il2cpp_codegen_object_new(SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SelectionGrid__ctor_m31F71AB683BB1F62DCC4A635525BECF9CB86CD65(L_0, NULL);
		__this->___selectionGrid_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionGrid_4), (void*)L_0);
		// this.selectionGrid.skin = Resources.Load<GUISkin>("GUISkin");
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_1 = __this->___selectionGrid_4;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2;
		L_2 = Resources_Load_TisGUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_m7CE1759F36FB0A0D338DF98AC56EE9D073955BF9(_stringLiteral8FA6C551E3295452328A321651DAB71B5BE4E640, Resources_Load_TisGUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_m7CE1759F36FB0A0D338DF98AC56EE9D073955BF9_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___skin_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___skin_0), (void*)L_2);
		// this.rows = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___rows_25 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rows_25), (void*)L_3);
		// bodyCellProperties = GetComponents<TextProperties>()[0];
		TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186* L_4;
		L_4 = Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5(__this, Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = 0;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___bodyCellProperties_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyCellProperties_16), (void*)L_6);
		// headerCellProperties = GetComponents<TextProperties>()[1];
		TextPropertiesU5BU5D_t2BEDC50C089AEDFDC11BB549B44196B5E8075186* L_7;
		L_7 = Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5(__this, Component_GetComponents_TisTextProperties_t61A04E65151B984920F334D64F0069EF211810DA_m453A97A56E8FB97D7E7EA73422DEDB9D9ABA8DD5_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = 1;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___headerCellProperties_15 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headerCellProperties_15), (void*)L_9);
		// headerCellProperties.textPropertiesUndoEvent += RefreshHeaderTextProperties;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_10 = __this->___headerCellProperties_15;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_11 = L_10;
		NullCheck(L_11);
		TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* L_12 = L_11->___textPropertiesUndoEvent_18;
		TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* L_13 = (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*)il2cpp_codegen_object_new(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		TextPropertiesUndoEvent__ctor_m6DEC92DFD5EA5E962CECFDB9E253E5F5EE6B34A8(L_13, __this, (intptr_t)((void*)TableUI_RefreshHeaderTextProperties_mA187DA6F1E41F1C8EF15FDFC79B62ECD403982F3_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_12, L_13, NULL);
		NullCheck(L_11);
		L_11->___textPropertiesUndoEvent_18 = ((TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*)CastclassSealed((RuntimeObject*)L_14, TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___textPropertiesUndoEvent_18), (void*)((TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*)CastclassSealed((RuntimeObject*)L_14, TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var)));
		// bodyCellProperties.textPropertiesUndoEvent += RefreshBodyTextProperties;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_15 = __this->___bodyCellProperties_16;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_16 = L_15;
		NullCheck(L_16);
		TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* L_17 = L_16->___textPropertiesUndoEvent_18;
		TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* L_18 = (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*)il2cpp_codegen_object_new(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		TextPropertiesUndoEvent__ctor_m6DEC92DFD5EA5E962CECFDB9E253E5F5EE6B34A8(L_18, __this, (intptr_t)((void*)TableUI_RefreshBodyTextProperties_mF1E1BA1C6A5FF3716B156CA4640EBD365451B70D_RuntimeMethod_var), NULL);
		Delegate_t* L_19;
		L_19 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_17, L_18, NULL);
		NullCheck(L_16);
		L_16->___textPropertiesUndoEvent_18 = ((TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*)CastclassSealed((RuntimeObject*)L_19, TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___textPropertiesUndoEvent_18), (void*)((TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*)CastclassSealed((RuntimeObject*)L_19, TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B_il2cpp_TypeInfo_var)));
		// Vector2 size = GetRectSize(gameObject.GetComponent<RectTransform>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_20, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = TableUI_GetRectSize_m8D902702636A56CC20EA2855DFBE295674CBEDDB(__this, L_21, NULL);
		V_0 = L_22;
		// size.x = 560f;
		(&V_0)->___x_0 = (560.0f);
		// size.y = 200f;
		(&V_0)->___y_1 = (200.0f);
		// GetComponent<RectTransform>().sizeDelta = size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		NullCheck(L_23);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_23, L_24, NULL);
		// this.data = new List<TextMeshList>();
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_25 = (List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17*)il2cpp_codegen_object_new(List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		List_1__ctor_m74DD8A4333A1A043A7B36F3160548D8E90D9C3C0(L_25, List_1__ctor_m74DD8A4333A1A043A7B36F3160548D8E90D9C3C0_RuntimeMethod_var);
		__this->___data_12 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_12), (void*)L_25);
		// ColorUtility.TryParseHtmlString("#FF9600", out this._headerColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_26 = (&__this->____headerColor_21);
		bool L_27;
		L_27 = ColorUtility_TryParseHtmlString_m491B4D39E33A8A136336429BAF702E30FF85F45A(_stringLiteralAEAA7E5F5F3B1AAA876E53AB23C7C3D1F3E0C2FA, L_26, NULL);
		// ColorUtility.TryParseHtmlString("#ECECEC", out this._secondaryColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = (&__this->____secondaryColor_19);
		bool L_29;
		L_29 = ColorUtility_TryParseHtmlString_m491B4D39E33A8A136336429BAF702E30FF85F45A(_stringLiteral8642394DAB8A9C9F22DAF9F5E0D8F2CF2377D31D, L_28, NULL);
		// _mainColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->____mainColor_18 = L_30;
		// BorderColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		TableUI_set_BorderColor_m264355C34561B8F6C7B1E070321BCCD9FA53BC60(__this, L_31, NULL);
		// this._columnsWidth = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_32 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_32, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->____columnsWidth_9 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____columnsWidth_9), (void*)L_32);
		// this._rowsHeight = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_33 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_33, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->____rowsHeight_10 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rowsHeight_10), (void*)L_33);
		// this.selectionGrid._values = new List<BoolList>();
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_34 = __this->___selectionGrid_4;
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_35 = (List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511*)il2cpp_codegen_object_new(List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		List_1__ctor_m9D4D1699D236F2C033EB8F9971496CE0C70233C1(L_35, List_1__ctor_m9D4D1699D236F2C033EB8F9971496CE0C70233C1_RuntimeMethod_var);
		NullCheck(L_34);
		L_34->____values_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____values_1), (void*)L_35);
		// BoolList l = new BoolList();
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_36 = (BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF*)il2cpp_codegen_object_new(BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BoolList__ctor_m06514AEB507E58BBB0F25609245C37686C9BEC46(L_36, NULL);
		V_1 = L_36;
		// l.list=new List<bool>();
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_37 = V_1;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_38 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_38, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		NullCheck(L_37);
		((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_37)->___list_0 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_37)->___list_0), (void*)L_38);
		// l.list.Add(false);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_39 = V_1;
		NullCheck(L_39);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_40 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_39)->___list_0;
		NullCheck(L_40);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_40, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		// this.selectionGrid.Values.Add(l);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_41 = __this->___selectionGrid_4;
		NullCheck(L_41);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_42;
		L_42 = SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline(L_41, NULL);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_43 = V_1;
		NullCheck(L_42);
		List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_inline(L_42, L_43, List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_RuntimeMethod_var);
		// this.Rows = 6;
		TableUI_set_Rows_mED2731FB15BE5BF122DCEC8F7A02F6DA6564A3B3(__this, 6, NULL);
		// this.Columns = 4;
		TableUI_set_Columns_m145EC6A2DDE616D45FDB69F03CD43253B7FB6DDA(__this, 4, NULL);
		// headerCellProperties.groupSelectionMethod = TextProperties.GroupSelectionMethod.Header;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_44 = __this->___headerCellProperties_15;
		NullCheck(L_44);
		L_44->___groupSelectionMethod_4 = 0;
		// bodyCellProperties.groupSelectionMethod = TextProperties.GroupSelectionMethod.Body;
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_45 = __this->___bodyCellProperties_16;
		NullCheck(L_45);
		L_45->___groupSelectionMethod_4 = 1;
		// BorderType = BorderType.Vertical_And_Header;
		TableUI_set_BorderType_mF19BC37446F2F95586122F3096993A366C8FA642(__this, 4, NULL);
		// Header = true;
		TableUI_set_Header_mEF5A9FA3C1B4D39A17BFA1ED5B2E823FDE831F8D(__this, (bool)1, NULL);
		// Striped = true;
		TableUI_set_Striped_m490725F976810B2ADF1A5F0C3CC7717FE77EA961(__this, (bool)1, NULL);
		// BorderThickness = 1f;
		TableUI_set_BorderThickness_m957A3435D458BC0470EE72D2D669FCE1F82D5B68(__this, (1.0f), NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI::GetRectSize(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TableUI_GetRectSize_m8D902702636A56CC20EA2855DFBE295674CBEDDB (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		// Vector3[] corners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// rect.GetLocalCorners(corners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rect0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_1);
		RectTransform_GetLocalCorners_m18B3E5ED5EB24AD46279199A134CD7F218D3DD11(L_1, L_2, NULL);
		// return new Vector2(Vector3.Distance(corners[0], corners[3]), Vector3.Distance(corners[0], corners[1]));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9;
		L_9 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_5, L_8, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16;
		L_16 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_12, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), L_9, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateColor_m6BA08F3C8523A3356F9DEEE6124B9BC1A591513D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int k = this.Header ? 1 : 0;
		bool L_0;
		L_0 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		// for (int i = k; i < Rows; i++)
		V_0 = G_B3_0;
		goto IL_0045;
	}

IL_000f:
	{
		// GameObject row = rows[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___rows_25;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, L_2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// row.transform.Find("panel").GetComponent<Image>().color = GetRowColor(i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		int32_t L_8 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = TableUI_GetRowColor_mB3A71596F274ABAC287283AC42990F190A84A44C(__this, L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_9);
		// Utils.SetDirty(row);
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_4, NULL);
		// for (int i = k; i < Rows; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0045:
	{
		// for (int i = k; i < Rows; i++)
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateHeaderColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateHeaderColor_m84C815FAABB29B7E9E14622A928B6C3ECFCCA44D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Header)
		bool L_0;
		L_0 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// GameObject row = rows[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___rows_25;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// row.transform.Find("panel").GetComponent<Image>().color = HeaderColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_5, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = TableUI_get_HeaderColor_mF8C823F563211A455DDB76A424B19B12747D0B3A_inline(__this, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// Utils.SetDirty(row);
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateRows(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateRows_m413255DE9B468ACC764E9882FC7E54F078CB476E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___rowNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m40B14D9AE53DAEC6A897EAC0C1F45BC465C8A33E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC364CD8A53DBD0C6F0DA93CCEF237EBD66C9D782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m848E5495D0C2ED884A6CFC8CF008F61269DB334A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA1AB4EC7E746BBFD9CF47D2A0613C0305BB1BA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2F90B879E9C875DD5A61CDA1C1FDE5C0B9C1550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* V_2 = NULL;
	float V_3 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (Rows > rowNumber)
		int32_t L_0;
		L_0 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		int32_t L_1 = ___rowNumber0;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_00ae;
		}
	}
	{
		// Utils.RegisterFullObjectHierarchyUndo(this, "Table");
		Utils_RegisterFullObjectHierarchyUndo_mEEC014ABEC4E241F56A61026AA4FAC69903BE7C0(__this, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		// for (int k = Rows-1; k >= rowNumber; k--)
		int32_t L_2;
		L_2 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_00a6;
	}

IL_0025:
	{
		// GameObject row = rows[k];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___rows_25;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// rows.RemoveAt(k);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___rows_25;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_6, L_7, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// _rows--;
		int32_t L_8 = __this->____rows_14;
		__this->____rows_14 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// data.RemoveAt(data.Count - 1);
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_9 = __this->___data_12;
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_10 = __this->___data_12;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mA1AB4EC7E746BBFD9CF47D2A0613C0305BB1BA4A_inline(L_10, List_1_get_Count_mA1AB4EC7E746BBFD9CF47D2A0613C0305BB1BA4A_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_RemoveAt_m40B14D9AE53DAEC6A897EAC0C1F45BC465C8A33E(L_9, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), List_1_RemoveAt_m40B14D9AE53DAEC6A897EAC0C1F45BC465C8A33E_RuntimeMethod_var);
		// this.selectionGrid._values.RemoveAt(this.selectionGrid._values.Count-1);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_12 = __this->___selectionGrid_4;
		NullCheck(L_12);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_13 = L_12->____values_1;
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_14 = __this->___selectionGrid_4;
		NullCheck(L_14);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_15 = L_14->____values_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m848E5495D0C2ED884A6CFC8CF008F61269DB334A_inline(L_15, List_1_get_Count_m848E5495D0C2ED884A6CFC8CF008F61269DB334A_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_RemoveAt_mC364CD8A53DBD0C6F0DA93CCEF237EBD66C9D782(L_13, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), List_1_RemoveAt_mC364CD8A53DBD0C6F0DA93CCEF237EBD66C9D782_RuntimeMethod_var);
		// _rowsHeight.RemoveAt(_rowsHeight.Count-1);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_17 = __this->____rowsHeight_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_18 = __this->____rowsHeight_10;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_18, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93(L_17, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		// Utils.DestroyObjectImmediate(row);
		Utils_DestroyObjectImmediate_mA373C0890F5922FF051E846F78B0AFB22C783BB5(L_5, NULL);
		// for (int k = Rows-1; k >= rowNumber; k--)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_00a6:
	{
		// for (int k = Rows-1; k >= rowNumber; k--)
		int32_t L_21 = V_0;
		int32_t L_22 = ___rowNumber0;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_00ae:
	{
		// for (int k = Rows; k < rowNumber; k++)
		int32_t L_23;
		L_23 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		V_1 = L_23;
		goto IL_0165;
	}

IL_00ba:
	{
		// BoolList l = new BoolList();
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_24 = (BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF*)il2cpp_codegen_object_new(BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		BoolList__ctor_m06514AEB507E58BBB0F25609245C37686C9BEC46(L_24, NULL);
		V_2 = L_24;
		// l.list = new List<bool>();
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_25 = V_2;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_26 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_26, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		NullCheck(L_25);
		((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_25)->___list_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_25)->___list_0), (void*)L_26);
		// l.list.Add(false);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_27 = V_2;
		NullCheck(L_27);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_28 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_27)->___list_0;
		NullCheck(L_28);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_28, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		// float height = Rows >= 1 ? sumAllValuesInList(RowsHeight) / Rows : 30f;
		int32_t L_29;
		L_29 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		if ((((int32_t)L_29) >= ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		G_B9_0 = (30.0f);
		goto IL_00fb;
	}

IL_00e7:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_30;
		L_30 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		float L_31;
		L_31 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_30, NULL);
		int32_t L_32;
		L_32 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		G_B9_0 = ((float)(L_31/((float)L_32)));
	}

IL_00fb:
	{
		V_3 = G_B9_0;
		// this.selectionGrid._values.Add(l);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_33 = __this->___selectionGrid_4;
		NullCheck(L_33);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_34 = L_33->____values_1;
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_35 = V_2;
		NullCheck(L_34);
		List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_inline(L_34, L_35, List_1_Add_m3A6F7CE5ECF5399E8E73387BFA720B485038DBB0_RuntimeMethod_var);
		// _rowsHeight.Add(height);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_36 = __this->____rowsHeight_10;
		float L_37 = V_3;
		NullCheck(L_36);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_36, L_37, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// GenerateRow("row" + k, k);
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD2F90B879E9C875DD5A61CDA1C1FDE5C0B9C1550, L_38, NULL);
		int32_t L_40 = V_1;
		TableUI_GenerateRow_mA50A86194D066BE96B38F1E0425E0BA81EE5CF33(__this, L_39, L_40, NULL);
		// _rows++;
		int32_t L_41 = __this->____rows_14;
		__this->____rows_14 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		// Utils.RegisterCreatedObjectUndo(rows[rows.Count - 1],"Table");
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = __this->___rows_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_43 = __this->___rows_25;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_43, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_42, ((int32_t)il2cpp_codegen_subtract(L_44, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Utils_RegisterCreatedObjectUndo_m8E178E224CB09F0C7386F5DAF03DCF2F0BF169E9(L_45, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		// for (int k = Rows; k < rowNumber; k++)
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0165:
	{
		// for (int k = Rows; k < rowNumber; k++)
		int32_t L_47 = V_1;
		int32_t L_48 = ___rowNumber0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00ba;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateRow(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateRow_mA50A86194D066BE96B38F1E0425E0BA81EE5CF33 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, String_t* ___name0, int32_t ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFE7DE0F2BAFF34A195D6DB7C1C2A23AB8D7B6E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589A74837A2634FEA2C0BAECCD5E79EA1BBE5386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// GameObject row = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		// row.transform.SetParent(this.transform.Find("Content"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_5, NULL);
		// Vector2 size = new Vector2(GetRectSize(GetComponent<RectTransform>()).x, _rowsHeight[n]);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = TableUI_GetRectSize_m8D902702636A56CC20EA2855DFBE295674CBEDDB(__this, L_6, NULL);
		float L_8 = L_7.___x_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_9 = __this->____rowsHeight_10;
		int32_t L_10 = ___n1;
		NullCheck(L_9);
		float L_11;
		L_11 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_9, L_10, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_8, L_11, NULL);
		// row.AddComponent<RectTransform>().sizeDelta = size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_12, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		NullCheck(L_13);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_13, L_14, NULL);
		// GameObject panel = new GameObject("panel");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_15, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		// panel.transform.SetParent(row.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_17);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_17, L_19, NULL);
		// Image panelImage = panel.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_16;
		NullCheck(L_20);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21;
		L_21 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_20, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// panelImage.color = GetRowColor(n);
		int32_t L_22 = ___n1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = TableUI_GetRowColor_mB3A71596F274ABAC287283AC42990F190A84A44C(__this, L_22, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_23);
		// panel.GetComponent<RectTransform>().sizeDelta = size;
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_20, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		NullCheck(L_24);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_24, L_25, NULL);
		// GameObject cells = new GameObject("cells");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_26, _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37, NULL);
		// cells.transform.SetParent(row.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_0;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_28);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_28, L_30, NULL);
		// cells.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_27;
		NullCheck(L_31);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32;
		L_32 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_31, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		// HorizontalLayoutGroup hlg = cells.AddComponent<HorizontalLayoutGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_31;
		NullCheck(L_33);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_34;
		L_34 = GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4(L_33, GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		// hlg.childForceExpandWidth = false;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_35 = L_34;
		NullCheck(L_35);
		HorizontalOrVerticalLayoutGroup_set_childForceExpandWidth_m351827AA1A453ACD17C2EAC7B4DAB9C5DB1760E5(L_35, (bool)0, NULL);
		// hlg.childForceExpandHeight = true;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_36 = L_35;
		NullCheck(L_36);
		HorizontalOrVerticalLayoutGroup_set_childForceExpandHeight_mA144CF421614F41813DE346AA9D1C64621C6C2E5(L_36, (bool)1, NULL);
		// hlg.childControlHeight = false;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_37 = L_36;
		NullCheck(L_37);
		HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751(L_37, (bool)0, NULL);
		// hlg.childControlWidth = false;
		NullCheck(L_37);
		HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8(L_37, (bool)0, NULL);
		// cells.GetComponent<RectTransform>().sizeDelta = size;
		NullCheck(L_33);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_33, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_1;
		NullCheck(L_38);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_38, L_39, NULL);
		// TextMeshList list = new TextMeshList();
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_40 = (TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90*)il2cpp_codegen_object_new(TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		TextMeshList__ctor_m590EB29929C2042C0D9CC20D7C54F8E93C26FC5E(L_40, NULL);
		V_2 = L_40;
		// list.list = new List<TextMeshProUGUI>();
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_41 = V_2;
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_42 = (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*)il2cpp_codegen_object_new(List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7(L_42, List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var);
		NullCheck(L_41);
		((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_41)->___list_0 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_41)->___list_0), (void*)L_42);
		// for (int i = 0; i < Columns; i++)
		V_3 = 0;
		goto IL_0134;
	}

IL_00ed:
	{
		// list.list.Add(GenerateColumnInRow("column" + i, row,n,i));
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_43 = V_2;
		NullCheck(L_43);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_44 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_43)->___list_0;
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_46;
		L_46 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral589A74837A2634FEA2C0BAECCD5E79EA1BBE5386, L_45, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_0;
		int32_t L_48 = ___n1;
		int32_t L_49 = V_3;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_50;
		L_50 = TableUI_GenerateColumnInRow_mC9628CE2C894FC2618B45A94BBFB562E965A3BD3(__this, L_46, L_47, L_48, L_49, NULL);
		NullCheck(L_44);
		List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_inline(L_44, L_50, List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		// this.selectionGrid.Values[n+1].list.Add(false);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_51 = __this->___selectionGrid_4;
		NullCheck(L_51);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_52;
		L_52 = SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline(L_51, NULL);
		int32_t L_53 = ___n1;
		NullCheck(L_52);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_54;
		L_54 = List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2(L_52, ((int32_t)il2cpp_codegen_add(L_53, 1)), List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		NullCheck(L_54);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_55 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_54)->___list_0;
		NullCheck(L_55);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_55, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		// for (int i = 0; i < Columns; i++)
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0134:
	{
		// for (int i = 0; i < Columns; i++)
		int32_t L_57 = V_3;
		int32_t L_58;
		L_58 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00ed;
		}
	}
	{
		// data.Add(list);
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_59 = __this->___data_12;
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_60 = V_2;
		NullCheck(L_59);
		List_1_Add_mFE7DE0F2BAFF34A195D6DB7C1C2A23AB8D7B6E9D_inline(L_59, L_60, List_1_Add_mFE7DE0F2BAFF34A195D6DB7C1C2A23AB8D7B6E9D_RuntimeMethod_var);
		// rows.Add(row);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_61 = __this->___rows_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_0;
		NullCheck(L_61);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_61, L_62, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// UpdateColumnsWidth();
		TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.TableUI.TableUI::GetRowColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_GetRowColor_mB3A71596F274ABAC287283AC42990F190A84A44C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	{
		// if (Striped)
		bool L_0;
		L_0 = TableUI_get_Striped_m124B38EE2D0932CD163E03145275CD4C2CC92A5C_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// if (n % 2 == 0)
		int32_t L_1 = ___n0;
		if (((int32_t)(L_1%2)))
		{
			goto IL_0014;
		}
	}
	{
		// return MainColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = TableUI_get_MainColor_m98D48E24508EEFF021085118575FD331059AFA7A_inline(__this, NULL);
		return L_2;
	}

IL_0014:
	{
		// return SecondaryColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TableUI_get_SecondaryColor_m2C47EE1F1E889FCA6C2B58D74A31FA1E22702FFE_inline(__this, NULL);
		return L_3;
	}

IL_001b:
	{
		// return MainColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = TableUI_get_MainColor_m98D48E24508EEFF021085118575FD331059AFA7A_inline(__this, NULL);
		return L_4;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateColumns(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateColumns_m49BC1ED794ECC65863F43AE4B803011502824B2D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, int32_t ___columnNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC84E55BAB12C038D1130D0097E80C8CB8EC5103E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2B62A3EFFCB4F00253FDE3F36D0B70FF16288436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589A74837A2634FEA2C0BAECCD5E79EA1BBE5386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	float G_B14_0 = 0.0f;
	{
		// if (Columns > columnNumber)
		int32_t L_0;
		L_0 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		int32_t L_1 = ___columnNumber0;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0124;
		}
	}
	{
		// Utils.RegisterFullObjectHierarchyUndo(this, "Table");
		Utils_RegisterFullObjectHierarchyUndo_mEEC014ABEC4E241F56A61026AA4FAC69903BE7C0(__this, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		// bool firstIteration = true;
		V_0 = (bool)1;
		// for (int i = 0; i < rows.Count; i++)
		V_1 = 0;
		goto IL_0112;
	}

IL_0020:
	{
		// GameObject cells = rows[i].transform.Find("cells").gameObject;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___rows_25;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		V_2 = L_7;
		goto IL_00fb;
	}

IL_0046:
	{
		// GameObject column = cells.transform.GetChild(cells.transform.childCount - 1).gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_11, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		// data[i].list.RemoveAt(data[i].list.Count - 1);
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_15 = __this->___data_12;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_17;
		L_17 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_15, L_16, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_18 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_17)->___list_0;
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_19 = __this->___data_12;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_21;
		L_21 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_19, L_20, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		NullCheck(L_21);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_22 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_21)->___list_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m2B62A3EFFCB4F00253FDE3F36D0B70FF16288436_inline(L_22, List_1_get_Count_m2B62A3EFFCB4F00253FDE3F36D0B70FF16288436_RuntimeMethod_var);
		NullCheck(L_18);
		List_1_RemoveAt_mC84E55BAB12C038D1130D0097E80C8CB8EC5103E(L_18, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), List_1_RemoveAt_mC84E55BAB12C038D1130D0097E80C8CB8EC5103E_RuntimeMethod_var);
		// if (firstIteration)
		bool L_24 = V_0;
		G_B4_0 = L_14;
		if (!L_24)
		{
			G_B5_0 = L_14;
			goto IL_00ba;
		}
	}
	{
		// _columnsWidth.RemoveAt(_columnsWidth.Count - 1);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25 = __this->____columnsWidth_9;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_26 = __this->____columnsWidth_9;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_26, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		NullCheck(L_25);
		List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93(L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)), List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		// _columns--;
		int32_t L_28 = __this->____columns_13;
		__this->____columns_13 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		G_B5_0 = G_B4_0;
	}

IL_00ba:
	{
		// this.selectionGrid.Values[i+1].list.RemoveAt(this.selectionGrid.Values[i+1].list.Count-1);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_29 = __this->___selectionGrid_4;
		NullCheck(L_29);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_30;
		L_30 = SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline(L_29, NULL);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_32;
		L_32 = List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2(L_30, ((int32_t)il2cpp_codegen_add(L_31, 1)), List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		NullCheck(L_32);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_33 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_32)->___list_0;
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_34 = __this->___selectionGrid_4;
		NullCheck(L_34);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_35;
		L_35 = SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline(L_34, NULL);
		int32_t L_36 = V_1;
		NullCheck(L_35);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_37;
		L_37 = List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2(L_35, ((int32_t)il2cpp_codegen_add(L_36, 1)), List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		NullCheck(L_37);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_38 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_37)->___list_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(L_38, List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		NullCheck(L_33);
		List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8(L_33, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), List_1_RemoveAt_mC0AFA3933492105E22A6F0D4A781BC4BD6C5A9F8_RuntimeMethod_var);
		// Utils.DestroyObjectImmediate(column);
		Utils_DestroyObjectImmediate_mA373C0890F5922FF051E846F78B0AFB22C783BB5(G_B5_0, NULL);
	}

IL_00fb:
	{
		// while (cells.transform.childCount > columnNumber)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_2;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_41, NULL);
		int32_t L_43 = ___columnNumber0;
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_0046;
		}
	}
	{
		// firstIteration = false;
		V_0 = (bool)0;
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0112:
	{
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_45 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = __this->___rows_25;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_46, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0124:
	{
		// for (int k = Columns; k < columnNumber; k++)
		int32_t L_48;
		L_48 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		V_3 = L_48;
		goto IL_018a;
	}

IL_012d:
	{
		// float width = Columns >= 1 ? sumAllValuesInList(ColumnsWidth) / Columns : 200f;
		int32_t L_49;
		L_49 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		if ((((int32_t)L_49) >= ((int32_t)1)))
		{
			goto IL_013d;
		}
	}
	{
		G_B14_0 = (200.0f);
		goto IL_0151;
	}

IL_013d:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_50;
		L_50 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		float L_51;
		L_51 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_50, NULL);
		int32_t L_52;
		L_52 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		G_B14_0 = ((float)(L_51/((float)L_52)));
	}

IL_0151:
	{
		V_4 = G_B14_0;
		// _columnsWidth.Add(width);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_53 = __this->____columnsWidth_9;
		float L_54 = V_4;
		NullCheck(L_53);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_53, L_54, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// GenerateColumnInAllRows("column" + k, k);
		String_t* L_55;
		L_55 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_56;
		L_56 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral589A74837A2634FEA2C0BAECCD5E79EA1BBE5386, L_55, NULL);
		int32_t L_57 = V_3;
		TableUI_GenerateColumnInAllRows_mC27310A3B9D2407F1ADE3AB26128EC67B6F24B1E(__this, L_56, L_57, NULL);
		// _columns++;
		int32_t L_58 = __this->____columns_13;
		__this->____columns_13 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		// for (int k = Columns; k < columnNumber; k++)
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_018a:
	{
		// for (int k = Columns; k < columnNumber; k++)
		int32_t L_60 = V_3;
		int32_t L_61 = ___columnNumber0;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_012d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateColumnInAllRows(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateColumnInAllRows_mC27310A3B9D2407F1ADE3AB26128EC67B6F24B1E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, String_t* ___name0, int32_t ___columnN1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.selectionGrid.Values[0].list.Add(false);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_0 = __this->___selectionGrid_4;
		NullCheck(L_0);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_1;
		L_1 = SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline(L_0, NULL);
		NullCheck(L_1);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_2;
		L_2 = List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2(L_1, 0, List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_3 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_2)->___list_0;
		NullCheck(L_3);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_3, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		// for (int i = 0; i < rows.Count; i++)
		V_0 = 0;
		goto IL_006d;
	}

IL_0020:
	{
		// data[i].list.Add(GenerateColumnInRow(name, rows[i], i, columnN));
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_4 = __this->___data_12;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_6;
		L_6 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_4, L_5, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_7 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_6)->___list_0;
		String_t* L_8 = ___name0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___rows_25;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		int32_t L_12 = V_0;
		int32_t L_13 = ___columnN1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14;
		L_14 = TableUI_GenerateColumnInRow_mC9628CE2C894FC2618B45A94BBFB562E965A3BD3(__this, L_8, L_11, L_12, L_13, NULL);
		NullCheck(L_7);
		List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_inline(L_7, L_14, List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		// this.selectionGrid.Values[i+1].list.Add(false);
		SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* L_15 = __this->___selectionGrid_4;
		NullCheck(L_15);
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_16;
		L_16 = SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline(L_15, NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* L_18;
		L_18 = List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), List_1_get_Item_m4CDD0472F79ED6C385F8F4598F72A60581675AC2_RuntimeMethod_var);
		NullCheck(L_18);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_19 = ((ListWrapper_1_t44E9FAD1EDC428666E19523DEC8E73394EC34A88*)L_18)->___list_0;
		NullCheck(L_19);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_19, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_21 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___rows_25;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_22, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// TMPro.TextMeshProUGUI UnityEngine.UI.TableUI.TableUI::GenerateColumnInRow(System.String,UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* TableUI_GenerateColumnInRow_mC9628CE2C894FC2618B45A94BBFB562E965A3BD3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, String_t* ___name0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___row1, int32_t ___rowN2, int32_t ___columnN3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// GameObject cells = row.transform.Find("cells").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___row1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		V_0 = L_3;
		// GameObject text = new GameObject("text");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, NULL);
		// text.transform.SetParent(cells.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_6);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_8, NULL);
		// TextMeshProUGUI tmp = text.AddComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_5;
		NullCheck(L_9);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10;
		L_10 = GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB(L_9, GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var);
		V_1 = L_10;
		// text.GetComponent<RectTransform>().sizeDelta = new Vector2(ColumnsWidth[columnN], RowsHeight[rowN]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_9;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_11, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_13;
		L_13 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_14 = ___columnN3;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_13, L_14, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_16;
		L_16 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_17 = ___rowN2;
		NullCheck(L_16);
		float L_18;
		L_18 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_16, L_17, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_12, L_19, NULL);
		// if (rowN == 0)
		int32_t L_20 = ___rowN2;
		G_B1_0 = L_11;
		if (L_20)
		{
			G_B2_0 = L_11;
			goto IL_0072;
		}
	}
	{
		// headerCellProperties.CopyAllValues(tmp);
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_21 = __this->___headerCellProperties_15;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = V_1;
		NullCheck(L_21);
		TextProperties_CopyAllValues_mED1E0BCFB3ED0352A501179B7C9A89D49752C955(L_21, L_22, NULL);
		G_B3_0 = G_B1_0;
		goto IL_007e;
	}

IL_0072:
	{
		// bodyCellProperties.CopyAllValues(tmp);
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_23 = __this->___bodyCellProperties_16;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = V_1;
		NullCheck(L_23);
		TextProperties_CopyAllValues_mED1E0BCFB3ED0352A501179B7C9A89D49752C955(L_23, L_24, NULL);
		G_B3_0 = G_B2_0;
	}

IL_007e:
	{
		// tmp.text = name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = V_1;
		String_t* L_26 = ___name0;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_26);
		// Utils.RegisterCreatedObjectUndo(text,"Table");
		Utils_RegisterCreatedObjectUndo_m8E178E224CB09F0C7386F5DAF03DCF2F0BF169E9(G_B3_0, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		// return tmp;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = V_1;
		return L_27;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateColumnsWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < rows.Count; i++)
		V_0 = 0;
		goto IL_0070;
	}

IL_0004:
	{
		// GameObject cells = rows[i].transform.Find("cells").gameObject;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___rows_25;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		V_1 = L_5;
		// for (int j = 0; j < cells.transform.childCount; j++)
		V_2 = 0;
		goto IL_005e;
	}

IL_0029:
	{
		// RectTransform rectTransform = cells.transform.GetChild(j).GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, L_8, NULL);
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_9, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// Vector2 size = rectTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_10;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_11, NULL);
		V_3 = L_12;
		// size.x = ColumnsWidth[j];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_13;
		L_13 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_13, L_14, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		(&V_3)->___x_0 = L_15;
		// rectTransform.sizeDelta = size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_3;
		NullCheck(L_11);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_11, L_16, NULL);
		// for (int j = 0; j < cells.transform.childCount; j++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005e:
	{
		// for (int j = 0; j < cells.transform.childCount; j++)
		int32_t L_18 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_20, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_21)))
		{
			goto IL_0029;
		}
	}
	{
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0070:
	{
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_23 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___rows_25;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_24, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateColumnWidth(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateColumnWidth_mE98C05E18E768767CE548027F714206FB217D5D2 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, float ___value0, int32_t ___col1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ColumnsWidth[col] == value)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0;
		L_0 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_1 = ___col1;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_3 = ___value0;
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// ColumnsWidth[col] = value;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4;
		L_4 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_5 = ___col1;
		float L_6 = ___value0;
		NullCheck(L_4);
		List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64(L_4, L_5, L_6, List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		// UpdateColumnsWidth();
		TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7(__this, NULL);
		// UpdateRowsWidth();
		TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52(__this, NULL);
		// UpdateTableSize();
		TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0(__this, NULL);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateRowHeight(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateRowHeight_m3F7F751906B3C25E9B68C13F0865F7F712CC6443 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, float ___value0, int32_t ___row1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RowsHeight[row] == value)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0;
		L_0 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_1 = ___row1;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_3 = ___value0;
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// RowsHeight[row] = value;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4;
		L_4 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_5 = ___row1;
		float L_6 = ___value0;
		NullCheck(L_4);
		List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64(L_4, L_5, L_6, List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		// UpdateRowHeight();
		TableUI_UpdateRowHeight_m75218EB96C2C155A12BA36C461F158D0469D460E(__this, NULL);
		// UpdateTableSize();
		TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0(__this, NULL);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::ResizeTable(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_ResizeTable_mB4110AF71187B72CF360CA115456EE5EEDF1D0D0 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// float sumWidth = sumAllValuesInList(ColumnsWidth);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0;
		L_0 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		float L_1;
		L_1 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_0, NULL);
		V_0 = L_1;
		// bool doUpdate = false;
		V_1 = (bool)0;
		// if (!Mathf.Approximately(sumWidth, newSize.x))
		float L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___newSize0;
		float L_4 = L_3.___x_0;
		bool L_5;
		L_5 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		// for (int i = 0; i < ColumnsWidth.Count; i++)
		V_3 = 0;
		goto IL_004a;
	}

IL_0021:
	{
		// float percentage = (ColumnsWidth[i]) / sumWidth;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_6;
		L_6 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		float L_8;
		L_8 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_6, L_7, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_9 = V_0;
		// float value = percentage * newSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___newSize0;
		float L_11 = L_10.___x_0;
		V_4 = ((float)il2cpp_codegen_multiply(((float)(L_8/L_9)), L_11));
		// _columnsWidth[i] = value;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_12 = __this->____columnsWidth_9;
		int32_t L_13 = V_3;
		float L_14 = V_4;
		NullCheck(L_12);
		List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64(L_12, L_13, L_14, List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		// for (int i = 0; i < ColumnsWidth.Count; i++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < ColumnsWidth.Count; i++)
		int32_t L_16 = V_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_17;
		L_17 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_17, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0021;
		}
	}
	{
		// doUpdate = true;
		V_1 = (bool)1;
	}

IL_005a:
	{
		// float sumHeight = sumAllValuesInList(RowsHeight);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_19;
		L_19 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		float L_20;
		L_20 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_19, NULL);
		V_2 = L_20;
		// if (!Mathf.Approximately(newSize.y , sumHeight))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___newSize0;
		float L_22 = L_21.___y_1;
		float L_23 = V_2;
		bool L_24;
		L_24 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_22, L_23, NULL);
		if (L_24)
		{
			goto IL_00b8;
		}
	}
	{
		// for (int i = 0; i < RowsHeight.Count; i++)
		V_5 = 0;
		goto IL_00a7;
	}

IL_007a:
	{
		// float percentage = (RowsHeight[i]) / sumHeight;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25;
		L_25 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_26 = V_5;
		NullCheck(L_25);
		float L_27;
		L_27 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_25, L_26, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_28 = V_2;
		// float value = percentage * newSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___newSize0;
		float L_30 = L_29.___y_1;
		V_6 = ((float)il2cpp_codegen_multiply(((float)(L_27/L_28)), L_30));
		// _rowsHeight[i] = value;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_31 = __this->____rowsHeight_10;
		int32_t L_32 = V_5;
		float L_33 = V_6;
		NullCheck(L_31);
		List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64(L_31, L_32, L_33, List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		// for (int i = 0; i < RowsHeight.Count; i++)
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00a7:
	{
		// for (int i = 0; i < RowsHeight.Count; i++)
		int32_t L_35 = V_5;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_36;
		L_36 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_36, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_007a;
		}
	}
	{
		// doUpdate = true;
		V_1 = (bool)1;
	}

IL_00b8:
	{
		// if (doUpdate)
		bool L_38 = V_1;
		if (!L_38)
		{
			goto IL_00da;
		}
	}
	{
		// UpdateColumnsWidth();
		TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7(__this, NULL);
		// UpdateRowsWidth();
		TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52(__this, NULL);
		// UpdateRowHeight();
		TableUI_UpdateRowHeight_m75218EB96C2C155A12BA36C461F158D0469D460E(__this, NULL);
		// UpdateTableSize(newSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___newSize0;
		TableUI_UpdateTableSize_mAEB7152379F1A6EC34477738EBA873EEA76D1727(__this, L_39, NULL);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateRowsWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < rows.Count; i++)
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		// GameObject row = this.rows[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___rows_25;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// Vector2 size = row.GetComponent<RectTransform>().sizeDelta;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_3, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_4, NULL);
		V_1 = L_5;
		// size.x = sumAllValuesInList(ColumnsWidth);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_6;
		L_6 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		float L_7;
		L_7 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_6, NULL);
		(&V_1)->___x_0 = L_7;
		// row.GetComponent<RectTransform>().sizeDelta = size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_3;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		NullCheck(L_9);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_9, L_10, NULL);
		// row.transform.Find("panel").GetComponent<RectTransform>().sizeDelta = size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_8;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_13, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		NullCheck(L_14);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_14, L_15, NULL);
		// row.transform.Find("cells").GetComponent<RectTransform>().sizeDelta = size;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_16, _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37, NULL);
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_17, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		NullCheck(L_18);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_18, L_19, NULL);
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0074:
	{
		// for (int i = 0; i < rows.Count; i++)
		int32_t L_21 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___rows_25;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_22, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateRowHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateRowHeight_m75218EB96C2C155A12BA36C461F158D0469D460E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Transform content = transform.Find("Content");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		V_0 = L_1;
		// for (int i = 0; i < content.childCount; i++)
		V_1 = 0;
		goto IL_012d;
	}

IL_0018:
	{
		// GameObject row = content.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, L_3, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		// GameObject panel = row.transform.Find("panel").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_7, _stringLiteralCCAAF7A52D810B3349716A1019C9B54A72B0DBA0, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		V_2 = L_9;
		// GameObject cells = row.transform.Find("cells").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_11, _stringLiteral4D0859590EED522C5C4FE000AFE5C1CD44426B37, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		V_3 = L_13;
		// Vector2 size = row.GetComponent<RectTransform>().sizeDelta;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_10;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_14, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_15, NULL);
		V_4 = L_16;
		// size.y = RowsHeight[i];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_17;
		L_17 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		float L_19;
		L_19 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_17, L_18, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		(&V_4)->___y_1 = L_19;
		// row.GetComponent<RectTransform>().sizeDelta = size;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_14, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_4;
		NullCheck(L_20);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_20, L_21, NULL);
		// panel.GetComponent<RectTransform>().sizeDelta = size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
		NullCheck(L_22);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_22, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_4;
		NullCheck(L_23);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_23, L_24, NULL);
		// cells.GetComponent<RectTransform>().sizeDelta = size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
		NullCheck(L_25);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_25, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_4;
		NullCheck(L_26);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_26, L_27, NULL);
		// for (int j = 0; j < cells.transform.childCount; j++)
		V_5 = 0;
		goto IL_0117;
	}

IL_009b:
	{
		// if (TextAutoScale)
		bool L_28;
		L_28 = TableUI_get_TextAutoScale_mA6C5014AD69187FD931DE9941D1B04C4079FE5B3_inline(__this, NULL);
		if (!L_28)
		{
			goto IL_00cc;
		}
	}
	{
		// cells.transform.GetChild(j).GetComponent<TextMeshProUGUI>().fontSize = RowsHeight[i] * 0.4f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, L_31, NULL);
		NullCheck(L_32);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_33;
		L_33 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_32, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_34;
		L_34 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_35 = V_1;
		NullCheck(L_34);
		float L_36;
		L_36 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_34, L_35, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		NullCheck(L_33);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_33, ((float)il2cpp_codegen_multiply(L_36, (0.400000006f))), NULL);
	}

IL_00cc:
	{
		// Vector2 s = cells.transform.GetChild(j).GetComponent<RectTransform>().sizeDelta;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		int32_t L_39 = V_5;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_38, L_39, NULL);
		NullCheck(L_40);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41;
		L_41 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_40, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		NullCheck(L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_41, NULL);
		V_6 = L_42;
		// s.y = RowsHeight[i];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_43;
		L_43 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		float L_45;
		L_45 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_43, L_44, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		(&V_6)->___y_1 = L_45;
		// cells.transform.GetChild(j).GetComponent<RectTransform>().sizeDelta = s;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_3;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		int32_t L_48 = V_5;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_47, L_48, NULL);
		NullCheck(L_49);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50;
		L_50 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_49, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_6;
		NullCheck(L_50);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_50, L_51, NULL);
		// for (int j = 0; j < cells.transform.childCount; j++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0117:
	{
		// for (int j = 0; j < cells.transform.childCount; j++)
		int32_t L_53 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = V_3;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_55, NULL);
		if ((((int32_t)L_53) < ((int32_t)L_56)))
		{
			goto IL_009b;
		}
	}
	{
		// for (int i = 0; i < content.childCount; i++)
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_012d:
	{
		// for (int i = 0; i < content.childCount; i++)
		int32_t L_58 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateTableSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float width = sumAllValuesInList(ColumnsWidth);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0;
		L_0 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		float L_1;
		L_1 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_0, NULL);
		V_0 = L_1;
		// float height = sumAllValuesInList(RowsHeight);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2;
		L_2 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		float L_3;
		L_3 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_2, NULL);
		V_1 = L_3;
		// GetComponent<RectTransform>().SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		float L_5 = V_1;
		NullCheck(L_4);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_4, 1, L_5, NULL);
		// GetComponent<RectTransform>().SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, width);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		float L_7 = V_0;
		NullCheck(L_6);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_6, 0, L_7, NULL);
		// Vector2 size = new Vector2(width, height);
		float L_8 = V_0;
		float L_9 = V_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_8, L_9, NULL);
		// this.transform.Find("Content").GetComponent<RectTransform>().sizeDelta = size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_10, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_11, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_2;
		NullCheck(L_12);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_12, L_13, NULL);
		// this.transform.Find("Borders").GetComponent<RectTransform>().sizeDelta = size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_14, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_15, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
		NullCheck(L_16);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::UpdateTableSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_UpdateTableSize_mAEB7152379F1A6EC34477738EBA873EEA76D1727 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform.Find("Content").GetComponent<RectTransform>().sizeDelta = size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_1, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___size0;
		NullCheck(L_2);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_2, L_3, NULL);
		// this.transform.Find("Borders").GetComponent<RectTransform>().sizeDelta = size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_5, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___size0;
		NullCheck(L_6);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateBorders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m3A387633F028BC451972FCA5F9ABC2EFA423BD81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject borders = transform.Find("Borders").gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		V_0 = L_2;
		// borders.GetComponent<UILineRenderer>().Points = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_4;
		L_4 = GameObject_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m3A387633F028BC451972FCA5F9ABC2EFA423BD81(L_3, GameObject_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m3A387633F028BC451972FCA5F9ABC2EFA423BD81_RuntimeMethod_var);
		NullCheck(L_4);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_4, (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL, NULL);
		// if (rows.Count <= 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___rows_25;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		// borders.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// return;
		return;
	}

IL_0038:
	{
		// if (!borders.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_8, NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		// borders.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
	}

IL_0047:
	{
		// switch (BorderType)
		int32_t L_11;
		L_11 = TableUI_get_BorderType_m615506D59DBDD585643E8FB7DAC41AEF3FF81E5C_inline(__this, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)))
		{
			case 0:
			{
				goto IL_008d;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_0094;
			}
			case 4:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_00ab;
	}

IL_006c:
	{
		// GenerateHorizontalBorders(false,true);
		TableUI_GenerateHorizontalBorders_m3CC580EADFDBE14E1387728FBCE5D89EB311CD54(__this, (bool)0, (bool)1, NULL);
		// GenerateVerticalBorders(true);
		TableUI_GenerateVerticalBorders_m1353AD81A4C60373253A8B015D2697E37A50CB5C(__this, (bool)1, NULL);
		// break;
		return;
	}

IL_007c:
	{
		// GenerateHorizontalBorders(false,false);
		TableUI_GenerateHorizontalBorders_m3CC580EADFDBE14E1387728FBCE5D89EB311CD54(__this, (bool)0, (bool)0, NULL);
		// break;
		return;
	}

IL_0085:
	{
		// GenerateVerticalBorders(false);
		TableUI_GenerateVerticalBorders_m1353AD81A4C60373253A8B015D2697E37A50CB5C(__this, (bool)0, NULL);
		// break;
		return;
	}

IL_008d:
	{
		// GenerateOuterBorder();
		TableUI_GenerateOuterBorder_m0C3D67E98454176FEFF641C7368FD9699D1EEB37(__this, NULL);
		// break;
		return;
	}

IL_0094:
	{
		// if (Header)
		bool L_13;
		L_13 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(__this, NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		// GenerateHeaderBorder(false);
		TableUI_GenerateHeaderBorder_mFFADD04B1EF414CA6703A53C74183C4026A92F6E(__this, (bool)0, NULL);
	}

IL_00a3:
	{
		// GenerateVerticalBorders(true);
		TableUI_GenerateVerticalBorders_m1353AD81A4C60373253A8B015D2697E37A50CB5C(__this, (bool)1, NULL);
		// break;
		return;
	}

IL_00ab:
	{
		// borders.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateVerticalBorders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateVerticalBorders_m1353AD81A4C60373253A8B015D2697E37A50CB5C (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___concatenate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_U3CGenerateVerticalBordersU3Eb__0_mDBE4927E47133955044C6CC15B1B925453AE595F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_11 = NULL;
	{
		U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* L_0 = (U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass82_0__ctor_m4C24D12E98AFEA9AF148B134188D1BEFDE1DE6A1(L_0, NULL);
		V_0 = L_0;
		// if (rows.Count <= 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___rows_25;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// Transform borders = transform.Find("Borders");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		V_1 = L_4;
		// Transform content = transform.Find("Content");
		U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		NullCheck(L_5);
		L_5->___content_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___content_0), (void*)L_7);
		// UILineRenderer lineRenderer = borders.GetComponent<UILineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		NullCheck(L_8);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_9;
		L_9 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_8, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		V_2 = L_9;
		// Vector2[] points = new Vector2[(Columns + 1) * 2];
		int32_t L_10;
		L_10 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_10, 1)), 2)));
		V_3 = L_11;
		// Vector3[] cornersV3 = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_4 = L_12;
		// content.GetComponent<RectTransform>().GetWorldCorners(cornersV3);
		U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___content_0;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_14, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_4;
		NullCheck(L_15);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_15, L_16, NULL);
		// Vector2[] corners = applyFuncionOnVector3Array(cornersV3, (Vector3 v) =>
		// {
		//     return content.transform.InverseTransformPoint(v);
		// });
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_4;
		U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* L_18 = V_0;
		v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* L_19 = (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2*)il2cpp_codegen_object_new(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		v3Fun__ctor_m40ADB9265AF1D37C18A1C71608EA27DDDA678D38(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass82_0_U3CGenerateVerticalBordersU3Eb__0_mDBE4927E47133955044C6CC15B1B925453AE595F_RuntimeMethod_var), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20;
		L_20 = TableUI_applyFuncionOnVector3Array_m28749B66930712F0DBBBFFE8465F25BB2AE97E0D(__this, L_17, L_19, NULL);
		V_5 = L_20;
		// points[0] = corners[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_24);
		// points[1] = corners[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = V_5;
		NullCheck(L_26);
		int32_t L_27 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_28);
		// points[1].y -= sumAllValuesInList(RowsHeight);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29 = V_3;
		NullCheck(L_29);
		float* L_30 = (&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1);
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_33;
		L_33 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		float L_34;
		L_34 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_33, NULL);
		*((float*)L_31) = (float)((float)il2cpp_codegen_subtract(L_32, L_34));
		// float columnWidth = content.GetComponent<RectTransform>().sizeDelta.x / Columns;
		U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* L_35 = V_0;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35->___content_0;
		NullCheck(L_36);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37;
		L_37 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_36, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_37, NULL);
		float L_39 = L_38.___x_0;
		int32_t L_40;
		L_40 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		// float deltaX = 0f;
		V_6 = (0.0f);
		// for (int i = 0, k = 2; i < Columns; i++, k += 2)
		V_7 = 0;
		// for (int i = 0, k = 2; i < Columns; i++, k += 2)
		V_8 = 2;
		goto IL_0166;
	}

IL_00ea:
	{
		// Vector2 p1 = points[0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = L_43;
		// Vector2 p2 = points[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_10 = L_46;
		// p1.x += deltaX+ ColumnsWidth[i];
		float* L_47 = (&(&V_9)->___x_0);
		float* L_48 = L_47;
		float L_49 = *((float*)L_48);
		float L_50 = V_6;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_51;
		L_51 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_52 = V_7;
		NullCheck(L_51);
		float L_53;
		L_53 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_51, L_52, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		*((float*)L_48) = (float)((float)il2cpp_codegen_add(L_49, ((float)il2cpp_codegen_add(L_50, L_53))));
		// p2.x += deltaX + ColumnsWidth[i];
		float* L_54 = (&(&V_10)->___x_0);
		float* L_55 = L_54;
		float L_56 = *((float*)L_55);
		float L_57 = V_6;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_58;
		L_58 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_59 = V_7;
		NullCheck(L_58);
		float L_60;
		L_60 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_58, L_59, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		*((float*)L_55) = (float)((float)il2cpp_codegen_add(L_56, ((float)il2cpp_codegen_add(L_57, L_60))));
		// deltaX = deltaX + ColumnsWidth[i];
		float L_61 = V_6;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_62;
		L_62 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		int32_t L_63 = V_7;
		NullCheck(L_62);
		float L_64;
		L_64 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_62, L_63, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_6 = ((float)il2cpp_codegen_add(L_61, L_64));
		// points[k] = p1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = V_3;
		int32_t L_66 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_9;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_67);
		// points[k + 1] = p2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_68 = V_3;
		int32_t L_69 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_10;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_70);
		// for (int i = 0, k = 2; i < Columns; i++, k += 2)
		int32_t L_71 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		// for (int i = 0, k = 2; i < Columns; i++, k += 2)
		int32_t L_72 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_72, 2));
	}

IL_0166:
	{
		// for (int i = 0, k = 2; i < Columns; i++, k += 2)
		int32_t L_73 = V_7;
		int32_t L_74;
		L_74 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_00ea;
		}
	}
	{
		// if (concatenate && lineRenderer.Points != null)
		bool L_75 = ___concatenate0;
		if (!L_75)
		{
			goto IL_01b9;
		}
	}
	{
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_76 = V_2;
		NullCheck(L_76);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_77;
		L_77 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_76, NULL);
		if (!L_77)
		{
			goto IL_01b9;
		}
	}
	{
		// Vector2[] globalPoints = new Vector2[lineRenderer.Points.Length + points.Length];
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_78 = V_2;
		NullCheck(L_78);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_79;
		L_79 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_78, NULL);
		NullCheck(L_79);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_80 = V_3;
		NullCheck(L_80);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_81 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_79)->max_length)), ((int32_t)(((RuntimeArray*)L_80)->max_length)))));
		V_11 = L_81;
		// lineRenderer.Points.CopyTo(globalPoints, 0);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_82 = V_2;
		NullCheck(L_82);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_83;
		L_83 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_82, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_84 = V_11;
		NullCheck((RuntimeArray*)L_83);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_83, (RuntimeArray*)L_84, 0, NULL);
		// points.CopyTo(globalPoints, lineRenderer.Points.Length);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_85 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_86 = V_11;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_87 = V_2;
		NullCheck(L_87);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_88;
		L_88 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_87, NULL);
		NullCheck(L_88);
		NullCheck((RuntimeArray*)L_85);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_85, (RuntimeArray*)L_86, ((int32_t)(((RuntimeArray*)L_88)->max_length)), NULL);
		// lineRenderer.Points = globalPoints;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_89 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_90 = V_11;
		NullCheck(L_89);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_89, L_90, NULL);
		goto IL_01c0;
	}

IL_01b9:
	{
		// lineRenderer.Points = points;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_91 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_92 = V_3;
		NullCheck(L_91);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_91, L_92, NULL);
	}

IL_01c0:
	{
		// lineRenderer.SetAllDirty();
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_93 = V_2;
		NullCheck(L_93);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_93);
		// Utils.SetDirty(borders);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = V_1;
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_94, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateHorizontalBorders(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateHorizontalBorders_m3CC580EADFDBE14E1387728FBCE5D89EB311CD54 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___concatenate0, bool ___extended1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass83_0_U3CGenerateHorizontalBordersU3Eb__0_mADCF414E9728583D591C631A8764AFBB3937E839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	float V_6 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_12 = NULL;
	{
		U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* L_0 = (U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass83_0__ctor_m86207CB76397AB05D5B1F876FCAC0C36B0077D22(L_0, NULL);
		V_0 = L_0;
		// if (rows.Count <= 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___rows_25;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// Transform borders = transform.Find("Borders");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		V_1 = L_4;
		// Transform content = transform.Find("Content");
		U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		NullCheck(L_5);
		L_5->___content_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___content_0), (void*)L_7);
		// UILineRenderer lineRenderer = borders.GetComponent<UILineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		NullCheck(L_8);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_9;
		L_9 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_8, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		V_2 = L_9;
		// Vector2[] points = new Vector2[(rows.Count + 1) * 2];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___rows_25;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_10, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_11, 1)), 2)));
		V_3 = L_12;
		// Vector3[] cornersV3 = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_4 = L_13;
		// content.GetComponent<RectTransform>().GetWorldCorners(cornersV3);
		U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14->___content_0;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_15, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_4;
		NullCheck(L_16);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_16, L_17, NULL);
		// Vector2[] corners = applyFuncionOnVector3Array(cornersV3, (Vector3 v) =>
		// {
		//     return content.transform.InverseTransformPoint(v);
		// });
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_4;
		U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* L_19 = V_0;
		v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* L_20 = (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2*)il2cpp_codegen_object_new(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		v3Fun__ctor_m40ADB9265AF1D37C18A1C71608EA27DDDA678D38(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass83_0_U3CGenerateHorizontalBordersU3Eb__0_mADCF414E9728583D591C631A8764AFBB3937E839_RuntimeMethod_var), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21;
		L_21 = TableUI_applyFuncionOnVector3Array_m28749B66930712F0DBBBFFE8465F25BB2AE97E0D(__this, L_18, L_20, NULL);
		V_5 = L_21;
		// float sum = sumAllValuesInList(ColumnsWidth);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_22;
		L_22 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		float L_23;
		L_23 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_22, NULL);
		V_6 = L_23;
		// points[0] = corners[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_27);
		// points[1] = points[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_31);
		// Vector2 p = points[0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_7 = L_34;
		// p.x += sum;
		float* L_35 = (&(&V_7)->___x_0);
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		float L_38 = V_6;
		*((float*)L_36) = (float)((float)il2cpp_codegen_add(L_37, L_38));
		// points[1] = p;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_39 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_40);
		// if (extended)
		bool L_41 = ___extended1;
		if (!L_41)
		{
			goto IL_010d;
		}
	}
	{
		// points[0].x -= BorderThickness / 2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = V_3;
		NullCheck(L_42);
		float* L_43 = (&((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0);
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		float L_46;
		L_46 = TableUI_get_BorderThickness_m9AFD56E3D296A5BCD0A681629573404C0D7318C0_inline(__this, NULL);
		*((float*)L_44) = (float)((float)il2cpp_codegen_subtract(L_45, ((float)(L_46/(2.0f)))));
		// points[1].x += BorderThickness / 2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_3;
		NullCheck(L_47);
		float* L_48 = (&((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51;
		L_51 = TableUI_get_BorderThickness_m9AFD56E3D296A5BCD0A681629573404C0D7318C0_inline(__this, NULL);
		*((float*)L_49) = (float)((float)il2cpp_codegen_add(L_50, ((float)(L_51/(2.0f)))));
	}

IL_010d:
	{
		// for (int i = 0, k = 2; i < rows.Count; i++, k += 2)
		V_8 = 0;
		// for (int i = 0, k = 2; i < rows.Count; i++, k += 2)
		V_9 = 2;
		goto IL_017f;
	}

IL_0115:
	{
		// Vector2 p1 = points[k-2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_52 = V_3;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_10 = L_55;
		// Vector2 p2 = points[k-1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_56 = V_3;
		int32_t L_57 = V_9;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_11 = L_59;
		// p1.y -= RowsHeight[i];
		float* L_60 = (&(&V_10)->___y_1);
		float* L_61 = L_60;
		float L_62 = *((float*)L_61);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_63;
		L_63 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_64 = V_8;
		NullCheck(L_63);
		float L_65;
		L_65 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_63, L_64, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		*((float*)L_61) = (float)((float)il2cpp_codegen_subtract(L_62, L_65));
		// p2.y -= RowsHeight[i];
		float* L_66 = (&(&V_11)->___y_1);
		float* L_67 = L_66;
		float L_68 = *((float*)L_67);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_69;
		L_69 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		int32_t L_70 = V_8;
		NullCheck(L_69);
		float L_71;
		L_71 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_69, L_70, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		*((float*)L_67) = (float)((float)il2cpp_codegen_subtract(L_68, L_71));
		// points[k] = p1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_72 = V_3;
		int32_t L_73 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = V_10;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_74);
		// points[k + 1] = p2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_75 = V_3;
		int32_t L_76 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_11;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_77);
		// for (int i = 0, k = 2; i < rows.Count; i++, k += 2)
		int32_t L_78 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		// for (int i = 0, k = 2; i < rows.Count; i++, k += 2)
		int32_t L_79 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_79, 2));
	}

IL_017f:
	{
		// for (int i = 0, k = 2; i < rows.Count; i++, k += 2)
		int32_t L_80 = V_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_81 = __this->___rows_25;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_81, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_0115;
		}
	}
	{
		// if (concatenate && lineRenderer.Points != null)
		bool L_83 = ___concatenate0;
		if (!L_83)
		{
			goto IL_01d4;
		}
	}
	{
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_84 = V_2;
		NullCheck(L_84);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_85;
		L_85 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_84, NULL);
		if (!L_85)
		{
			goto IL_01d4;
		}
	}
	{
		// Vector2[] globalPoints = new Vector2[lineRenderer.Points.Length + points.Length];
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_86 = V_2;
		NullCheck(L_86);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_87;
		L_87 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_86, NULL);
		NullCheck(L_87);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_88 = V_3;
		NullCheck(L_88);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_89 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_87)->max_length)), ((int32_t)(((RuntimeArray*)L_88)->max_length)))));
		V_12 = L_89;
		// lineRenderer.Points.CopyTo(globalPoints, 0);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_90 = V_2;
		NullCheck(L_90);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_91;
		L_91 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_90, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_92 = V_12;
		NullCheck((RuntimeArray*)L_91);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_91, (RuntimeArray*)L_92, 0, NULL);
		// points.CopyTo(globalPoints, lineRenderer.Points.Length);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_94 = V_12;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_95 = V_2;
		NullCheck(L_95);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_96;
		L_96 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_95, NULL);
		NullCheck(L_96);
		NullCheck((RuntimeArray*)L_93);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_93, (RuntimeArray*)L_94, ((int32_t)(((RuntimeArray*)L_96)->max_length)), NULL);
		// lineRenderer.Points = globalPoints;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_97 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_98 = V_12;
		NullCheck(L_97);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_97, L_98, NULL);
		goto IL_01db;
	}

IL_01d4:
	{
		// lineRenderer.Points = points;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_99 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_100 = V_3;
		NullCheck(L_99);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_99, L_100, NULL);
	}

IL_01db:
	{
		// lineRenderer.SetAllDirty();
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_101 = V_2;
		NullCheck(L_101);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_101);
		// Utils.SetDirty(borders);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = V_1;
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_102, NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TableUI::sumAllValuesInList(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// float sum = 0f;
		V_0 = (0.0f);
		// foreach(float val in list)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___list0;
		NullCheck(L_0);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_1;
		L_1 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_0, List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD((&V_1), Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000f_1:
			{
				// foreach(float val in list)
				float L_2;
				L_2 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline((&V_1), Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_RuntimeMethod_var);
				V_2 = L_2;
				// sum += val;
				float L_3 = V_0;
				float L_4 = V_2;
				V_0 = ((float)il2cpp_codegen_add(L_3, L_4));
			}

IL_001b_1:
			{
				// foreach(float val in list)
				bool L_5;
				L_5 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209((&V_1), Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// return sum;
		float L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateHeaderBorder(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateHeaderBorder_mFFADD04B1EF414CA6703A53C74183C4026A92F6E (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, bool ___concatenate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass85_0_U3CGenerateHeaderBorderU3Eb__0_mC01FB3D7C7A44705F7584698A3CE0E0F97478128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* V_0 = NULL;
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	{
		U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* L_0 = (U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass85_0__ctor_m2B43A531FAA2BF210784979D1D40A9E43DE1021C(L_0, NULL);
		V_0 = L_0;
		// if (rows.Count <= 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___rows_25;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// Transform borders = transform.Find("Borders");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		// Transform content = transform.Find("Content");
		U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, NULL);
		NullCheck(L_5);
		L_5->___content_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___content_0), (void*)L_7);
		// UILineRenderer lineRenderer = borders.GetComponent<UILineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_4;
		NullCheck(L_8);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_9;
		L_9 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_8, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		V_1 = L_9;
		// Vector2[] points = new Vector2[2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_10;
		// Vector3[] cornersV3 = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_11;
		// content.GetComponent<RectTransform>().GetWorldCorners(cornersV3);
		U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___content_0;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_13, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = V_3;
		NullCheck(L_14);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_14, L_15, NULL);
		// Vector2[] corners = applyFuncionOnVector3Array(cornersV3, (Vector3 v) =>
		// {
		//     return content.transform.InverseTransformPoint(v);
		// });
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_3;
		U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* L_17 = V_0;
		v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* L_18 = (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2*)il2cpp_codegen_object_new(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		v3Fun__ctor_m40ADB9265AF1D37C18A1C71608EA27DDDA678D38(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass85_0_U3CGenerateHeaderBorderU3Eb__0_mC01FB3D7C7A44705F7584698A3CE0E0F97478128_RuntimeMethod_var), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19;
		L_19 = TableUI_applyFuncionOnVector3Array_m28749B66930712F0DBBBFFE8465F25BB2AE97E0D(__this, L_16, L_18, NULL);
		V_4 = L_19;
		// points[0] = corners[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_23);
		// points[1] = corners[2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = V_4;
		NullCheck(L_25);
		int32_t L_26 = 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_27);
		// points[0].y -= RowsHeight[0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = V_2;
		NullCheck(L_28);
		float* L_29 = (&((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_32;
		L_32 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		NullCheck(L_32);
		float L_33;
		L_33 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_32, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		*((float*)L_30) = (float)((float)il2cpp_codegen_subtract(L_31, L_33));
		// points[1].y -= RowsHeight[0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = V_2;
		NullCheck(L_34);
		float* L_35 = (&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1);
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_38;
		L_38 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		NullCheck(L_38);
		float L_39;
		L_39 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_38, 0, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		*((float*)L_36) = (float)((float)il2cpp_codegen_subtract(L_37, L_39));
		// if (concatenate && lineRenderer.Points != null)
		bool L_40 = ___concatenate0;
		G_B3_0 = L_8;
		if (!L_40)
		{
			G_B5_0 = L_8;
			goto IL_0112;
		}
	}
	{
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_41 = V_1;
		NullCheck(L_41);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42;
		L_42 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_41, NULL);
		G_B4_0 = G_B3_0;
		if (!L_42)
		{
			G_B5_0 = G_B3_0;
			goto IL_0112;
		}
	}
	{
		// Vector2[] globalPoints = new Vector2[lineRenderer.Points.Length + points.Length];
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_43 = V_1;
		NullCheck(L_43);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44;
		L_44 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_43, NULL);
		NullCheck(L_44);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_2;
		NullCheck(L_45);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_46 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_44)->max_length)), ((int32_t)(((RuntimeArray*)L_45)->max_length)))));
		V_5 = L_46;
		// lineRenderer.Points.CopyTo(globalPoints, 0);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_47 = V_1;
		NullCheck(L_47);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_48;
		L_48 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_47, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_49 = V_5;
		NullCheck((RuntimeArray*)L_48);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_48, (RuntimeArray*)L_49, 0, NULL);
		// points.CopyTo(globalPoints, lineRenderer.Points.Length);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_51 = V_5;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_52 = V_1;
		NullCheck(L_52);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_53;
		L_53 = UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline(L_52, NULL);
		NullCheck(L_53);
		NullCheck((RuntimeArray*)L_50);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_50, (RuntimeArray*)L_51, ((int32_t)(((RuntimeArray*)L_53)->max_length)), NULL);
		// lineRenderer.Points = globalPoints;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_54 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_55 = V_5;
		NullCheck(L_54);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_54, L_55, NULL);
		G_B6_0 = G_B4_0;
		goto IL_0119;
	}

IL_0112:
	{
		// lineRenderer.Points = points;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_56 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = V_2;
		NullCheck(L_56);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_56, L_57, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0119:
	{
		// lineRenderer.SetAllDirty();
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_58 = V_1;
		NullCheck(L_58);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_58);
		// Utils.SetDirty(borders);
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::GenerateOuterBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_GenerateOuterBorder_m0C3D67E98454176FEFF641C7368FD9699D1EEB37 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass86_0_U3CGenerateOuterBorderU3Eb__0_mF06DF58298D3EC614902165A605EF2B454AC37E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* V_0 = NULL;
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_4 = NULL;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* L_0 = (U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass86_0__ctor_mCF838FB5B6B5FD1ABCEFE2F3EFD7A0A041A2D052(L_0, NULL);
		V_0 = L_0;
		// Transform borders = transform.Find("Borders");
		U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		NullCheck(L_1);
		L_1->___borders_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___borders_0), (void*)L_3);
		// UILineRenderer lineRenderer = borders.GetComponent<UILineRenderer>();
		U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___borders_0;
		NullCheck(L_5);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_6;
		L_6 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_5, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		V_1 = L_6;
		// Vector3[] cornersV3 = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_7;
		// borders.GetComponent<RectTransform>().GetWorldCorners(cornersV3);
		U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___borders_0;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_9, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_2;
		NullCheck(L_10);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_10, L_11, NULL);
		// Vector2[] corners = applyFuncionOnVector3Array(cornersV3, (Vector3 v) =>
		// {
		//     return borders.transform.InverseTransformPoint(v);
		// });
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_2;
		U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* L_13 = V_0;
		v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* L_14 = (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2*)il2cpp_codegen_object_new(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		v3Fun__ctor_m40ADB9265AF1D37C18A1C71608EA27DDDA678D38(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass86_0_U3CGenerateOuterBorderU3Eb__0_mF06DF58298D3EC614902165A605EF2B454AC37E2_RuntimeMethod_var), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15;
		L_15 = TableUI_applyFuncionOnVector3Array_m28749B66930712F0DBBBFFE8465F25BB2AE97E0D(__this, L_12, L_14, NULL);
		V_3 = L_15;
		// Vector2[] points = new Vector2[8];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_4 = L_16;
		// for (int i = 1, k = 1; i < points.Length; i += 2, k++)
		V_6 = 1;
		// for (int i = 1, k = 1; i < points.Length; i += 2, k++)
		V_7 = 1;
		goto IL_00a6;
	}

IL_0064:
	{
		// int a = mod(k, 4);
		int32_t L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = TableUI_mod_mEAD0A6F7841380B8A4073E41DB53AFBE604BBBDD(L_17, 4, NULL);
		V_8 = L_18;
		// points[i] = corners[a];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = V_4;
		int32_t L_20 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_3;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_24);
		// points[i - 1] = corners[mod(a - 1, 4)];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = V_4;
		int32_t L_26 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = V_3;
		int32_t L_28 = V_8;
		int32_t L_29;
		L_29 = TableUI_mod_mEAD0A6F7841380B8A4073E41DB53AFBE604BBBDD(((int32_t)il2cpp_codegen_subtract(L_28, 1)), 4, NULL);
		NullCheck(L_27);
		int32_t L_30 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_26, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_31);
		// for (int i = 1, k = 1; i < points.Length; i += 2, k++)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		// for (int i = 1, k = 1; i < points.Length; i += 2, k++)
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a6:
	{
		// for (int i = 1, k = 1; i < points.Length; i += 2, k++)
		int32_t L_34 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = V_4;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		// float offset = BorderThickness / 2;
		float L_36;
		L_36 = TableUI_get_BorderThickness_m9AFD56E3D296A5BCD0A681629573404C0D7318C0_inline(__this, NULL);
		V_5 = ((float)(L_36/(2.0f)));
		// points[0].y -= offset;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = V_4;
		NullCheck(L_37);
		float* L_38 = (&((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		float L_41 = V_5;
		*((float*)L_39) = (float)((float)il2cpp_codegen_subtract(L_40, L_41));
		// points[1].y += offset;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = V_4;
		NullCheck(L_42);
		float* L_43 = (&((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1);
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		float L_46 = V_5;
		*((float*)L_44) = (float)((float)il2cpp_codegen_add(L_45, L_46));
		// points[4].y += offset;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_4;
		NullCheck(L_47);
		float* L_48 = (&((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)))->___y_1);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = V_5;
		*((float*)L_49) = (float)((float)il2cpp_codegen_add(L_50, L_51));
		// points[5].y -= offset;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_52 = V_4;
		NullCheck(L_52);
		float* L_53 = (&((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)))->___y_1);
		float* L_54 = L_53;
		float L_55 = *((float*)L_54);
		float L_56 = V_5;
		*((float*)L_54) = (float)((float)il2cpp_codegen_subtract(L_55, L_56));
		// lineRenderer.Points = points;
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_57 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_58 = V_4;
		NullCheck(L_57);
		UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF(L_57, L_58, NULL);
		// lineRenderer.SetAllDirty();
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_59 = V_1;
		NullCheck(L_59);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_59);
		// Utils.SetDirty(borders);
		U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* L_60 = V_0;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = L_60->___borders_0;
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_61, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2[] UnityEngine.UI.TableUI.TableUI::applyFuncionOnVector3Array(UnityEngine.Vector3[],UnityEngine.UI.TableUI.TableUI/v3Fun)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* TableUI_applyFuncionOnVector3Array_m28749B66930712F0DBBBFFE8465F25BB2AE97E0D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___v30, v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* ___fun1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Vector2[] v2 = new Vector2[v3.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___v30;
		NullCheck(L_0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < v3.Length; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		// v2[i] = fun(v3[i]);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = V_0;
		int32_t L_3 = V_1;
		v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* L_4 = ___fun1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___v30;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_inline(L_4, L_8, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		// for (int i = 0; i < v3.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < v3.Length; i++)
		int32_t L_11 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = ___v30;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return v2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = V_0;
		return L_13;
	}
}
// System.Int32 UnityEngine.UI.TableUI.TableUI::mod(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableUI_mod_mEAD0A6F7841380B8A4073E41DB53AFBE604BBBDD (int32_t ___x0, int32_t ___m1, const RuntimeMethod* method) 
{
	{
		// return (x % m + m) % m;
		int32_t L_0 = ___x0;
		int32_t L_1 = ___m1;
		int32_t L_2 = ___m1;
		int32_t L_3 = ___m1;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0%L_1)), L_2))%L_3));
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_Refresh_mF7559227A9BF825BA0FEFB79A8D36ECC02840F4B (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// UpdateColumnsWidth();
		TableUI_UpdateColumnsWidth_m0E00C5DD2DE40E2ED6930A3597FC0517602B78E7(__this, NULL);
		// UpdateRowsWidth();
		TableUI_UpdateRowsWidth_m700233E76EE004AE77D1D0F97B4CC5BF5A645B52(__this, NULL);
		// UpdateRowHeight();
		TableUI_UpdateRowHeight_m75218EB96C2C155A12BA36C461F158D0469D460E(__this, NULL);
		// UpdateTableSize();
		TableUI_UpdateTableSize_mE27248E44DF270E15159F049FDE27ECBF38805A0(__this, NULL);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::RefreshBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_RefreshBorder_m30315EB124156DCA239DBF52CAE19FB34FC948E5 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform borders = transform.Find("Borders");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral1E590F5D92EB83B540181E179A311BEBD1F17138, NULL);
		// borders.GetComponent<UILineRenderer>().LineThickness = _borderThickness;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_3;
		L_3 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_2, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		float L_4 = __this->____borderThickness_23;
		NullCheck(L_3);
		UILineRenderer_set_LineThickness_mCFE1CE39ED210D7B36BD5F8D05ED57F07DD6CF61(L_3, L_4, NULL);
		// borders.GetComponent<UILineRenderer>().color = _borderColor;
		NullCheck(L_2);
		UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* L_5;
		L_5 = Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A(L_2, Component_GetComponent_TisUILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11_m8D82986962AC5D812456C86F5FD6B2F302DF6A0A_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->____borderColor_20;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// GenerateBorders();
		TableUI_GenerateBorders_mB0A52EA2F838AFC4602F3BCEBF67857D170DC954(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::RefreshColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_RefreshColor_m7F694BDBF01A5C8A84A9E3E3BF85EAF843BC30C2 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// UpdateHeaderColor();
		TableUI_UpdateHeaderColor_m84C815FAABB29B7E9E14622A928B6C3ECFCCA44D(__this, NULL);
		// UpdateColor();
		TableUI_UpdateColor_m6BA08F3C8523A3356F9DEEE6124B9BC1A591513D(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::RefreshHeaderTextProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_RefreshHeaderTextProperties_mA187DA6F1E41F1C8EF15FDFC79B62ECD403982F3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8A556F0A8E6FC1246068E30375330FBE1867F0);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	{
		// Utils.RecordObject(headerCellProperties, "Header");
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_0 = __this->___headerCellProperties_15;
		Utils_RecordObject_m062211731B59AC6413D8C428C33343B1695470A8(L_0, _stringLiteralEC8A556F0A8E6FC1246068E30375330FBE1867F0, NULL);
		// Utils.RecordObjects(data[0].list.ToArray(), "Header");
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_1 = __this->___data_12;
		NullCheck(L_1);
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_2;
		L_2 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_1, 0, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_3 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_2)->___list_0;
		NullCheck(L_3);
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_4;
		L_4 = List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305(L_3, List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305_RuntimeMethod_var);
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_4;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_5 = V_0;
		Utils_RecordObjects_m371EC3BF8352C45E02FC92F2EE4CC36DE4C5B523(L_5, _stringLiteralEC8A556F0A8E6FC1246068E30375330FBE1867F0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::RefreshBodyTextProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_RefreshBodyTextProperties_mF1E1BA1C6A5FF3716B156CA4640EBD365451B70D (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_1 = NULL;
	{
		// Utils.RecordObject(bodyCellProperties, "Body");
		TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* L_0 = __this->___bodyCellProperties_16;
		Utils_RecordObject_m062211731B59AC6413D8C428C33343B1695470A8(L_0, _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA, NULL);
		// for(int i = 1; i < Rows; i++)
		V_0 = 1;
		goto IL_003a;
	}

IL_0014:
	{
		// Utils.RecordObjects(data[i].list.ToArray(), "Body");
		List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_1 = __this->___data_12;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_3;
		L_3 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_1, L_2, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_4 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_3)->___list_0;
		NullCheck(L_4);
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_5;
		L_5 = List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305(L_4, List_1_ToArray_m2C75AA15684553291837966F90ADA2C6C1494305_RuntimeMethod_var);
		V_1 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_5;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = V_1;
		Utils_RecordObjects_m371EC3BF8352C45E02FC92F2EE4CC36DE4C5B523(L_6, _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA, NULL);
		// for(int i = 1; i < Rows; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003a:
	{
		// for(int i = 1; i < Rows; i++)
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::OnUndoRedoEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_OnUndoRedoEvent_mD38E94533D46583485CDEE5DF4B37CEAC3EAACD3 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (undoRedoEvent.Equals("Border"))
		String_t* L_0 = __this->___undoRedoEvent_26;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, _stringLiteralBA84F814F80125A2E72AEB25CB2B1AEAEFC88406, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// RefreshBorder();
		TableUI_RefreshBorder_m30315EB124156DCA239DBF52CAE19FB34FC948E5(__this, NULL);
		return;
	}

IL_0019:
	{
		// else if (undoRedoEvent.Equals("Color"))
		String_t* L_2 = __this->___undoRedoEvent_26;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// RefreshColor();
		TableUI_RefreshColor_m7F694BDBF01A5C8A84A9E3E3BF85EAF843BC30C2(__this, NULL);
		return;
	}

IL_0032:
	{
		// Refresh();
		TableUI_Refresh_mF7559227A9BF825BA0FEFB79A8D36ECC02840F4B(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::MakeAllRowsTheSameHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_MakeAllRowsTheSameHeight_mC4789751DC1898729A98FE9F6FF67155474F4796 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// Utils.RegisterFullObjectHierarchyUndo(this, "Table");
		Utils_RegisterFullObjectHierarchyUndo_mEEC014ABEC4E241F56A61026AA4FAC69903BE7C0(__this, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		// float height = sumAllValuesInList(RowsHeight) / Rows;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0;
		L_0 = TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline(__this, NULL);
		float L_1;
		L_1 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_0, NULL);
		int32_t L_2;
		L_2 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		V_0 = ((float)(L_1/((float)L_2)));
		// for(int i = 0; i < Rows; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_0024:
	{
		// _rowsHeight[i] = height;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = __this->____rowsHeight_10;
		int32_t L_4 = V_1;
		float L_5 = V_0;
		NullCheck(L_3);
		List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64(L_3, L_4, L_5, List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		// for(int i = 0; i < Rows; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
		// for(int i = 0; i < Rows; i++)
		int32_t L_7 = V_1;
		int32_t L_8;
		L_8 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(__this, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0024;
		}
	}
	{
		// Refresh();
		TableUI_Refresh_mF7559227A9BF825BA0FEFB79A8D36ECC02840F4B(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::MakeAllColumnsTheSameWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI_MakeAllColumnsTheSameWidth_mEDA3AA066C3BC6EDCD7030159CF3C722516B3D94 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// Utils.RegisterFullObjectHierarchyUndo(this, "Table");
		Utils_RegisterFullObjectHierarchyUndo_mEEC014ABEC4E241F56A61026AA4FAC69903BE7C0(__this, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		// float width = sumAllValuesInList(ColumnsWidth) / Columns;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0;
		L_0 = TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline(__this, NULL);
		float L_1;
		L_1 = TableUI_sumAllValuesInList_m0915581FDDEE253F88EA6B00AFD27A317D8707E8(__this, L_0, NULL);
		int32_t L_2;
		L_2 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		V_0 = ((float)(L_1/((float)L_2)));
		// for (int i = 0; i < Columns; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_0024:
	{
		// _columnsWidth[i] = width;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = __this->____columnsWidth_9;
		int32_t L_4 = V_1;
		float L_5 = V_0;
		NullCheck(L_3);
		List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64(L_3, L_4, L_5, List_1_set_Item_mF4B7177286D26D36C97989C84CDDC6B3B242FC64_RuntimeMethod_var);
		// for (int i = 0; i < Columns; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < Columns; i++)
		int32_t L_7 = V_1;
		int32_t L_8;
		L_8 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(__this, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0024;
		}
	}
	{
		// Refresh();
		TableUI_Refresh_mF7559227A9BF825BA0FEFB79A8D36ECC02840F4B(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI__ctor_m18523419A31BC6F0B2AA8DEFC6A583FCCBAFA3E9 (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// private Color _borderColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->____borderColor_20 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TableUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableUI__cctor_m9317C3DB56D53F58AB41F4FEE6AA9A3D8722A2EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int MAX_ROWS = 20, MIN_ROWS = 1, MAX_COL = 20, MIN_COL = 1;
		((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MAX_ROWS_5 = ((int32_t)20);
		// public static int MAX_ROWS = 20, MIN_ROWS = 1, MAX_COL = 20, MIN_COL = 1;
		((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MIN_ROWS_6 = 1;
		// public static int MAX_ROWS = 20, MIN_ROWS = 1, MAX_COL = 20, MIN_COL = 1;
		((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MAX_COL_7 = ((int32_t)20);
		// public static int MAX_ROWS = 20, MIN_ROWS = 1, MAX_COL = 20, MIN_COL = 1;
		((TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_StaticFields*)il2cpp_codegen_static_fields_for(TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_il2cpp_TypeInfo_var))->___MIN_COL_8 = 1;
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
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_Multicast(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* currentDelegate = reinterpret_cast<v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2*>(delegatesToInvoke[i]);
		typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___v0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_OpenInst(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method)
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___v0, method);
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_OpenStatic(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method)
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___v0, method);
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_OpenStaticInvoker(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___v0);
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_ClosedStaticInvoker(v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___v0);
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DelegatePInvokeWrapper_v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2 (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method)
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 returnValue = il2cppPInvokeFunc(___v0);

	return returnValue;
}
// System.Void UnityEngine.UI.TableUI.TableUI/v3Fun::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v3Fun__ctor_m40ADB9265AF1D37C18A1C71608EA27DDDA678D38 (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_Multicast;
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/v3Fun::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178 (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___v0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.UI.TableUI.TableUI/v3Fun::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* v3Fun_BeginInvoke_mD169FA37E3D60143BAC238BD3C9FF5417B694E52 (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___v0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/v3Fun::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_EndInvoke_mFA9C001F1A381F8F3E32A8AF903C040B46D10DAB (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.TableUI.TableUI/TextMeshList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshList__ctor_m590EB29929C2042C0D9CC20D7C54F8E93C26FC5E (TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWrapper_1__ctor_m99557073542244D4B9234736CAC9B329DFFDF588_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListWrapper_1__ctor_m99557073542244D4B9234736CAC9B329DFFDF588(__this, ListWrapper_1__ctor_m99557073542244D4B9234736CAC9B329DFFDF588_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass82_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0__ctor_m4C24D12E98AFEA9AF148B134188D1BEFDE1DE6A1 (U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass82_0::<GenerateVerticalBorders>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass82_0_U3CGenerateVerticalBordersU3Eb__0_mDBE4927E47133955044C6CC15B1B925453AE595F (U3CU3Ec__DisplayClass82_0_t8E615A0EA91DCB3B786E63C5E0A902488E5A61C7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return content.transform.InverseTransformPoint(v);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___content_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		return L_4;
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
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass83_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_0__ctor_m86207CB76397AB05D5B1F876FCAC0C36B0077D22 (U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass83_0::<GenerateHorizontalBorders>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass83_0_U3CGenerateHorizontalBordersU3Eb__0_mADCF414E9728583D591C631A8764AFBB3937E839 (U3CU3Ec__DisplayClass83_0_t6C0B23A1F4E8ABB418C4FF340BF53DB46A79ADE1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return content.transform.InverseTransformPoint(v);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___content_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		return L_4;
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
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass85_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0__ctor_m2B43A531FAA2BF210784979D1D40A9E43DE1021C (U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass85_0::<GenerateHeaderBorder>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass85_0_U3CGenerateHeaderBorderU3Eb__0_mC01FB3D7C7A44705F7584698A3CE0E0F97478128 (U3CU3Ec__DisplayClass85_0_t57C2A267931F198D5C6705A0923C73BA38CCAE6D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return content.transform.InverseTransformPoint(v);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___content_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		return L_4;
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
// System.Void UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass86_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0__ctor_mCF838FB5B6B5FD1ABCEFE2F3EFD7A0A041A2D052 (U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UI.TableUI.TableUI/<>c__DisplayClass86_0::<GenerateOuterBorder>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass86_0_U3CGenerateOuterBorderU3Eb__0_mF06DF58298D3EC614902165A605EF2B454AC37E2 (U3CU3Ec__DisplayClass86_0_t0609138F275C3BD55F568C8EAFE5D7F3D881B8B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return borders.transform.InverseTransformPoint(v);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___borders_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		return L_4;
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
// System.Void UnityEngine.UI.TableUI.BoolList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolList__ctor_m06514AEB507E58BBB0F25609245C37686C9BEC46 (BoolList_t3D42DC2D252D81ACFBC243E7BF90C3F48F7ED5AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD(__this, ListWrapper_1__ctor_mD5B3C4C4C0BD7267C044AB7A6734004320D984BD_RuntimeMethod_var);
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
// TMPro.TMP_FontAsset UnityEngine.UI.TableUI.TextProperties::get_FontAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* TextProperties_get_FontAsset_m680A10E5714D34C5252D397E9AEC343263818705 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontAsset; }
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->____fontAsset_7;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_FontAsset(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_FontAsset_mEA4FCD1F94CEAAF642444FF63F3729257D98BAEB (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E7CEA65A78D404CA66F61EFE31DDE74A9102DCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C97AF4C5368CAFA5EF27C9CA4914382F6B93B81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_fontAsset == null)
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->____fontAsset_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// _fontAsset = value;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_2 = ___value0;
		__this->____fontAsset_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fontAsset_7), (void*)L_2);
		// return;
		return;
	}

IL_0016:
	{
		// if (_fontAsset == value)
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_3 = __this->____fontAsset_7;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		return;
	}

IL_0025:
	{
		// _fontAsset = value;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_6 = ___value0;
		__this->____fontAsset_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fontAsset_7), (void*)L_6);
		// ApplyProperty("FontAsset", "font");
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral8C97AF4C5368CAFA5EF27C9CA4914382F6B93B81, _stringLiteral0E7CEA65A78D404CA66F61EFE31DDE74A9102DCB, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.UI.TableUI.TextProperties::get_FontStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextProperties_get_FontStyle_m8F62D580F3A5DB34BFAF748412D349F8B50ADC9B (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontStyle; }
		int32_t L_0 = __this->____fontStyle_8;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_FontStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_FontStyle_mA9FF253CF619B85293165E481B397CF53D95D622 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65D715095A1561177161BA4B4CA07AC18D3B9431);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A9A67B54F7C32E4F294A3CCEE13A3BA9100A6C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FontStyle == value)
		int32_t L_0;
		L_0 = TextProperties_get_FontStyle_m8F62D580F3A5DB34BFAF748412D349F8B50ADC9B_inline(__this, NULL);
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _fontStyle = value;
		int32_t L_2 = ___value0;
		__this->____fontStyle_8 = L_2;
		// ApplyProperty("FontStyle", "fontStyle");
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral65D715095A1561177161BA4B4CA07AC18D3B9431, _stringLiteral6A9A67B54F7C32E4F294A3CCEE13A3BA9100A6C3, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TextProperties::get_FontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextProperties_get_FontSize_m81CE05CED3DF91F53D4F34A9AEE5026A2634C07B (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontSize; }
		float L_0 = __this->____fontSize_9;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_FontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_FontSize_m43D6C5FAC340805BEFD64D51426F13313EB7E0ED (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2265F5D61F5055E7A323259B86304FC3DCF1B325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1CBB6587B9CB9A5FABEF74242F50F5C4647CA59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == _fontSize)
		float L_0 = ___value0;
		float L_1 = __this->____fontSize_9;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _fontSize = value;
		float L_2 = ___value0;
		__this->____fontSize_9 = L_2;
		// ApplyProperty("FontSize", "fontSize");
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral2265F5D61F5055E7A323259B86304FC3DCF1B325, _stringLiteralC1CBB6587B9CB9A5FABEF74242F50F5C4647CA59, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.TableUI.TextProperties::get_AutoSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextProperties_get_AutoSize_m199DC590207B8C9D347474E0A12498A2F9776DDC (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _autoSize; }
		bool L_0 = __this->____autoSize_10;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_AutoSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_AutoSize_m8B83E5ADD3E37FC5D013AF0EC2E0B8D3972B9E94 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProperties_U3Cset_AutoSizeU3Eb__19_0_m3CA78E732FBBDE252A8A3D452198A13C4DA3C8B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95AF4C33646E5C4C741EEC46E6A8489E8C2F9F0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF94427D72D8E7DBB1FA2C1AF19F0F19A8A41881);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_autoSize == value) return; _autoSize = value;
		bool L_0 = __this->____autoSize_10;
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (_autoSize == value) return; _autoSize = value;
		return;
	}

IL_000a:
	{
		// if (_autoSize == value) return; _autoSize = value;
		bool L_2 = ___value0;
		__this->____autoSize_10 = L_2;
		// ApplyProperty("AutoSize", "enableAutoSizing",
		//     (TextMeshProUGUI tmp) =>
		//     {
		//         if (!_autoSize)
		//         {
		//             _fontSizeMin = tmp.fontSizeMin;
		//             _fontSizeMax = tmp.fontSizeMax;
		//             _characterWidthAdjustment = tmp.characterWidthAdjustment;
		//             _lineSpacingAdjustment = tmp.lineSpacingAdjustment;
		//         }
		//         _fontSize = tmp.fontSize;
		// 
		//     });
		Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* L_3 = (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)il2cpp_codegen_object_new(Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m960298CE98322FE4A666992B60A252A31E7A4E68(L_3, __this, (intptr_t)((void*)TextProperties_U3Cset_AutoSizeU3Eb__19_0_m3CA78E732FBBDE252A8A3D452198A13C4DA3C8B4_RuntimeMethod_var), NULL);
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral95AF4C33646E5C4C741EEC46E6A8489E8C2F9F0A, _stringLiteralEF94427D72D8E7DBB1FA2C1AF19F0F19A8A41881, L_3, NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TextProperties::get_FontSizeMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextProperties_get_FontSizeMin_m710388466D4389820D47F8158F3682ADE7E2A4FE (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontSizeMin; }
		float L_0 = __this->____fontSizeMin_11;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_FontSizeMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_FontSizeMin_m3C8BA8F07E32B286396DD5A2FB5A8D2888758FA8 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F548925FB56982D6E0D66F68CD5F05175D538DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5C7EA7F45892C691F1DE24423066475F2E5026C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (value == _fontSizeMin) return; _fontSizeMin = value; ApplyProperty("FontSizeMin", "fontSizeMin"); }
		float L_0 = ___value0;
		float L_1 = __this->____fontSizeMin_11;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (value == _fontSizeMin) return; _fontSizeMin = value; ApplyProperty("FontSizeMin", "fontSizeMin"); }
		return;
	}

IL_000a:
	{
		// set { if (value == _fontSizeMin) return; _fontSizeMin = value; ApplyProperty("FontSizeMin", "fontSizeMin"); }
		float L_2 = ___value0;
		__this->____fontSizeMin_11 = L_2;
		// set { if (value == _fontSizeMin) return; _fontSizeMin = value; ApplyProperty("FontSizeMin", "fontSizeMin"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteralA5C7EA7F45892C691F1DE24423066475F2E5026C, _stringLiteral1F548925FB56982D6E0D66F68CD5F05175D538DF, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (value == _fontSizeMin) return; _fontSizeMin = value; ApplyProperty("FontSizeMin", "fontSizeMin"); }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TextProperties::get_FontSizeMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextProperties_get_FontSizeMax_mD5FA16184862FCE8791A44A8BB6EE22CBBE321A0 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontSizeMax; }
		float L_0 = __this->____fontSizeMax_12;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_FontSizeMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_FontSizeMax_m8A930E412DBB1C23F3B54537B89380B1A1B640D3 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CCF9976503B89EFABAED874CC944E7685EDA23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA914EFBE73739B6FE2F741B8AFCBEB94F3835B9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (value == _fontSizeMax) return; _fontSizeMax = value; ApplyProperty("FontSizeMax", "fontSizeMax"); }
		float L_0 = ___value0;
		float L_1 = __this->____fontSizeMax_12;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (value == _fontSizeMax) return; _fontSizeMax = value; ApplyProperty("FontSizeMax", "fontSizeMax"); }
		return;
	}

IL_000a:
	{
		// set { if (value == _fontSizeMax) return; _fontSizeMax = value; ApplyProperty("FontSizeMax", "fontSizeMax"); }
		float L_2 = ___value0;
		__this->____fontSizeMax_12 = L_2;
		// set { if (value == _fontSizeMax) return; _fontSizeMax = value; ApplyProperty("FontSizeMax", "fontSizeMax"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral75CCF9976503B89EFABAED874CC944E7685EDA23, _stringLiteralA914EFBE73739B6FE2F741B8AFCBEB94F3835B9F, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (value == _fontSizeMax) return; _fontSizeMax = value; ApplyProperty("FontSizeMax", "fontSizeMax"); }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TextProperties::get_CharacterWidthAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextProperties_get_CharacterWidthAdjustment_mF652AFBF258FF12EEC0AF64506447BC26D28C403 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _characterWidthAdjustment; }
		float L_0 = __this->____characterWidthAdjustment_13;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_CharacterWidthAdjustment(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_CharacterWidthAdjustment_m80728F760A1A54FA951F76F10D59912518FADF94 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B3BB98D99E35689C7B3DBEAA46DBDAF5908B39C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA80C57433B9B6B9A44EBEA0A90482BA2D67568E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (value == _characterWidthAdjustment) return; _characterWidthAdjustment = value; ApplyProperty("CharacterWidthAdjustment", "characterWidthAdjustment"); }
		float L_0 = ___value0;
		float L_1 = __this->____characterWidthAdjustment_13;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (value == _characterWidthAdjustment) return; _characterWidthAdjustment = value; ApplyProperty("CharacterWidthAdjustment", "characterWidthAdjustment"); }
		return;
	}

IL_000a:
	{
		// set { if (value == _characterWidthAdjustment) return; _characterWidthAdjustment = value; ApplyProperty("CharacterWidthAdjustment", "characterWidthAdjustment"); }
		float L_2 = ___value0;
		__this->____characterWidthAdjustment_13 = L_2;
		// set { if (value == _characterWidthAdjustment) return; _characterWidthAdjustment = value; ApplyProperty("CharacterWidthAdjustment", "characterWidthAdjustment"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteralA80C57433B9B6B9A44EBEA0A90482BA2D67568E8, _stringLiteral4B3BB98D99E35689C7B3DBEAA46DBDAF5908B39C, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (value == _characterWidthAdjustment) return; _characterWidthAdjustment = value; ApplyProperty("CharacterWidthAdjustment", "characterWidthAdjustment"); }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TextProperties::get_LineSpacingAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextProperties_get_LineSpacingAdjustment_m89819D92D4763EC3BF7E960CC484F5B5443F95F4 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _lineSpacingAdjustment; }
		float L_0 = __this->____lineSpacingAdjustment_14;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_LineSpacingAdjustment(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_LineSpacingAdjustment_mE42B971CAED70013D0436DB5DA62E857F53FDE60 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3418BA1E1168E1BE4FCE03CFBDB0B057027061C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C0332D9B3D625D6EA02B86B4A4F1FD0FD3ACF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (value == _lineSpacingAdjustment) return; _lineSpacingAdjustment = value; ApplyProperty("LineSpacingAdjustment", "lineSpacingAdjustment"); }
		float L_0 = ___value0;
		float L_1 = __this->____lineSpacingAdjustment_14;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (value == _lineSpacingAdjustment) return; _lineSpacingAdjustment = value; ApplyProperty("LineSpacingAdjustment", "lineSpacingAdjustment"); }
		return;
	}

IL_000a:
	{
		// set { if (value == _lineSpacingAdjustment) return; _lineSpacingAdjustment = value; ApplyProperty("LineSpacingAdjustment", "lineSpacingAdjustment"); }
		float L_2 = ___value0;
		__this->____lineSpacingAdjustment_14 = L_2;
		// set { if (value == _lineSpacingAdjustment) return; _lineSpacingAdjustment = value; ApplyProperty("LineSpacingAdjustment", "lineSpacingAdjustment"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral3418BA1E1168E1BE4FCE03CFBDB0B057027061C5, _stringLiteralE0C0332D9B3D625D6EA02B86B4A4F1FD0FD3ACF4, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (value == _lineSpacingAdjustment) return; _lineSpacingAdjustment = value; ApplyProperty("LineSpacingAdjustment", "lineSpacingAdjustment"); }
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.TableUI.TextProperties::get_VertexColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextProperties_get_VertexColor_mABB9BF3151214EC54846EB945029704118FDF65C (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _vertexColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____vertexColor_15;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_VertexColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_VertexColor_m0FE825852E8413418D7F5AAD74ED1DEFE03DA977 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4CE447E8F8D42258FCBE3756D4615C309989EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (value == _vertexColor) return; _vertexColor = value; ApplyProperty("VertexColor", "color"); }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____vertexColor_15;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// set { if (value == _vertexColor) return; _vertexColor = value; ApplyProperty("VertexColor", "color"); }
		return;
	}

IL_000f:
	{
		// set { if (value == _vertexColor) return; _vertexColor = value; ApplyProperty("VertexColor", "color"); }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value0;
		__this->____vertexColor_15 = L_3;
		// set { if (value == _vertexColor) return; _vertexColor = value; ApplyProperty("VertexColor", "color"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral4F4CE447E8F8D42258FCBE3756D4615C309989EB, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (value == _vertexColor) return; _vertexColor = value; ApplyProperty("VertexColor", "color"); }
		return;
	}
}
// TMPro.TextAlignmentOptions UnityEngine.UI.TableUI.TextProperties::get_Alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextProperties_get_Alignment_m1BC2C51BEA0B88FB91860055BEF2F36B0B33B06F (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _alignment; }
		int32_t L_0 = __this->____alignment_16;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_Alignment(TMPro.TextAlignmentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_Alignment_m1D23540AC8B6AFD7AB070998F482ACD26D8F219A (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D18D41C3CA40217AB14C2E3DC0654E77A3140CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7FE8AB16F922127B0F7E118A9CC519BCCD5ACFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (_alignment == value) return; _alignment = value; ApplyProperty("Alignment", "alignment"); }
		int32_t L_0 = __this->____alignment_16;
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (_alignment == value) return; _alignment = value; ApplyProperty("Alignment", "alignment"); }
		return;
	}

IL_000a:
	{
		// set { if (_alignment == value) return; _alignment = value; ApplyProperty("Alignment", "alignment"); }
		int32_t L_2 = ___value0;
		__this->____alignment_16 = L_2;
		// set { if (_alignment == value) return; _alignment = value; ApplyProperty("Alignment", "alignment"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteralC7FE8AB16F922127B0F7E118A9CC519BCCD5ACFC, _stringLiteral8D18D41C3CA40217AB14C2E3DC0654E77A3140CA, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (_alignment == value) return; _alignment = value; ApplyProperty("Alignment", "alignment"); }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.TextProperties::get_WrapMixWC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextProperties_get_WrapMixWC_m08D3C517A65473457A694F9A16CBE00EC6CE20FA (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _wrapMixWC; }
		float L_0 = __this->____wrapMixWC_17;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::set_WrapMixWC(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_set_WrapMixWC_m0B95BC9A21A3AEA98F154D73738FB1A630829407 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421DB428A0E2F250E0ADBFAE3468F9C525A18B9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A3A93F16AE39DA5F2296574C2BFD9118AAD52E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { if (_wrapMixWC == value) return; _wrapMixWC = value; ApplyProperty("WrapMixWC", "wordWrappingRatios"); }
		float L_0 = __this->____wrapMixWC_17;
		float L_1 = ___value0;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// set { if (_wrapMixWC == value) return; _wrapMixWC = value; ApplyProperty("WrapMixWC", "wordWrappingRatios"); }
		return;
	}

IL_000a:
	{
		// set { if (_wrapMixWC == value) return; _wrapMixWC = value; ApplyProperty("WrapMixWC", "wordWrappingRatios"); }
		float L_2 = ___value0;
		__this->____wrapMixWC_17 = L_2;
		// set { if (_wrapMixWC == value) return; _wrapMixWC = value; ApplyProperty("WrapMixWC", "wordWrappingRatios"); }
		TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D(__this, _stringLiteral421DB428A0E2F250E0ADBFAE3468F9C525A18B9E, _stringLiteral64A3A93F16AE39DA5F2296574C2BFD9118AAD52E, (Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53*)NULL, NULL);
		// set { if (_wrapMixWC == value) return; _wrapMixWC = value; ApplyProperty("WrapMixWC", "wordWrappingRatios"); }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::ApplyProperty(System.String,System.String,System.Action`1<TMPro.TextMeshProUGUI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_ApplyProperty_m3B8E711960B552073EF4826710F94AD9FE037E7D (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, String_t* ___oriProp0, String_t* ___targetProp1, Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* ___extraAction2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_m10DE66888A1B510306C0DB6732BDE81946F13DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// TableUI tu = GetComponent<TableUI>();
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_0;
		L_0 = Component_GetComponent_TisTableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_m10DE66888A1B510306C0DB6732BDE81946F13DB3(__this, Component_GetComponent_TisTableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13_m10DE66888A1B510306C0DB6732BDE81946F13DB3_RuntimeMethod_var);
		V_0 = L_0;
		// UpdateMinMaxValues(tu);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_1 = V_0;
		TextProperties_UpdateMinMaxValues_mFE5E64B66C13EBD58E3F019985BCA0F1AADACAC6(__this, L_1, NULL);
		// Type t = GetType();
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		// PropertyInfo prop = t.GetProperty(oriProp);
		String_t* L_3 = ___oriProp0;
		NullCheck(L_2);
		PropertyInfo_t* L_4;
		L_4 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_2, L_3, NULL);
		V_1 = L_4;
		// for (int i = min.x; i < max.x; i++)
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_5 = (&__this->___min_5);
		int32_t L_6;
		L_6 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_5, NULL);
		V_2 = L_6;
		goto IL_009c;
	}

IL_0029:
	{
		// for (int j = min.y; j < max.y; j++)
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_7 = (&__this->___min_5);
		int32_t L_8;
		L_8 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_7, NULL);
		V_3 = L_8;
		goto IL_008a;
	}

IL_0037:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// TextMeshProUGUI tmp = tu.data[j].list[i];
			TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_9 = V_0;
			NullCheck(L_9);
			List_1_t54925F2960A078DEAD188D523F50FCADCFA75B17* L_10 = L_9->___data_12;
			int32_t L_11 = V_3;
			NullCheck(L_10);
			TextMeshList_tCA10268FED8432E389B0B9F1EFD9F402D3870F90* L_12;
			L_12 = List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5(L_10, L_11, List_1_get_Item_m75B843BC98C47348AEB09747F2E79752BC0BD3D5_RuntimeMethod_var);
			NullCheck(L_12);
			List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_13 = ((ListWrapper_1_tB8433DF3025C45E678922CA938B7C97E92C7C84D*)L_12)->___list_0;
			int32_t L_14 = V_2;
			NullCheck(L_13);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15;
			L_15 = List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F(L_13, L_14, List_1_get_Item_m8C48A7349F9A96A345FC5318C1B226635BCDC10F_RuntimeMethod_var);
			V_4 = L_15;
			// typeof(TextMeshProUGUI).GetProperty(targetProp).SetValue(tmp, prop.GetValue(this));
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_17;
			L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
			String_t* L_18 = ___targetProp1;
			NullCheck(L_17);
			PropertyInfo_t* L_19;
			L_19 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_17, L_18, NULL);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = V_4;
			PropertyInfo_t* L_21 = V_1;
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_21, __this, NULL);
			NullCheck(L_19);
			PropertyInfo_SetValue_m67B3A509C7EB945C3DA97D096EF1231C805C92D3(L_19, L_20, L_22, NULL);
			// Utils.SetDirty(tmp);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = V_4;
			Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_23, NULL);
			// extraAction?.Invoke(tmp);
			Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* L_24 = ___extraAction2;
			if (!L_24)
			{
				goto IL_0081_1;
			}
		}
		{
			Action_1_t9E96099E8FD1A19B4B445C8D8FD04BEB55AB7E53* L_25 = ___extraAction2;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = V_4;
			NullCheck(L_25);
			Action_1_Invoke_m695F4E4EF75EE9AABCE13D3BB89E468276443065_inline(L_25, L_26, NULL);
		}

IL_0081_1:
		{
			// }
			goto IL_0086;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{// begin catch(System.Exception)
		// catch (System.Exception) { }
		// catch (System.Exception) { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0086;
	}// end catch (depth: 1)

IL_0086:
	{
		// for (int j = min.y; j < max.y; j++)
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_008a:
	{
		// for (int j = min.y; j < max.y; j++)
		int32_t L_28 = V_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_29 = (&__this->___max_6);
		int32_t L_30;
		L_30 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_29, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0037;
		}
	}
	{
		// for (int i = min.x; i < max.x; i++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_009c:
	{
		// for (int i = min.x; i < max.x; i++)
		int32_t L_32 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_33 = (&__this->___max_6);
		int32_t L_34;
		L_34 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_33, NULL);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::UpdateMinMaxValues(UnityEngine.UI.TableUI.TableUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_UpdateMinMaxValues_mFE5E64B66C13EBD58E3F019985BCA0F1AADACAC6 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* ___tu0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B5_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B6_1 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B8_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B9_1 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B13_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* G_B14_1 = NULL;
	{
		// if (groupSelectionMethod.Equals(GroupSelectionMethod.MinMax))
		int32_t* L_0 = (&__this->___groupSelectionMethod_4);
		int32_t L_1 = 3;
		RuntimeObject* L_2 = Box(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<int32_t> L_3(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, L_0);
		bool L_4;
		L_4 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), L_2, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (groupSelectionMethod.Equals(GroupSelectionMethod.Header))
		int32_t* L_5 = (&__this->___groupSelectionMethod_4);
		int32_t L_6 = 0;
		RuntimeObject* L_7 = Box(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, &L_6);
		Il2CppFakeBox<int32_t> L_8(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, L_5);
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		// min.x = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_10 = (&__this->___min_5);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_10, 0, NULL);
		// min.y = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_11 = (&__this->___min_5);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_11, 0, NULL);
		// max.x = tu.Header ? tu.Columns : 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_12 = (&__this->___max_6);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_13 = ___tu0;
		NullCheck(L_13);
		bool L_14;
		L_14 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(L_13, NULL);
		G_B4_0 = L_12;
		if (L_14)
		{
			G_B5_0 = L_12;
			goto IL_005c;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0062;
	}

IL_005c:
	{
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_15 = ___tu0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(L_15, NULL);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
	}

IL_0062:
	{
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(G_B6_1, G_B6_0, NULL);
		// max.y = tu.Header ? 1 : 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_17 = (&__this->___max_6);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_18 = ___tu0;
		NullCheck(L_18);
		bool L_19;
		L_19 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(L_18, NULL);
		G_B7_0 = L_17;
		if (L_19)
		{
			G_B8_0 = L_17;
			goto IL_0078;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0079;
	}

IL_0078:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0079:
	{
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(G_B9_1, G_B9_0, NULL);
		return;
	}

IL_007f:
	{
		// else if (groupSelectionMethod.Equals(GroupSelectionMethod.Body))
		int32_t* L_20 = (&__this->___groupSelectionMethod_4);
		int32_t L_21 = 1;
		RuntimeObject* L_22 = Box(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, &L_21);
		Il2CppFakeBox<int32_t> L_23(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, L_20);
		bool L_24;
		L_24 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_23), L_22, NULL);
		if (!L_24)
		{
			goto IL_00de;
		}
	}
	{
		// min.x = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_25 = (&__this->___min_5);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_25, 0, NULL);
		// min.y = tu.Header ? 1 : 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_26 = (&__this->___min_5);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_27 = ___tu0;
		NullCheck(L_27);
		bool L_28;
		L_28 = TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline(L_27, NULL);
		G_B12_0 = L_26;
		if (L_28)
		{
			G_B13_0 = L_26;
			goto IL_00b5;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b6;
	}

IL_00b5:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
	}

IL_00b6:
	{
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(G_B14_1, G_B14_0, NULL);
		// max.x = tu.Columns;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_29 = (&__this->___max_6);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_30 = ___tu0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(L_30, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_29, L_31, NULL);
		// max.y = tu.Rows;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_32 = (&__this->___max_6);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_33 = ___tu0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(L_33, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_32, L_34, NULL);
		return;
	}

IL_00de:
	{
		// else if (groupSelectionMethod.Equals(GroupSelectionMethod.All))
		int32_t* L_35 = (&__this->___groupSelectionMethod_4);
		int32_t L_36 = 2;
		RuntimeObject* L_37 = Box(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, &L_36);
		Il2CppFakeBox<int32_t> L_38(GroupSelectionMethod_tCF0FB27FAAD9010A3B2943E5EBD1ADDC0A90873D_il2cpp_TypeInfo_var, L_35);
		bool L_39;
		L_39 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_38), L_37, NULL);
		if (!L_39)
		{
			goto IL_0131;
		}
	}
	{
		// min.x = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_40 = (&__this->___min_5);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_40, 0, NULL);
		// min.y = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_41 = (&__this->___min_5);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_41, 0, NULL);
		// max.x = tu.Columns;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_42 = (&__this->___max_6);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_43 = ___tu0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline(L_43, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_42, L_44, NULL);
		// max.y = tu.Rows;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_45 = (&__this->___max_6);
		TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* L_46 = ___tu0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline(L_46, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_45, L_47, NULL);
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::CopyAllValues(TMPro.TextMeshProUGUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_CopyAllValues_mED1E0BCFB3ED0352A501179B7C9A89D49752C955 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tmp0, const RuntimeMethod* method) 
{
	{
		// tmp.font = FontAsset;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = ___tmp0;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_1;
		L_1 = TextProperties_get_FontAsset_m680A10E5714D34C5252D397E9AEC343263818705_inline(__this, NULL);
		NullCheck(L_0);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_0, L_1, NULL);
		// tmp.fontStyle = (FontStyles)FontStyle;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = ___tmp0;
		int32_t L_3;
		L_3 = TextProperties_get_FontStyle_m8F62D580F3A5DB34BFAF748412D349F8B50ADC9B_inline(__this, NULL);
		NullCheck(L_2);
		TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_2, L_3, NULL);
		// tmp.fontSize = FontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = ___tmp0;
		float L_5;
		L_5 = TextProperties_get_FontSize_m81CE05CED3DF91F53D4F34A9AEE5026A2634C07B_inline(__this, NULL);
		NullCheck(L_4);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_4, L_5, NULL);
		// tmp.enableAutoSizing = AutoSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = ___tmp0;
		bool L_7;
		L_7 = TextProperties_get_AutoSize_m199DC590207B8C9D347474E0A12498A2F9776DDC_inline(__this, NULL);
		NullCheck(L_6);
		TMP_Text_set_enableAutoSizing_mDD34BC7AA735EEBEB916FF5C9791B1502F65FBCA(L_6, L_7, NULL);
		// if (AutoSize)
		bool L_8;
		L_8 = TextProperties_get_AutoSize_m199DC590207B8C9D347474E0A12498A2F9776DDC_inline(__this, NULL);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// tmp.fontSizeMin = FontSizeMin;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = ___tmp0;
		float L_10;
		L_10 = TextProperties_get_FontSizeMin_m710388466D4389820D47F8158F3682ADE7E2A4FE_inline(__this, NULL);
		NullCheck(L_9);
		TMP_Text_set_fontSizeMin_mEAF970BB9CA053DF953AF83E638EA0F1D885358F(L_9, L_10, NULL);
		// tmp.fontSizeMax = FontSizeMax;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = ___tmp0;
		float L_12;
		L_12 = TextProperties_get_FontSizeMax_mD5FA16184862FCE8791A44A8BB6EE22CBBE321A0_inline(__this, NULL);
		NullCheck(L_11);
		TMP_Text_set_fontSizeMax_mC84B7090F5CE69BA63556A71FD63ABD67C911750(L_11, L_12, NULL);
		// tmp.characterWidthAdjustment = CharacterWidthAdjustment;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = ___tmp0;
		float L_14;
		L_14 = TextProperties_get_CharacterWidthAdjustment_mF652AFBF258FF12EEC0AF64506447BC26D28C403_inline(__this, NULL);
		NullCheck(L_13);
		TMP_Text_set_characterWidthAdjustment_m11B7CC28C0A7FFC6434DB671C635691B529071BE(L_13, L_14, NULL);
		// tmp.lineSpacingAdjustment = LineSpacingAdjustment;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = ___tmp0;
		float L_16;
		L_16 = TextProperties_get_LineSpacingAdjustment_m89819D92D4763EC3BF7E960CC484F5B5443F95F4_inline(__this, NULL);
		NullCheck(L_15);
		TMP_Text_set_lineSpacingAdjustment_mAC9A57D852EBAD8DD53ED2F1DE316C0DA52659FB(L_15, L_16, NULL);
	}

IL_0068:
	{
		// tmp.color = VertexColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = ___tmp0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = TextProperties_get_VertexColor_mABB9BF3151214EC54846EB945029704118FDF65C_inline(__this, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// tmp.alignment = Alignment;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = ___tmp0;
		int32_t L_20;
		L_20 = TextProperties_get_Alignment_m1BC2C51BEA0B88FB91860055BEF2F36B0B33B06F_inline(__this, NULL);
		NullCheck(L_19);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_19, L_20, NULL);
		// tmp.wordWrappingRatios = WrapMixWC;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = ___tmp0;
		float L_22;
		L_22 = TextProperties_get_WrapMixWC_m08D3C517A65473457A694F9A16CBE00EC6CE20FA_inline(__this, NULL);
		NullCheck(L_21);
		TMP_Text_set_wordWrappingRatios_m83A82AE875C4CD836D5802A1C051AF07CA2A0D85(L_21, L_22, NULL);
		// Utils.SetDirty(tmp);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = ___tmp0;
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(L_23, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties__ctor_mD01963F0491C9416A1A083BA444D3CF1559DF5C1 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// internal GroupSelectionMethod groupSelectionMethod = GroupSelectionMethod.All;
		__this->___groupSelectionMethod_4 = 2;
		// internal Vector2Int min = Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		L_0 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		__this->___min_5 = L_0;
		// internal Vector2Int max = Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		__this->___max_6 = L_1;
		// private float _fontSize = 15f;
		__this->____fontSize_9 = (15.0f);
		// private Color _vertexColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->____vertexColor_15 = L_2;
		// private TextAlignmentOptions _alignment = TextAlignmentOptions.Center;
		__this->____alignment_16 = ((int32_t)514);
		// private float _wrapMixWC = 0.4f;
		__this->____wrapMixWC_17 = (0.400000006f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.TextProperties::<set_AutoSize>b__19_0(TMPro.TextMeshProUGUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextProperties_U3Cset_AutoSizeU3Eb__19_0_m3CA78E732FBBDE252A8A3D452198A13C4DA3C8B4 (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tmp0, const RuntimeMethod* method) 
{
	{
		// if (!_autoSize)
		bool L_0 = __this->____autoSize_10;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// _fontSizeMin = tmp.fontSizeMin;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = ___tmp0;
		NullCheck(L_1);
		float L_2;
		L_2 = TMP_Text_get_fontSizeMin_m5F97E2EFFE86CB4BFFFC31E167E1E577134EF05D_inline(L_1, NULL);
		__this->____fontSizeMin_11 = L_2;
		// _fontSizeMax = tmp.fontSizeMax;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = ___tmp0;
		NullCheck(L_3);
		float L_4;
		L_4 = TMP_Text_get_fontSizeMax_m8FAB0C39D22B722F6AA6CF15E6C0636715D64BD4_inline(L_3, NULL);
		__this->____fontSizeMax_12 = L_4;
		// _characterWidthAdjustment = tmp.characterWidthAdjustment;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = ___tmp0;
		NullCheck(L_5);
		float L_6;
		L_6 = TMP_Text_get_characterWidthAdjustment_mE879BF9A6273376AEE54BE88745ABE7944DBF26A_inline(L_5, NULL);
		__this->____characterWidthAdjustment_13 = L_6;
		// _lineSpacingAdjustment = tmp.lineSpacingAdjustment;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = ___tmp0;
		NullCheck(L_7);
		float L_8;
		L_8 = TMP_Text_get_lineSpacingAdjustment_m3858BA838BBFBA60A0A1DDCB195075C6620CF637_inline(L_7, NULL);
		__this->____lineSpacingAdjustment_14 = L_8;
	}

IL_0038:
	{
		// _fontSize = tmp.fontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = ___tmp0;
		NullCheck(L_9);
		float L_10;
		L_10 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_9, NULL);
		__this->____fontSize_9 = L_10;
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
void TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_Multicast(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* currentDelegate = reinterpret_cast<TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_OpenInst(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_OpenStatic(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_OpenStaticInvoker(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_ClosedStaticInvoker(TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPropertiesUndoEvent__ctor_m6DEC92DFD5EA5E962CECFDB9E253E5F5EE6B34A8 (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF_Multicast;
}
// System.Void UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPropertiesUndoEvent_Invoke_m68130F36278BB18E11BC43BC2766F1E94F943DAF (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextPropertiesUndoEvent_BeginInvoke_mB33DDD335D43E9511B7514E64A98163BE9116A32 (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.UI.TableUI.TextProperties/TextPropertiesUndoEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPropertiesUndoEvent_EndInvoke_m7B2141C67D98A4214D493D573E9EF5180CD58819 (TextPropertiesUndoEvent_t8582238ABFCF8B623D19CC8FD807BDD5BC8A036B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_LineThickness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_LineThickness_m799E27E9409AC998A6A9DB55023FEBDC000A5021 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// get { return _lineThickness; }
		float L_0 = __this->____lineThickness_36;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::set_LineThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_set_LineThickness_mCFE1CE39ED210D7B36BD5F8D05ED57F07DD6CF61 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// if (_lineThickness == value)
		float L_0 = __this->____lineThickness_36;
		float L_1 = ___value0;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _lineThickness = value;
		float L_2 = ___value0;
		__this->____lineThickness_36 = L_2;
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// Utils.SetDirty(this);
		Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2[] UnityEngine.UI.TableUI.UILineRenderer::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___m_points_37;
		return L_0;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::set_Points(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_set_Points_m67477A43B984B7C40E13F2A9EE5EF1F65F446EDF (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___m_points_37;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___value0;
		if ((!(((RuntimeObject*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)L_0) == ((RuntimeObject*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		return;
	}

IL_000a:
	{
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___value0;
		__this->___m_points_37 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_points_37), (void*)L_2);
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		return;
	}
}
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_minWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_minWidth_mFB1BB613717CC9BE0C5EEA3BC531464415C7EA28 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float minWidth { get { return 0; } }
		return (0.0f);
	}
}
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_preferredWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_preferredWidth_m4D5A8550FBB07116E32D4A3FFF94C8675BB2FA34 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float preferredWidth { get { return 0; } }
		return (0.0f);
	}
}
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_flexibleWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_flexibleWidth_m1D722DAB92D19239B38AEAE2F8FBA18F8D9074F7 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float flexibleWidth { get { return -1; } }
		return (-1.0f);
	}
}
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_minHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_minHeight_m152507FA3537763F41FABC455E52CE90BFA83808 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float minHeight { get { return 0; } }
		return (0.0f);
	}
}
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_preferredHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_preferredHeight_mB24715C47E8405BEC007992CBA57D375A44D0ABD (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float preferredHeight { get { return 0; } }
		return (0.0f);
	}
}
// System.Single UnityEngine.UI.TableUI.UILineRenderer::get_flexibleHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UILineRenderer_get_flexibleHeight_mDD3F6C6DC0A21657C165BE392790B46370765870 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual float flexibleHeight { get { return -1; } }
		return (-1.0f);
	}
}
// System.Int32 UnityEngine.UI.TableUI.UILineRenderer::get_layoutPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UILineRenderer_get_layoutPriority_m0A0419FED6346F7F1669FB86D261802579F83681 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int layoutPriority { get { return 0; } }
		return 0;
	}
}
// System.Boolean UnityEngine.UI.TableUI.UILineRenderer::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UILineRenderer_IsRaycastLocationValid_m984369AAA2373C94F3E471A16B99B6A4D04A4A24 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___eventCamera1, const RuntimeMethod* method) 
{
	{
		// public bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera){return true;}
		return (bool)1;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::CalculateLayoutInputHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_CalculateLayoutInputHorizontal_m53E59248B3A06BE70093549F466D52E48EFD008D (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void CalculateLayoutInputHorizontal() { }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::CalculateLayoutInputVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_CalculateLayoutInputVertical_mDD437261313F71FDC1EFA92578028CDABB341245 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void CalculateLayoutInputVertical() { }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::PopulateMesh(UnityEngine.UI.VertexHelper,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_PopulateMesh_m4CFB15C01F67626215FCE615F72110B6E39A18B6 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___pointsToDraw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD13CB4A2DFFD0D6658102019CAAB5A8E4DE1EC8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m05B894174509EB79F5EBD381345E1CF713BBCB5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F2AD792C68319B5883F0DFC0DD2C7C3772134);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81E4116F4DF59CA2D286D9CCB6D03C41846AD39D);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* G_B3_2 = NULL;
	List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* G_B3_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* G_B2_2 = NULL;
	List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* G_B2_3 = NULL;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* G_B4_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* G_B4_3 = NULL;
	List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* G_B4_4 = NULL;
	{
		// var segments = new List<UIVertex[]>();
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_0 = (List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F*)il2cpp_codegen_object_new(List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m05B894174509EB79F5EBD381345E1CF713BBCB5C(L_0, List_1__ctor_m05B894174509EB79F5EBD381345E1CF713BBCB5C_RuntimeMethod_var);
		V_0 = L_0;
		// for (var i = 1; i < pointsToDraw.Length; i += 2)
		V_1 = 1;
		goto IL_006e;
	}

IL_000a:
	{
		// Vector2 start = pointsToDraw[i - 1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___pointsToDraw1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Vector2 end = pointsToDraw[i];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___pointsToDraw1;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// start = new Vector2(start.x, start.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_2;
		float L_12 = L_11.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_10, L_12, NULL);
		// end = new Vector2(end.x, end.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_3;
		float L_14 = L_13.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_3;
		float L_16 = L_15.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_14, L_16, NULL);
		// segments.Add(CreateLineSegment(start, end, segments.Count > 1 ? segments[segments.Count - 2] : null));
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_17 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_3;
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_inline(L_20, List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_RuntimeMethod_var);
		G_B2_0 = L_19;
		G_B2_1 = L_18;
		G_B2_2 = __this;
		G_B2_3 = L_17;
		if ((((int32_t)L_21) > ((int32_t)1)))
		{
			G_B3_0 = L_19;
			G_B3_1 = L_18;
			G_B3_2 = __this;
			G_B3_3 = L_17;
			goto IL_0052;
		}
	}
	{
		G_B4_0 = ((UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)(NULL));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		goto IL_0060;
	}

IL_0052:
	{
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_22 = V_0;
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_inline(L_23, List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_RuntimeMethod_var);
		NullCheck(L_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_25;
		L_25 = List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765(L_22, ((int32_t)il2cpp_codegen_subtract(L_24, 2)), List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765_RuntimeMethod_var);
		G_B4_0 = L_25;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
	}

IL_0060:
	{
		NullCheck(G_B4_3);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_26;
		L_26 = UILineRenderer_CreateLineSegment_mB5C8665958D31B6C6130B12D0769B4D41AD07635(G_B4_3, G_B4_2, G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_4);
		List_1_Add_mD13CB4A2DFFD0D6658102019CAAB5A8E4DE1EC8C_inline(G_B4_4, L_26, List_1_Add_mD13CB4A2DFFD0D6658102019CAAB5A8E4DE1EC8C_RuntimeMethod_var);
		// for (var i = 1; i < pointsToDraw.Length; i += 2)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 2));
	}

IL_006e:
	{
		// for (var i = 1; i < pointsToDraw.Length; i += 2)
		int32_t L_28 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_29 = ___pointsToDraw1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// for (var i = 0; i < segments.Count; i++)
		V_4 = 0;
		goto IL_008d;
	}

IL_0079:
	{
		// vh.AddUIVertexQuad(segments[i]);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_30 = ___vh0;
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_31 = V_0;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_33;
		L_33 = List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765(L_31, L_32, List_1_get_Item_mB27132E7722D54D8B398F6E07C02D58E3F0FD765_RuntimeMethod_var);
		NullCheck(L_30);
		VertexHelper_AddUIVertexQuad_m6AC21081F2A5A48D22BC3497E527D0A9AB8278B0(L_30, L_33, NULL);
		// for (var i = 0; i < segments.Count; i++)
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_008d:
	{
		// for (var i = 0; i < segments.Count; i++)
		int32_t L_35 = V_4;
		List_1_tDDDB6627E8A2BACBEBB254E8ACF356590EF9E33F* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_inline(L_36, List_1_get_Count_mBB5E2F572BA71322D9D90E5A2AD126C1DB99D22A_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0079;
		}
	}
	{
		// if (vh.currentVertCount > 64000)
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_38 = ___vh0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)64000))))
		{
			goto IL_00ce;
		}
	}
	{
		// Debug.LogError("Max Verticies size is 64000, current mesh vertcies count is [" + vh.currentVertCount + "] - Cannot Draw");
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_40 = ___vh0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4(L_40, NULL);
		V_5 = L_41;
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_43;
		L_43 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral785F2AD792C68319B5883F0DFC0DD2C7C3772134, L_42, _stringLiteral81E4116F4DF59CA2D286D9CCB6D03C41846AD39D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_43, NULL);
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_44 = ___vh0;
		NullCheck(L_44);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_44, NULL);
		// return;
		return;
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer_OnPopulateMesh_mFB62EBDE259235C4D33F70A1C4C79D3E3D02F1EC (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	{
		// if (m_points != null && m_points.Length > 0)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___m_points_37;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = __this->___m_points_37;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_2 = ___vh0;
		NullCheck(L_2);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_2, NULL);
		// PopulateMesh(vh, m_points);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___vh0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = __this->___m_points_37;
		UILineRenderer_PopulateMesh_m4CFB15C01F67626215FCE615F72110B6E39A18B6(__this, L_3, L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.UIVertex[] UnityEngine.UI.TableUI.UILineRenderer::CreateLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* UILineRenderer_CreateLineSegment_mB5C8665958D31B6C6130B12D0769B4D41AD07635 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___end1, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___previousVert2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector2 offset = new Vector2((start.y - end.y), end.x - start.x).normalized * LineThickness / 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___start0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___end1;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___end1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___start0;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_5 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_5), NULL);
		float L_10;
		L_10 = UILineRenderer_get_LineThickness_m799E27E9409AC998A6A9DB55023FEBDC000A5021_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_9, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_11, (2.0f), NULL);
		V_0 = L_12;
		// Vector2 v1 = start - offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___start0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_13, L_14, NULL);
		V_1 = L_15;
		// Vector2 v2 = start + offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___start0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_16, L_17, NULL);
		V_2 = L_18;
		// Vector2 v3 = end + offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___end1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_19, L_20, NULL);
		V_3 = L_21;
		// Vector2 v4 = end - offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___end1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_22, L_23, NULL);
		V_4 = L_24;
		// return SetVbo(new[] { v1, v2, v3, v4 });
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_27);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_29);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_3;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_31);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = L_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_4;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_33);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_34;
		L_34 = UILineRenderer_SetVbo_mDBF95D3B98A944376E0CE722516821C1ED9A2E55(__this, L_32, NULL);
		return L_34;
	}
}
// UnityEngine.UIVertex[] UnityEngine.UI.TableUI.UILineRenderer::SetVbo(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* UILineRenderer_SetVbo_mDBF95D3B98A944376E0CE722516821C1ED9A2E55 (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	int32_t V_1 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// UIVertex[] vbo = new UIVertex[4];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)SZArrayNew(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// for (int i = 0; i < vertices.Length; i++)
		V_1 = 0;
		goto IL_0044;
	}

IL_000b:
	{
		// var vert = UIVertex.simpleVert;
		il2cpp_codegen_runtime_class_init_inline(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_1 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		V_2 = L_1;
		// vert.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3;
		L_3 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_2, NULL);
		(&V_2)->___color_3 = L_3;
		// Vector3 v = vertices[i];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = ___vertices0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_7, NULL);
		V_3 = L_8;
		// vert.position = v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_3;
		(&V_2)->___position_0 = L_9;
		// vbo[i] = vert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_10 = V_0;
		int32_t L_11 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_12);
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_14 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = ___vertices0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return vbo;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_16 = V_0;
		return L_16;
	}
}
// System.Void UnityEngine.UI.TableUI.UILineRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UILineRenderer__ctor_mB98DACFA5FD18781D43C3C6A7C1F182A47B2FDCD (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// private float _lineThickness = 2;
		__this->____lineThickness_36 = (2.0f);
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
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
// System.Void UnityEngine.UI.TableUI.Utils::SetDirty(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetDirty_m8771FC7FA098B1391284B7CCA783152CEC4AA0DC (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.Utils::RegisterFullObjectHierarchyUndo(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RegisterFullObjectHierarchyUndo_mEEC014ABEC4E241F56A61026AA4FAC69903BE7C0 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.Utils::DestroyObjectImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_DestroyObjectImmediate_mA373C0890F5922FF051E846F78B0AFB22C783BB5 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool inEditor = false;
		// if (!inEditor) {
		if (0)
		{
			goto IL_0009;
		}
	}
	{
		// Object.DestroyImmediate(target);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_0, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.Utils::RegisterCreatedObjectUndo(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RegisterCreatedObjectUndo_m8E178E224CB09F0C7386F5DAF03DCF2F0BF169E9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.Utils::RecordObject(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RecordObject_m062211731B59AC6413D8C428C33343B1695470A8 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, String_t* ___name1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.Utils::RecordObjects(UnityEngine.Object[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_RecordObjects_m371EC3BF8352C45E02FC92F2EE4CC36DE4C5B523 (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___targets0, String_t* ___name1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.TableUI.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mFC8FFDC967933F2709C398AECA746018FE2C3899 (Utils_t008A189A11924F38490005A4FF6C5A2781227B63* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TableUI_get_Header_m53AD9C4EBD252E2A42FC85AFADA343EFDBEBDCC8_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public bool Header { get => _header;
		bool L_0 = __this->____header_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_HeaderColor_mF8C823F563211A455DDB76A424B19B12747D0B3A_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public Color HeaderColor { get => _headerColor; set { if (_headerColor == value) return; _headerColor = value; UpdateHeaderColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____headerColor_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* SelectionGrid_get_Values_m21BD719EFA9F4C4B4460E11CDA40940AAC63A7BE_inline (SelectionGrid_t4F92BAF1ED1A6E2D277E47F97CDE3124DBDBC2DC* __this, const RuntimeMethod* method) 
{
	{
		// get { return _values; }
		List_1_tC14EB949FABE792907D553BB4DF6E039A16D4511* L_0 = __this->____values_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TableUI_get_Rows_m373E1DBE9398D04DC080C4DA41A2B5516CE9EB0E_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _rows;
		int32_t L_0 = __this->____rows_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* TableUI_get_RowsHeight_mE60BDA47729FA2A06370A405952DCB849718193E_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return _rowsHeight; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->____rowsHeight_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TableUI_get_Columns_mFBADF19872320194BD64290571D2245DC31F29A6_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _columns;
		int32_t L_0 = __this->____columns_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TableUI_get_Striped_m124B38EE2D0932CD163E03145275CD4C2CC92A5C_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _striped;
		bool L_0 = __this->____striped_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_MainColor_m98D48E24508EEFF021085118575FD331059AFA7A_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public Color MainColor { get => _mainColor; set { if (_mainColor == value) return; _mainColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____mainColor_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TableUI_get_SecondaryColor_m2C47EE1F1E889FCA6C2B58D74A31FA1E22702FFE_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// public Color SecondaryColor { get => _secondaryColor; set { if (_secondaryColor == value) return; _secondaryColor = value; UpdateColor(); } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____secondaryColor_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* TableUI_get_ColumnsWidth_mE70D71EEB9F4C2CE018F1C9E8F782418A23A573C_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return _columnsWidth; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->____columnsWidth_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TableUI_get_TextAutoScale_mA6C5014AD69187FD931DE9941D1B04C4079FE5B3_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return _textAutoScale; }
		bool L_0 = __this->____textAutoScale_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TableUI_get_BorderType_m615506D59DBDD585643E8FB7DAC41AEF3FF81E5C_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _borderType;
		int32_t L_0 = __this->____borderType_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* UILineRenderer_get_Points_mECDBE5022AEAB899E33CC2DBF56E0E400151DDF7_inline (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2[] Points { get { return m_points; } set { if (m_points == value) return; m_points = value; SetAllDirty(); } }
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___m_points_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TableUI_get_BorderThickness_m9AFD56E3D296A5BCD0A681629573404C0D7318C0_inline (TableUI_tEAD90415FFDCE81BA666812734B26F2BD9EDAD13* __this, const RuntimeMethod* method) 
{
	{
		// get => _borderThickness;
		float L_0 = __this->____borderThickness_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 v3Fun_Invoke_mCBF655D35647DEC3CB65835D27241E4F2EAAB178_inline (v3Fun_t229FF6B3E87A7E49CE39F71F6497B5C2FA13B6C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___v0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextProperties_get_FontStyle_m8F62D580F3A5DB34BFAF748412D349F8B50ADC9B_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontStyle; }
		int32_t L_0 = __this->____fontStyle_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* TextProperties_get_FontAsset_m680A10E5714D34C5252D397E9AEC343263818705_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontAsset; }
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->____fontAsset_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_FontSize_m81CE05CED3DF91F53D4F34A9AEE5026A2634C07B_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontSize; }
		float L_0 = __this->____fontSize_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextProperties_get_AutoSize_m199DC590207B8C9D347474E0A12498A2F9776DDC_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _autoSize; }
		bool L_0 = __this->____autoSize_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_FontSizeMin_m710388466D4389820D47F8158F3682ADE7E2A4FE_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontSizeMin; }
		float L_0 = __this->____fontSizeMin_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_FontSizeMax_mD5FA16184862FCE8791A44A8BB6EE22CBBE321A0_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fontSizeMax; }
		float L_0 = __this->____fontSizeMax_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_CharacterWidthAdjustment_mF652AFBF258FF12EEC0AF64506447BC26D28C403_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _characterWidthAdjustment; }
		float L_0 = __this->____characterWidthAdjustment_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_LineSpacingAdjustment_m89819D92D4763EC3BF7E960CC484F5B5443F95F4_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _lineSpacingAdjustment; }
		float L_0 = __this->____lineSpacingAdjustment_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextProperties_get_VertexColor_mABB9BF3151214EC54846EB945029704118FDF65C_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _vertexColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____vertexColor_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextProperties_get_Alignment_m1BC2C51BEA0B88FB91860055BEF2F36B0B33B06F_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _alignment; }
		int32_t L_0 = __this->____alignment_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TextProperties_get_WrapMixWC_m08D3C517A65473457A694F9A16CBE00EC6CE20FA_inline (TextProperties_t61A04E65151B984920F334D64F0069EF211810DA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _wrapMixWC; }
		float L_0 = __this->____wrapMixWC_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Zero_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSizeMin_m5F97E2EFFE86CB4BFFFC31E167E1E577134EF05D_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_fontSizeMin; }
		float L_0 = __this->___m_fontSizeMin_86;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSizeMax_m8FAB0C39D22B722F6AA6CF15E6C0636715D64BD4_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_fontSizeMax; }
		float L_0 = __this->___m_fontSizeMax_87;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_characterWidthAdjustment_mE879BF9A6273376AEE54BE88745ABE7944DBF26A_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_charWidthMaxAdj; }
		float L_0 = __this->___m_charWidthMaxAdj_108;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_lineSpacingAdjustment_m3858BA838BBFBA60A0A1DDCB195075C6620CF637_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_lineSpacingMax; }
		float L_0 = __this->___m_lineSpacingMax_106;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_fontSize; }
		float L_0 = __this->___m_fontSize_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UILineRenderer_get_LineThickness_m799E27E9409AC998A6A9DB55023FEBDC000A5021_inline (UILineRenderer_tEC44F56A30847FC911897E490E2DE782A3AFBD11* __this, const RuntimeMethod* method) 
{
	{
		// get { return _lineThickness; }
		float L_0 = __this->____lineThickness_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_13, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = V_0;
		int32_t L_7 = V_1;
		bool L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)L_8);
		return;
	}

IL_0034:
	{
		bool L_9 = ___item0;
		((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
