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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96;
// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>
struct List_1_tACE6654758D82222267EA18A347541711FD0AECA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Wave[]
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826;
// Polytope.PT_Create_Prefab/MeshType[]
struct MeshTypeU5BU5D_tBF32387370FBAC202A1D38A9C40984C780860C67;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// AsyncLoading
struct AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BuildManager
struct BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// Cannonball
struct Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChestDemo
struct ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// CompleteLevel
struct CompleteLevel_t424FEFD41CB1947BC9971D61A27879134B8B57BA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D;
// GameSpeedShanger
struct GameSpeedShanger_tAAAD42C842994171D774E7510D58C2B2E612454B;
// GameStateSounds
struct GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Animations.IConstraint
struct IConstraint_t69F6D36657DD041ACCA0355D70F2E547D7F63887;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LevelSelector
struct LevelSelector_tEFE9625C7B4E187D13B555C0363E163FE5F519A3;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// LivesUI
struct LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MaterialMover
struct MaterialMover_t5E6C12052EC8D8D817456177337ABEF6B2DA9CBB;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MoneyUI
struct MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5;
// NodeUI
struct NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Polytope.PT_Create_Prefab
struct PT_Create_Prefab_tDE5FEE6302F4542D740AC4FFCAD12520243ADC3C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// PlayerStats
struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Animations.RotationConstraint
struct RotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E;
// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Turret
struct Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA;
// TurretBlueprint
struct TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VolumeController
struct VolumeController_tC199891364CDC35252CEAA7818DDFD0A9D359478;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D;
// WaveSpawner
struct WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075;
// WavesSurvived
struct WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C;
// Waypoints
struct Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407;
// WheelController
struct WheelController_t46CA6F63776474A025E3D45B31008643B7BCC03C;
// ZombieCameraLogic
struct ZombieCameraLogic_t1C067C390B969AE1496B1A758A48206817CF6C39;
// ZombieCharacterControl
struct ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51;
// ZombieFree
struct ZombieFree_tB244696275184690FC33870F487A1005062C1E73;
// scriptTexttest
struct scriptTexttest_t82F4F21D786EF3802D0C94C3B71A62AF50BB514B;
// AsyncLoading/<WaitScene>d__5
struct U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// ChestDemo/<OpenCloseChest>d__2
struct U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Node/<NotEnoughGold>d__12
struct U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1;
// Polytope.PT_Create_Prefab/MaterialType
struct MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703;
// Polytope.PT_Create_Prefab/MeshType
struct MeshType_t96563BCFB81091D4D5419814985D65BF461F753B;
// Polytope.PT_Create_Prefab/PreviewCallback
struct PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133;
// Polytope.PT_Create_Prefab/ShaderProperties_C
struct ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C;
// Polytope.PT_Create_Prefab/ShaderProperties_CI
struct ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB;
// Polytope.PT_Create_Prefab/ShaderProperties_CS
struct ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B;
// Polytope.PT_Create_Prefab/ShaderProperties_CSM
struct ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079;
// Polytope.PT_Create_Prefab/ShaderProperties_CSP
struct ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B;
// WaveSpawner/<SpawnWave>d__9
struct U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24;
// WavesSurvived/<AnimateText>d__2
struct U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012;

IL2CPP_EXTERN_C RuntimeClass* AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConstraint_t69F6D36657DD041ACCA0355D70F2E547D7F63887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tACE6654758D82222267EA18A347541711FD0AECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58;
IL2CPP_EXTERN_C String_t* _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD69EC6C9E191C57664923345F3742272616987;
IL2CPP_EXTERN_C String_t* _stringLiteral24558CE64CC64C85D63116A824E2B717B748796E;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABA330EAC2A4E86A8CC13E7DC62DC629E301DAC;
IL2CPP_EXTERN_C String_t* _stringLiteral2DB17291C24E5ED90863494D5A61BFDDEB59FD39;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486;
IL2CPP_EXTERN_C String_t* _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral500FF24EC184A900F27907F13116703701E8CF87;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral5F23E0C606C3923E7D0C5C95679CF58C71B45C12;
IL2CPP_EXTERN_C String_t* _stringLiteral61576FC535CE67A4234F725315CB796CEC925011;
IL2CPP_EXTERN_C String_t* _stringLiteral65BF1B060FEF194BFB7894D48E4258A649F513E9;
IL2CPP_EXTERN_C String_t* _stringLiteral66410F6B31EAAB8B8826DD8EA94B9FCA22383A13;
IL2CPP_EXTERN_C String_t* _stringLiteral690626F009B7CB58C658545CE2962EE15A5D43EE;
IL2CPP_EXTERN_C String_t* _stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F;
IL2CPP_EXTERN_C String_t* _stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE3D0B9679E0404466E65C0DB8235A33FA430E5;
IL2CPP_EXTERN_C String_t* _stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9E00B57BC60BA8DFE775104296F0D55A788667;
IL2CPP_EXTERN_C String_t* _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
IL2CPP_EXTERN_C String_t* _stringLiteralA006A583149B2AD28E17211DB7A02BAD423349C9;
IL2CPP_EXTERN_C String_t* _stringLiteralA7471B6EDF8840274133C2767D7EFB1C4CEE339F;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD4475924A23AA041020C983376F3E977373F72;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F64CF09220145B37123078C6B183CDEDCB424A;
IL2CPP_EXTERN_C String_t* _stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8;
IL2CPP_EXTERN_C String_t* _stringLiteralC6106AB40E70661C8F629F2C2C90BD676E303E51;
IL2CPP_EXTERN_C String_t* _stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralD579DC2BAAC46E21FCCEF2209B824736ADA2F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7FF0651EB3B7FFA908CD48006C39ECA66C1030;
IL2CPP_EXTERN_C String_t* _stringLiteralDDDD34884F0F977A0B9F8BA6E693896A5AFAF263;
IL2CPP_EXTERN_C String_t* _stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D;
IL2CPP_EXTERN_C String_t* _stringLiteralEEB2400AEF45F06DB47C42A948D9B51F65BF0FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E_mC58862EE905D7389EC7A17FDC31476784CF1C556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309_mD9C59042E78127CA0823F108E97497901979C572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mFFBA2D16730FF7DDB764C608C0EFF81200B41018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateTextU3Ed__2_System_Collections_IEnumerator_Reset_m156D285A0DA91F444D0A9D97DE9A456DA08ABF19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNotEnoughGoldU3Ed__12_System_Collections_IEnumerator_Reset_mCB80CA74341C602ABE865FBBD687C73D50361442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenCloseChestU3Ed__2_System_Collections_IEnumerator_Reset_mCE195EBEF28459496B8D5878FDB84C8E31E12C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnWaveU3Ed__9_System_Collections_IEnumerator_Reset_mB39EABE555206DDB13A278EE7006C20F62EDAFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitSceneU3Ed__5_System_Collections_IEnumerator_Reset_m49F87E3E123540BE312D283DE5BC1C8718F16EFB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
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

// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>
struct List_1_tACE6654758D82222267EA18A347541711FD0AECA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshTypeU5BU5D_tBF32387370FBAC202A1D38A9C40984C780860C67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tACE6654758D82222267EA18A347541711FD0AECA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshTypeU5BU5D_tBF32387370FBAC202A1D38A9C40984C780860C67* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
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

// TurretBlueprint
struct TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A  : public RuntimeObject
{
	// UnityEngine.GameObject TurretBlueprint::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_0;
	// System.Int32 TurretBlueprint::cost
	int32_t ___cost_1;
	// UnityEngine.GameObject TurretBlueprint::upgradedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___upgradedPrefab_2;
	// System.Int32 TurretBlueprint::upgradeCost
	int32_t ___upgradeCost_3;
	// UnityEngine.UI.Image TurretBlueprint::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_4;
	// UnityEngine.UI.Button TurretBlueprint::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_5;
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

// Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D  : public RuntimeObject
{
	// UnityEngine.GameObject[] Wave::enemy
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemy_0;
	// System.Int32 Wave::count
	int32_t ___count_1;
	// System.Single Wave::rate
	float ___rate_2;
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

// AsyncLoading/<WaitScene>d__5
struct U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26  : public RuntimeObject
{
	// System.Int32 AsyncLoading/<WaitScene>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AsyncLoading/<WaitScene>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 AsyncLoading/<WaitScene>d__5::index
	int32_t ___index_2;
	// AsyncLoading AsyncLoading/<WaitScene>d__5::<>4__this
	AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation AsyncLoading/<WaitScene>d__5::<loadScene>5__1
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CloadSceneU3E5__1_4;
};

// ChestDemo/<OpenCloseChest>d__2
struct U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127  : public RuntimeObject
{
	// System.Int32 ChestDemo/<OpenCloseChest>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ChestDemo/<OpenCloseChest>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ChestDemo ChestDemo/<OpenCloseChest>d__2::<>4__this
	ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* ___U3CU3E4__this_2;
};

// Node/<NotEnoughGold>d__12
struct U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1  : public RuntimeObject
{
	// System.Int32 Node/<NotEnoughGold>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Node/<NotEnoughGold>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Node Node/<NotEnoughGold>d__12::<>4__this
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___U3CU3E4__this_2;
};

// Polytope.PT_Create_Prefab/MaterialType
struct MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Material> Polytope.PT_Create_Prefab/MaterialType::assets
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___assets_0;
	// UnityEngine.Material Polytope.PT_Create_Prefab/MaterialType::instance
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___instance_1;
	// System.Int32 Polytope.PT_Create_Prefab/MaterialType::index
	int32_t ___index_2;
};

// Polytope.PT_Create_Prefab/MeshType
struct MeshType_t96563BCFB81091D4D5419814985D65BF461F753B  : public RuntimeObject
{
	// System.String Polytope.PT_Create_Prefab/MeshType::type
	String_t* ___type_0;
	// System.Int32 Polytope.PT_Create_Prefab/MeshType::idx
	int32_t ___idx_1;
	// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> Polytope.PT_Create_Prefab/MeshType::list
	List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* ___list_2;
};

// Polytope.PT_Create_Prefab/TypeOfMesh
struct TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749  : public RuntimeObject
{
};

struct TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields
{
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::hair
	String_t* ___hair_0;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::head
	String_t* ___head_1;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::beard
	String_t* ___beard_2;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::helmet
	String_t* ___helmet_3;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::body
	String_t* ___body_4;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::boots
	String_t* ___boots_5;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::cape
	String_t* ___cape_6;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::gauntlets
	String_t* ___gauntlets_7;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::legs
	String_t* ___legs_8;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::upper
	String_t* ___upper_9;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::lower
	String_t* ___lower_10;
};

// WaveSpawner/<SpawnWave>d__9
struct U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24  : public RuntimeObject
{
	// System.Int32 WaveSpawner/<SpawnWave>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaveSpawner/<SpawnWave>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WaveSpawner WaveSpawner/<SpawnWave>d__9::<>4__this
	WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* ___U3CU3E4__this_2;
	// Wave WaveSpawner/<SpawnWave>d__9::<wave>5__1
	Wave_t46A8424F3F35C64800660289794914462618636D* ___U3CwaveU3E5__1_3;
	// System.Int32 WaveSpawner/<SpawnWave>d__9::<i>5__2
	int32_t ___U3CiU3E5__2_4;
	// System.Int32 WaveSpawner/<SpawnWave>d__9::<e>5__3
	int32_t ___U3CeU3E5__3_5;
};

// WavesSurvived/<AnimateText>d__2
struct U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012  : public RuntimeObject
{
	// System.Int32 WavesSurvived/<AnimateText>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WavesSurvived/<AnimateText>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WavesSurvived WavesSurvived/<AnimateText>d__2::<>4__this
	WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* ___U3CU3E4__this_2;
	// System.Int32 WavesSurvived/<AnimateText>d__2::<wave>5__1
	int32_t ___U3CwaveU3E5__1_3;
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

// UnityEngine.Animations.ConstraintSource
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F 
{
	// UnityEngine.Transform UnityEngine.Animations.ConstraintSource::m_SourceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform_0;
	// System.Single UnityEngine.Animations.ConstraintSource::m_Weight
	float ___m_Weight_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Animations.ConstraintSource
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform_0;
	float ___m_Weight_1;
};
// Native definition for COM marshalling of UnityEngine.Animations.ConstraintSource
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform_0;
	float ___m_Weight_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// Polytope.PT_Create_Prefab/ShaderProperties_C
struct ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_C::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CI
struct ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CI::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// UnityEngine.Sprite Polytope.PT_Create_Prefab/ShaderProperties_CI::image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image_1;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CS
struct ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CS::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CS::smoothness
	float ___smoothness_1;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CSM
struct ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CSM::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::smoothness
	float ___smoothness_1;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::metallic
	float ___metallic_2;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CSP
struct ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CSP::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSP::size
	float ___size_1;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSP::power
	float ___power_2;
};

// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Polytope.PT_Create_Prefab/PreviewCallback
struct PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animations.RotationConstraint
struct RotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AsyncLoading
struct AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AsyncLoading::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_5;
	// UnityEngine.UI.Text AsyncLoading::textField
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textField_6;
};

struct AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields
{
	// AsyncLoading AsyncLoading::asyncLoadingInstance
	AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* ___asyncLoadingInstance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BuildManager
struct BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NodeUI BuildManager::nodeUI
	NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* ___nodeUI_4;
	// UnityEngine.GameObject BuildManager::buildEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buildEffect_5;
	// UnityEngine.GameObject BuildManager::sellEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sellEffect_6;
	// TurretBlueprint BuildManager::turretToBuild
	TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___turretToBuild_8;
	// Node BuildManager::selectedNode
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___selectedNode_9;
};

struct BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields
{
	// BuildManager BuildManager::instance
	BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* ___instance_7;
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CameraController::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// System.Boolean CameraController::Rotate
	bool ___Rotate_5;
	// UnityEngine.Plane CameraController::Plane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___Plane_6;
};

// Cannonball
struct Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Cannonball::speed
	float ___speed_4;
	// UnityEngine.GameObject Cannonball::impactEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactEffect_5;
	// System.Single Cannonball::explosionRadius
	float ___explosionRadius_6;
	// System.Int32 Cannonball::damage
	int32_t ___damage_7;
	// UnityEngine.Transform Cannonball::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_8;
};

// ChestDemo
struct ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator ChestDemo::chestAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___chestAnim_4;
};

// CompleteLevel
struct CompleteLevel_t424FEFD41CB1947BC9971D61A27879134B8B57BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Enemy::startSpeed
	float ___startSpeed_4;
	// System.Single Enemy::speed
	float ___speed_5;
	// System.Boolean Enemy::isDead
	bool ___isDead_6;
	// System.Single Enemy::startHealth
	float ___startHealth_7;
	// System.Int32 Enemy::worth
	int32_t ___worth_8;
	// System.Single Enemy::health
	float ___health_9;
	// UnityEngine.Animator Enemy::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_10;
	// UnityEngine.AudioSource Enemy::walkSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___walkSound_11;
	// UnityEngine.UI.Image Enemy::healthBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___healthBar_12;
	// UnityEngine.GameObject Enemy::healthUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthUI_13;
	// UnityEngine.AudioSource Enemy::deathSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___deathSound_14;
};

// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animations.IConstraint EnemyMovement::constraint
	RuntimeObject* ___constraint_4;
	// UnityEngine.Animations.ConstraintSource EnemyMovement::source
	ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F ___source_5;
	// UnityEngine.Transform EnemyMovement::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// System.Int32 EnemyMovement::wavePointIndex
	int32_t ___wavePointIndex_7;
	// Enemy EnemyMovement::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_8;
	// GameStateSounds EnemyMovement::sound
	GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* ___sound_9;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::gameOverUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverUI_5;
	// UnityEngine.GameObject GameManager::victoryUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___victoryUI_6;
	// UnityEngine.GameObject GameManager::spawner
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawner_7;
	// GameStateSounds GameManager::sounds
	GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* ___sounds_8;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// System.Boolean GameManager::GameIsOver
	bool ___GameIsOver_4;
};

// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameSpeedShanger
struct GameSpeedShanger_tAAAD42C842994171D774E7510D58C2B2E612454B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite GameSpeedShanger::normalSpeed
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___normalSpeed_4;
	// UnityEngine.Sprite GameSpeedShanger::boostedSpeed
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___boostedSpeed_5;
	// UnityEngine.UI.Button GameSpeedShanger::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_6;
	// System.Boolean GameSpeedShanger::isBoosted
	bool ___isBoosted_7;
};

// GameStateSounds
struct GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource GameStateSounds::missLifeSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___missLifeSound_5;
	// UnityEngine.AudioSource GameStateSounds::gameOverSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gameOverSound_6;
	// UnityEngine.AudioSource GameStateSounds::gameWinSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gameWinSound_7;
	// UnityEngine.AudioSource GameStateSounds::backgroundSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backgroundSound_8;
};

struct GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_StaticFields
{
	// GameStateSounds GameStateSounds::instance
	GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* ___instance_4;
};

// LevelSelector
struct LevelSelector_tEFE9625C7B4E187D13B555C0363E163FE5F519A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button[] LevelSelector::levelButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___levelButtons_4;
};

// LivesUI
struct LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text LivesUI::livesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___livesText_4;
};

struct LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_StaticFields
{
	// LivesUI LivesUI::livesUIinstance
	LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* ___livesUIinstance_5;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenu::mainMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainMenu_4;
	// UnityEngine.GameObject MainMenu::levelsMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelsMenu_5;
};

// MaterialMover
struct MaterialMover_t5E6C12052EC8D8D817456177337ABEF6B2DA9CBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialMover::scrollSpeed
	float ___scrollSpeed_4;
	// UnityEngine.Renderer MaterialMover::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_5;
};

// MoneyUI
struct MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MoneyUI::moneyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___moneyText_4;
};

struct MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields
{
	// MoneyUI MoneyUI::moneyUIinstance
	MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* ___moneyUIinstance_5;
};

// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Node::positionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionOffset_4;
	// UnityEngine.GameObject Node::notEnoughGoldText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___notEnoughGoldText_5;
	// UnityEngine.GameObject Node::turret
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___turret_6;
	// TurretBlueprint Node::turretBlueprint
	TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___turretBlueprint_7;
	// System.Boolean Node::isUpgraded
	bool ___isUpgraded_8;
	// BuildManager Node::buildManager
	BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* ___buildManager_9;
};

// NodeUI
struct NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject NodeUI::nodeUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nodeUI_4;
	// UnityEngine.UI.Text NodeUI::upgradeCost
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___upgradeCost_5;
	// UnityEngine.UI.Button NodeUI::upgradeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___upgradeButton_6;
	// UnityEngine.UI.Text NodeUI::sellCost
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___sellCost_7;
	// Node NodeUI::target
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___target_8;
};

// Polytope.PT_Create_Prefab
struct PT_Create_Prefab_tDE5FEE6302F4542D740AC4FFCAD12520243ADC3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType> Polytope.PT_Create_Prefab::meshes
	List_1_tACE6654758D82222267EA18A347541711FD0AECA* ___meshes_4;
	// Polytope.PT_Create_Prefab/MaterialType Polytope.PT_Create_Prefab::material
	MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703* ___material_5;
	// System.Boolean Polytope.PT_Create_Prefab::loaded
	bool ___loaded_6;
	// System.Boolean Polytope.PT_Create_Prefab::tooglehelmet
	bool ___tooglehelmet_7;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::skin
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___skin_8;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::eyes
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___eyes_9;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::hair
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___hair_10;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::sclera
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___sclera_11;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::lips
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___lips_12;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::scars
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___scars_13;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::feathers1
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___feathers1_14;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::feathers2
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___feathers2_15;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::feathers3
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___feathers3_16;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::cloth1
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___cloth1_17;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::cloth2
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___cloth2_18;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::cloth3
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___cloth3_19;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::leather1
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___leather1_20;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::leather2
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___leather2_21;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::leather3
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___leather3_22;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSM Polytope.PT_Create_Prefab::metal1
	ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* ___metal1_23;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSM Polytope.PT_Create_Prefab::metal2
	ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* ___metal2_24;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSM Polytope.PT_Create_Prefab::metal3
	ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* ___metal3_25;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::gems1
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___gems1_26;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::gems2
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___gems2_27;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::gems3
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___gems3_28;
	// Polytope.PT_Create_Prefab/ShaderProperties_CI Polytope.PT_Create_Prefab::coatofarms
	ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* ___coatofarms_29;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSP Polytope.PT_Create_Prefab::light1
	ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* ___light1_30;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSP Polytope.PT_Create_Prefab::light2
	ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* ___light2_31;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSP Polytope.PT_Create_Prefab::light3
	ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* ___light3_32;
	// System.Single Polytope.PT_Create_Prefab::occlusion
	float ___occlusion_33;
	// System.Boolean Polytope.PT_Create_Prefab::metallicOn
	bool ___metallicOn_34;
	// System.Boolean Polytope.PT_Create_Prefab::smoothnessOn
	bool ___smoothnessOn_35;
	// System.Boolean Polytope.PT_Create_Prefab::gpuinstancing
	bool ___gpuinstancing_36;
	// System.Boolean Polytope.PT_Create_Prefab::doubleSidedGI
	bool ___doubleSidedGI_37;
	// System.Int32 Polytope.PT_Create_Prefab::renderQueue
	int32_t ___renderQueue_38;
	// System.Boolean Polytope.PT_Create_Prefab::preview
	bool ___preview_39;
	// System.Single Polytope.PT_Create_Prefab::time
	float ___time_40;
	// System.Boolean Polytope.PT_Create_Prefab::duplicateMaterial
	bool ___duplicateMaterial_41;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseUI_4;
};

// PlayerStats
struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerStats::startMoney
	int32_t ___startMoney_7;
	// System.Int32 PlayerStats::startLives
	int32_t ___startLives_8;
};

struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields
{
	// System.Int32 PlayerStats::Money
	int32_t ___Money_4;
	// System.Int32 PlayerStats::Lives
	int32_t ___Lives_5;
	// System.Int32 PlayerStats::Waves
	int32_t ___Waves_6;
};

// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rotator::speed
	float ___speed_4;
};

// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TurretBlueprint Shop::standartTurret
	TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___standartTurret_4;
	// TurretBlueprint Shop::missileTurret
	TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___missileTurret_5;
	// TurretBlueprint Shop::laserTurret
	TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___laserTurret_6;
	// BuildManager Shop::buildManager
	BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* ___buildManager_7;
	// UnityEngine.Vector3 Shop::scaled
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scaled_9;
	// UnityEngine.Vector3 Shop::normalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalScale_10;
};

struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields
{
	// System.Boolean Shop::selected
	bool ___selected_8;
};

// Turret
struct Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Turret::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// Enemy Turret::targetEnemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___targetEnemy_5;
	// System.Single Turret::range
	float ___range_6;
	// UnityEngine.GameObject Turret::cannonballPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cannonballPrefab_7;
	// System.Single Turret::fireRate
	float ___fireRate_8;
	// System.Single Turret::fireCountdown
	float ___fireCountdown_9;
	// System.Boolean Turret::useLaser
	bool ___useLaser_10;
	// UnityEngine.LineRenderer Turret::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_11;
	// UnityEngine.ParticleSystem Turret::impactEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___impactEffect_12;
	// UnityEngine.Light Turret::impactLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___impactLight_13;
	// System.Int32 Turret::damageOverTime
	int32_t ___damageOverTime_14;
	// System.Single Turret::slowRate
	float ___slowRate_15;
	// UnityEngine.AudioSource Turret::laserSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___laserSound_16;
	// System.String Turret::enemyTag
	String_t* ___enemyTag_17;
	// UnityEngine.Transform Turret::partToRotate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___partToRotate_18;
	// System.Single Turret::turnSpeed
	float ___turnSpeed_19;
	// UnityEngine.Transform Turret::firePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___firePoint_20;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VolumeController
struct VolumeController_tC199891364CDC35252CEAA7818DDFD0A9D359478  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Audio.AudioMixer VolumeController::audioMixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___audioMixer_4;
	// UnityEngine.Sprite VolumeController::audioOn
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___audioOn_5;
	// UnityEngine.Sprite VolumeController::audioOff
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___audioOff_6;
	// UnityEngine.UI.Button VolumeController::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_7;
	// System.Boolean VolumeController::isPlaying
	bool ___isPlaying_8;
};

// WaveSpawner
struct WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Wave[] WaveSpawner::waves
	WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* ___waves_5;
	// System.Single WaveSpawner::timebetweenWaves
	float ___timebetweenWaves_6;
	// UnityEngine.UI.Text WaveSpawner::waveCountdownText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___waveCountdownText_7;
	// GameManager WaveSpawner::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_8;
	// System.Single WaveSpawner::countdown
	float ___countdown_9;
	// System.Int32 WaveSpawner::waveIndex
	int32_t ___waveIndex_10;
};

struct WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields
{
	// System.Int32 WaveSpawner::enemiesAlive
	int32_t ___enemiesAlive_4;
};

// WavesSurvived
struct WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text WavesSurvived::wavesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___wavesText_4;
};

// Waypoints
struct Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields
{
	// UnityEngine.Transform[] Waypoints::wayPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___wayPoints_4;
};

// WheelController
struct WheelController_t46CA6F63776474A025E3D45B31008643B7BCC03C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 WheelController::rotateDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateDirection_4;
	// System.Single WheelController::rotateSpeed
	float ___rotateSpeed_5;
	// System.Boolean WheelController::isRotating
	bool ___isRotating_6;
};

// ZombieCameraLogic
struct ZombieCameraLogic_t1C067C390B969AE1496B1A758A48206817CF6C39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ZombieCameraLogic::m_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_target_4;
	// System.Single ZombieCameraLogic::m_distance
	float ___m_distance_5;
	// System.Single ZombieCameraLogic::m_height
	float ___m_height_6;
	// System.Single ZombieCameraLogic::m_lookAtAroundAngle
	float ___m_lookAtAroundAngle_7;
};

// ZombieCharacterControl
struct ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ZombieCharacterControl::m_moveSpeed
	float ___m_moveSpeed_4;
	// System.Single ZombieCharacterControl::m_turnSpeed
	float ___m_turnSpeed_5;
	// UnityEngine.Animator ZombieCharacterControl::m_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_6;
	// UnityEngine.Rigidbody ZombieCharacterControl::m_rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_rigidBody_7;
	// ZombieCharacterControl/ControlMode ZombieCharacterControl::m_controlMode
	int32_t ___m_controlMode_8;
	// System.Single ZombieCharacterControl::m_currentV
	float ___m_currentV_9;
	// System.Single ZombieCharacterControl::m_currentH
	float ___m_currentH_10;
	// System.Single ZombieCharacterControl::m_interpolation
	float ___m_interpolation_11;
	// UnityEngine.Vector3 ZombieCharacterControl::m_currentDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentDirection_12;
};

// ZombieFree
struct ZombieFree_tB244696275184690FC33870F487A1005062C1E73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] ZombieFree::m_animations
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_animations_4;
	// UnityEngine.Animator[] ZombieFree::m_animators
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___m_animators_5;
	// ZombieCameraLogic ZombieFree::m_cameraLogic
	ZombieCameraLogic_t1C067C390B969AE1496B1A758A48206817CF6C39* ___m_cameraLogic_6;
};

// scriptTexttest
struct scriptTexttest_t82F4F21D786EF3802D0C94C3B71A62AF50BB514B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text scriptTexttest::bubbleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bubbleText_4;
	// UnityEngine.UI.Text scriptTexttest::bubbleTitleTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bubbleTitleTxt_5;
	// UnityEngine.GameObject scriptTexttest::bubble
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bubble_6;
	// UnityEngine.GameObject scriptTexttest::bubbleTitle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bubbleTitle_7;
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759  : public RuntimeArray
{
	ALIGN_FIELD (8) Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* m_Items[1];

	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Wave[]
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826  : public RuntimeArray
{
	ALIGN_FIELD (8) Wave_t46A8424F3F35C64800660289794914462618636D* m_Items[1];

	inline Wave_t46A8424F3F35C64800660289794914462618636D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Wave_t46A8424F3F35C64800660289794914462618636D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Wave_t46A8424F3F35C64800660289794914462618636D* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator ChestDemo::OpenCloseChest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChestDemo_OpenCloseChest_m3833C468E06E7F0E0B5D9F3A64AA52F71EC9C8F0 (ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ChestDemo/<OpenCloseChest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseChestU3Ed__2__ctor_m5B37C204FB13BB2A58323BF7DCB5AAA44B452404 (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ZombieCharacterControl::DirectUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl_DirectUpdate_mC9F5DF455F99F5186E6C97EB7048A8C17FDC8106 (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) ;
// System.Void ZombieCharacterControl::TankUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl_TankUpdate_m335469A3CD6BF2AA5A757D1F9B799660017784F2 (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Animator>()
inline AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* Object_FindObjectsOfType_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mFFBA2D16730FF7DDB764C608C0EFF81200B41018 (const RuntimeMethod* method)
{
	return ((  AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3 (float ___width0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_m1B2B474EF5A3CD257EC0474D17F78A149DC14D88 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597 (float ___pixels0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_color_m15488B4AD785D10DEB5C66398D0FA9A0C0EA7ABB (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_FlexibleSpace_m8AE1AC009398CA84302F8C6047878F7A27E51F9E (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_m2D981AC3EA3F7273CBFEE6C30C14DC90044AE87C (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AsyncLoading::WaitScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncLoading_WaitScene_m2C05A9E3B563E1D58EACDE9D61942259F9D1545F (AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void AsyncLoading/<WaitScene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSceneU3Ed__5__ctor_mF6B63207EB8DE0C6ABDD76FB9A2668C45A1858A7 (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void BuildManager::DeselectNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_DeselectNode_mBBDD29934B970FC9A873FEEFB248435F40D722C5 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) ;
// System.Void NodeUI::SetTarget(Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI_SetTarget_mBAB9C507DBD57DA5F2A0144B93E58DD153C600CF (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ____target0, const RuntimeMethod* method) ;
// System.Void NodeUI::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI_Hide_mD91F77BE011050029A20C2BC748E28BEC5363364 (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::SetNormalAndPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_SetNormalAndPosition_m7517784546A007437BC8F1B4FDC9BDAD18B55D82 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CameraController::PlanePositionDelta(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_PlanePositionDelta_mFB9E83D0421821BF19C9DF8EB9BB4A01ADDAE184 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CameraController::PlanePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_PlanePosition_m72672D07016E016E4184E0619928644AC8C29532 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPos0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___distance0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Cannonball::HitTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_HitTarget_m133CE75EF5B865AE35FD93A5F75B9132592C27FF (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void Cannonball::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Explode_mA9F04F34DB7700F8B623FD30DE8E90B96746F65E (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) ;
// System.Void Cannonball::Damage(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Damage_m8B226331F42E6BCC5F2BF4AE0DC55DBAE603E84A (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemy0, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Enemy::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TakeDamage_m4FA367C69B7DC02023ED434B10AEBA9F4052E688 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, float ___amount0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void AsyncLoading::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD (AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_mE3035165EFABE5FD2A294473FB427DB5737B89EB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void MoneyUI::GetMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226 (MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animations.RotationConstraint>()
inline RotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E* Component_GetComponentInChildren_TisRotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E_mC58862EE905D7389EC7A17FDC31476784CF1C556 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ConstraintSource::set_sourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_sourceTransform_mC905D9E04293D785BA40E1E0378457A77170A31B (ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ConstraintSource::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_weight_m40EADC470F7D906EEB89A515F75CC8B0648368D7 (ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void EnemyMovement::GetNextWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_GetNextWaypoint_mF87FCF496509AA987C7A7471FE8C6346F96F9658 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) ;
// System.Void EnemyMovement::EndPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_EndPath_m1DA36DAC322C951965B37105E1A7A25AFBA70ED6 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) ;
// System.Void LivesUI::MissLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesUI_MissLife_m1D320AE9034CF5C3DB82796EADA460ABDAC2F6FA (LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Node::NotEnoughGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_NotEnoughGold_mFE5C3F1CEBA68045BF1996DFC86413F061E4A0A0 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Node::GetBuildPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Int32 TurretBlueprint::GetSellCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurretBlueprint_GetSellCost_m4D3AC46DE69F6490950548F86044CF5472DDDE58 (TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* __this, const RuntimeMethod* method) ;
// System.Void BuildManager::SelectNode(Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_SelectNode_mD036E5EA31C3079B58C60F7115991747B72E8155 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___node0, const RuntimeMethod* method) ;
// System.Boolean BuildManager::get_CanBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildManager_get_CanBuild_mCD328720DB25F70BC888C59C0702E46162EE7C6D (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) ;
// TurretBlueprint BuildManager::GetTurretBlueprint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* BuildManager_GetTurretBlueprint_m2F66861DC014A4A9A27B731678E6EB4088B8A548 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) ;
// System.Void Node::BuildTurret(TurretBlueprint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_BuildTurret_mF00105FCDBF3090B79DB24D048B4F7895353BCCA (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___blueprint0, const RuntimeMethod* method) ;
// System.Void BuildManager::DeselectTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_DeselectTurret_mE3E4CDEB4D862CD62B8005379EABC30F37B84FDC (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) ;
// System.Void Node/<NotEnoughGold>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNotEnoughGoldU3Ed__12__ctor_mAF6020BCDE07B3177ABCB84C3C1F22E888C1A899 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Node::SellTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SellTurret_m70B16A282DF8A70181FCDAB58D04C1A3409AEF35 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) ;
// System.Void Node::UpgradeTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_UpgradeTurret_m267C2B66F4571091F7BB196E2054F0BDA4BBE024 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Toggle_m6A1ABCC0943F8EDA2580DF8A73C2F0FBEEDBC1B8 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void BuildManager::SelectTurretToBuild(TurretBlueprint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_SelectTurretToBuild_mDE7DFA0F478A78AF93A05B2FA72E77532B64A235 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___turret0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void Turret::LockOnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_LockOnTarget_mBF39F50B04C71DC66D9B2CFC625C5ED568437019 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) ;
// System.Void Turret::Laser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_Laser_mF762CA24FF6BD83C6550467CB032015BB1D3EA6D (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) ;
// System.Void Turret::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_Shoot_mC9072187262F3EF51994EF94F396451E4964E2E6 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void Enemy::Slow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Slow_m787EF924FACEF0442F92A9A4FFD517AF6F48AABD (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, float ___rate0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Cannonball>()
inline Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* GameObject_GetComponent_TisCannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309_mD9C59042E78127CA0823F108E97497901979C572 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Cannonball::Seek(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Seek_mF6E8A4AD1B3FCCF0CDB3652FB3C6910E293F2089 (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void GameManager::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Win_mE27BA4E3D708954581584BCD46366C3CDAF87505 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WaveSpawner::SpawnWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveSpawner_SpawnWave_m4B1402340D822975EDE0BE14B95DB10C37BDE1B0 (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void WaveSpawner/<SpawnWave>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__9__ctor_m7F53EED48A47EDDA3866A373A48CD62D283CB290 (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void WaveSpawner::SpawnEnemy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSpawner_SpawnEnemy_m853FA6B2A7321F15182307A727868ECB23DDC419 (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WavesSurvived::AnimateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WavesSurvived_AnimateText_m66A73F36DDD56226D667E0F780E441B9C4083CC5 (WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* __this, const RuntimeMethod* method) ;
// System.Void WavesSurvived/<AnimateText>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__2__ctor_m5EDA35CFD3FF876915FCBBAB0241BE18FCB1D07A (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>::.ctor()
inline void List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5 (List_1_tACE6654758D82222267EA18A347541711FD0AECA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tACE6654758D82222267EA18A347541711FD0AECA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Polytope.PT_Create_Prefab/MeshType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, String_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>::Add(T)
inline void List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline (List_1_tACE6654758D82222267EA18A347541711FD0AECA* __this, MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tACE6654758D82222267EA18A347541711FD0AECA*, MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>::.ctor()
inline void List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666 (List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
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
// System.Void scriptTexttest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scriptTexttest_Start_m26DFD38940EA1BD3041A4A5C6EBA6F2EF7E86341 (scriptTexttest_t82F4F21D786EF3802D0C94C3B71A62AF50BB514B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bubbleTitleTxt.text = "Font JazzCreate Bubble";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___bubbleTitleTxt_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D);
		// bubbleText.text = "?????????????????????????\n" + "????!#$%&'()*+,-./0123456789:;<=>?@\n"
		//     + "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n`abcdefghijklmnopqrstuvwxyz\n??????????????? \n ??????????????????????\n "
		//         + "????????????????????????" + "\nThanks for using fonts from JazzCreates2015?.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___bubbleText_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A);
		// }
		return;
	}
}
// System.Void scriptTexttest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scriptTexttest__ctor_m46D5CE5D84ACCEC2F20C86B79D63AD3EA9522345 (scriptTexttest_t82F4F21D786EF3802D0C94C3B71A62AF50BB514B* __this, const RuntimeMethod* method) 
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
// System.Void ChestDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestDemo_Awake_mE05B85425CACD23BBB80187603FA751ABF356F88 (ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// chestAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___chestAnim_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chestAnim_4), (void*)L_0);
		// StartCoroutine(OpenCloseChest());
		RuntimeObject* L_1;
		L_1 = ChestDemo_OpenCloseChest_m3833C468E06E7F0E0B5D9F3A64AA52F71EC9C8F0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ChestDemo::OpenCloseChest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChestDemo_OpenCloseChest_m3833C468E06E7F0E0B5D9F3A64AA52F71EC9C8F0 (ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* L_0 = (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127*)il2cpp_codegen_object_new(U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenCloseChestU3Ed__2__ctor_m5B37C204FB13BB2A58323BF7DCB5AAA44B452404(L_0, 0, NULL);
		U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ChestDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestDemo__ctor_m6FA11C7637E32487607D904E59670047140B74A4 (ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* __this, const RuntimeMethod* method) 
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
// System.Void ChestDemo/<OpenCloseChest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseChestU3Ed__2__ctor_m5B37C204FB13BB2A58323BF7DCB5AAA44B452404 (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ChestDemo/<OpenCloseChest>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseChestU3Ed__2_System_IDisposable_Dispose_mAE0B54CE9FA06655A9E0AB78C89FDDE598AF2E69 (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ChestDemo/<OpenCloseChest>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenCloseChestU3Ed__2_MoveNext_m0C87331F25BA45B75803C7E36F102E92471FAD05 (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_005a;
	}

IL_001f:
	{
		goto IL_0090;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// chestAnim.SetTrigger("open");
		ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = L_2->___chestAnim_4;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01, NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// chestAnim.SetTrigger("close");
		ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___chestAnim_4;
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6, NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(OpenCloseChest());
		ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* L_8 = __this->___U3CU3E4__this_2;
		ChestDemo_t3EFC9489049DF1AEF4307414ECF3560CE0EFCF76* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ChestDemo_OpenCloseChest_m3833C468E06E7F0E0B5D9F3A64AA52F71EC9C8F0(L_9, NULL);
		NullCheck(L_8);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_8, L_10, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ChestDemo/<OpenCloseChest>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenCloseChestU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m311C5D1AAF359D776758EA82860805004B9B70C6 (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ChestDemo/<OpenCloseChest>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseChestU3Ed__2_System_Collections_IEnumerator_Reset_mCE195EBEF28459496B8D5878FDB84C8E31E12C9D (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenCloseChestU3Ed__2_System_Collections_IEnumerator_Reset_mCE195EBEF28459496B8D5878FDB84C8E31E12C9D_RuntimeMethod_var)));
	}
}
// System.Object ChestDemo/<OpenCloseChest>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenCloseChestU3Ed__2_System_Collections_IEnumerator_get_Current_m30FEEB100C701AE24FBF0EF63D9C6FA9BFE2D7E6 (U3COpenCloseChestU3Ed__2_tCE8E47E0718D9D3DB2214089F56A99775491F127* __this, const RuntimeMethod* method) 
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
// System.Void MaterialMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMover_Start_m52FA3AB49BC4172F8BF8E4BFF178A825DE809422 (MaterialMover_t5E6C12052EC8D8D817456177337ABEF6B2DA9CBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void MaterialMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMover_Update_m2C5D5D79B29F63D96A7E2B94447894654C0B2DE3 (MaterialMover_t5E6C12052EC8D8D817456177337ABEF6B2DA9CBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float offset = Time.time * scrollSpeed;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___scrollSpeed_4;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// rend.material.SetTextureOffset("_MainTex", new Vector2(0, offset));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___rend_5;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_5, NULL);
		// }
		return;
	}
}
// System.Void MaterialMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMover__ctor_m34287E794C4B21DC0D33C6CB7B3CDDA63325DFCE (MaterialMover_t5E6C12052EC8D8D817456177337ABEF6B2DA9CBB* __this, const RuntimeMethod* method) 
{
	{
		// public float scrollSpeed = 0.5F;
		__this->___scrollSpeed_4 = (0.5f);
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
// System.Void Rotator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Start_mE4B0451C7D2FC5AF3258D1E24B0A0CF1C58379C2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_mEDB0F4729DEB6075BDB3177DB5A90104D8020D68 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_m6DD9F22CD049D079A6246125410EFE63DE76FAF2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
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
// System.Void WheelController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Update_m39D5219260BA5253F217F3998AE197CAF2B84B39 (WheelController_t46CA6F63776474A025E3D45B31008643B7BCC03C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(isRotating)
		bool L_0 = __this->___isRotating_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// transform.Rotate(rotateDirection * rotateSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___rotateDirection_4;
		float L_4 = __this->___rotateSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_2, L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void WheelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController__ctor_m85847FDBC71FB3DF0E7086244C9EE03A93E2F056 (WheelController_t46CA6F63776474A025E3D45B31008643B7BCC03C* __this, const RuntimeMethod* method) 
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
// System.Void ZombieCameraLogic::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCameraLogic_LateUpdate_m89B5A6874FFA2C2775DF64752654D8763B678DD9 (ZombieCameraLogic_t1C067C390B969AE1496B1A758A48206817CF6C39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// if (m_target == null) { return; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (m_target == null) { return; }
		goto IL_00b8;
	}

IL_0019:
	{
		// float targetHeight = m_target.position.y + m_height;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_target_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___m_height_6;
		V_0 = ((float)il2cpp_codegen_add(L_5, L_6));
		// float currentRotationAngle = m_lookAtAroundAngle;
		float L_7 = __this->___m_lookAtAroundAngle_7;
		V_1 = L_7;
		// Quaternion currentRotation = Quaternion.Euler(0, currentRotationAngle, 0);
		float L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_8, (0.0f), NULL);
		V_2 = L_9;
		// Vector3 position = m_target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_target_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_3 = L_11;
		// position -= currentRotation * Vector3.forward * m_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_13, L_14, NULL);
		float L_16 = __this->___m_distance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_17, NULL);
		V_3 = L_18;
		// position.y = targetHeight;
		float L_19 = V_0;
		(&V_3)->___y_3 = L_19;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
		// transform.LookAt(m_target.position + new Vector3(0, m_height, 0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___m_target_4;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = __this->___m_height_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), L_25, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_26, NULL);
		NullCheck(L_22);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_22, L_27, NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void ZombieCameraLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCameraLogic__ctor_m5327502C107049BA25BE7D16EA52B2A395488EE0 (ZombieCameraLogic_t1C067C390B969AE1496B1A758A48206817CF6C39* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_target = null;
		__this->___m_target_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private float m_distance = 2f;
		__this->___m_distance_5 = (2.0f);
		// private float m_height = 1;
		__this->___m_height_6 = (1.0f);
		// private float m_lookAtAroundAngle = 180;
		__this->___m_lookAtAroundAngle_7 = (180.0f);
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
// System.Void ZombieCharacterControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl_Awake_m5F26BA2F2EDE952F742CDEB338286608D1D108AE (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!m_animator) { gameObject.GetComponent<Animator>(); }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_animator_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (!m_animator) { gameObject.GetComponent<Animator>(); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
	}

IL_0021:
	{
		// if (!m_rigidBody) { gameObject.GetComponent<Animator>(); }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_rigidBody_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// if (!m_rigidBody) { gameObject.GetComponent<Animator>(); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_8, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ZombieCharacterControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl_FixedUpdate_mA802706F5079E0808E76B59612EB91711F1855B8 (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F23E0C606C3923E7D0C5C95679CF58C71B45C12);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (m_controlMode)
		int32_t L_0 = __this->___m_controlMode_8;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0027;
	}

IL_0015:
	{
		// DirectUpdate();
		ZombieCharacterControl_DirectUpdate_mC9F5DF455F99F5186E6C97EB7048A8C17FDC8106(__this, NULL);
		// break;
		goto IL_0034;
	}

IL_001e:
	{
		// TankUpdate();
		ZombieCharacterControl_TankUpdate_m335469A3CD6BF2AA5A757D1F9B799660017784F2(__this, NULL);
		// break;
		goto IL_0034;
	}

IL_0027:
	{
		// Debug.LogError("Unsupported state");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5F23E0C606C3923E7D0C5C95679CF58C71B45C12, NULL);
		// break;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ZombieCharacterControl::TankUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl_TankUpdate_m335469A3CD6BF2AA5A757D1F9B799660017784F2 (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float v = Input.GetAxis("Vertical");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_0 = L_0;
		// float h = Input.GetAxis("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_1 = L_1;
		// m_currentV = Mathf.Lerp(m_currentV, v, Time.deltaTime * m_interpolation);
		float L_2 = __this->___m_currentV_9;
		float L_3 = V_0;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___m_interpolation_11;
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		__this->___m_currentV_9 = L_6;
		// m_currentH = Mathf.Lerp(m_currentH, h, Time.deltaTime * m_interpolation);
		float L_7 = __this->___m_currentH_10;
		float L_8 = V_1;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10 = __this->___m_interpolation_11;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		__this->___m_currentH_10 = L_11;
		// transform.position += transform.forward * m_currentV * m_moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		float L_17 = __this->___m_currentV_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		float L_19 = __this->___m_moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_22, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_23, NULL);
		// transform.Rotate(0, m_currentH * m_turnSpeed * Time.deltaTime, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_25 = __this->___m_currentH_10;
		float L_26 = __this->___m_turnSpeed_5;
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_24);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_24, (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_25, L_26)), L_27)), (0.0f), NULL);
		// m_animator.SetFloat("MoveSpeed", m_currentV);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___m_animator_6;
		float L_29 = __this->___m_currentV_9;
		NullCheck(L_28);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_28, _stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, L_29, NULL);
		// }
		return;
	}
}
// System.Void ZombieCharacterControl::DirectUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl_DirectUpdate_mC9F5DF455F99F5186E6C97EB7048A8C17FDC8106 (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		// float v = Input.GetAxis("Vertical");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_0 = L_0;
		// float h = Input.GetAxis("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_1 = L_1;
		// Transform camera = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		V_2 = L_3;
		// m_currentV = Mathf.Lerp(m_currentV, v, Time.deltaTime * m_interpolation);
		float L_4 = __this->___m_currentV_9;
		float L_5 = V_0;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_7 = __this->___m_interpolation_11;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		__this->___m_currentV_9 = L_8;
		// m_currentH = Mathf.Lerp(m_currentH, h, Time.deltaTime * m_interpolation);
		float L_9 = __this->___m_currentH_10;
		float L_10 = V_1;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___m_interpolation_11;
		float L_13;
		L_13 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		__this->___m_currentH_10 = L_13;
		// Vector3 direction = camera.forward * m_currentV + camera.right * m_currentH;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16 = __this->___m_currentV_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_2;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_18, NULL);
		float L_20 = __this->___m_currentH_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_21, NULL);
		V_3 = L_22;
		// float directionLength = direction.magnitude;
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		V_4 = L_23;
		// direction.y = 0;
		(&V_3)->___y_3 = (0.0f);
		// direction = direction.normalized * directionLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_25 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		V_3 = L_26;
		// if (direction != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_29;
		L_29 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_27, L_28, NULL);
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_013f;
		}
	}
	{
		// m_currentDirection = Vector3.Slerp(m_currentDirection, direction, Time.deltaTime * m_interpolation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___m_currentDirection_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_34 = __this->___m_interpolation_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_31, L_32, ((float)il2cpp_codegen_multiply(L_33, L_34)), NULL);
		__this->___m_currentDirection_12 = L_35;
		// transform.rotation = Quaternion.LookRotation(m_currentDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___m_currentDirection_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_37, NULL);
		NullCheck(L_36);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_36, L_38, NULL);
		// transform.position += m_currentDirection * m_moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = __this->___m_currentDirection_12;
		float L_43 = __this->___m_moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_42, L_43, NULL);
		float L_45;
		L_45 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_46, NULL);
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_47, NULL);
		// m_animator.SetFloat("MoveSpeed", direction.magnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_48 = __this->___m_animator_6;
		float L_49;
		L_49 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		NullCheck(L_48);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_48, _stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, L_49, NULL);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void ZombieCharacterControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieCharacterControl__ctor_m59D47DC85E0EBCBA683E42C248430CE3666F168F (ZombieCharacterControl_tDC90B289FA1E1F8CB29C1D3CEBF1DA3AFB68FF51* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_moveSpeed = 2;
		__this->___m_moveSpeed_4 = (2.0f);
		// [SerializeField] private float m_turnSpeed = 200;
		__this->___m_turnSpeed_5 = (200.0f);
		// [SerializeField] private Animator m_animator = null;
		__this->___m_animator_6 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_animator_6), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// [SerializeField] private Rigidbody m_rigidBody = null;
		__this->___m_rigidBody_7 = (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rigidBody_7), (void*)(Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL);
		// [SerializeField] private ControlMode m_controlMode = ControlMode.Tank;
		__this->___m_controlMode_8 = 0;
		// private float m_currentV = 0;
		__this->___m_currentV_9 = (0.0f);
		// private float m_currentH = 0;
		__this->___m_currentH_10 = (0.0f);
		// private readonly float m_interpolation = 10;
		__this->___m_interpolation_11 = (10.0f);
		// private Vector3 m_currentDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_currentDirection_12 = L_0;
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
// System.Void ZombieFree::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieFree_Start_m6AE379A21237950D7DF9D8B11A8CC2642563A2D6 (ZombieFree_tB244696275184690FC33870F487A1005062C1E73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mFFBA2D16730FF7DDB764C608C0EFF81200B41018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_animators = FindObjectsOfType<Animator>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_0;
		L_0 = Object_FindObjectsOfType_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mFFBA2D16730FF7DDB764C608C0EFF81200B41018(Object_FindObjectsOfType_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mFFBA2D16730FF7DDB764C608C0EFF81200B41018_RuntimeMethod_var);
		__this->___m_animators_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_animators_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ZombieFree::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieFree_OnGUI_mCC097FAD4BB3BFE39ABD1B0F4C873338ABC27407 (ZombieFree_tB244696275184690FC33870F487A1005062C1E73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61576FC535CE67A4234F725315CB796CEC925011);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// GUILayout.BeginVertical(GUILayout.Width(Screen.width));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_1 = L_0;
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_3;
		L_3 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3(((float)L_2), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_3);
		GUILayout_BeginVertical_m1B2B474EF5A3CD257EC0474D17F78A149DC14D88(L_1, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4;
		L_4 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_4, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUILayout.Space(16);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((16.0f), NULL);
		// for (int i = 0; i < m_animations.Length; i++)
		V_1 = 0;
		goto IL_00ea;
	}

IL_003e:
	{
		// if (i == 0) { GUILayout.BeginHorizontal(); }
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// if (i == 0) { GUILayout.BeginHorizontal(); }
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_7;
		L_7 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_7, NULL);
	}

IL_0054:
	{
		// if (GUILayout.Button(m_animations[i]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->___m_animations_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12;
		L_12 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_13;
		L_13 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(L_11, L_12, NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		// for (int j = 0; j < m_animators.Length; j++)
		V_4 = 0;
		goto IL_008f;
	}

IL_0070:
	{
		// m_animators[j].SetTrigger(m_animations[i]);
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_15 = __this->___m_animators_5;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = __this->___m_animations_4;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_18, L_22, NULL);
		// for (int j = 0; j < m_animators.Length; j++)
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_008f:
	{
		// for (int j = 0; j < m_animators.Length; j++)
		int32_t L_24 = V_4;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_25 = __this->___m_animators_5;
		NullCheck(L_25);
		V_5 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_0070;
		}
	}
	{
	}

IL_00a2:
	{
		// if (i == m_animations.Length - 1) { GUILayout.EndHorizontal(); }
		int32_t L_27 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = __this->___m_animations_4;
		NullCheck(L_28);
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_28)->max_length)), 1))))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00bf;
		}
	}
	{
		// if (i == m_animations.Length - 1) { GUILayout.EndHorizontal(); }
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		goto IL_00e5;
	}

IL_00bf:
	{
		// else if (i == (m_animations.Length / 2)) { GUILayout.EndHorizontal(); GUILayout.BeginHorizontal(); }
		int32_t L_30 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = __this->___m_animations_4;
		NullCheck(L_31);
		V_7 = (bool)((((int32_t)L_30) == ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2))))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00e5;
		}
	}
	{
		// else if (i == (m_animations.Length / 2)) { GUILayout.EndHorizontal(); GUILayout.BeginHorizontal(); }
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// else if (i == (m_animations.Length / 2)) { GUILayout.EndHorizontal(); GUILayout.BeginHorizontal(); }
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_33;
		L_33 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_33, NULL);
	}

IL_00e5:
	{
		// for (int i = 0; i < m_animations.Length; i++)
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ea:
	{
		// for (int i = 0; i < m_animations.Length; i++)
		int32_t L_35 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = __this->___m_animations_4;
		NullCheck(L_36);
		V_8 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_8;
		if (L_37)
		{
			goto IL_003e;
		}
	}
	{
		// GUILayout.Space(16);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((16.0f), NULL);
		// Color oldColor = GUI.color;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = GUI_get_color_m15488B4AD785D10DEB5C66398D0FA9A0C0EA7ABB(NULL);
		V_0 = L_38;
		// GUI.color = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648(L_39, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_40;
		L_40 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_40, NULL);
		// GUILayout.FlexibleSpace();
		GUILayout_FlexibleSpace_m8AE1AC009398CA84302F8C6047878F7A27E51F9E(NULL);
		// GUILayout.Label("WASD or arrows: Move");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_41;
		L_41 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral61576FC535CE67A4234F725315CB796CEC925011, L_41, NULL);
		// GUILayout.FlexibleSpace();
		GUILayout_FlexibleSpace_m8AE1AC009398CA84302F8C6047878F7A27E51F9E(NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUI.color = oldColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = V_0;
		GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648(L_42, NULL);
		// GUILayout.EndVertical();
		GUILayout_EndVertical_m2D981AC3EA3F7273CBFEE6C30C14DC90044AE87C(NULL);
		// }
		return;
	}
}
// System.Void ZombieFree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieFree__ctor_mD5AF46F5DA4776A2F29E574952A753428EB6608C (ZombieFree_tB244696275184690FC33870F487A1005062C1E73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly string[] m_animations = { "Attack", "Dead", "Reset" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		__this->___m_animations_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_animations_4), (void*)L_3);
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
// System.Void AsyncLoading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLoading_Start_mF243D8A71F1754D80F2CFC4CE8995C615A3EB580 (AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// asyncLoadingInstance = this;
		((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void AsyncLoading::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD (AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	{
		// canvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___canvas_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// StartCoroutine(WaitScene(level));
		int32_t L_1 = ___level0;
		RuntimeObject* L_2;
		L_2 = AsyncLoading_WaitScene_m2C05A9E3B563E1D58EACDE9D61942259F9D1545F(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AsyncLoading::WaitScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncLoading_WaitScene_m2C05A9E3B563E1D58EACDE9D61942259F9D1545F (AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* L_0 = (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26*)il2cpp_codegen_object_new(U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitSceneU3Ed__5__ctor_mF6B63207EB8DE0C6ABDD76FB9A2668C45A1858A7(L_0, 0, NULL);
		U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* L_2 = L_1;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		L_2->___index_2 = L_3;
		return L_2;
	}
}
// System.Void AsyncLoading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLoading__ctor_m5284EB7504754D4226BFE45B6AD7D4277E984640 (AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* __this, const RuntimeMethod* method) 
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
// System.Void AsyncLoading/<WaitScene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSceneU3Ed__5__ctor_mF6B63207EB8DE0C6ABDD76FB9A2668C45A1858A7 (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AsyncLoading/<WaitScene>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSceneU3Ed__5_System_IDisposable_Dispose_mE6D9A12B061269321B8E3B11811B535F4C97CF46 (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AsyncLoading/<WaitScene>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitSceneU3Ed__5_MoveNext_mC712DC7F60ACCF0CF279254D45FCA6FC9BA1CDEC (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DB17291C24E5ED90863494D5A61BFDDEB59FD39);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
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
		goto IL_009d;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation loadScene = SceneManager.LoadSceneAsync(index);
		int32_t L_3 = __this->___index_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(L_3, NULL);
		__this->___U3CloadSceneU3E5__1_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadSceneU3E5__1_4), (void*)L_4);
		// loadScene.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CloadSceneU3E5__1_4;
		NullCheck(L_5);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)0, NULL);
		goto IL_00a5;
	}

IL_0043:
	{
		// if (loadScene.progress >= .9f)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CloadSceneU3E5__1_4;
		NullCheck(L_6);
		float L_7;
		L_7 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_6, NULL);
		V_1 = (bool)((((int32_t)((!(((float)L_7) >= ((float)(0.899999976f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// textField.text = "TAP THE SCREEN TO CONTINUE";
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_9 = __this->___U3CU3E4__this_3;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___textField_6;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral2DB17291C24E5ED90863494D5A61BFDDEB59FD39);
		// if (Input.anyKeyDown)
		bool L_11;
		L_11 = Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71(NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// loadScene.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_13 = __this->___U3CloadSceneU3E5__1_4;
		NullCheck(L_13);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_13, (bool)1, NULL);
	}

IL_008c:
	{
	}

IL_008d:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a5:
	{
		// while (!loadScene.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_14 = __this->___U3CloadSceneU3E5__1_4;
		NullCheck(L_14);
		bool L_15;
		L_15 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_14, NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0043;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object AsyncLoading/<WaitScene>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSceneU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD188532243A0648F97A258AF2CB04731B3CE676F (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AsyncLoading/<WaitScene>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSceneU3Ed__5_System_Collections_IEnumerator_Reset_m49F87E3E123540BE312D283DE5BC1C8718F16EFB (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitSceneU3Ed__5_System_Collections_IEnumerator_Reset_m49F87E3E123540BE312D283DE5BC1C8718F16EFB_RuntimeMethod_var)));
	}
}
// System.Object AsyncLoading/<WaitScene>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSceneU3Ed__5_System_Collections_IEnumerator_get_Current_mF4E5073D7DEA584F01758D075ABD7BB59017C28A (U3CWaitSceneU3Ed__5_t12F4CA8239D50A549F863CC8AA80CF173F880E26* __this, const RuntimeMethod* method) 
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
// System.Boolean BuildManager::get_CanBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildManager_get_CanBuild_mCD328720DB25F70BC888C59C0702E46162EE7C6D (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool CanBuild { get { return turretToBuild != null; } }
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_0 = __this->___turretToBuild_8;
		V_0 = (bool)((!(((RuntimeObject*)(TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// public bool CanBuild { get { return turretToBuild != null; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean BuildManager::get_HasMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildManager_get_HasMoney_mEF6A941124954C449CE8AFA651C830C28EACCBDB (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public bool HasMoney { get { return PlayerStats.Money >= turretToBuild.cost; } }
		int32_t L_0 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_1 = __this->___turretToBuild_8;
		NullCheck(L_1);
		int32_t L_2 = L_1->___cost_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		// public bool HasMoney { get { return PlayerStats.Money >= turretToBuild.cost; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void BuildManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_Awake_m8CA28322F26F3D989B8A388A3249F5B596C198B1 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE3D0B9679E0404466E65C0DB8235A33FA430E5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (instance != null)
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_0 = ((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("More than one Build Manager on the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7BE3D0B9679E0404466E65C0DB8235A33FA430E5, NULL);
		// return;
		goto IL_0024;
	}

IL_001e:
	{
		// instance = this;
		((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7), (void*)__this);
	}

IL_0024:
	{
		// }
		return;
	}
}
// TurretBlueprint BuildManager::GetTurretBlueprint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* BuildManager_GetTurretBlueprint_m2F66861DC014A4A9A27B731678E6EB4088B8A548 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
{
	TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* V_0 = NULL;
	{
		// return turretToBuild;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_0 = __this->___turretToBuild_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_1 = V_0;
		return L_1;
	}
}
// System.Void BuildManager::SelectTurretToBuild(TurretBlueprint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_SelectTurretToBuild_mDE7DFA0F478A78AF93A05B2FA72E77532B64A235 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___turret0, const RuntimeMethod* method) 
{
	{
		// turretToBuild = turret;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_0 = ___turret0;
		__this->___turretToBuild_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turretToBuild_8), (void*)L_0);
		// DeselectNode();
		BuildManager_DeselectNode_mBBDD29934B970FC9A873FEEFB248435F40D722C5(__this, NULL);
		// }
		return;
	}
}
// System.Void BuildManager::SelectNode(Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_SelectNode_mD036E5EA31C3079B58C60F7115991747B72E8155 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (selectedNode == node)
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_0 = __this->___selectedNode_9;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_1 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// DeselectNode();
		BuildManager_DeselectNode_mBBDD29934B970FC9A873FEEFB248435F40D722C5(__this, NULL);
		// return;
		goto IL_003b;
	}

IL_001b:
	{
		// selectedNode = node;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4 = ___node0;
		__this->___selectedNode_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedNode_9), (void*)L_4);
		// turretToBuild = null;
		__this->___turretToBuild_8 = (TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turretToBuild_8), (void*)(TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)NULL);
		// nodeUI.SetTarget(selectedNode);
		NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* L_5 = __this->___nodeUI_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_6 = __this->___selectedNode_9;
		NullCheck(L_5);
		NodeUI_SetTarget_mBAB9C507DBD57DA5F2A0144B93E58DD153C600CF(L_5, L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void BuildManager::DeselectTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_DeselectTurret_mE3E4CDEB4D862CD62B8005379EABC30F37B84FDC (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
{
	{
		// turretToBuild = null;
		__this->___turretToBuild_8 = (TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turretToBuild_8), (void*)(TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)NULL);
		// }
		return;
	}
}
// System.Void BuildManager::DeselectNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager_DeselectNode_mBBDD29934B970FC9A873FEEFB248435F40D722C5 (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
{
	{
		// selectedNode = null;
		__this->___selectedNode_9 = (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedNode_9), (void*)(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)NULL);
		// nodeUI.Hide();
		NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* L_0 = __this->___nodeUI_4;
		NullCheck(L_0);
		NodeUI_Hide_mD91F77BE011050029A20C2BC748E28BEC5363364(L_0, NULL);
		// }
		return;
	}
}
// System.Void BuildManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildManager__ctor_m7660105D1D06495437D45421CC6E4F1FCBEF5B7E (BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* __this, const RuntimeMethod* method) 
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
// System.Void CameraController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Awake_mA329C09A8A267A4FABDFE7E67EBA83B1706B04B7 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___Camera_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Camera_4), (void*)L_3);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (GameManager.GameIsOver)
		bool L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___GameIsOver_4;
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_01fb;
	}

IL_0018:
	{
		// if (Input.touchCount >= 1)
		int32_t L_2;
		L_2 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Plane.SetNormalAndPosition(transform.up, transform.position);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_4 = (&__this->___Plane_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Plane_SetNormalAndPosition_m7517784546A007437BC8F1B4FDC9BDAD18B55D82(L_4, L_6, L_8, NULL);
	}

IL_0049:
	{
		// var Delta1 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_9;
		// var Delta2 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_10;
		// if (Input.touchCount >= 1)
		int32_t L_11;
		L_11 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		// Delta1 = PlanePositionDelta(Input.GetTouch(0));
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_13;
		L_13 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = CameraController_PlanePositionDelta_mFB9E83D0421821BF19C9DF8EB9BB4A01ADDAE184(__this, L_13, NULL);
		V_0 = L_14;
		// if (Input.GetTouch(0).phase == TouchPhase.Moved)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_15;
		L_15 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_6 = L_15;
		int32_t L_16;
		L_16 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)1))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		// Camera.transform.Translate(Delta1, Space.World);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___Camera_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		NullCheck(L_19);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_19, L_20, 0, NULL);
	}

IL_00a1:
	{
	}

IL_00a2:
	{
		// if (Input.touchCount >= 2)
		int32_t L_21;
		L_21 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_01fb;
		}
	}
	{
		// var pos1 = PlanePosition(Input.GetTouch(0).position);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_23;
		L_23 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_6 = L_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = CameraController_PlanePosition_m72672D07016E016E4184E0619928644AC8C29532(__this, L_24, NULL);
		V_8 = L_25;
		// var pos2 = PlanePosition(Input.GetTouch(1).position);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_26;
		L_26 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		V_6 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = CameraController_PlanePosition_m72672D07016E016E4184E0619928644AC8C29532(__this, L_27, NULL);
		V_9 = L_28;
		// var pos1b = PlanePosition(Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_29;
		L_29 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_6 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_31;
		L_31 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_6 = L_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_6), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_30, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = CameraController_PlanePosition_m72672D07016E016E4184E0619928644AC8C29532(__this, L_33, NULL);
		V_10 = L_34;
		// var pos2b = PlanePosition(Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_35;
		L_35 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		V_6 = L_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_37;
		L_37 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		V_6 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_6), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_36, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = CameraController_PlanePosition_m72672D07016E016E4184E0619928644AC8C29532(__this, L_39, NULL);
		V_11 = L_40;
		// var zoom = Vector3.Distance(pos1, pos2)
		//            Vector3.Distance(pos1b, pos2b);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_9;
		float L_43;
		L_43 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_11;
		float L_46;
		L_46 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_44, L_45, NULL);
		V_12 = ((float)(L_43/L_46));
		// if (zoom == 0 || zoom > 10)
		float L_47 = V_12;
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0164;
		}
	}
	{
		float L_48 = V_12;
		G_B12_0 = ((((float)L_48) > ((float)(10.0f)))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B12_0 = 1;
	}

IL_0165:
	{
		V_13 = (bool)G_B12_0;
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0170;
		}
	}
	{
		// return;
		goto IL_01fb;
	}

IL_0170:
	{
		// Camera.transform.position = Vector3.LerpUnclamped(pos1, Camera.transform.position, 1 / zoom);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50 = __this->___Camera_4;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_53 = __this->___Camera_4;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline(L_52, L_55, ((float)((1.0f)/L_56)), NULL);
		NullCheck(L_51);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_51, L_57, NULL);
		// if (Rotate && pos2b != pos2)
		bool L_58 = __this->___Rotate_5;
		if (!L_58)
		{
			goto IL_01b3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_9;
		bool L_61;
		L_61 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_59, L_60, NULL);
		G_B17_0 = ((int32_t)(L_61));
		goto IL_01b4;
	}

IL_01b3:
	{
		G_B17_0 = 0;
	}

IL_01b4:
	{
		V_14 = (bool)G_B17_0;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_01fa;
		}
	}
	{
		// Camera.transform.RotateAround(pos1, Plane.normal, Vector3.SignedAngle(pos2 - pos1, pos2b - pos1b, Plane.normal));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63 = __this->___Camera_4;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_8;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_66 = (&__this->___Plane_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB(L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_68, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_71, L_72, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_74 = (&__this->___Plane_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB(L_74, NULL);
		float L_76;
		L_76 = Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline(L_70, L_73, L_75, NULL);
		NullCheck(L_64);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_64, L_65, L_67, L_76, NULL);
	}

IL_01fa:
	{
	}

IL_01fb:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CameraController::PlanePositionDelta(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_PlanePositionDelta_mFB9E83D0421821BF19C9DF8EB9BB4A01ADDAE184 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		// if (touch.phase != TouchPhase.Moved)
		int32_t L_0;
		L_0 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&___touch0), NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_2;
		goto IL_00a5;
	}

IL_0020:
	{
		// var rayBefore = Camera.ScreenPointToRay(touch.position - touch.deltaPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___Camera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___touch0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&___touch0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_7, NULL);
		V_0 = L_8;
		// var rayNow = Camera.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___Camera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___touch0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		NullCheck(L_9);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12;
		L_12 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_9, L_11, NULL);
		V_1 = L_12;
		// if (Plane.Raycast(rayBefore, out var enterBefore) && Plane.Raycast(rayNow, out var enterNow))
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_13 = (&__this->___Plane_6);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_14 = V_0;
		bool L_15;
		L_15 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0(L_13, L_14, (&V_2), NULL);
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_16 = (&__this->___Plane_6);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = V_1;
		bool L_18;
		L_18 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0(L_16, L_17, (&V_3), NULL);
		G_B5_0 = ((int32_t)(L_18));
		goto IL_007d;
	}

IL_007c:
	{
		G_B5_0 = 0;
	}

IL_007d:
	{
		V_6 = (bool)G_B5_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		// return rayBefore.GetPoint(enterBefore) - rayNow.GetPoint(enterNow);
		float L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_0), L_20, NULL);
		float L_22 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_1), L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		V_5 = L_24;
		goto IL_00a5;
	}

IL_009c:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_25;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		return L_26;
	}
}
// UnityEngine.Vector3 CameraController::PlanePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_PlanePosition_m72672D07016E016E4184E0619928644AC8C29532 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPos0, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var rayNow = Camera.ScreenPointToRay(screenPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___screenPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_2, NULL);
		V_0 = L_3;
		// if (Plane.Raycast(rayNow, out var enterNow))
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_4 = (&__this->___Plane_6);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = V_0;
		bool L_6;
		L_6 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0(L_4, L_5, (&V_1), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// return rayNow.GetPoint(enterNow);
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_0), L_8, NULL);
		V_3 = L_9;
		goto IL_0038;
	}

IL_0030:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_3;
		return L_11;
	}
}
// System.Void CameraController::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnDrawGizmos_m9BC1A1AAC652B97BF6702FAFBFB3B987C93374F5 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.DrawLine(transform.position, transform.position + transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_5, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
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
// System.Void Cannonball::Seek(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Seek_mF6E8A4AD1B3FCCF0CDB3652FB3C6910E293F2089 (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) 
{
	{
		// this.target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		__this->___target_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Cannonball::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Update_m8ADED5FF9258C1622924BFE38874D86AAF95FB50 (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// return;
		goto IL_0090;
	}

IL_0020:
	{
		// Vector3 dir = target.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_8;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// float distanceThisFrame = speed * Time.deltaTime;
		float L_9 = __this->___speed_4;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		// if (dir.magnitude <= distanceThisFrame)
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_12 = V_1;
		V_3 = (bool)((((int32_t)((!(((float)L_11) <= ((float)L_12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// HitTarget();
		Cannonball_HitTarget_m133CE75EF5B865AE35FD93A5F75B9132592C27FF(__this, NULL);
		// return;
		goto IL_0090;
	}

IL_0064:
	{
		// transform.Translate(dir.normalized * distanceThisFrame, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_14, L_17, 0, NULL);
		// transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___target_8;
		NullCheck(L_18);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_18, L_19, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Cannonball::HitTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_HitTarget_m133CE75EF5B865AE35FD93A5F75B9132592C27FF (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		// GameObject effectInstance = Instantiate(impactEffect, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___impactEffect_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_5;
		// Destroy(effectInstance, 5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_6, (5.0f), NULL);
		// if (explosionRadius > 0)
		float L_7 = __this->___explosionRadius_6;
		V_1 = (bool)((((float)L_7) > ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// Explode();
		Cannonball_Explode_mA9F04F34DB7700F8B623FD30DE8E90B96746F65E(__this, NULL);
		goto IL_005a;
	}

IL_004b:
	{
		// Damage(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___target_8;
		Cannonball_Damage_m8B226331F42E6BCC5F2BF4AE0DC55DBAE603E84A(__this, L_9, NULL);
	}

IL_005a:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// }
		return;
	}
}
// System.Void Cannonball::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Explode_mA9F04F34DB7700F8B623FD30DE8E90B96746F65E (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	int32_t V_2 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	bool V_4 = false;
	{
		// Collider[] colliders = Physics.OverlapSphere(transform.position, explosionRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___explosionRadius_6;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69(L_1, L_2, NULL);
		V_0 = L_3;
		// foreach(Collider collider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4 = V_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0049;
	}

IL_001f:
	{
		// foreach(Collider collider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (collider.CompareTag("Enemy"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_9, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// Damage(collider.transform);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = V_3;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Cannonball_Damage_m8B226331F42E6BCC5F2BF4AE0DC55DBAE603E84A(__this, L_13, NULL);
	}

IL_0044:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0049:
	{
		// foreach(Collider collider in colliders)
		int32_t L_15 = V_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cannonball::Damage(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_Damage_m8B226331F42E6BCC5F2BF4AE0DC55DBAE603E84A (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_0 = NULL;
	bool V_1 = false;
	{
		// Enemy e = enemy.GetComponent<Enemy>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___enemy0;
		NullCheck(L_0);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(L_0, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		V_0 = L_1;
		// if (e != null)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// e.TakeDamage(damage);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_0;
		int32_t L_6 = __this->___damage_7;
		NullCheck(L_5);
		Enemy_TakeDamage_m4FA367C69B7DC02023ED434B10AEBA9F4052E688(L_5, ((float)L_6), NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Cannonball::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball_OnDrawGizmosSelected_m4757E018B91C195C3DD99233ED3D6581C3B36828 (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(transform.position, explosionRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___explosionRadius_6;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Cannonball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannonball__ctor_m54D24FC36606788DB9750319384F869B0B95B61A (Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float speed = 10f;
		__this->___speed_4 = (10.0f);
		// [SerializeField] private float explosionRadius = 0f;
		__this->___explosionRadius_6 = (0.0f);
		// [SerializeField] private int damage = 50;
		__this->___damage_7 = ((int32_t)50);
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
// System.Void CompleteLevel::GoToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteLevel_GoToMainMenu_m9D63C4159C49EAF1D02BFDB903D2EEC6D846F8A5 (CompleteLevel_t424FEFD41CB1947BC9971D61A27879134B8B57BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(0);
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void CompleteLevel::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteLevel_Continue_mC2EEBFD4184D8D366EEB650467CC0234D63E3766 (CompleteLevel_t424FEFD41CB1947BC9971D61A27879134B8B57BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD4475924A23AA041020C983376F3E977373F72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(PlayerPrefs.GetInt("LevelReached"));
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralAFD4475924A23AA041020C983376F3E977373F72, NULL);
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CompleteLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteLevel__ctor_mAF983FC4584EE83D725D0B11781DA8E806B5E5C7 (CompleteLevel_t424FEFD41CB1947BC9971D61A27879134B8B57BA* __this, const RuntimeMethod* method) 
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_10), (void*)L_0);
		// walkSound = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___walkSound_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkSound_11), (void*)L_1);
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float pitch = Random.Range(0.8f, 1.2f);
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.800000012f), (1.20000005f), NULL);
		V_0 = L_0;
		// walkSound.pitch = pitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___walkSound_11;
		float L_2 = V_0;
		NullCheck(L_1);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_1, L_2, NULL);
		// health = startHealth;
		float L_3 = __this->___startHealth_7;
		__this->___health_9 = L_3;
		// speed = startSpeed;
		float L_4 = __this->___startSpeed_4;
		__this->___speed_5 = L_4;
		// }
		return;
	}
}
// System.Void Enemy::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TakeDamage_m4FA367C69B7DC02023ED434B10AEBA9F4052E688 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, float ___amount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// health -= amount;
		float L_0 = __this->___health_9;
		float L_1 = ___amount0;
		__this->___health_9 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// healthBar.fillAmount = health / startHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___healthBar_12;
		float L_3 = __this->___health_9;
		float L_4 = __this->___startHealth_7;
		NullCheck(L_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, ((float)(L_3/L_4)), NULL);
		// if (health <= 0 && !isDead)
		float L_5 = __this->___health_9;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		bool L_6 = __this->___isDead_6;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B3_0 = 0;
	}

IL_0041:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// transform.tag = "Dead";
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_8, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// walkSound.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___walkSound_11;
		NullCheck(L_9);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_9, NULL);
		// Die();
		Enemy_Die_mE3035165EFABE5FD2A294473FB427DB5737B89EB(__this, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Enemy::Slow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Slow_m787EF924FACEF0442F92A9A4FFD517AF6F48AABD (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, float ___rate0, const RuntimeMethod* method) 
{
	{
		// speed = startSpeed * (1 - rate);
		float L_0 = __this->___startSpeed_4;
		float L_1 = ___rate0;
		__this->___speed_5 = ((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_subtract((1.0f), L_1))));
		// }
		return;
	}
}
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_mE3035165EFABE5FD2A294473FB427DB5737B89EB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDead = true;
		__this->___isDead_6 = (bool)1;
		// deathSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___deathSound_14;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// anim.SetTrigger("Die");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_10;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, NULL);
		// healthUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___healthUI_13;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// PlayerStats.Money += worth;
		int32_t L_3 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		int32_t L_4 = __this->___worth_8;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		// MoneyUI.moneyUIinstance.GetMoney();
		MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* L_5 = ((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5;
		NullCheck(L_5);
		MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226(L_5, NULL);
		// WaveSpawner.enemiesAlive--;
		int32_t L_6 = ((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4;
		((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// Destroy(gameObject,2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_7, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// public float startSpeed = 5f;
		__this->___startSpeed_4 = (5.0f);
		// [System.NonSerialized] public bool isDead = false;
		__this->___isDead_6 = (bool)0;
		// [SerializeField] private float startHealth = 100;
		__this->___startHealth_7 = (100.0f);
		// [SerializeField] private int worth = 50;
		__this->___worth_8 = ((int32_t)50);
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
// System.Void EnemyMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Awake_m8E3589394AF4E557F303AA9B65B201F1781684FD (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E_mC58862EE905D7389EC7A17FDC31476784CF1C556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// constraint = GetComponentInChildren<RotationConstraint>(); //????????? ? ?? ??????
		RotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E* L_0;
		L_0 = Component_GetComponentInChildren_TisRotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E_mC58862EE905D7389EC7A17FDC31476784CF1C556(__this, Component_GetComponentInChildren_TisRotationConstraint_t014CFDBD0E08CF75B2F16C56EAAF83209D615E8E_mC58862EE905D7389EC7A17FDC31476784CF1C556_RuntimeMethod_var);
		__this->___constraint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constraint_4), (void*)L_0);
		// enemy = GetComponent<Enemy>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(__this, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		__this->___enemy_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemy_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void EnemyMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Start_m95403190C9B36406DE50131330EE999B92219947 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstraint_t69F6D36657DD041ACCA0355D70F2E547D7F63887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9E00B57BC60BA8DFE775104296F0D55A788667);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sound = GameStateSounds.instance;
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_0 = ((GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_StaticFields*)il2cpp_codegen_static_fields_for(GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var))->___instance_4;
		__this->___sound_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sound_9), (void*)L_0);
		// source.sourceTransform = GameObject.FindGameObjectWithTag("Source").transform; //????????? ? ?? ??????
		ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* L_1 = (&__this->___source_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral8C9E00B57BC60BA8DFE775104296F0D55A788667, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		ConstraintSource_set_sourceTransform_mC905D9E04293D785BA40E1E0378457A77170A31B(L_1, L_3, NULL);
		// source.weight = 1; //????????? ? ?? ??????
		ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* L_4 = (&__this->___source_5);
		ConstraintSource_set_weight_m40EADC470F7D906EEB89A515F75CC8B0648368D7(L_4, (1.0f), NULL);
		// constraint.AddSource(source); //????????? ? ?? ??????
		RuntimeObject* L_5 = __this->___constraint_4;
		ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F L_6 = __this->___source_5;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F >::Invoke(0 /* System.Int32 UnityEngine.Animations.IConstraint::AddSource(UnityEngine.Animations.ConstraintSource) */, IConstraint_t69F6D36657DD041ACCA0355D70F2E547D7F63887_il2cpp_TypeInfo_var, L_5, L_6);
		// target = Waypoints.wayPoints[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8 = ((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___target_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_10);
		// }
		return;
	}
}
// System.Void EnemyMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Update_mE16B0A7E944111B195856D2256F3FF0587224158 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (enemy.isDead) return;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->___enemy_8;
		NullCheck(L_0);
		bool L_1 = L_0->___isDead_6;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (enemy.isDead) return;
		goto IL_00b9;
	}

IL_0015:
	{
		// Vector3 dir = target.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___target_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		V_0 = L_7;
		// transform.Translate(dir.normalized * enemy.speed * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_10 = __this->___enemy_8;
		NullCheck(L_10);
		float L_11 = L_10->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_8);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_8, L_14, 0, NULL);
		// transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___target_6;
		NullCheck(L_15);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_15, L_16, NULL);
		// if (Vector3.Distance(transform.position, target.position) <= 0.2f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___target_6;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21;
		L_21 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_18, L_20, NULL);
		V_2 = (bool)((((int32_t)((!(((float)L_21) <= ((float)(0.200000003f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		// GetNextWaypoint();
		EnemyMovement_GetNextWaypoint_mF87FCF496509AA987C7A7471FE8C6346F96F9658(__this, NULL);
	}

IL_00a3:
	{
		// enemy.speed = enemy.startSpeed;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_23 = __this->___enemy_8;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_24 = __this->___enemy_8;
		NullCheck(L_24);
		float L_25 = L_24->___startSpeed_4;
		NullCheck(L_23);
		L_23->___speed_5 = L_25;
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::GetNextWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_GetNextWaypoint_mF87FCF496509AA987C7A7471FE8C6346F96F9658 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (wavePointIndex >= Waypoints.wayPoints.Length - 1)
		int32_t L_0 = __this->___wavePointIndex_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = ((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// EndPath();
		EnemyMovement_EndPath_m1DA36DAC322C951965B37105E1A7A25AFBA70ED6(__this, NULL);
		// return;
		goto IL_0043;
	}

IL_0023:
	{
		// wavePointIndex++;
		int32_t L_3 = __this->___wavePointIndex_7;
		__this->___wavePointIndex_7 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// target = Waypoints.wayPoints[wavePointIndex];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = ((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4;
		int32_t L_5 = __this->___wavePointIndex_7;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___target_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_7);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::EndPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_EndPath_m1DA36DAC322C951965B37105E1A7A25AFBA70ED6 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sound.missLifeSound.Play();
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_0 = __this->___sound_9;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___missLifeSound_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// PlayerStats.Lives--;
		int32_t L_2 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Lives_5;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Lives_5 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// WaveSpawner.enemiesAlive--;
		int32_t L_3 = ((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4;
		((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// LivesUI.livesUIinstance.MissLife();
		LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* L_5 = ((LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_StaticFields*)il2cpp_codegen_static_fields_for(LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var))->___livesUIinstance_5;
		NullCheck(L_5);
		LivesUI_MissLife_m1D320AE9034CF5C3DB82796EADA460ABDAC2F6FA(L_5, NULL);
		// }
		return;
	}
}
// System.Void EnemyMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement__ctor_mFA5BD794CC67E008E8043CBDB7CDFB437D26180B (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// private int wavePointIndex = 0;
		__this->___wavePointIndex_7 = 0;
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// sounds = GameStateSounds.instance;
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_0 = ((GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_StaticFields*)il2cpp_codegen_static_fields_for(GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var))->___instance_4;
		__this->___sounds_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sounds_8), (void*)L_0);
		// GameIsOver = false;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___GameIsOver_4 = (bool)0;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (GameIsOver) return;
		bool L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___GameIsOver_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (GameIsOver) return;
		goto IL_0024;
	}

IL_000c:
	{
		// if (PlayerStats.Lives <= 0)
		int32_t L_2 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Lives_5;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// EndGame();
		GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GameManager::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Win_mE27BA4E3D708954581584BCD46366C3CDAF87505 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA006A583149B2AD28E17211DB7A02BAD423349C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("WinLevel", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralA006A583149B2AD28E17211DB7A02BAD423349C9, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::WinLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_WinLevel_m6C49DA05DFFBBF9F99EEC1624EE265A728CA84BC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD4475924A23AA041020C983376F3E977373F72);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// sounds.backgroundSound.Stop();
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_0 = __this->___sounds_8;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___backgroundSound_8;
		NullCheck(L_1);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_1, NULL);
		// sounds.gameWinSound.Play();
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_2 = __this->___sounds_8;
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___gameWinSound_7;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// PlayerPrefs.SetInt("LevelReached", SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralAFD4475924A23AA041020C983376F3E977373F72, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// victoryUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___victoryUI_6;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// spawner.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spawner_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// sounds.backgroundSound.Stop();
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_1 = __this->___sounds_8;
		NullCheck(L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1->___backgroundSound_8;
		NullCheck(L_2);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		// sounds.gameOverSound.Play();
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_3 = __this->___sounds_8;
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = L_3->___gameOverSound_6;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// GameIsOver = true;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___GameIsOver_4 = (bool)1;
		// gameOverUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___gameOverUI_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void GameOver::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Restart_m001B8E63AD862AF86D07440B44A0E84E7EFF18D2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(SceneManager.GetActiveScene().buildIndex);
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameOver::GoToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_GoToMainMenu_mFC710EBFEC84452F19CE9D9846311477FD110E1D (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(0);
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m2D4239F9C4BCE2EBFD1D1D6FAFEBAD05F65399B2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
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
// System.Void GameSpeedShanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSpeedShanger_Start_m2DBC1D31D038FEB31AA919F4BC079DCDECCEDA2C (GameSpeedShanger_tAAAD42C842994171D774E7510D58C2B2E612454B* __this, const RuntimeMethod* method) 
{
	{
		// button.image.sprite = normalSpeed;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_6;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_0, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___normalSpeed_4;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameSpeedShanger::ChangeGameSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSpeedShanger_ChangeGameSpeed_m844FD947B35E13226395C516E0A11DF509DD2B62 (GameSpeedShanger_tAAAD42C842994171D774E7510D58C2B2E612454B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isBoosted)
		bool L_0 = __this->___isBoosted_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// isBoosted = false;
		__this->___isBoosted_7 = (bool)0;
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// button.image.sprite = normalSpeed;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___button_6;
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_2, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___normalSpeed_4;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		goto IL_0063;
	}

IL_0038:
	{
		// isBoosted = true;
		__this->___isBoosted_7 = (bool)1;
		// Time.timeScale = 2;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((2.0f), NULL);
		// button.image.sprite = boostedSpeed;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___button_6;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_5, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___boostedSpeed_5;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void GameSpeedShanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSpeedShanger__ctor_m695AE109594C862951A2008D959DB24A5A89111E (GameSpeedShanger_tAAAD42C842994171D774E7510D58C2B2E612454B* __this, const RuntimeMethod* method) 
{
	{
		// private bool isBoosted = false;
		__this->___isBoosted_7 = (bool)0;
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
// System.Void GameStateSounds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateSounds_Awake_m1F104D0ADB13278E868F1774115EE89222B67BAD (GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEB2400AEF45F06DB47C42A948D9B51F65BF0FBF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (instance != null)
		GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* L_0 = ((GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_StaticFields*)il2cpp_codegen_static_fields_for(GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("More than one GameStateSounds on the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEB2400AEF45F06DB47C42A948D9B51F65BF0FBF, NULL);
		// return;
		goto IL_0024;
	}

IL_001e:
	{
		// instance = this;
		((GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_StaticFields*)il2cpp_codegen_static_fields_for(GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_StaticFields*)il2cpp_codegen_static_fields_for(GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GameStateSounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateSounds__ctor_mDC17AC347594FE73B6A50C6EE7F4857F61518577 (GameStateSounds_t151332B9EA5F74FC7094D0F8FE646344186E013D* __this, const RuntimeMethod* method) 
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
// System.Void LevelSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelector_Start_mA446071E4C1C650C44E733E446167A1A80E745F2 (LevelSelector_tEFE9625C7B4E187D13B555C0363E163FE5F519A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD4475924A23AA041020C983376F3E977373F72);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// int levelReached = PlayerPrefs.GetInt("LevelReached", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralAFD4475924A23AA041020C983376F3E977373F72, 1, NULL);
		V_0 = L_0;
		// for (int i = 0; i < levelButtons.Length; i++)
		V_1 = 0;
		goto IL_0054;
	}

IL_0011:
	{
		// if (i + 1 > levelReached)
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_1, 1))) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// levelButtons[i].interactable = false;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_4 = __this->___levelButtons_4;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)0, NULL);
		goto IL_004f;
	}

IL_002f:
	{
		// levelButtons[i].GetComponentInChildren<Text>().text = (i+1).ToString();
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_8 = __this->___levelButtons_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
		L_12 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_11, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		int32_t L_13 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
	}

IL_004f:
	{
		// for (int i = 0; i < levelButtons.Length; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < levelButtons.Length; i++)
		int32_t L_16 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_17 = __this->___levelButtons_4;
		NullCheck(L_17);
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelSelector::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelector_Select_m0DF9617ED091DB8F28069D17FED5129FE03ACFDA (LevelSelector_tEFE9625C7B4E187D13B555C0363E163FE5F519A3* __this, int32_t ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(levelIndex);
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		int32_t L_1 = ___levelIndex0;
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelector__ctor_m69FE81306DA2BBC464EBD43F699A0CFCE2FCFE33 (LevelSelector_tEFE9625C7B4E187D13B555C0363E163FE5F519A3* __this, const RuntimeMethod* method) 
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
// System.Void LivesUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesUI_Start_mD12EC6FA738B14DCF42ACF8088FF3B11C03FE834 (LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// livesUIinstance = this;
		((LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_StaticFields*)il2cpp_codegen_static_fields_for(LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var))->___livesUIinstance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_StaticFields*)il2cpp_codegen_static_fields_for(LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var))->___livesUIinstance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void LivesUI::MissLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesUI_MissLife_m1D320AE9034CF5C3DB82796EADA460ABDAC2F6FA (LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7471B6EDF8840274133C2767D7EFB1C4CEE339F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// livesText.text = PlayerStats.Lives + " CITIZENS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___livesText_4;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Lives_5), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA7471B6EDF8840274133C2767D7EFB1C4CEE339F, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void LivesUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesUI__ctor_mC394EDF3EC0B4979155E216D321A02B7A7CB5900 (LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* __this, const RuntimeMethod* method) 
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
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1729BDE6D096D9F4C92DBE72B392BA89E9A9ECAD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8FB75C50790940C87A983517C4C08F4159A8A7D0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD4475924A23AA041020C983376F3E977373F72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(PlayerPrefs.GetInt("LevelReached"));
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralAFD4475924A23AA041020C983376F3E977373F72, NULL);
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ExitGame_m099AC5D01A74028E888CA0ED7C398402F84C0B93 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SwitchMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SwitchMenu_m8761602EE835C36D67079589E0FE2542091145F0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (mainMenu.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainMenu_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// mainMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___mainMenu_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// levelsMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___levelsMenu_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_004a;
	}

IL_002e:
	{
		// mainMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___mainMenu_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// levelsMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___levelsMenu_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
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
// System.Void MoneyUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyUI_Start_m0371CC0CDFA463B2EC0BE6E492823801ED265567 (MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moneyUIinstance = this;
		((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void MoneyUI::GetMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226 (MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moneyText.text = PlayerStats.Money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___moneyText_4;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MoneyUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyUI__ctor_m6369C7233965560F2D0DB973D05CB5E15B45C57F (MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* __this, const RuntimeMethod* method) 
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
// System.Void Node::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Start_m6F05A48434A100F7F875C86D18971F505C7AB62A (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildManager = BuildManager.instance;
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_0 = ((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7;
		__this->___buildManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buildManager_9), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 Node::GetBuildPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return transform.position + positionOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___positionOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// System.Void Node::BuildTurret(TurretBlueprint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_BuildTurret_mF00105FCDBF3090B79DB24D048B4F7895353BCCA (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* ___blueprint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD579DC2BAAC46E21FCCEF2209B824736ADA2F7E8);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	{
		// if (PlayerStats.Money < blueprint.cost)
		int32_t L_0 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_1 = ___blueprint0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___cost_1;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("Not enough gold");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD579DC2BAAC46E21FCCEF2209B824736ADA2F7E8, NULL);
		// StartCoroutine(NotEnoughGold());
		RuntimeObject* L_4;
		L_4 = Node_NotEnoughGold_mFE5C3F1CEBA68045BF1996DFC86413F061E4A0A0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// Shop.selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
		// return;
		goto IL_00a2;
	}

IL_0033:
	{
		// PlayerStats.Money -= blueprint.cost;
		int32_t L_6 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_7 = ___blueprint0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___cost_1;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4 = ((int32_t)il2cpp_codegen_subtract(L_6, L_8));
		// GameObject _turret = Instantiate(blueprint.prefab, GetBuildPosition(), Quaternion.identity);
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_9 = ___blueprint0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___prefab_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_13;
		// turret = _turret;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		__this->___turret_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turret_6), (void*)L_14);
		// turretBlueprint = blueprint;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_15 = ___blueprint0;
		__this->___turretBlueprint_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turretBlueprint_7), (void*)L_15);
		// GameObject effect = Instantiate(buildManager.buildEffect, GetBuildPosition(), Quaternion.identity);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_16 = __this->___buildManager_9;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___buildEffect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_20;
		// Destroy(effect, 5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_21, (5.0f), NULL);
		// MoneyUI.moneyUIinstance.GetMoney();
		MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* L_22 = ((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5;
		NullCheck(L_22);
		MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226(L_22, NULL);
		// Shop.selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void Node::UpgradeTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_UpgradeTurret_m267C2B66F4571091F7BB196E2054F0BDA4BBE024 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral690626F009B7CB58C658545CE2962EE15A5D43EE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	{
		// if (PlayerStats.Money < turretBlueprint.upgradeCost)
		int32_t L_0 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_1 = __this->___turretBlueprint_7;
		NullCheck(L_1);
		int32_t L_2 = L_1->___upgradeCost_3;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("Not enough gold to upgrade");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral690626F009B7CB58C658545CE2962EE15A5D43EE, NULL);
		// StartCoroutine(NotEnoughGold());
		RuntimeObject* L_4;
		L_4 = Node_NotEnoughGold_mFE5C3F1CEBA68045BF1996DFC86413F061E4A0A0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// return;
		goto IL_00b1;
	}

IL_0032:
	{
		// PlayerStats.Money -= turretBlueprint.upgradeCost;
		int32_t L_6 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_7 = __this->___turretBlueprint_7;
		NullCheck(L_7);
		int32_t L_8 = L_7->___upgradeCost_3;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4 = ((int32_t)il2cpp_codegen_subtract(L_6, L_8));
		// Destroy(turret);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___turret_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
		// GameObject _turret = Instantiate(turretBlueprint.upgradedPrefab, GetBuildPosition(), Quaternion.identity);
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_10 = __this->___turretBlueprint_7;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___upgradedPrefab_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_14;
		// turret = _turret;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		__this->___turret_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turret_6), (void*)L_15);
		// GameObject effect = Instantiate(buildManager.buildEffect, GetBuildPosition(), Quaternion.identity);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_16 = __this->___buildManager_9;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___buildEffect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_20;
		// Destroy(effect, 5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_21, (5.0f), NULL);
		// isUpgraded = true;
		__this->___isUpgraded_8 = (bool)1;
		// MoneyUI.moneyUIinstance.GetMoney();
		MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* L_22 = ((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5;
		NullCheck(L_22);
		MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226(L_22, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Node::SellTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SellTurret_m70B16A282DF8A70181FCDAB58D04C1A3409AEF35 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// PlayerStats.Money += turretBlueprint.GetSellCost();
		int32_t L_0 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_1 = __this->___turretBlueprint_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TurretBlueprint_GetSellCost_m4D3AC46DE69F6490950548F86044CF5472DDDE58(L_1, NULL);
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4 = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		// GameObject effect = Instantiate(buildManager.sellEffect, GetBuildPosition(), Quaternion.identity);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_3 = __this->___buildManager_9;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___sellEffect_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_7;
		// Destroy(effect, 5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_8, (5.0f), NULL);
		// Destroy(turret);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___turret_6;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
		// turretBlueprint = null;
		__this->___turretBlueprint_7 = (TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turretBlueprint_7), (void*)(TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A*)NULL);
		// MoneyUI.moneyUIinstance.GetMoney();
		MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* L_10 = ((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5;
		NullCheck(L_10);
		MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226(L_10, NULL);
		// }
		return;
	}
}
// System.Void Node::MouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_MouseDown_m0E9BD5065C59FF7E6340413C7486B1AE34D39E84 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (turret != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___turret_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// buildManager.SelectNode(this);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_3 = __this->___buildManager_9;
		NullCheck(L_3);
		BuildManager_SelectNode_mD036E5EA31C3079B58C60F7115991747B72E8155(L_3, __this, NULL);
		// return;
		goto IL_0052;
	}

IL_0021:
	{
		// if (!buildManager.CanBuild)
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_4 = __this->___buildManager_9;
		NullCheck(L_4);
		bool L_5;
		L_5 = BuildManager_get_CanBuild_mCD328720DB25F70BC888C59C0702E46162EE7C6D(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		goto IL_0052;
	}

IL_0035:
	{
		// BuildTurret(buildManager.GetTurretBlueprint());
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_7 = __this->___buildManager_9;
		NullCheck(L_7);
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_8;
		L_8 = BuildManager_GetTurretBlueprint_m2F66861DC014A4A9A27B731678E6EB4088B8A548(L_7, NULL);
		Node_BuildTurret_mF00105FCDBF3090B79DB24D048B4F7895353BCCA(__this, L_8, NULL);
		// BuildManager.instance.DeselectTurret();
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_9 = ((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_9);
		BuildManager_DeselectTurret_mE3E4CDEB4D862CD62B8005379EABC30F37B84FDC(L_9, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Node::NotEnoughGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_NotEnoughGold_mFE5C3F1CEBA68045BF1996DFC86413F061E4A0A0 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* L_0 = (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1*)il2cpp_codegen_object_new(U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNotEnoughGoldU3Ed__12__ctor_mAF6020BCDE07B3177ABCB84C3C1F22E888C1A899(L_0, 0, NULL);
		U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m5DBFA7A6885EBEC3891ADE47E642413C0B376549 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	{
		// [System.NonSerialized] public bool isUpgraded = false;
		__this->___isUpgraded_8 = (bool)0;
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
// System.Void Node/<NotEnoughGold>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNotEnoughGoldU3Ed__12__ctor_mAF6020BCDE07B3177ABCB84C3C1F22E888C1A899 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Node/<NotEnoughGold>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNotEnoughGoldU3Ed__12_System_IDisposable_Dispose_mC1A00A0ECC61A795677071B306C79CA18941D010 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Node/<NotEnoughGold>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNotEnoughGoldU3Ed__12_MoveNext_mB878F4B8F956DECCD9797CAADCE078F711861734 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, const RuntimeMethod* method) 
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
		goto IL_004b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// notEnoughGoldText.SetActive(true);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___notEnoughGoldText_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// notEnoughGoldText.SetActive(false);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___notEnoughGoldText_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Node/<NotEnoughGold>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNotEnoughGoldU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2BBD759462B112405FA73D20F4A3BF358CE47AB4 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Node/<NotEnoughGold>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNotEnoughGoldU3Ed__12_System_Collections_IEnumerator_Reset_mCB80CA74341C602ABE865FBBD687C73D50361442 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNotEnoughGoldU3Ed__12_System_Collections_IEnumerator_Reset_mCB80CA74341C602ABE865FBBD687C73D50361442_RuntimeMethod_var)));
	}
}
// System.Object Node/<NotEnoughGold>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNotEnoughGoldU3Ed__12_System_Collections_IEnumerator_get_Current_mB0B81EA8BCCA94827D704A932949A128C44C4FF5 (U3CNotEnoughGoldU3Ed__12_t6C18390471A799B35136BE72AE453D8A967D0DE1* __this, const RuntimeMethod* method) 
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
// System.Void NodeUI::SetTarget(Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI_SetTarget_mBAB9C507DBD57DA5F2A0144B93E58DD153C600CF (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ____target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6106AB40E70661C8F629F2C2C90BD676E303E51);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// Shop.selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
		// target = _target;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_0 = ____target0;
		__this->___target_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_8), (void*)L_0);
		// transform.position = target.GetBuildPosition();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_2 = __this->___target_8;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Node_GetBuildPosition_m9B922F38631D272A61056B17822116AA0EAAA347(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// if (!target.isUpgraded)
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4 = __this->___target_8;
		NullCheck(L_4);
		bool L_5 = L_4->___isUpgraded_8;
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// upgradeCost.text = target.turretBlueprint.upgradeCost + " GOLD";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___upgradeCost_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_8 = __this->___target_8;
		NullCheck(L_8);
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_9 = L_8->___turretBlueprint_7;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___upgradeCost_3);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralC6106AB40E70661C8F629F2C2C90BD676E303E51, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_12);
		// upgradeButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___upgradeButton_6;
		NullCheck(L_13);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_13, (bool)1, NULL);
		goto IL_0093;
	}

IL_0073:
	{
		// upgradeButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___upgradeButton_6;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)0, NULL);
		// upgradeCost.text = "DONE";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___upgradeCost_5;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5);
	}

IL_0093:
	{
		// sellCost.text = target.turretBlueprint.GetSellCost() + " GOLD";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___sellCost_7;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_17 = __this->___target_8;
		NullCheck(L_17);
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_18 = L_17->___turretBlueprint_7;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = TurretBlueprint_GetSellCost_m4D3AC46DE69F6490950548F86044CF5472DDDE58(L_18, NULL);
		V_1 = L_19;
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_20, _stringLiteralC6106AB40E70661C8F629F2C2C90BD676E303E51, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_21);
		// nodeUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___nodeUI_4;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void NodeUI::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI_Hide_mD91F77BE011050029A20C2BC748E28BEC5363364 (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, const RuntimeMethod* method) 
{
	{
		// nodeUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___nodeUI_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void NodeUI::Sell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI_Sell_mA3E35633B6501E68EF7249EA45338CB5AFE564EC (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.SellTurret();
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_0 = __this->___target_8;
		NullCheck(L_0);
		Node_SellTurret_m70B16A282DF8A70181FCDAB58D04C1A3409AEF35(L_0, NULL);
		// BuildManager.instance.DeselectNode();
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_1 = ((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_1);
		BuildManager_DeselectNode_mBBDD29934B970FC9A873FEEFB248435F40D722C5(L_1, NULL);
		// }
		return;
	}
}
// System.Void NodeUI::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI_Upgrade_mC9D127F8B2438E23DD80369A336FA86F55CC19F3 (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.UpgradeTurret();
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_0 = __this->___target_8;
		NullCheck(L_0);
		Node_UpgradeTurret_m267C2B66F4571091F7BB196E2054F0BDA4BBE024(L_0, NULL);
		// BuildManager.instance.DeselectNode();
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_1 = ((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7;
		NullCheck(L_1);
		BuildManager_DeselectNode_mBBDD29934B970FC9A873FEEFB248435F40D722C5(L_1, NULL);
		// }
		return;
	}
}
// System.Void NodeUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeUI__ctor_m5952A48687AD8D11333B2CFC297E36FC9E42B1ED (NodeUI_tC67CA80DB9EAB2EF76EE272A8139FBAA8F7B0A04* __this, const RuntimeMethod* method) 
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
// System.Void PauseMenu::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Toggle_m6A1ABCC0943F8EDA2580DF8A73C2F0FBEEDBC1B8 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// pauseUI.SetActive(!pauseUI.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseUI_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseUI_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// if (pauseUI.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pauseUI_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		goto IL_0046;
	}

IL_0039:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Restart_mB0F55CF04F94799FA8F990A09FE01C952618E7DB (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Toggle();
		PauseMenu_Toggle_m6A1ABCC0943F8EDA2580DF8A73C2F0FBEEDBC1B8(__this, NULL);
		// AsyncLoading.asyncLoadingInstance.LoadLevel(SceneManager.GetActiveScene().buildIndex);
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MainMenu_mEB01C45B5CC2F6E8EE0A84D839C4697B00913B25 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AsyncLoading.asyncLoadingInstance.LoadLevel(0);
		AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407* L_0 = ((AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_StaticFields*)il2cpp_codegen_static_fields_for(AsyncLoading_t08880ED7BEE3DD5090D2BF1DC769B7BD38D5F407_il2cpp_TypeInfo_var))->___asyncLoadingInstance_4;
		NullCheck(L_0);
		AsyncLoading_LoadLevel_m1120C3FC3B0CA330A8F3388FCD6FEC6EBD9A4CBD(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
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
// System.Void PlayerStats::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_Start_m7A65CC33729EBF5E6F507FA2F6DCB0F3FF56D183 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Money = startMoney;
		int32_t L_0 = __this->___startMoney_7;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4 = L_0;
		// Lives = startLives;
		int32_t L_1 = __this->___startLives_8;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Lives_5 = L_1;
		// Waves = 0;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Waves_6 = 0;
		// MoneyUI.moneyUIinstance.GetMoney();
		MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21* L_2 = ((MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_StaticFields*)il2cpp_codegen_static_fields_for(MoneyUI_tB2A786DCFAAE755D5FA69BA5A2CF5A96910B4A21_il2cpp_TypeInfo_var))->___moneyUIinstance_5;
		NullCheck(L_2);
		MoneyUI_GetMoney_m817333F2740FD23EB7F0406BF991F0A66B931226(L_2, NULL);
		// LivesUI.livesUIinstance.MissLife();
		LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F* L_3 = ((LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_StaticFields*)il2cpp_codegen_static_fields_for(LivesUI_t87C058A2806BA741D647BBA482642979C57D4E3F_il2cpp_TypeInfo_var))->___livesUIinstance_5;
		NullCheck(L_3);
		LivesUI_MissLife_m1D320AE9034CF5C3DB82796EADA460ABDAC2F6FA(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mACDFFF1D0051299DFCDC4AA2E9D29232D892B2EE (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int startMoney = 400;
		__this->___startMoney_7 = ((int32_t)400);
		// [SerializeField] private int startLives = 20;
		__this->___startLives_8 = ((int32_t)20);
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
// System.Void Shop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Start_mF1084EC30E8CFE8BA2F37507C0E8DF7F3E11D45C (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scaled = new Vector3(0.2f, 0.2f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.200000003f), (0.200000003f), (0.0f), /*hidden argument*/NULL);
		__this->___scaled_9 = L_0;
		// normalScale = new Vector3(1, 1, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___normalScale_10 = L_1;
		// selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
		// buildManager = BuildManager.instance;
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_2 = ((BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_StaticFields*)il2cpp_codegen_static_fields_for(BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C_il2cpp_TypeInfo_var))->___instance_7;
		__this->___buildManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buildManager_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void Shop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Update_mE0B7030006E21777E86235E0CCB9F7DE8F296882 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (PlayerStats.Money < standartTurret.cost)
		int32_t L_0 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_1 = __this->___standartTurret_4;
		NullCheck(L_1);
		int32_t L_2 = L_1->___cost_1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// standartTurret.image.color = Color.gray;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_4 = __this->___standartTurret_4;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = L_4->___image_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_0049;
	}

IL_0031:
	{
		// standartTurret.image.color = Color.white;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_7 = __this->___standartTurret_4;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7->___image_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
	}

IL_0049:
	{
		// if (PlayerStats.Money < missileTurret.cost)
		int32_t L_10 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_11 = __this->___missileTurret_5;
		NullCheck(L_11);
		int32_t L_12 = L_11->___cost_1;
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		// missileTurret.image.color = Color.gray;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_14 = __this->___missileTurret_5;
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = L_14->___image_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		goto IL_0091;
	}

IL_0079:
	{
		// missileTurret.image.color = Color.white;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_17 = __this->___missileTurret_5;
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = L_17->___image_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
	}

IL_0091:
	{
		// if (PlayerStats.Money < laserTurret.cost)
		int32_t L_20 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Money_4;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_21 = __this->___laserTurret_6;
		NullCheck(L_21);
		int32_t L_22 = L_21->___cost_1;
		V_2 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		// laserTurret.image.color = Color.gray;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_24 = __this->___laserTurret_6;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = L_24->___image_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
		goto IL_00d9;
	}

IL_00c1:
	{
		// laserTurret.image.color = Color.white;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_27 = __this->___laserTurret_6;
		NullCheck(L_27);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = L_27->___image_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
	}

IL_00d9:
	{
		// if (selected == false)
		bool L_30 = ((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8;
		V_3 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_0174;
		}
	}
	{
		// standartTurret.button.transform.localScale = normalScale;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_32 = __this->___standartTurret_4;
		NullCheck(L_32);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = L_32->___button_5;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___normalScale_10;
		NullCheck(L_34);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_35, NULL);
		// missileTurret.button.transform.localScale = normalScale;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_36 = __this->___missileTurret_5;
		NullCheck(L_36);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = L_36->___button_5;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___normalScale_10;
		NullCheck(L_38);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_38, L_39, NULL);
		// laserTurret.button.transform.localScale = normalScale;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_40 = __this->___laserTurret_6;
		NullCheck(L_40);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_41 = L_40->___button_5;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___normalScale_10;
		NullCheck(L_42);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_42, L_43, NULL);
		// standartTurret.button.interactable = true;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_44 = __this->___standartTurret_4;
		NullCheck(L_44);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_45 = L_44->___button_5;
		NullCheck(L_45);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_45, (bool)1, NULL);
		// missileTurret.button.interactable = true;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_46 = __this->___missileTurret_5;
		NullCheck(L_46);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_47 = L_46->___button_5;
		NullCheck(L_47);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_47, (bool)1, NULL);
		// laserTurret.button.interactable = true;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_48 = __this->___laserTurret_6;
		NullCheck(L_48);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_49 = L_48->___button_5;
		NullCheck(L_49);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_49, (bool)1, NULL);
	}

IL_0174:
	{
		// }
		return;
	}
}
// System.Void Shop::SelectStandartTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SelectStandartTurret_m40EF1B5D627FEFCE18B0F7BD8A17965C19BC4FC6 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65BF1B060FEF194BFB7894D48E4258A649F513E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDDD34884F0F977A0B9F8BA6E693896A5AFAF263);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!selected)
		bool L_0 = ((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d0;
		}
	}
	{
		// buildManager.SelectTurretToBuild(standartTurret);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_2 = __this->___buildManager_7;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_3 = __this->___standartTurret_4;
		NullCheck(L_2);
		BuildManager_SelectTurretToBuild_mDE7DFA0F478A78AF93A05B2FA72E77532B64A235(L_2, L_3, NULL);
		// selected = true;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)1;
		// standartTurret.button.transform.localScale += scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_4 = __this->___standartTurret_4;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___button_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_10, NULL);
		// missileTurret.button.transform.localEulerAngles -= scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_11 = __this->___missileTurret_5;
		NullCheck(L_11);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = L_11->___button_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_14, L_17, NULL);
		// missileTurret.button.interactable = false;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_18 = __this->___missileTurret_5;
		NullCheck(L_18);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = L_18->___button_5;
		NullCheck(L_19);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_19, (bool)0, NULL);
		// laserTurret.button.transform.localEulerAngles -= scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_20 = __this->___laserTurret_6;
		NullCheck(L_20);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = L_20->___button_5;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_25, NULL);
		NullCheck(L_23);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_23, L_26, NULL);
		// laserTurret.button.interactable = false;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_27 = __this->___laserTurret_6;
		NullCheck(L_27);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = L_27->___button_5;
		NullCheck(L_28);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_28, (bool)0, NULL);
		// Debug.Log("Standart turret selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDDDD34884F0F977A0B9F8BA6E693896A5AFAF263, NULL);
		goto IL_00ef;
	}

IL_00d0:
	{
		// buildManager.DeselectTurret();
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_29 = __this->___buildManager_7;
		NullCheck(L_29);
		BuildManager_DeselectTurret_mE3E4CDEB4D862CD62B8005379EABC30F37B84FDC(L_29, NULL);
		// selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
		// Debug.Log("Standart turret deselected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral65BF1B060FEF194BFB7894D48E4258A649F513E9, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Shop::SelectMissileTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SelectMissileTurret_m17D4F18B5393898E2B4B8A718C7F1E3E6CD69568 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66410F6B31EAAB8B8826DD8EA94B9FCA22383A13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F64CF09220145B37123078C6B183CDEDCB424A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!selected)
		bool L_0 = ((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d0;
		}
	}
	{
		// selected = true;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)1;
		// Debug.Log("Missile turret selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB6F64CF09220145B37123078C6B183CDEDCB424A, NULL);
		// missileTurret.button.transform.localScale += scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_2 = __this->___missileTurret_5;
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = L_2->___button_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_8, NULL);
		// standartTurret.button.transform.localEulerAngles -= scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_9 = __this->___standartTurret_4;
		NullCheck(L_9);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = L_9->___button_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		NullCheck(L_12);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_12, L_15, NULL);
		// standartTurret.button.interactable = false;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_16 = __this->___standartTurret_4;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = L_16->___button_5;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)0, NULL);
		// laserTurret.button.transform.localEulerAngles -= scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_18 = __this->___laserTurret_6;
		NullCheck(L_18);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = L_18->___button_5;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_23, NULL);
		NullCheck(L_21);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_21, L_24, NULL);
		// laserTurret.button.interactable = false;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_25 = __this->___laserTurret_6;
		NullCheck(L_25);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = L_25->___button_5;
		NullCheck(L_26);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_26, (bool)0, NULL);
		// buildManager.SelectTurretToBuild(missileTurret);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_27 = __this->___buildManager_7;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_28 = __this->___missileTurret_5;
		NullCheck(L_27);
		BuildManager_SelectTurretToBuild_mDE7DFA0F478A78AF93A05B2FA72E77532B64A235(L_27, L_28, NULL);
		goto IL_00ef;
	}

IL_00d0:
	{
		// selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
		// Debug.Log("Missile turret deselected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral66410F6B31EAAB8B8826DD8EA94B9FCA22383A13, NULL);
		// buildManager.DeselectTurret();
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_29 = __this->___buildManager_7;
		NullCheck(L_29);
		BuildManager_DeselectTurret_mE3E4CDEB4D862CD62B8005379EABC30F37B84FDC(L_29, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Shop::SelectLaserTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SelectLaserTurret_mAE514F66AF2595FA11FCD389C886D8DB05864F95 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24558CE64CC64C85D63116A824E2B717B748796E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA330EAC2A4E86A8CC13E7DC62DC629E301DAC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!selected)
		bool L_0 = ((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d0;
		}
	}
	{
		// selected = true;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)1;
		// Debug.Log("Laser turret selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2ABA330EAC2A4E86A8CC13E7DC62DC629E301DAC, NULL);
		// buildManager.SelectTurretToBuild(laserTurret);
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_2 = __this->___buildManager_7;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_3 = __this->___laserTurret_6;
		NullCheck(L_2);
		BuildManager_SelectTurretToBuild_mDE7DFA0F478A78AF93A05B2FA72E77532B64A235(L_2, L_3, NULL);
		// laserTurret.button.transform.localScale += scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_4 = __this->___laserTurret_6;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->___button_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_10, NULL);
		// standartTurret.button.transform.localEulerAngles -= scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_11 = __this->___standartTurret_4;
		NullCheck(L_11);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = L_11->___button_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_14, L_17, NULL);
		// standartTurret.button.interactable = false;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_18 = __this->___standartTurret_4;
		NullCheck(L_18);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = L_18->___button_5;
		NullCheck(L_19);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_19, (bool)0, NULL);
		// missileTurret.button.transform.localEulerAngles -= scaled;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_20 = __this->___missileTurret_5;
		NullCheck(L_20);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = L_20->___button_5;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___scaled_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_25, NULL);
		NullCheck(L_23);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_23, L_26, NULL);
		// missileTurret.button.interactable = false;
		TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* L_27 = __this->___missileTurret_5;
		NullCheck(L_27);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = L_27->___button_5;
		NullCheck(L_28);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_28, (bool)0, NULL);
		goto IL_00ef;
	}

IL_00d0:
	{
		// selected = false;
		((Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_StaticFields*)il2cpp_codegen_static_fields_for(Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_il2cpp_TypeInfo_var))->___selected_8 = (bool)0;
		// Debug.Log("Laser turret deselected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral24558CE64CC64C85D63116A824E2B717B748796E, NULL);
		// buildManager.DeselectTurret();
		BuildManager_t064E150856F6DFC5CF8A8CB180CB64DD7058801C* L_29 = __this->___buildManager_7;
		NullCheck(L_29);
		BuildManager_DeselectTurret_mE3E4CDEB4D862CD62B8005379EABC30F37B84FDC(L_29, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
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
// System.Void Turret::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_Start_m514DCE905BF6C52AB8EEAADB2FAD6EFF89DA29BC (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7FF0651EB3B7FFA908CD48006C39ECA66C1030);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("UpdateTarget",0, 0.5f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralDB7FF0651EB3B7FFA908CD48006C39ECA66C1030, (0.0f), (0.5f), NULL);
		// }
		return;
	}
}
// System.Void Turret::UpdateTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_UpdateTarget_mAB5442372E472D9BF3A0F6CA3DF7963CA0FEE141 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B8_0 = 0;
	{
		// GameObject[] enemies = GameObject.FindGameObjectsWithTag(enemyTag);
		String_t* L_0 = __this->___enemyTag_17;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		V_0 = L_1;
		// float shortestDistance = Mathf.Infinity;
		V_1 = (std::numeric_limits<float>::infinity());
		// GameObject nearestEnemy = null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach(GameObject enemy in enemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		V_3 = L_2;
		V_4 = 0;
		goto IL_005c;
	}

IL_001d:
	{
		// foreach(GameObject enemy in enemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = L_6;
		// float distanceToEnemy = Vector3.Distance(transform.position, enemy.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_11, NULL);
		V_6 = L_12;
		// if (distanceToEnemy < shortestDistance)
		float L_13 = V_6;
		float L_14 = V_1;
		V_7 = (bool)((((float)L_13) < ((float)L_14))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// shortestDistance = distanceToEnemy;
		float L_16 = V_6;
		V_1 = L_16;
		// nearestEnemy = enemy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_5;
		V_2 = L_17;
	}

IL_0055:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005c:
	{
		// foreach(GameObject enemy in enemies)
		int32_t L_19 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_3;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// if (nearestEnemy != null && shortestDistance <= range)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		float L_23 = V_1;
		float L_24 = __this->___range_6;
		G_B8_0 = ((((int32_t)((!(((float)L_23) <= ((float)L_24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 0;
	}

IL_007b:
	{
		V_8 = (bool)G_B8_0;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_009d;
		}
	}
	{
		// target = nearestEnemy.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		__this->___target_4 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_27);
		// targetEnemy = nearestEnemy.GetComponent<Enemy>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		NullCheck(L_28);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_29;
		L_29 = GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F(L_28, GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		__this->___targetEnemy_5 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetEnemy_5), (void*)L_29);
		goto IL_00a6;
	}

IL_009d:
	{
		// target = null;
		__this->___target_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Turret::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_Update_mFA14384570865A644ED1AD0502C99D31B2469702 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0063;
		}
	}
	{
		// if (useLaser)
		bool L_3 = __this->___useLaser_10;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// if (lineRenderer.enabled)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_11;
		NullCheck(L_5);
		bool L_6;
		L_6 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		// laserSound.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___laserSound_16;
		NullCheck(L_8);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_8, NULL);
		// lineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___lineRenderer_11;
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)0, NULL);
		// impactEffect.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->___impactEffect_12;
		NullCheck(L_10);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_10, NULL);
		// impactLight.enabled = false;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = __this->___impactLight_13;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
	}

IL_0060:
	{
	}

IL_0061:
	{
		// return;
		goto IL_00c4;
	}

IL_0063:
	{
		// LockOnTarget();
		Turret_LockOnTarget_mBF39F50B04C71DC66D9B2CFC625C5ED568437019(__this, NULL);
		// if (useLaser)
		bool L_12 = __this->___useLaser_10;
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		// Laser();
		Turret_Laser_mF762CA24FF6BD83C6550467CB032015BB1D3EA6D(__this, NULL);
		goto IL_00c4;
	}

IL_007f:
	{
		// if (fireCountdown <= 0f)
		float L_14 = __this->___fireCountdown_9;
		V_4 = (bool)((((int32_t)((!(((float)L_14) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00b1;
		}
	}
	{
		// Shoot();
		Turret_Shoot_mC9072187262F3EF51994EF94F396451E4964E2E6(__this, NULL);
		// fireCountdown = 1 / fireRate;
		float L_16 = __this->___fireRate_8;
		__this->___fireCountdown_9 = ((float)((1.0f)/L_16));
	}

IL_00b1:
	{
		// fireCountdown -= Time.deltaTime;
		float L_17 = __this->___fireCountdown_9;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___fireCountdown_9 = ((float)il2cpp_codegen_subtract(L_17, L_18));
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void Turret::LockOnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_LockOnTarget_mBF39F50B04C71DC66D9B2CFC625C5ED568437019 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 dir = target.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// Quaternion lookRotation = Quaternion.LookRotation(dir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		V_1 = L_6;
		// Vector3 rotation = Quaternion.Lerp(partToRotate.rotation, lookRotation, Time.deltaTime * turnSpeed).eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___partToRotate_18;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_11 = __this->___turnSpeed_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		V_3 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		V_2 = L_13;
		// partToRotate.rotation = Quaternion.Euler(0f, rotation.y, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___partToRotate_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = L_15.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_16, (0.0f), NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_17, NULL);
		// }
		return;
	}
}
// System.Void Turret::Laser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_Laser_mF762CA24FF6BD83C6550467CB032015BB1D3EA6D (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// targetEnemy.TakeDamage(damageOverTime * Time.deltaTime);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_0 = __this->___targetEnemy_5;
		int32_t L_1 = __this->___damageOverTime_14;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Enemy_TakeDamage_m4FA367C69B7DC02023ED434B10AEBA9F4052E688(L_0, ((float)il2cpp_codegen_multiply(((float)L_1), L_2)), NULL);
		// targetEnemy.Slow(slowRate);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3 = __this->___targetEnemy_5;
		float L_4 = __this->___slowRate_15;
		NullCheck(L_3);
		Enemy_Slow_m787EF924FACEF0442F92A9A4FFD517AF6F48AABD(L_3, L_4, NULL);
		// if (!lineRenderer.enabled)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_11;
		NullCheck(L_5);
		bool L_6;
		L_6 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		// laserSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___laserSound_16;
		NullCheck(L_8);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
		// lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___lineRenderer_11;
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)1, NULL);
		// impactEffect.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->___impactEffect_12;
		NullCheck(L_10);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_10, NULL);
		// impactLight.enabled = true;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = __this->___impactLight_13;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
	}

IL_0072:
	{
		// lineRenderer.SetPosition(0, firePoint.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12 = __this->___lineRenderer_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___firePoint_20;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_12);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_12, 0, L_14, NULL);
		// lineRenderer.SetPosition(1, target.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = __this->___lineRenderer_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___target_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		NullCheck(L_15);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_15, 1, L_17, NULL);
		// Vector3 dir = firePoint.position - target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___firePoint_20;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___target_4;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_21, NULL);
		V_0 = L_22;
		// impactEffect.transform.position = target.position + dir.normalized * 0.5f;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = __this->___impactEffect_12;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___target_4;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_29, NULL);
		// impactEffect.transform.rotation = Quaternion.LookRotation(dir);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = __this->___impactEffect_12;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_32, NULL);
		NullCheck(L_31);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_31, L_33, NULL);
		// }
		return;
	}
}
// System.Void Turret::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_Shoot_mC9072187262F3EF51994EF94F396451E4964E2E6 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309_mD9C59042E78127CA0823F108E97497901979C572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* V_1 = NULL;
	bool V_2 = false;
	{
		// GameObject cannonballGO = Instantiate(cannonballPrefab, firePoint.position, firePoint.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cannonballPrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___firePoint_20;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___firePoint_20;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_5;
		// Cannonball cannonball = cannonballGO.GetComponent<Cannonball>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* L_7;
		L_7 = GameObject_GetComponent_TisCannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309_mD9C59042E78127CA0823F108E97497901979C572(L_6, GameObject_GetComponent_TisCannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309_mD9C59042E78127CA0823F108E97497901979C572_RuntimeMethod_var);
		V_1 = L_7;
		// if (cannonball != null)
		Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* L_8 = V_1;
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		// cannonball.Seek(target);
		Cannonball_t783E53C613B0363A9DC0FA6E95951AA1D683D309* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___target_4;
		NullCheck(L_11);
		Cannonball_Seek_mF6E8A4AD1B3FCCF0CDB3652FB3C6910E293F2089(L_11, L_12, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Turret::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret_OnDrawGizmosSelected_mD4CF43D1452EB085F49895539B7076B951C9427C (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(transform.position, range);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___range_6;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Turret::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turret__ctor_m2E11FBA1581D0479688B2C693AEA89D4B72F0173 (Turret_tD0954651DBE8E6BF1386DE3015FAC425309CA0FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float range = 15;
		__this->___range_6 = (15.0f);
		// [SerializeField] float fireRate = 1;
		__this->___fireRate_8 = (1.0f);
		// private float fireCountdown = 0;
		__this->___fireCountdown_9 = (0.0f);
		// [SerializeField] private bool useLaser = false;
		__this->___useLaser_10 = (bool)0;
		// [SerializeField] private int damageOverTime = 30;
		__this->___damageOverTime_14 = ((int32_t)30);
		// [SerializeField] private float slowRate = 0.5f;
		__this->___slowRate_15 = (0.5f);
		// [SerializeField] private string enemyTag = "Enemy";
		__this->___enemyTag_17 = _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyTag_17), (void*)_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		// [SerializeField] float turnSpeed = 10f;
		__this->___turnSpeed_19 = (10.0f);
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
// System.Int32 TurretBlueprint::GetSellCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurretBlueprint_GetSellCost_m4D3AC46DE69F6490950548F86044CF5472DDDE58 (TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return cost / 2;
		int32_t L_0 = __this->___cost_1;
		V_0 = ((int32_t)(L_0/2));
		goto IL_000c;
	}

IL_000c:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void TurretBlueprint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBlueprint__ctor_m2D7A97933FA18D81D52C59194F0EF04099D940AE (TurretBlueprint_t871F0E3BE86D57CF0C798F811978E2D8C263E99A* __this, const RuntimeMethod* method) 
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
// System.Void VolumeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeController_Start_m6250E6E4953A35171CA4EFDB196A25C101D33E83 (VolumeController_tC199891364CDC35252CEAA7818DDFD0A9D359478* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("Volume", 0) == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F, 0, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// audioMixer.SetFloat("volume", 0);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_2 = __this->___audioMixer_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_2, _stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, (0.0f), NULL);
		// button.image.sprite = audioOn;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___button_7;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_4, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___audioOn_5;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// isPlaying = true;
		__this->___isPlaying_8 = (bool)1;
		goto IL_0081;
	}

IL_004b:
	{
		// audioMixer.SetFloat("volume", -80);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_7 = __this->___audioMixer_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_7, _stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, (-80.0f), NULL);
		// button.image.sprite = audioOff;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___button_7;
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_9, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___audioOff_6;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
		// isPlaying = false;
		__this->___isPlaying_8 = (bool)0;
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void VolumeController::SoundOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeController_SoundOnOff_m886BE39726B3669E587A18631E389398D4ABE5DA (VolumeController_tC199891364CDC35252CEAA7818DDFD0A9D359478* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (isPlaying)
		bool L_0 = __this->___isPlaying_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// isPlaying = false;
		__this->___isPlaying_8 = (bool)0;
		// audioMixer.SetFloat("volume", -80);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_2 = __this->___audioMixer_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_2, _stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, (-80.0f), NULL);
		// PlayerPrefs.SetInt("Volume", -80);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F, ((int32_t)-80), NULL);
		// button.image.sprite = audioOff;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___button_7;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_4, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___audioOff_6;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		goto IL_0092;
	}

IL_0050:
	{
		// isPlaying = true;
		__this->___isPlaying_8 = (bool)1;
		// audioMixer.SetFloat("volume", 0);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_7 = __this->___audioMixer_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_7, _stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, (0.0f), NULL);
		// PlayerPrefs.SetInt("Volume", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralFBDABB7A67249BCF0D5F45E08B8F77AEAA997B4F, 0, NULL);
		// button.image.sprite = audioOn;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___button_7;
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_9, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___audioOn_5;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void VolumeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeController__ctor_m890892A20A970D86FE848C5FEC79679F1C8AD0D1 (VolumeController_tC199891364CDC35252CEAA7818DDFD0A9D359478* __this, const RuntimeMethod* method) 
{
	{
		// private bool isPlaying = true;
		__this->___isPlaying_8 = (bool)1;
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
// System.Void Wave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wave__ctor_mD780DB1BF5BFEB7766ED0947973B342FD62E5399 (Wave_t46A8424F3F35C64800660289794914462618636D* __this, const RuntimeMethod* method) 
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
// System.Void WaveSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSpawner_Start_mE8B0A0D3D15DDDFA6BAC1627174D3F6B7812C6F0 (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesAlive = 0;
		((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4 = 0;
		// }
		return;
	}
}
// System.Void WaveSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSpawner_Update_m3FA8E04D2E00BF89D56A362AE26B2B10E9C282DC (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (enemiesAlive > 0)
		int32_t L_0 = ((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00bb;
	}

IL_0013:
	{
		// if (waveIndex == waves.Length)
		int32_t L_2 = __this->___waveIndex_10;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_3 = __this->___waves_5;
		NullCheck(L_3);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// gameManager.Win();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = __this->___gameManager_8;
		NullCheck(L_5);
		GameManager_Win_mE27BA4E3D708954581584BCD46366C3CDAF87505(L_5, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_003d:
	{
		// if (countdown <= 0f)
		float L_6 = __this->___countdown_9;
		V_2 = (bool)((((int32_t)((!(((float)L_6) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		// StartCoroutine(SpawnWave());
		RuntimeObject* L_8;
		L_8 = WaveSpawner_SpawnWave_m4B1402340D822975EDE0BE14B95DB10C37BDE1B0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// countdown = timebetweenWaves;
		float L_10 = __this->___timebetweenWaves_6;
		__this->___countdown_9 = L_10;
		// return;
		goto IL_00bb;
	}

IL_006d:
	{
		// countdown -= Time.deltaTime;
		float L_11 = __this->___countdown_9;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___countdown_9 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// countdown = Mathf.Clamp(countdown, 0f, Mathf.Infinity);
		float L_13 = __this->___countdown_9;
		float L_14;
		L_14 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_13, (0.0f), (std::numeric_limits<float>::infinity()), NULL);
		__this->___countdown_9 = L_14;
		// waveCountdownText.text = string.Format("{0:00}", countdown);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___waveCountdownText_7;
		float L_16 = __this->___countdown_9;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_18, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_19);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator WaveSpawner::SpawnWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveSpawner_SpawnWave_m4B1402340D822975EDE0BE14B95DB10C37BDE1B0 (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* L_0 = (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24*)il2cpp_codegen_object_new(U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnWaveU3Ed__9__ctor_m7F53EED48A47EDDA3866A373A48CD62D283CB290(L_0, 0, NULL);
		U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WaveSpawner::SpawnEnemy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSpawner_SpawnEnemy_m853FA6B2A7321F15182307A727868ECB23DDC419 (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(enemy, transform.position, enemy.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___enemy0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___enemy0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WaveSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSpawner__ctor_m52DB141C8309CDA05765F67C20BEB239C01FFCB6 (WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float timebetweenWaves = 5f;
		__this->___timebetweenWaves_6 = (5.0f);
		// private float countdown = 2f;
		__this->___countdown_9 = (2.0f);
		// private int waveIndex = 0;
		__this->___waveIndex_10 = 0;
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
// System.Void WaveSpawner/<SpawnWave>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__9__ctor_m7F53EED48A47EDDA3866A373A48CD62D283CB290 (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WaveSpawner/<SpawnWave>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__9_System_IDisposable_Dispose_m225664AD0109749EF6A2A6B237BDF826549B2BFB (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WaveSpawner/<SpawnWave>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnWaveU3Ed__9_MoveNext_m1DEDA07AE1D46C567E34A9B13D5E7E3CF78E784C (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
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
		goto IL_00c4;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerStats.Waves++;
		int32_t L_3 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Waves_6;
		((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Waves_6 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// Wave wave = waves[waveIndex];
		WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_5 = L_4->___waves_5;
		WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___waveIndex_10;
		NullCheck(L_5);
		int32_t L_8 = L_7;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___U3CwaveU3E5__1_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwaveU3E5__1_3), (void*)L_9);
		// enemiesAlive = wave.count * wave.enemy.Length;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_10 = __this->___U3CwaveU3E5__1_3;
		NullCheck(L_10);
		int32_t L_11 = L_10->___count_1;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_12 = __this->___U3CwaveU3E5__1_3;
		NullCheck(L_12);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = L_12->___enemy_0;
		NullCheck(L_13);
		((WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_StaticFields*)il2cpp_codegen_static_fields_for(WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075_il2cpp_TypeInfo_var))->___enemiesAlive_4 = ((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// for (int i = 0; i < wave.count; i++)
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_0106;
	}

IL_0076:
	{
		// for (int e = 0; e < wave.enemy.Length; e++)
		__this->___U3CeU3E5__3_5 = 0;
		goto IL_00dc;
	}

IL_0080:
	{
		// SpawnEnemy(wave.enemy[e]);
		WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* L_14 = __this->___U3CU3E4__this_2;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_15 = __this->___U3CwaveU3E5__1_3;
		NullCheck(L_15);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = L_15->___enemy_0;
		int32_t L_17 = __this->___U3CeU3E5__3_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		WaveSpawner_SpawnEnemy_m853FA6B2A7321F15182307A727868ECB23DDC419(L_14, L_19, NULL);
		// yield return new WaitForSeconds(1f / wave.rate);
		Wave_t46A8424F3F35C64800660289794914462618636D* L_20 = __this->___U3CwaveU3E5__1_3;
		NullCheck(L_20);
		float L_21 = L_20->___rate_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, ((float)((1.0f)/L_21)), NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int e = 0; e < wave.enemy.Length; e++)
		int32_t L_23 = __this->___U3CeU3E5__3_5;
		V_1 = L_23;
		int32_t L_24 = V_1;
		__this->___U3CeU3E5__3_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00dc:
	{
		// for (int e = 0; e < wave.enemy.Length; e++)
		int32_t L_25 = __this->___U3CeU3E5__3_5;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_26 = __this->___U3CwaveU3E5__1_3;
		NullCheck(L_26);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = L_26->___enemy_0;
		NullCheck(L_27);
		V_2 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_0080;
		}
	}
	{
		// for (int i = 0; i < wave.count; i++)
		int32_t L_29 = __this->___U3CiU3E5__2_4;
		V_1 = L_29;
		int32_t L_30 = V_1;
		__this->___U3CiU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0106:
	{
		// for (int i = 0; i < wave.count; i++)
		int32_t L_31 = __this->___U3CiU3E5__2_4;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_32 = __this->___U3CwaveU3E5__1_3;
		NullCheck(L_32);
		int32_t L_33 = L_32->___count_1;
		V_3 = (bool)((((int32_t)L_31) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_3;
		if (L_34)
		{
			goto IL_0076;
		}
	}
	{
		// waveIndex++;
		WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* L_35 = __this->___U3CU3E4__this_2;
		WaveSpawner_tCF00FE935750D519050ACA717269E033818F7075* L_36 = __this->___U3CU3E4__this_2;
		NullCheck(L_36);
		int32_t L_37 = L_36->___waveIndex_10;
		NullCheck(L_35);
		L_35->___waveIndex_10 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		// }
		return (bool)0;
	}
}
// System.Object WaveSpawner/<SpawnWave>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnWaveU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F44C589FBA6764C4DDCAFCB3B843AF3E0AE234F (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WaveSpawner/<SpawnWave>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWaveU3Ed__9_System_Collections_IEnumerator_Reset_mB39EABE555206DDB13A278EE7006C20F62EDAFDE (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnWaveU3Ed__9_System_Collections_IEnumerator_Reset_mB39EABE555206DDB13A278EE7006C20F62EDAFDE_RuntimeMethod_var)));
	}
}
// System.Object WaveSpawner/<SpawnWave>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnWaveU3Ed__9_System_Collections_IEnumerator_get_Current_m62E4A49D9C78A78AB061217BDFD6F1429247A54A (U3CSpawnWaveU3Ed__9_t1BA74BEF475BAC6D52C50D91EAFB3B5A26E16E24* __this, const RuntimeMethod* method) 
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
// System.Void WavesSurvived::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WavesSurvived_OnEnable_m147AC00F47BDFD7B2D4E6959DFCA76682E6DBDDC (WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateText());
		RuntimeObject* L_0;
		L_0 = WavesSurvived_AnimateText_m66A73F36DDD56226D667E0F780E441B9C4083CC5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WavesSurvived::AnimateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WavesSurvived_AnimateText_m66A73F36DDD56226D667E0F780E441B9C4083CC5 (WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* L_0 = (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012*)il2cpp_codegen_object_new(U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateTextU3Ed__2__ctor_m5EDA35CFD3FF876915FCBBAB0241BE18FCB1D07A(L_0, 0, NULL);
		U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WavesSurvived::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WavesSurvived__ctor_m748CE64EC35143A0A5F2D515D7ED69E0FEE11549 (WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* __this, const RuntimeMethod* method) 
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
// System.Void WavesSurvived/<AnimateText>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__2__ctor_m5EDA35CFD3FF876915FCBBAB0241BE18FCB1D07A (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WavesSurvived/<AnimateText>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__2_System_IDisposable_Dispose_m06C5D6E43F6110B3F94CB3F456CE91A64710A676 (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WavesSurvived/<AnimateText>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateTextU3Ed__2_MoveNext_m2AE0F0E3E7D41BC34547E098A4890DDEDFC3542D (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
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
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0064;
	}

IL_001f:
	{
		goto IL_00b3;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// wavesText.text = "0";
		WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = L_2->___wavesText_4;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// int wave = 0;
		__this->___U3CwaveU3E5__1_3 = 0;
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00bb;
	}

IL_006d:
	{
		// wave++;
		int32_t L_5 = __this->___U3CwaveU3E5__1_3;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->___U3CwaveU3E5__1_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// wavesText.text = wave.ToString();
		WavesSurvived_t60F42D834162A83BB9379A1570AD431AFDCDEF8C* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = L_7->___wavesText_4;
		int32_t* L_9 = (&__this->___U3CwaveU3E5__1_3);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00bb:
	{
		// while(wave < PlayerStats.Waves)
		int32_t L_12 = __this->___U3CwaveU3E5__1_3;
		int32_t L_13 = ((PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_il2cpp_TypeInfo_var))->___Waves_6;
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_006d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object WavesSurvived/<AnimateText>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateTextU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3DD525D932352236A4C07114A0DE961127103E4B (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WavesSurvived/<AnimateText>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__2_System_Collections_IEnumerator_Reset_m156D285A0DA91F444D0A9D97DE9A456DA08ABF19 (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateTextU3Ed__2_System_Collections_IEnumerator_Reset_m156D285A0DA91F444D0A9D97DE9A456DA08ABF19_RuntimeMethod_var)));
	}
}
// System.Object WavesSurvived/<AnimateText>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateTextU3Ed__2_System_Collections_IEnumerator_get_Current_mFBE06827FA412879B47A22B98CEB9677D826D3C6 (U3CAnimateTextU3Ed__2_t280D62138CA2809C3A2EC420F28346864774A012* __this, const RuntimeMethod* method) 
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
// System.Void Waypoints::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints_Awake_m83EC186FEBF0CE974E4DBDA3DC769D7A590EF1F1 (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// wayPoints = new Transform[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_1);
		((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4), (void*)L_2);
		// for (int i = 0; i < wayPoints.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_001a:
	{
		// wayPoints[i] = transform.GetChild(i);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = ((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4;
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, L_6, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_7);
		// for (int i = 0; i < wayPoints.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < wayPoints.Length; i++)
		int32_t L_9 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = ((Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_StaticFields*)il2cpp_codegen_static_fields_for(Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407_il2cpp_TypeInfo_var))->___wayPoints_4;
		NullCheck(L_10);
		V_1 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Waypoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoints__ctor_m413549DD06D2A1C2C57C63E6712357CD06DA64E4 (Waypoints_tC513AE8F1E06DBDBBFD97970CBDA558965F17407* __this, const RuntimeMethod* method) 
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
// System.Void Polytope.PT_Create_Prefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PT_Create_Prefab__ctor_m4BC00C2AAEBAF92E18DA8988F570E6130FA9C4A0 (PT_Create_Prefab_tDE5FEE6302F4542D740AC4FFCAD12520243ADC3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACE6654758D82222267EA18A347541711FD0AECA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<MeshType> meshes = new List<MeshType>
		// {
		//     new MeshType(TypeOfMesh.hair),
		//     new MeshType(TypeOfMesh.head),
		//     new MeshType(TypeOfMesh.beard),
		//     new MeshType(TypeOfMesh.helmet),
		//     new MeshType(TypeOfMesh.body),
		//     new MeshType(TypeOfMesh.boots),
		//     new MeshType(TypeOfMesh.cape),
		//     new MeshType(TypeOfMesh.gauntlets),
		//     new MeshType(TypeOfMesh.legs),
		//     new MeshType(TypeOfMesh.upper),
		//     new MeshType(TypeOfMesh.lower)
		// };
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_0 = (List_1_tACE6654758D82222267EA18A347541711FD0AECA*)il2cpp_codegen_object_new(List_1_tACE6654758D82222267EA18A347541711FD0AECA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5(L_0, List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___hair_0;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_3 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_3, L_2, NULL);
		NullCheck(L_1);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_1, L_3, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_4 = L_1;
		String_t* L_5 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___head_1;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_6 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_6, L_5, NULL);
		NullCheck(L_4);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_4, L_6, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_7 = L_4;
		String_t* L_8 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___beard_2;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_9 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_9, L_8, NULL);
		NullCheck(L_7);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_7, L_9, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_10 = L_7;
		String_t* L_11 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___helmet_3;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_12 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_12, L_11, NULL);
		NullCheck(L_10);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_10, L_12, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_13 = L_10;
		String_t* L_14 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___body_4;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_15 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_15, L_14, NULL);
		NullCheck(L_13);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_13, L_15, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_16 = L_13;
		String_t* L_17 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___boots_5;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_18 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_18, L_17, NULL);
		NullCheck(L_16);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_16, L_18, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_19 = L_16;
		String_t* L_20 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___cape_6;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_21 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_21, L_20, NULL);
		NullCheck(L_19);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_19, L_21, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_22 = L_19;
		String_t* L_23 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___gauntlets_7;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_24 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_24, L_23, NULL);
		NullCheck(L_22);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_22, L_24, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_25 = L_22;
		String_t* L_26 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___legs_8;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_27 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_27, L_26, NULL);
		NullCheck(L_25);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_25, L_27, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_28 = L_25;
		String_t* L_29 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___upper_9;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_30 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_30, L_29, NULL);
		NullCheck(L_28);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_28, L_30, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_31 = L_28;
		String_t* L_32 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___lower_10;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_33 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_33, L_32, NULL);
		NullCheck(L_31);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_31, L_33, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		__this->___meshes_4 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshes_4), (void*)L_31);
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
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_Multicast(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* currentDelegate = reinterpret_cast<PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenInst(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStatic(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStaticInvoker(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_ClosedStaticInvoker(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Polytope.PT_Create_Prefab/PreviewCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewCallback__ctor_m818F07092CCF2EFFD88D5BACDDC5CEF038C8C5C9 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_Multicast;
}
// System.Void Polytope.PT_Create_Prefab/PreviewCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Polytope.PT_Create_Prefab/PreviewCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreviewCallback_BeginInvoke_m0F0845AC9188A0F1C140DC8878BAD7F5362FD874 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Polytope.PT_Create_Prefab/PreviewCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewCallback_EndInvoke_m0E62F3F91AB2406CD13D0B8B0507799DA00CB83A (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Polytope.PT_Create_Prefab/TypeOfMesh::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeOfMesh__cctor_mC311A912B26E0AF008EF42EFCA985D766BD9D7ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD69EC6C9E191C57664923345F3742272616987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral500FF24EC184A900F27907F13116703701E8CF87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string hair = "hair";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___hair_0 = _stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___hair_0), (void*)_stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486);
		// public static readonly string head = "head";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___head_1 = _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___head_1), (void*)_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		// public static readonly string beard = "beard";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___beard_2 = _stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___beard_2), (void*)_stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85);
		// public static readonly string helmet = "helmet";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___helmet_3 = _stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___helmet_3), (void*)_stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A);
		// public static readonly string body = "body";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___body_4 = _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___body_4), (void*)_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		// public static readonly string boots = "boots";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___boots_5 = _stringLiteral500FF24EC184A900F27907F13116703701E8CF87;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___boots_5), (void*)_stringLiteral500FF24EC184A900F27907F13116703701E8CF87);
		// public static readonly string cape = "cape";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___cape_6 = _stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___cape_6), (void*)_stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8);
		// public static readonly string gauntlets = "gauntlets";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___gauntlets_7 = _stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___gauntlets_7), (void*)_stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F);
		// public static readonly string legs = "legs";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___legs_8 = _stringLiteral1BD69EC6C9E191C57664923345F3742272616987;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___legs_8), (void*)_stringLiteral1BD69EC6C9E191C57664923345F3742272616987);
		// public static readonly string upper = "upper";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___upper_9 = _stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___upper_9), (void*)_stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491);
		// public static readonly string lower = "lower";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___lower_10 = _stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___lower_10), (void*)_stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58);
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_C::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_C_get_Color_mF80DC4A674CD2C25043CDC0809749D500FF78216 (ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_C::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_C__ctor_m37A337F24E144C9391B0C854CDE87B61A1150E40 (ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CI::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_CI_get_Color_mCAF8F1A44B2D025C88E2C0BAB062185232C863EE (ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Sprite Polytope.PT_Create_Prefab/ShaderProperties_CI::get_Image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ShaderProperties_CI_get_Image_m4C68D0E403C40BB13A5C26A953D49D48C1F90EF0 (ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// public Sprite Image { get { return image; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___image_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Sprite Image { get { return image; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CI__ctor_mA5609F1B808DD21694D15A1FF5464F0691BBA05E (ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CS::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_CS_get_Color_mA027367C4662D0AFCFE6DAD09968D7EF5FDA9B55 (ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CS::get_Smoothness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderProperties_CS_get_Smoothness_m4FD02B85CC98159BD092844F949DF8A8473EF6EB (ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Smoothness { get { return smoothness; } }
		float L_0 = __this->___smoothness_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Smoothness { get { return smoothness; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CS__ctor_m496DF1DB1F4221AC61A9A09D5B46B04C352BDC91 (ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CSM::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_CSM_get_Color_m66BFC7910B517F9F7CACD9BF7A1679613B9023F2 (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::get_Smoothness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderProperties_CSM_get_Smoothness_m91A4518BEAC15DA214D80E363EA8E5B38A3F6A31 (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Smoothness { get { return smoothness; } }
		float L_0 = __this->___smoothness_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Smoothness { get { return smoothness; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::get_Metallic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderProperties_CSM_get_Metallic_m5D7F3C6B5ECDFA4106E82E1A180B958CAFA1B98F (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Metallic { get { return metallic; } }
		float L_0 = __this->___metallic_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Metallic { get { return metallic; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CSM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CSM__ctor_mA8E43A98AE5E649A0310ECDB1CAA16DE2501C358 (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
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
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CSP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CSP__ctor_mC13DCDF23B54D0AE759C7EE6A44E202839B338F5 (ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* __this, const RuntimeMethod* method) 
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
// System.Void Polytope.PT_Create_Prefab/MeshType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, String_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int idx = 0;
		__this->___idx_1 = 0;
		// [SerializeField] private List<SkinnedMeshRenderer> list = new List<SkinnedMeshRenderer>();
		List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* L_0 = (List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96*)il2cpp_codegen_object_new(List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666(L_0, List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666_RuntimeMethod_var);
		__this->___list_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_2), (void*)L_0);
		// public MeshType(string type)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		String_t* L_1 = ___type0;
		__this->___type_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_1);
		// }
		return;
	}
}
// System.String Polytope.PT_Create_Prefab/MeshType::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshType_get_Type_m624B34B0627107BCC734E6D8D6466FD80F4ECAD8 (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Type { get { return type; } }
		String_t* L_0 = __this->___type_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Type { get { return type; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Polytope.PT_Create_Prefab/MeshType::get_Idx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshType_get_Idx_mB6E031D96497C4DC0B14832FE10A7FE9720F7C29 (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int Idx { get { return idx; } set { idx = value; } }
		int32_t L_0 = __this->___idx_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int Idx { get { return idx; } set { idx = value; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/MeshType::set_Idx(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshType_set_Idx_m641BCC77793DB868DB2FD1D00084629911EFA8CA (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Idx { get { return idx; } set { idx = value; } }
		int32_t L_0 = ___value0;
		__this->___idx_1 = L_0;
		// public int Idx { get { return idx; } set { idx = value; } }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> Polytope.PT_Create_Prefab/MeshType::get_List()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* MeshType_get_List_mE75D4EC39D14E32BA9297B6582C8F545F334351B (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, const RuntimeMethod* method) 
{
	List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* V_0 = NULL;
	{
		// public List<SkinnedMeshRenderer> List { get { return list; } }
		List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* L_0 = __this->___list_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public List<SkinnedMeshRenderer> List { get { return list; } }
		List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* L_1 = V_0;
		return L_1;
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
// System.Void Polytope.PT_Create_Prefab/MaterialType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialType__ctor_m2375349284543DE68EE68084650EC06602DE65A5 (MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___x_2;
		float L_6 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___a0;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___b1;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___a0;
		float L_12 = L_11.___y_3;
		float L_13 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___a0;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___b1;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___a0;
		float L_19 = L_18.___z_4;
		float L_20 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___to1;
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___from0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___to1;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___from0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___to1;
		float L_10 = L_9.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___from0;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___to1;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___from0;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___to1;
		float L_18 = L_17.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___from0;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___to1;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___from0;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___to1;
		float L_26 = L_25.___x_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_22)), ((float)il2cpp_codegen_multiply(L_24, L_26))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___axis2;
		float L_28 = L_27.___x_2;
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___axis2;
		float L_31 = L_30.___y_3;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___axis2;
		float L_34 = L_33.___z_4;
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_34, L_35)))), NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
