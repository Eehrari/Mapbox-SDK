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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// DataFetcher
struct DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191;
// DataFetcherParameters
struct DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17;
// Mapbox.Directions.Directions
struct Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732;
// Mapbox.Geocoding.Geocoder
struct Geocoder_tE880599FC95DD6293DED4A92151328F14956C677;
// Mapbox.Map.RawPngRasterTile
struct RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B;
// Mapbox.Map.Tile
struct Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0;
// Mapbox.Map.TileErrorEventArgs
struct TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4;
// Mapbox.Map.VectorTile
struct VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687;
// Mapbox.MapMatching.MapMatcher
struct MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06;
// Mapbox.Platform.Cache.CachingWebFileSource
struct CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t83AE426641B96D7F5F4F8635DCB0D33D1470F205;
// Mapbox.Platform.IFileSource
struct IFileSource_t41112CB9331B15ABEF849F1D8A37FA942C8AD0DE;
// Mapbox.Platform.TilesetTileJSON.TileJSON
struct TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742;
// Mapbox.Tokens.MapboxTokenApi
struct MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805;
// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6;
// Mapbox.Unity.Map.AbstractMapVisualizer
struct AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C;
// Mapbox.Unity.Map.EditorPreviewOptions
struct EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F;
// Mapbox.Unity.Map.ImageryLayer
struct ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07;
// Mapbox.Unity.Map.MapOptions
struct MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92;
// Mapbox.Unity.Map.Style
struct Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714;
// Mapbox.Unity.Map.TerrainLayer
struct TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648;
// Mapbox.Unity.Map.TileProviders.AbstractTileProvider
struct AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C;
// Mapbox.Unity.Map.VectorLayer
struct VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D;
// Mapbox.Unity.MapboxAccess/TokenValidationEvent
struct TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9;
// Mapbox.Unity.MapboxConfiguration
struct MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9;
// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923;
// Mapbox.Unity.Telemetry.ITelemetryLibrary
struct ITelemetryLibrary_t6035C35B96700C5E2EDABBFE5C3AF39B3A7B8C34;
// Mapbox.VectorTile.VectorTile
struct VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0;
// SQLite4Unity3d.ColumnAttribute
struct ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD;
// SQLite4Unity3d.IndexedAttribute
struct IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C;
// SQLite4Unity3d.TableMapping/<>c
struct U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7;
// SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5547638C1A6FBA8883F6F75B130C035837B70010;
// SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t487551D29B6688F152D47C3AE9A290447B2DBEB0;
// SQLite4Unity3d.TableMapping/Column
struct Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF;
// SQLite4Unity3d.UniqueAttribute
struct UniqueAttribute_t25165168729557BB3370180332A89CADE7CD84AC;
// ScriptablePalette
struct ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A;
// SetCameraHeight
struct SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78;
// System.Action`1<System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>>
struct Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73;
// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile>
struct Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4;
// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs>
struct Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97;
// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.HashSet`1<Mapbox.Map.UnwrappedTileId>
struct HashSet_1_t1DFE20FDAED1A933D98E7FD6FDDF250FD60C18B4;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>
struct IEnumerable_1_tCA525C895A8A309335CCD20181F94407E4643E73;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t79A79A556E69BA20A09771D2D61B0440B6F4EFBA;
// System.Collections.Generic.List`1<Mapbox.Map.Tile>
struct List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C;
// System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>
struct List_1_t59F237940E6A18EA3997879C6C8D55224ECF3406;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>
struct Func_2_t33DD8113CA440C709EB2B5A1C2461FE38C7A83C1;
// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>
struct Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
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
// TerrainDataFetcher
struct TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0;
// TerrainDataFetcher/<>c
struct U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36;
// TerrainDataFetcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC;
// TerrainDataFetcherParameters
struct TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5;
// UniAndroidPermission
struct UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// VectorDataFetcher
struct VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357;
// VectorDataFetcher/<>c
struct U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A;
// VectorDataFetcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15;
// VectorDataFetcherParameters
struct VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPermission_t4A345C97B8FA7FAC6D2CDB6DB39FC61D246A0991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral474AE52625B87D7628AE7B20A499329A99E07119;
IL2CPP_EXTERN_C String_t* _stringLiteral57FB6DB1B8DAC827F8F67C072E2536E9BF969E69;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C228A31E91B9DCF1AEEAF78DD9E8675C29A0029;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m6D89D340A7C98D5B1F68AF4C5C82089C1F89226D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mD9B22521944666091E201032CAF210456BFEFDF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m36A74C0F51F3F7363F9B4E0254CAFE09FB5F0CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mD917EF4D7158E5C1095435B19BD2467208BD2C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C_m180B3BB3CE2327931ADACF7D0ABA6D60F62B20F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_m73C290D7C1DD834B7A25096EA885D9CC800523A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m807C070DCBD260C48DCA9A6267F38EF36112604A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_m0F4D2AEF5D7FE91EEA1C026D30D5361B2CFDADB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_1_m2A7F77CE5C4E4A51A5C3BBF11D01AAEE8D601853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m3B61531B00F2F5003DD87D1D07D8A527D2B475ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Column__ctor_m142B216CE3E0CF4AC93A1A2B507BDA69AF6493A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptablePalette_GeneratePalette_mB0325036823EE105DAB91713A050F4F9C89A9420_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SetCameraHeight_Start_m78793D5FDEBB1C786DC7769369F8FCFD89710C6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainDataFetcher_FetchData_m589B910983DD21BC69F2A96A480C5E379E75C34F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TerrainDataFetcher__ctor_m15F944FB7EB0DDB6F45FEC828197B14CD9599030_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m7D0D55C196322EC89578395B3163F2A3D4B82651_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m5B154B42C7BAED084E37D73150EF4022EC8A494E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m3B61531B00F2F5003DD87D1D07D8A527D2B475ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m125AC295D1D0D924169967B11B8A24FC90FCF9FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m2FE3F2DA7FB27BFA40DBBADCD9AC9C137DB42B76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_Awake_mDD50719323906FDCE4AD412A4F31EB1E553F1342_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_GetPermittionStr_mEABB61BDF5C0DF36EF60FAF7AE17B4A515EEA62A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_OnAllow_m19D70D9D4B87E2738424AA20923CCFC820646D56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_OnDenyAndNeverAskAgain_mBB96CB98551816D4AF9D10A75A35960DA80C1E4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_OnDeny_mD949E59892FBB80C71F58FBB289541C8446F589C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_RequestPermission_mC409DDDAA9B7FB39107CD30F5710D15545BBA5F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mapbox.Unity.Map.Style
struct  Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714  : public RuntimeObject
{
public:
	// System.String Mapbox.Unity.Map.Style::Name
	String_t* ___Name_0;
	// System.String Mapbox.Unity.Map.Style::Id
	String_t* ___Id_1;
	// System.String Mapbox.Unity.Map.Style::Modified
	String_t* ___Modified_2;
	// System.String Mapbox.Unity.Map.Style::UserName
	String_t* ___UserName_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_Modified_2() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Modified_2)); }
	inline String_t* get_Modified_2() const { return ___Modified_2; }
	inline String_t** get_address_of_Modified_2() { return &___Modified_2; }
	inline void set_Modified_2(String_t* value)
	{
		___Modified_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Modified_2), (void*)value);
	}

	inline static int32_t get_offset_of_UserName_3() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___UserName_3)); }
	inline String_t* get_UserName_3() const { return ___UserName_3; }
	inline String_t** get_address_of_UserName_3() { return &___UserName_3; }
	inline void set_UserName_3(String_t* value)
	{
		___UserName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserName_3), (void*)value);
	}
};


// Mapbox.Unity.MapboxAccess
struct  MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D  : public RuntimeObject
{
public:
	// Mapbox.Unity.Telemetry.ITelemetryLibrary Mapbox.Unity.MapboxAccess::_telemetryLibrary
	RuntimeObject* ____telemetryLibrary_0;
	// Mapbox.Platform.Cache.CachingWebFileSource Mapbox.Unity.MapboxAccess::_fileSource
	CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * ____fileSource_1;
	// Mapbox.Unity.MapboxAccess_TokenValidationEvent Mapbox.Unity.MapboxAccess::OnTokenValidation
	TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * ___OnTokenValidation_2;
	// Mapbox.Unity.MapboxConfiguration Mapbox.Unity.MapboxAccess::_configuration
	MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * ____configuration_6;
	// System.String Mapbox.Unity.MapboxAccess::_tokenNotSetErrorMessage
	String_t* ____tokenNotSetErrorMessage_7;
	// Mapbox.Geocoding.Geocoder Mapbox.Unity.MapboxAccess::_geocoder
	Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * ____geocoder_8;
	// Mapbox.Directions.Directions Mapbox.Unity.MapboxAccess::_directions
	Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * ____directions_9;
	// Mapbox.MapMatching.MapMatcher Mapbox.Unity.MapboxAccess::_mapMatcher
	MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * ____mapMatcher_10;
	// Mapbox.Tokens.MapboxTokenApi Mapbox.Unity.MapboxAccess::_tokenValidator
	MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * ____tokenValidator_11;
	// Mapbox.Platform.TilesetTileJSON.TileJSON Mapbox.Unity.MapboxAccess::_tileJson
	TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * ____tileJson_12;

public:
	inline static int32_t get_offset_of__telemetryLibrary_0() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____telemetryLibrary_0)); }
	inline RuntimeObject* get__telemetryLibrary_0() const { return ____telemetryLibrary_0; }
	inline RuntimeObject** get_address_of__telemetryLibrary_0() { return &____telemetryLibrary_0; }
	inline void set__telemetryLibrary_0(RuntimeObject* value)
	{
		____telemetryLibrary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____telemetryLibrary_0), (void*)value);
	}

	inline static int32_t get_offset_of__fileSource_1() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____fileSource_1)); }
	inline CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * get__fileSource_1() const { return ____fileSource_1; }
	inline CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 ** get_address_of__fileSource_1() { return &____fileSource_1; }
	inline void set__fileSource_1(CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * value)
	{
		____fileSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnTokenValidation_2() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ___OnTokenValidation_2)); }
	inline TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * get_OnTokenValidation_2() const { return ___OnTokenValidation_2; }
	inline TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 ** get_address_of_OnTokenValidation_2() { return &___OnTokenValidation_2; }
	inline void set_OnTokenValidation_2(TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * value)
	{
		___OnTokenValidation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTokenValidation_2), (void*)value);
	}

	inline static int32_t get_offset_of__configuration_6() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____configuration_6)); }
	inline MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * get__configuration_6() const { return ____configuration_6; }
	inline MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 ** get_address_of__configuration_6() { return &____configuration_6; }
	inline void set__configuration_6(MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * value)
	{
		____configuration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configuration_6), (void*)value);
	}

	inline static int32_t get_offset_of__tokenNotSetErrorMessage_7() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tokenNotSetErrorMessage_7)); }
	inline String_t* get__tokenNotSetErrorMessage_7() const { return ____tokenNotSetErrorMessage_7; }
	inline String_t** get_address_of__tokenNotSetErrorMessage_7() { return &____tokenNotSetErrorMessage_7; }
	inline void set__tokenNotSetErrorMessage_7(String_t* value)
	{
		____tokenNotSetErrorMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenNotSetErrorMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of__geocoder_8() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____geocoder_8)); }
	inline Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * get__geocoder_8() const { return ____geocoder_8; }
	inline Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 ** get_address_of__geocoder_8() { return &____geocoder_8; }
	inline void set__geocoder_8(Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * value)
	{
		____geocoder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geocoder_8), (void*)value);
	}

	inline static int32_t get_offset_of__directions_9() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____directions_9)); }
	inline Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * get__directions_9() const { return ____directions_9; }
	inline Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 ** get_address_of__directions_9() { return &____directions_9; }
	inline void set__directions_9(Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * value)
	{
		____directions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____directions_9), (void*)value);
	}

	inline static int32_t get_offset_of__mapMatcher_10() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____mapMatcher_10)); }
	inline MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * get__mapMatcher_10() const { return ____mapMatcher_10; }
	inline MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 ** get_address_of__mapMatcher_10() { return &____mapMatcher_10; }
	inline void set__mapMatcher_10(MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * value)
	{
		____mapMatcher_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapMatcher_10), (void*)value);
	}

	inline static int32_t get_offset_of__tokenValidator_11() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tokenValidator_11)); }
	inline MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * get__tokenValidator_11() const { return ____tokenValidator_11; }
	inline MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 ** get_address_of__tokenValidator_11() { return &____tokenValidator_11; }
	inline void set__tokenValidator_11(MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * value)
	{
		____tokenValidator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenValidator_11), (void*)value);
	}

	inline static int32_t get_offset_of__tileJson_12() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tileJson_12)); }
	inline TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * get__tileJson_12() const { return ____tileJson_12; }
	inline TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 ** get_address_of__tileJson_12() { return &____tileJson_12; }
	inline void set__tileJson_12(TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * value)
	{
		____tileJson_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tileJson_12), (void*)value);
	}
};

struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields
{
public:
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.MapboxAccess::_instance
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____instance_3;
	// System.Boolean Mapbox.Unity.MapboxAccess::Configured
	bool ___Configured_4;
	// System.String Mapbox.Unity.MapboxAccess::ConfigurationJSON
	String_t* ___ConfigurationJSON_5;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ____instance_3)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__instance_3() const { return ____instance_3; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_3), (void*)value);
	}

	inline static int32_t get_offset_of_Configured_4() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ___Configured_4)); }
	inline bool get_Configured_4() const { return ___Configured_4; }
	inline bool* get_address_of_Configured_4() { return &___Configured_4; }
	inline void set_Configured_4(bool value)
	{
		___Configured_4 = value;
	}

	inline static int32_t get_offset_of_ConfigurationJSON_5() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ___ConfigurationJSON_5)); }
	inline String_t* get_ConfigurationJSON_5() const { return ___ConfigurationJSON_5; }
	inline String_t** get_address_of_ConfigurationJSON_5() { return &___ConfigurationJSON_5; }
	inline void set_ConfigurationJSON_5(String_t* value)
	{
		___ConfigurationJSON_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConfigurationJSON_5), (void*)value);
	}
};


// SQLite4Unity3d.TableMapping_<>c
struct  U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_StaticFields
{
public:
	// SQLite4Unity3d.TableMapping_<>c SQLite4Unity3d.TableMapping_<>c::<>9
	U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * ___U3CU3E9_0;
	// System.Func`2<SQLite4Unity3d.TableMapping_Column,System.Boolean> SQLite4Unity3d.TableMapping_<>c::<>9__30_0
	Func_2_t33DD8113CA440C709EB2B5A1C2461FE38C7A83C1 * ___U3CU3E9__30_0_1;
	// System.Func`2<SQLite4Unity3d.TableMapping_Column,System.String> SQLite4Unity3d.TableMapping_<>c::<>9__38_0
	Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E * ___U3CU3E9__38_0_2;
	// System.Func`2<SQLite4Unity3d.TableMapping_Column,System.String> SQLite4Unity3d.TableMapping_<>c::<>9__38_1
	Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E * ___U3CU3E9__38_1_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_StaticFields, ___U3CU3E9__30_0_1)); }
	inline Func_2_t33DD8113CA440C709EB2B5A1C2461FE38C7A83C1 * get_U3CU3E9__30_0_1() const { return ___U3CU3E9__30_0_1; }
	inline Func_2_t33DD8113CA440C709EB2B5A1C2461FE38C7A83C1 ** get_address_of_U3CU3E9__30_0_1() { return &___U3CU3E9__30_0_1; }
	inline void set_U3CU3E9__30_0_1(Func_2_t33DD8113CA440C709EB2B5A1C2461FE38C7A83C1 * value)
	{
		___U3CU3E9__30_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_StaticFields, ___U3CU3E9__38_0_2)); }
	inline Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E * get_U3CU3E9__38_0_2() const { return ___U3CU3E9__38_0_2; }
	inline Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E ** get_address_of_U3CU3E9__38_0_2() { return &___U3CU3E9__38_0_2; }
	inline void set_U3CU3E9__38_0_2(Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E * value)
	{
		___U3CU3E9__38_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_StaticFields, ___U3CU3E9__38_1_3)); }
	inline Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E * get_U3CU3E9__38_1_3() const { return ___U3CU3E9__38_1_3; }
	inline Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E ** get_address_of_U3CU3E9__38_1_3() { return &___U3CU3E9__38_1_3; }
	inline void set_U3CU3E9__38_1_3(Func_2_t9C0DB9C64D0EF7834AC5B27F6E5A235261471D9E * value)
	{
		___U3CU3E9__38_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_1_3), (void*)value);
	}
};


// SQLite4Unity3d.TableMapping_<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_t5547638C1A6FBA8883F6F75B130C035837B70010  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.TableMapping_<>c__DisplayClass33_0::propertyName
	String_t* ___propertyName_0;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t5547638C1A6FBA8883F6F75B130C035837B70010, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyName_0), (void*)value);
	}
};


// SQLite4Unity3d.TableMapping_<>c__DisplayClass34_0
struct  U3CU3Ec__DisplayClass34_0_t487551D29B6688F152D47C3AE9A290447B2DBEB0  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.TableMapping_<>c__DisplayClass34_0::columnName
	String_t* ___columnName_0;

public:
	inline static int32_t get_offset_of_columnName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t487551D29B6688F152D47C3AE9A290447B2DBEB0, ___columnName_0)); }
	inline String_t* get_columnName_0() const { return ___columnName_0; }
	inline String_t** get_address_of_columnName_0() { return &___columnName_0; }
	inline void set_columnName_0(String_t* value)
	{
		___columnName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnName_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
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

// TerrainDataFetcher_<>c
struct  U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields
{
public:
	// TerrainDataFetcher_<>c TerrainDataFetcher_<>c::<>9
	U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * ___U3CU3E9_0;
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile> TerrainDataFetcher_<>c::<>9__3_0
	Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * ___U3CU3E9__3_0_1;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs> TerrainDataFetcher_<>c::<>9__3_1
	Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * ___U3CU3E9__3_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields, ___U3CU3E9__3_1_2)); }
	inline Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}
};


// TerrainDataFetcher_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC  : public RuntimeObject
{
public:
	// TerrainDataFetcherParameters TerrainDataFetcher_<>c__DisplayClass2_0::terrainDataParameters
	TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * ___terrainDataParameters_0;
	// Mapbox.Map.RawPngRasterTile TerrainDataFetcher_<>c__DisplayClass2_0::pngRasterTile
	RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * ___pngRasterTile_1;
	// TerrainDataFetcher TerrainDataFetcher_<>c__DisplayClass2_0::<>4__this
	TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_terrainDataParameters_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC, ___terrainDataParameters_0)); }
	inline TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * get_terrainDataParameters_0() const { return ___terrainDataParameters_0; }
	inline TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 ** get_address_of_terrainDataParameters_0() { return &___terrainDataParameters_0; }
	inline void set_terrainDataParameters_0(TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * value)
	{
		___terrainDataParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainDataParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of_pngRasterTile_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC, ___pngRasterTile_1)); }
	inline RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * get_pngRasterTile_1() const { return ___pngRasterTile_1; }
	inline RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B ** get_address_of_pngRasterTile_1() { return &___pngRasterTile_1; }
	inline void set_pngRasterTile_1(RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * value)
	{
		___pngRasterTile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pngRasterTile_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC, ___U3CU3E4__this_2)); }
	inline TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VectorDataFetcher_<>c
struct  U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields
{
public:
	// VectorDataFetcher_<>c VectorDataFetcher_<>c::<>9
	U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * ___U3CU3E9_0;
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher_<>c::<>9__3_0
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * ___U3CU3E9__3_0_1;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher_<>c::<>9__3_1
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * ___U3CU3E9__3_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9__3_1_2)); }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}
};


// VectorDataFetcher_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15  : public RuntimeObject
{
public:
	// VectorDataFetcherParameters VectorDataFetcher_<>c__DisplayClass2_0::vectorDaraParameters
	VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * ___vectorDaraParameters_0;
	// Mapbox.Map.VectorTile VectorDataFetcher_<>c__DisplayClass2_0::vectorTile
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___vectorTile_1;
	// VectorDataFetcher VectorDataFetcher_<>c__DisplayClass2_0::<>4__this
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_vectorDaraParameters_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___vectorDaraParameters_0)); }
	inline VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * get_vectorDaraParameters_0() const { return ___vectorDaraParameters_0; }
	inline VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 ** get_address_of_vectorDaraParameters_0() { return &___vectorDaraParameters_0; }
	inline void set_vectorDaraParameters_0(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * value)
	{
		___vectorDaraParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorDaraParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of_vectorTile_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___vectorTile_1)); }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * get_vectorTile_1() const { return ___vectorTile_1; }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 ** get_address_of_vectorTile_1() { return &___vectorTile_1; }
	inline void set_vectorTile_1(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * value)
	{
		___vectorTile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorTile_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___U3CU3E4__this_2)); }
	inline VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mapbox.Map.CanonicalTileId
struct  CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF 
{
public:
	// System.Int32 Mapbox.Map.CanonicalTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.CanonicalTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.CanonicalTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};


// Mapbox.Map.UnwrappedTileId
struct  UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711 
{
public:
	// System.Int32 Mapbox.Map.UnwrappedTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.UnwrappedTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.UnwrappedTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};


// Mapbox.Utils.Vector2d
struct  Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 
{
public:
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}
};


// SQLite4Unity3d.ColumnAttribute
struct  ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String SQLite4Unity3d.ColumnAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// SQLite4Unity3d.IndexedAttribute
struct  IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String SQLite4Unity3d.IndexedAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 SQLite4Unity3d.IndexedAttribute::<Order>k__BackingField
	int32_t ___U3COrderU3Ek__BackingField_1;
	// System.Boolean SQLite4Unity3d.IndexedAttribute::<Unique>k__BackingField
	bool ___U3CUniqueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C, ___U3COrderU3Ek__BackingField_1)); }
	inline int32_t get_U3COrderU3Ek__BackingField_1() const { return ___U3COrderU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3COrderU3Ek__BackingField_1() { return &___U3COrderU3Ek__BackingField_1; }
	inline void set_U3COrderU3Ek__BackingField_1(int32_t value)
	{
		___U3COrderU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUniqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C, ___U3CUniqueU3Ek__BackingField_2)); }
	inline bool get_U3CUniqueU3Ek__BackingField_2() const { return ___U3CUniqueU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CUniqueU3Ek__BackingField_2() { return &___U3CUniqueU3Ek__BackingField_2; }
	inline void set_U3CUniqueU3Ek__BackingField_2(bool value)
	{
		___U3CUniqueU3Ek__BackingField_2 = value;
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// AndroidPermission
struct  AndroidPermission_t4A345C97B8FA7FAC6D2CDB6DB39FC61D246A0991 
{
public:
	// System.Int32 AndroidPermission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AndroidPermission_t4A345C97B8FA7FAC6D2CDB6DB39FC61D246A0991, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DataFetcherParameters
struct  DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId DataFetcherParameters::canonicalTileId
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___canonicalTileId_0;
	// System.String DataFetcherParameters::tilesetId
	String_t* ___tilesetId_1;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile DataFetcherParameters::tile
	UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___tile_2;

public:
	inline static int32_t get_offset_of_canonicalTileId_0() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___canonicalTileId_0)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_canonicalTileId_0() const { return ___canonicalTileId_0; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_canonicalTileId_0() { return &___canonicalTileId_0; }
	inline void set_canonicalTileId_0(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___canonicalTileId_0 = value;
	}

	inline static int32_t get_offset_of_tilesetId_1() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___tilesetId_1)); }
	inline String_t* get_tilesetId_1() const { return ___tilesetId_1; }
	inline String_t** get_address_of_tilesetId_1() { return &___tilesetId_1; }
	inline void set_tilesetId_1(String_t* value)
	{
		___tilesetId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tilesetId_1), (void*)value);
	}

	inline static int32_t get_offset_of_tile_2() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___tile_2)); }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * get_tile_2() const { return ___tile_2; }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 ** get_address_of_tile_2() { return &___tile_2; }
	inline void set_tile_2(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * value)
	{
		___tile_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tile_2), (void*)value);
	}
};


// Mapbox.Map.Tile_State
struct  State_t4B0EDD195F30E28F8177FF3E62BC2B7429D9015D 
{
public:
	// System.Int32 Mapbox.Map.Tile_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4B0EDD195F30E28F8177FF3E62BC2B7429D9015D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Map.TileErrorEventArgs
struct  TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.TileErrorEventArgs::TileId
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___TileId_1;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.TileErrorEventArgs::Exceptions
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ___Exceptions_2;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile Mapbox.Map.TileErrorEventArgs::UnityTileInstance
	UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___UnityTileInstance_3;
	// System.Type Mapbox.Map.TileErrorEventArgs::TileType
	Type_t * ___TileType_4;

public:
	inline static int32_t get_offset_of_TileId_1() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___TileId_1)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_TileId_1() const { return ___TileId_1; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_TileId_1() { return &___TileId_1; }
	inline void set_TileId_1(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___TileId_1 = value;
	}

	inline static int32_t get_offset_of_Exceptions_2() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___Exceptions_2)); }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * get_Exceptions_2() const { return ___Exceptions_2; }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A ** get_address_of_Exceptions_2() { return &___Exceptions_2; }
	inline void set_Exceptions_2(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * value)
	{
		___Exceptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exceptions_2), (void*)value);
	}

	inline static int32_t get_offset_of_UnityTileInstance_3() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___UnityTileInstance_3)); }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * get_UnityTileInstance_3() const { return ___UnityTileInstance_3; }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 ** get_address_of_UnityTileInstance_3() { return &___UnityTileInstance_3; }
	inline void set_UnityTileInstance_3(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * value)
	{
		___UnityTileInstance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityTileInstance_3), (void*)value);
	}

	inline static int32_t get_offset_of_TileType_4() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___TileType_4)); }
	inline Type_t * get_TileType_4() const { return ___TileType_4; }
	inline Type_t ** get_address_of_TileType_4() { return &___TileType_4; }
	inline void set_TileType_4(Type_t * value)
	{
		___TileType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TileType_4), (void*)value);
	}
};


// Mapbox.Unity.Map.TileTerrainType
struct  TileTerrainType_t121D5B31F2465640E0DC347739778806136AAC71 
{
public:
	// System.Int32 Mapbox.Unity.Map.TileTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileTerrainType_t121D5B31F2465640E0DC347739778806136AAC71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState
struct  TilePropertyState_t41B6A29E067AAD6644607DB63AA168EECB0C0933 
{
public:
	// System.Int32 Mapbox.Unity.MeshGeneration.Enums.TilePropertyState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TilePropertyState_t41B6A29E067AAD6644607DB63AA168EECB0C0933, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Utils.RectD
struct  RectD_t43C10C8617E7747A0A298175DED993296095CBFC 
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Min>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CMinU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Max>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CMaxU3Ek__BackingField_1;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Size>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CSizeU3Ek__BackingField_2;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Center>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CCenterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMinU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CMinU3Ek__BackingField_0)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CMinU3Ek__BackingField_0() const { return ___U3CMinU3Ek__BackingField_0; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CMinU3Ek__BackingField_0() { return &___U3CMinU3Ek__BackingField_0; }
	inline void set_U3CMinU3Ek__BackingField_0(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CMinU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CMaxU3Ek__BackingField_1)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CMaxU3Ek__BackingField_1() const { return ___U3CMaxU3Ek__BackingField_1; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CMaxU3Ek__BackingField_1() { return &___U3CMaxU3Ek__BackingField_1; }
	inline void set_U3CMaxU3Ek__BackingField_1(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CMaxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CSizeU3Ek__BackingField_2)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CSizeU3Ek__BackingField_2() const { return ___U3CSizeU3Ek__BackingField_2; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CSizeU3Ek__BackingField_2() { return &___U3CSizeU3Ek__BackingField_2; }
	inline void set_U3CSizeU3Ek__BackingField_2(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CCenterU3Ek__BackingField_3)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CCenterU3Ek__BackingField_3() const { return ___U3CCenterU3Ek__BackingField_3; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CCenterU3Ek__BackingField_3() { return &___U3CCenterU3Ek__BackingField_3; }
	inline void set_U3CCenterU3Ek__BackingField_3(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CCenterU3Ek__BackingField_3 = value;
	}
};


// SQLite4Unity3d.CreateFlags
struct  CreateFlags_tF56FF9D0D910306F2659FA421CFA42EF3EB8EAC8 
{
public:
	// System.Int32 SQLite4Unity3d.CreateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreateFlags_tF56FF9D0D910306F2659FA421CFA42EF3EB8EAC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SQLite4Unity3d.TableMapping_Column
struct  Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo SQLite4Unity3d.TableMapping_Column::_prop
	PropertyInfo_t * ____prop_0;
	// System.String SQLite4Unity3d.TableMapping_Column::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Type SQLite4Unity3d.TableMapping_Column::<ColumnType>k__BackingField
	Type_t * ___U3CColumnTypeU3Ek__BackingField_2;
	// System.String SQLite4Unity3d.TableMapping_Column::<Collation>k__BackingField
	String_t* ___U3CCollationU3Ek__BackingField_3;
	// System.Boolean SQLite4Unity3d.TableMapping_Column::<IsAutoInc>k__BackingField
	bool ___U3CIsAutoIncU3Ek__BackingField_4;
	// System.Boolean SQLite4Unity3d.TableMapping_Column::<IsAutoGuid>k__BackingField
	bool ___U3CIsAutoGuidU3Ek__BackingField_5;
	// System.Boolean SQLite4Unity3d.TableMapping_Column::<IsPK>k__BackingField
	bool ___U3CIsPKU3Ek__BackingField_6;
	// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping_Column::<Indices>k__BackingField
	RuntimeObject* ___U3CIndicesU3Ek__BackingField_7;
	// System.Boolean SQLite4Unity3d.TableMapping_Column::<IsNullable>k__BackingField
	bool ___U3CIsNullableU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> SQLite4Unity3d.TableMapping_Column::<MaxStringLength>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMaxStringLengthU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__prop_0() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ____prop_0)); }
	inline PropertyInfo_t * get__prop_0() const { return ____prop_0; }
	inline PropertyInfo_t ** get_address_of__prop_0() { return &____prop_0; }
	inline void set__prop_0(PropertyInfo_t * value)
	{
		____prop_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prop_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CColumnTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CColumnTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CColumnTypeU3Ek__BackingField_2() const { return ___U3CColumnTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CColumnTypeU3Ek__BackingField_2() { return &___U3CColumnTypeU3Ek__BackingField_2; }
	inline void set_U3CColumnTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CColumnTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColumnTypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CCollationU3Ek__BackingField_3)); }
	inline String_t* get_U3CCollationU3Ek__BackingField_3() const { return ___U3CCollationU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCollationU3Ek__BackingField_3() { return &___U3CCollationU3Ek__BackingField_3; }
	inline void set_U3CCollationU3Ek__BackingField_3(String_t* value)
	{
		___U3CCollationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollationU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsAutoIncU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CIsAutoIncU3Ek__BackingField_4)); }
	inline bool get_U3CIsAutoIncU3Ek__BackingField_4() const { return ___U3CIsAutoIncU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsAutoIncU3Ek__BackingField_4() { return &___U3CIsAutoIncU3Ek__BackingField_4; }
	inline void set_U3CIsAutoIncU3Ek__BackingField_4(bool value)
	{
		___U3CIsAutoIncU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsAutoGuidU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CIsAutoGuidU3Ek__BackingField_5)); }
	inline bool get_U3CIsAutoGuidU3Ek__BackingField_5() const { return ___U3CIsAutoGuidU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsAutoGuidU3Ek__BackingField_5() { return &___U3CIsAutoGuidU3Ek__BackingField_5; }
	inline void set_U3CIsAutoGuidU3Ek__BackingField_5(bool value)
	{
		___U3CIsAutoGuidU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsPKU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CIsPKU3Ek__BackingField_6)); }
	inline bool get_U3CIsPKU3Ek__BackingField_6() const { return ___U3CIsPKU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPKU3Ek__BackingField_6() { return &___U3CIsPKU3Ek__BackingField_6; }
	inline void set_U3CIsPKU3Ek__BackingField_6(bool value)
	{
		___U3CIsPKU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CIndicesU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CIndicesU3Ek__BackingField_7() const { return ___U3CIndicesU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CIndicesU3Ek__BackingField_7() { return &___U3CIndicesU3Ek__BackingField_7; }
	inline void set_U3CIndicesU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CIndicesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIndicesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsNullableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CIsNullableU3Ek__BackingField_8)); }
	inline bool get_U3CIsNullableU3Ek__BackingField_8() const { return ___U3CIsNullableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsNullableU3Ek__BackingField_8() { return &___U3CIsNullableU3Ek__BackingField_8; }
	inline void set_U3CIsNullableU3Ek__BackingField_8(bool value)
	{
		___U3CIsNullableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxStringLengthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF, ___U3CMaxStringLengthU3Ek__BackingField_9)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CMaxStringLengthU3Ek__BackingField_9() const { return ___U3CMaxStringLengthU3Ek__BackingField_9; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CMaxStringLengthU3Ek__BackingField_9() { return &___U3CMaxStringLengthU3Ek__BackingField_9; }
	inline void set_U3CMaxStringLengthU3Ek__BackingField_9(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CMaxStringLengthU3Ek__BackingField_9 = value;
	}
};


// SQLite4Unity3d.UniqueAttribute
struct  UniqueAttribute_t25165168729557BB3370180332A89CADE7CD84AC  : public IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C
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


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Mapbox.Map.Tile
struct  Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::_id
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ____id_0;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.Tile::_exceptions
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ____exceptions_1;
	// Mapbox.Map.Tile_State Mapbox.Map.Tile::_state
	int32_t ____state_2;
	// Mapbox.Platform.IAsyncRequest Mapbox.Map.Tile::_request
	RuntimeObject* ____request_3;
	// System.Action Mapbox.Map.Tile::_callback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____callback_4;
	// System.Collections.Generic.List`1<System.String> Mapbox.Map.Tile::ids
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ids_5;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____id_0)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get__id_0() const { return ____id_0; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__exceptions_1() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____exceptions_1)); }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * get__exceptions_1() const { return ____exceptions_1; }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A ** get_address_of__exceptions_1() { return &____exceptions_1; }
	inline void set__exceptions_1(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * value)
	{
		____exceptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exceptions_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____request_3)); }
	inline RuntimeObject* get__request_3() const { return ____request_3; }
	inline RuntimeObject** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(RuntimeObject* value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_3), (void*)value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____callback_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__callback_4() const { return ____callback_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_ids_5() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ___ids_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ids_5() const { return ___ids_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ids_5() { return &___ids_5; }
	inline void set_ids_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ids_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ids_5), (void*)value);
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


// TerrainDataFetcherParameters
struct  TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5  : public DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17
{
public:

public:
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

// VectorDataFetcherParameters
struct  VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88  : public DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17
{
public:
	// System.Boolean VectorDataFetcherParameters::useOptimizedStyle
	bool ___useOptimizedStyle_3;
	// Mapbox.Unity.Map.Style VectorDataFetcherParameters::style
	Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * ___style_4;

public:
	inline static int32_t get_offset_of_useOptimizedStyle_3() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88, ___useOptimizedStyle_3)); }
	inline bool get_useOptimizedStyle_3() const { return ___useOptimizedStyle_3; }
	inline bool* get_address_of_useOptimizedStyle_3() { return &___useOptimizedStyle_3; }
	inline void set_useOptimizedStyle_3(bool value)
	{
		___useOptimizedStyle_3 = value;
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88, ___style_4)); }
	inline Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * get_style_4() const { return ___style_4; }
	inline Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 ** get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * value)
	{
		___style_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_4), (void*)value);
	}
};


// DataFetcher
struct  DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Mapbox.Unity.MapboxAccess DataFetcher::_fileSource
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____fileSource_4;

public:
	inline static int32_t get_offset_of__fileSource_4() { return static_cast<int32_t>(offsetof(DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191, ____fileSource_4)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__fileSource_4() const { return ____fileSource_4; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__fileSource_4() { return &____fileSource_4; }
	inline void set__fileSource_4(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____fileSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_4), (void*)value);
	}
};


// Mapbox.Map.RasterTile
struct  RasterTile_tD8325406D07A64CE1E5CFB375173220858BD291A  : public Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0
{
public:
	// System.Byte[] Mapbox.Map.RasterTile::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(RasterTile_tD8325406D07A64CE1E5CFB375173220858BD291A, ___data_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_6() const { return ___data_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_6), (void*)value);
	}
};


// Mapbox.Map.VectorTile
struct  VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687  : public Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0
{
public:
	// Mapbox.VectorTile.VectorTile Mapbox.Map.VectorTile::data
	VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * ___data_6;
	// System.Boolean Mapbox.Map.VectorTile::_isStyleOptimized
	bool ____isStyleOptimized_7;
	// System.String Mapbox.Map.VectorTile::_optimizedStyleId
	String_t* ____optimizedStyleId_8;
	// System.String Mapbox.Map.VectorTile::_modifiedDate
	String_t* ____modifiedDate_9;
	// System.Boolean Mapbox.Map.VectorTile::isDisposed
	bool ___isDisposed_10;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ___data_6)); }
	inline VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * get_data_6() const { return ___data_6; }
	inline VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_6), (void*)value);
	}

	inline static int32_t get_offset_of__isStyleOptimized_7() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____isStyleOptimized_7)); }
	inline bool get__isStyleOptimized_7() const { return ____isStyleOptimized_7; }
	inline bool* get_address_of__isStyleOptimized_7() { return &____isStyleOptimized_7; }
	inline void set__isStyleOptimized_7(bool value)
	{
		____isStyleOptimized_7 = value;
	}

	inline static int32_t get_offset_of__optimizedStyleId_8() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____optimizedStyleId_8)); }
	inline String_t* get__optimizedStyleId_8() const { return ____optimizedStyleId_8; }
	inline String_t** get_address_of__optimizedStyleId_8() { return &____optimizedStyleId_8; }
	inline void set__optimizedStyleId_8(String_t* value)
	{
		____optimizedStyleId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optimizedStyleId_8), (void*)value);
	}

	inline static int32_t get_offset_of__modifiedDate_9() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____modifiedDate_9)); }
	inline String_t* get__modifiedDate_9() const { return ____modifiedDate_9; }
	inline String_t** get_address_of__modifiedDate_9() { return &____modifiedDate_9; }
	inline void set__modifiedDate_9(String_t* value)
	{
		____modifiedDate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____modifiedDate_9), (void*)value);
	}

	inline static int32_t get_offset_of_isDisposed_10() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ___isDisposed_10)); }
	inline bool get_isDisposed_10() const { return ___isDisposed_10; }
	inline bool* get_address_of_isDisposed_10() { return &___isDisposed_10; }
	inline void set_isDisposed_10(bool value)
	{
		___isDisposed_10 = value;
	}
};


// ScriptablePalette
struct  ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Int32 ScriptablePalette::m_numColors
	int32_t ___m_numColors_4;
	// UnityEngine.Color ScriptablePalette::m_keyColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_keyColor_5;
	// UnityEngine.Color[] ScriptablePalette::m_colors
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___m_colors_6;
	// System.Single ScriptablePalette::m_hueRange
	float ___m_hueRange_7;
	// System.Single ScriptablePalette::m_saturationRange
	float ___m_saturationRange_8;
	// System.Single ScriptablePalette::m_valueRange
	float ___m_valueRange_9;
	// System.Boolean ScriptablePalette::m_setBaseColor_Override
	bool ___m_setBaseColor_Override_10;
	// System.Boolean ScriptablePalette::m_setDetailColor1_Override
	bool ___m_setDetailColor1_Override_11;
	// System.Boolean ScriptablePalette::m_setDetailColor2_Override
	bool ___m_setDetailColor2_Override_12;
	// UnityEngine.Color ScriptablePalette::m_baseColor_Override
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_baseColor_Override_13;
	// UnityEngine.Color ScriptablePalette::m_detailColor1_Override
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_detailColor1_Override_14;
	// UnityEngine.Color ScriptablePalette::m_detailColor2_Override
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_detailColor2_Override_15;

public:
	inline static int32_t get_offset_of_m_numColors_4() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_numColors_4)); }
	inline int32_t get_m_numColors_4() const { return ___m_numColors_4; }
	inline int32_t* get_address_of_m_numColors_4() { return &___m_numColors_4; }
	inline void set_m_numColors_4(int32_t value)
	{
		___m_numColors_4 = value;
	}

	inline static int32_t get_offset_of_m_keyColor_5() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_keyColor_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_keyColor_5() const { return ___m_keyColor_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_keyColor_5() { return &___m_keyColor_5; }
	inline void set_m_keyColor_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_keyColor_5 = value;
	}

	inline static int32_t get_offset_of_m_colors_6() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_colors_6)); }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* get_m_colors_6() const { return ___m_colors_6; }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399** get_address_of_m_colors_6() { return &___m_colors_6; }
	inline void set_m_colors_6(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* value)
	{
		___m_colors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_hueRange_7() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_hueRange_7)); }
	inline float get_m_hueRange_7() const { return ___m_hueRange_7; }
	inline float* get_address_of_m_hueRange_7() { return &___m_hueRange_7; }
	inline void set_m_hueRange_7(float value)
	{
		___m_hueRange_7 = value;
	}

	inline static int32_t get_offset_of_m_saturationRange_8() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_saturationRange_8)); }
	inline float get_m_saturationRange_8() const { return ___m_saturationRange_8; }
	inline float* get_address_of_m_saturationRange_8() { return &___m_saturationRange_8; }
	inline void set_m_saturationRange_8(float value)
	{
		___m_saturationRange_8 = value;
	}

	inline static int32_t get_offset_of_m_valueRange_9() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_valueRange_9)); }
	inline float get_m_valueRange_9() const { return ___m_valueRange_9; }
	inline float* get_address_of_m_valueRange_9() { return &___m_valueRange_9; }
	inline void set_m_valueRange_9(float value)
	{
		___m_valueRange_9 = value;
	}

	inline static int32_t get_offset_of_m_setBaseColor_Override_10() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_setBaseColor_Override_10)); }
	inline bool get_m_setBaseColor_Override_10() const { return ___m_setBaseColor_Override_10; }
	inline bool* get_address_of_m_setBaseColor_Override_10() { return &___m_setBaseColor_Override_10; }
	inline void set_m_setBaseColor_Override_10(bool value)
	{
		___m_setBaseColor_Override_10 = value;
	}

	inline static int32_t get_offset_of_m_setDetailColor1_Override_11() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_setDetailColor1_Override_11)); }
	inline bool get_m_setDetailColor1_Override_11() const { return ___m_setDetailColor1_Override_11; }
	inline bool* get_address_of_m_setDetailColor1_Override_11() { return &___m_setDetailColor1_Override_11; }
	inline void set_m_setDetailColor1_Override_11(bool value)
	{
		___m_setDetailColor1_Override_11 = value;
	}

	inline static int32_t get_offset_of_m_setDetailColor2_Override_12() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_setDetailColor2_Override_12)); }
	inline bool get_m_setDetailColor2_Override_12() const { return ___m_setDetailColor2_Override_12; }
	inline bool* get_address_of_m_setDetailColor2_Override_12() { return &___m_setDetailColor2_Override_12; }
	inline void set_m_setDetailColor2_Override_12(bool value)
	{
		___m_setDetailColor2_Override_12 = value;
	}

	inline static int32_t get_offset_of_m_baseColor_Override_13() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_baseColor_Override_13)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_baseColor_Override_13() const { return ___m_baseColor_Override_13; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_baseColor_Override_13() { return &___m_baseColor_Override_13; }
	inline void set_m_baseColor_Override_13(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_baseColor_Override_13 = value;
	}

	inline static int32_t get_offset_of_m_detailColor1_Override_14() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_detailColor1_Override_14)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_detailColor1_Override_14() const { return ___m_detailColor1_Override_14; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_detailColor1_Override_14() { return &___m_detailColor1_Override_14; }
	inline void set_m_detailColor1_Override_14(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_detailColor1_Override_14 = value;
	}

	inline static int32_t get_offset_of_m_detailColor2_Override_15() { return static_cast<int32_t>(offsetof(ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A, ___m_detailColor2_Override_15)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_detailColor2_Override_15() const { return ___m_detailColor2_Override_15; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_detailColor2_Override_15() { return &___m_detailColor2_Override_15; }
	inline void set_m_detailColor2_Override_15(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_detailColor2_Override_15 = value;
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile>
struct  Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct  Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs>
struct  Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct  Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E  : public MulticastDelegate_t
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


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Mapbox.Map.RawPngRasterTile
struct  RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B  : public RasterTile_tD8325406D07A64CE1E5CFB375173220858BD291A
{
public:

public:
};


// TerrainDataFetcher
struct  TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0  : public DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191
{
public:
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile> TerrainDataFetcher::DataRecieved
	Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * ___DataRecieved_5;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs> TerrainDataFetcher::FetchingError
	Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * ___FetchingError_6;

public:
	inline static int32_t get_offset_of_DataRecieved_5() { return static_cast<int32_t>(offsetof(TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0, ___DataRecieved_5)); }
	inline Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * get_DataRecieved_5() const { return ___DataRecieved_5; }
	inline Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 ** get_address_of_DataRecieved_5() { return &___DataRecieved_5; }
	inline void set_DataRecieved_5(Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * value)
	{
		___DataRecieved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataRecieved_5), (void*)value);
	}

	inline static int32_t get_offset_of_FetchingError_6() { return static_cast<int32_t>(offsetof(TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0, ___FetchingError_6)); }
	inline Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * get_FetchingError_6() const { return ___FetchingError_6; }
	inline Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 ** get_address_of_FetchingError_6() { return &___FetchingError_6; }
	inline void set_FetchingError_6(Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * value)
	{
		___FetchingError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchingError_6), (void*)value);
	}
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


// VectorDataFetcher
struct  VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357  : public DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191
{
public:
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher::DataRecieved
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * ___DataRecieved_5;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher::FetchingError
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * ___FetchingError_6;

public:
	inline static int32_t get_offset_of_DataRecieved_5() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357, ___DataRecieved_5)); }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * get_DataRecieved_5() const { return ___DataRecieved_5; }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 ** get_address_of_DataRecieved_5() { return &___DataRecieved_5; }
	inline void set_DataRecieved_5(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * value)
	{
		___DataRecieved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataRecieved_5), (void*)value);
	}

	inline static int32_t get_offset_of_FetchingError_6() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357, ___FetchingError_6)); }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * get_FetchingError_6() const { return ___FetchingError_6; }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E ** get_address_of_FetchingError_6() { return &___FetchingError_6; }
	inline void set_FetchingError_6(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * value)
	{
		___FetchingError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchingError_6), (void*)value);
	}
};


// Mapbox.Unity.Map.AbstractMap
struct  AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mapbox.Unity.Map.MapOptions Mapbox.Unity.Map.AbstractMap::_options
	MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 * ____options_4;
	// System.Boolean Mapbox.Unity.Map.AbstractMap::_initializeOnStart
	bool ____initializeOnStart_5;
	// Mapbox.Unity.Map.ImageryLayer Mapbox.Unity.Map.AbstractMap::_imagery
	ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 * ____imagery_6;
	// Mapbox.Unity.Map.TerrainLayer Mapbox.Unity.Map.AbstractMap::_terrain
	TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 * ____terrain_7;
	// Mapbox.Unity.Map.VectorLayer Mapbox.Unity.Map.AbstractMap::_vectorData
	VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 * ____vectorData_8;
	// Mapbox.Unity.Map.TileProviders.AbstractTileProvider Mapbox.Unity.Map.AbstractMap::_tileProvider
	AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C * ____tileProvider_9;
	// System.Collections.Generic.HashSet`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractMap::_currentExtent
	HashSet_1_t1DFE20FDAED1A933D98E7FD6FDDF250FD60C18B4 * ____currentExtent_10;
	// Mapbox.Unity.Map.EditorPreviewOptions Mapbox.Unity.Map.AbstractMap::_previewOptions
	EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F * ____previewOptions_11;
	// System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractMap::tilesToProcess
	List_1_t59F237940E6A18EA3997879C6C8D55224ECF3406 * ___tilesToProcess_12;
	// Mapbox.Unity.Map.AbstractMapVisualizer Mapbox.Unity.Map.AbstractMap::_mapVisualizer
	AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C * ____mapVisualizer_13;
	// System.Single Mapbox.Unity.Map.AbstractMap::_unityTileSize
	float ____unityTileSize_14;
	// System.Boolean Mapbox.Unity.Map.AbstractMap::_worldHeightFixed
	bool ____worldHeightFixed_15;
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.Map.AbstractMap::_fileSource
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____fileSource_16;
	// System.Int32 Mapbox.Unity.Map.AbstractMap::_initialZoom
	int32_t ____initialZoom_17;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::_centerLatitudeLongitude
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ____centerLatitudeLongitude_18;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::_centerMercator
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ____centerMercator_19;
	// System.Single Mapbox.Unity.Map.AbstractMap::_worldRelativeScale
	float ____worldRelativeScale_20;
	// UnityEngine.Vector3 Mapbox.Unity.Map.AbstractMap::_mapScaleFactor
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____mapScaleFactor_21;
	// UnityEngine.Vector3 Mapbox.Unity.Map.AbstractMap::_cachedPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____cachedPosition_22;
	// UnityEngine.Quaternion Mapbox.Unity.Map.AbstractMap::_cachedRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____cachedRotation_23;
	// UnityEngine.Vector3 Mapbox.Unity.Map.AbstractMap::_cachedScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____cachedScale_24;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnInitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnInitialized_25;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnUpdated_26;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnMapRedrawn
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnMapRedrawn_27;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnEditorPreviewEnabled
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnEditorPreviewEnabled_28;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnEditorPreviewDisabled
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnEditorPreviewDisabled_29;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.Map.AbstractMap::OnTileFinished
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnTileFinished_30;
	// System.Action`1<System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>> Mapbox.Unity.Map.AbstractMap::OnTilesStarting
	Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 * ___OnTilesStarting_31;
	// System.Action`1<System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>> Mapbox.Unity.Map.AbstractMap::OnTilesDisposing
	Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 * ___OnTilesDisposing_32;

public:
	inline static int32_t get_offset_of__options_4() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____options_4)); }
	inline MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 * get__options_4() const { return ____options_4; }
	inline MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 ** get_address_of__options_4() { return &____options_4; }
	inline void set__options_4(MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 * value)
	{
		____options_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____options_4), (void*)value);
	}

	inline static int32_t get_offset_of__initializeOnStart_5() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____initializeOnStart_5)); }
	inline bool get__initializeOnStart_5() const { return ____initializeOnStart_5; }
	inline bool* get_address_of__initializeOnStart_5() { return &____initializeOnStart_5; }
	inline void set__initializeOnStart_5(bool value)
	{
		____initializeOnStart_5 = value;
	}

	inline static int32_t get_offset_of__imagery_6() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____imagery_6)); }
	inline ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 * get__imagery_6() const { return ____imagery_6; }
	inline ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 ** get_address_of__imagery_6() { return &____imagery_6; }
	inline void set__imagery_6(ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 * value)
	{
		____imagery_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____imagery_6), (void*)value);
	}

	inline static int32_t get_offset_of__terrain_7() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____terrain_7)); }
	inline TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 * get__terrain_7() const { return ____terrain_7; }
	inline TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 ** get_address_of__terrain_7() { return &____terrain_7; }
	inline void set__terrain_7(TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 * value)
	{
		____terrain_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____terrain_7), (void*)value);
	}

	inline static int32_t get_offset_of__vectorData_8() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____vectorData_8)); }
	inline VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 * get__vectorData_8() const { return ____vectorData_8; }
	inline VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 ** get_address_of__vectorData_8() { return &____vectorData_8; }
	inline void set__vectorData_8(VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 * value)
	{
		____vectorData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vectorData_8), (void*)value);
	}

	inline static int32_t get_offset_of__tileProvider_9() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____tileProvider_9)); }
	inline AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C * get__tileProvider_9() const { return ____tileProvider_9; }
	inline AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C ** get_address_of__tileProvider_9() { return &____tileProvider_9; }
	inline void set__tileProvider_9(AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C * value)
	{
		____tileProvider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tileProvider_9), (void*)value);
	}

	inline static int32_t get_offset_of__currentExtent_10() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____currentExtent_10)); }
	inline HashSet_1_t1DFE20FDAED1A933D98E7FD6FDDF250FD60C18B4 * get__currentExtent_10() const { return ____currentExtent_10; }
	inline HashSet_1_t1DFE20FDAED1A933D98E7FD6FDDF250FD60C18B4 ** get_address_of__currentExtent_10() { return &____currentExtent_10; }
	inline void set__currentExtent_10(HashSet_1_t1DFE20FDAED1A933D98E7FD6FDDF250FD60C18B4 * value)
	{
		____currentExtent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentExtent_10), (void*)value);
	}

	inline static int32_t get_offset_of__previewOptions_11() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____previewOptions_11)); }
	inline EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F * get__previewOptions_11() const { return ____previewOptions_11; }
	inline EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F ** get_address_of__previewOptions_11() { return &____previewOptions_11; }
	inline void set__previewOptions_11(EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F * value)
	{
		____previewOptions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previewOptions_11), (void*)value);
	}

	inline static int32_t get_offset_of_tilesToProcess_12() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___tilesToProcess_12)); }
	inline List_1_t59F237940E6A18EA3997879C6C8D55224ECF3406 * get_tilesToProcess_12() const { return ___tilesToProcess_12; }
	inline List_1_t59F237940E6A18EA3997879C6C8D55224ECF3406 ** get_address_of_tilesToProcess_12() { return &___tilesToProcess_12; }
	inline void set_tilesToProcess_12(List_1_t59F237940E6A18EA3997879C6C8D55224ECF3406 * value)
	{
		___tilesToProcess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tilesToProcess_12), (void*)value);
	}

	inline static int32_t get_offset_of__mapVisualizer_13() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____mapVisualizer_13)); }
	inline AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C * get__mapVisualizer_13() const { return ____mapVisualizer_13; }
	inline AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C ** get_address_of__mapVisualizer_13() { return &____mapVisualizer_13; }
	inline void set__mapVisualizer_13(AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C * value)
	{
		____mapVisualizer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapVisualizer_13), (void*)value);
	}

	inline static int32_t get_offset_of__unityTileSize_14() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____unityTileSize_14)); }
	inline float get__unityTileSize_14() const { return ____unityTileSize_14; }
	inline float* get_address_of__unityTileSize_14() { return &____unityTileSize_14; }
	inline void set__unityTileSize_14(float value)
	{
		____unityTileSize_14 = value;
	}

	inline static int32_t get_offset_of__worldHeightFixed_15() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____worldHeightFixed_15)); }
	inline bool get__worldHeightFixed_15() const { return ____worldHeightFixed_15; }
	inline bool* get_address_of__worldHeightFixed_15() { return &____worldHeightFixed_15; }
	inline void set__worldHeightFixed_15(bool value)
	{
		____worldHeightFixed_15 = value;
	}

	inline static int32_t get_offset_of__fileSource_16() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____fileSource_16)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__fileSource_16() const { return ____fileSource_16; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__fileSource_16() { return &____fileSource_16; }
	inline void set__fileSource_16(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____fileSource_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_16), (void*)value);
	}

	inline static int32_t get_offset_of__initialZoom_17() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____initialZoom_17)); }
	inline int32_t get__initialZoom_17() const { return ____initialZoom_17; }
	inline int32_t* get_address_of__initialZoom_17() { return &____initialZoom_17; }
	inline void set__initialZoom_17(int32_t value)
	{
		____initialZoom_17 = value;
	}

	inline static int32_t get_offset_of__centerLatitudeLongitude_18() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____centerLatitudeLongitude_18)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get__centerLatitudeLongitude_18() const { return ____centerLatitudeLongitude_18; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of__centerLatitudeLongitude_18() { return &____centerLatitudeLongitude_18; }
	inline void set__centerLatitudeLongitude_18(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		____centerLatitudeLongitude_18 = value;
	}

	inline static int32_t get_offset_of__centerMercator_19() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____centerMercator_19)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get__centerMercator_19() const { return ____centerMercator_19; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of__centerMercator_19() { return &____centerMercator_19; }
	inline void set__centerMercator_19(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		____centerMercator_19 = value;
	}

	inline static int32_t get_offset_of__worldRelativeScale_20() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____worldRelativeScale_20)); }
	inline float get__worldRelativeScale_20() const { return ____worldRelativeScale_20; }
	inline float* get_address_of__worldRelativeScale_20() { return &____worldRelativeScale_20; }
	inline void set__worldRelativeScale_20(float value)
	{
		____worldRelativeScale_20 = value;
	}

	inline static int32_t get_offset_of__mapScaleFactor_21() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____mapScaleFactor_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__mapScaleFactor_21() const { return ____mapScaleFactor_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__mapScaleFactor_21() { return &____mapScaleFactor_21; }
	inline void set__mapScaleFactor_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____mapScaleFactor_21 = value;
	}

	inline static int32_t get_offset_of__cachedPosition_22() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____cachedPosition_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__cachedPosition_22() const { return ____cachedPosition_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__cachedPosition_22() { return &____cachedPosition_22; }
	inline void set__cachedPosition_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____cachedPosition_22 = value;
	}

	inline static int32_t get_offset_of__cachedRotation_23() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____cachedRotation_23)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__cachedRotation_23() const { return ____cachedRotation_23; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__cachedRotation_23() { return &____cachedRotation_23; }
	inline void set__cachedRotation_23(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____cachedRotation_23 = value;
	}

	inline static int32_t get_offset_of__cachedScale_24() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____cachedScale_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__cachedScale_24() const { return ____cachedScale_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__cachedScale_24() { return &____cachedScale_24; }
	inline void set__cachedScale_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____cachedScale_24 = value;
	}

	inline static int32_t get_offset_of_OnInitialized_25() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnInitialized_25)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnInitialized_25() const { return ___OnInitialized_25; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnInitialized_25() { return &___OnInitialized_25; }
	inline void set_OnInitialized_25(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnInitialized_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInitialized_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnUpdated_26() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnUpdated_26)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnUpdated_26() const { return ___OnUpdated_26; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnUpdated_26() { return &___OnUpdated_26; }
	inline void set_OnUpdated_26(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnUpdated_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdated_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnMapRedrawn_27() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnMapRedrawn_27)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnMapRedrawn_27() const { return ___OnMapRedrawn_27; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnMapRedrawn_27() { return &___OnMapRedrawn_27; }
	inline void set_OnMapRedrawn_27(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnMapRedrawn_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMapRedrawn_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnEditorPreviewEnabled_28() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnEditorPreviewEnabled_28)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnEditorPreviewEnabled_28() const { return ___OnEditorPreviewEnabled_28; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnEditorPreviewEnabled_28() { return &___OnEditorPreviewEnabled_28; }
	inline void set_OnEditorPreviewEnabled_28(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnEditorPreviewEnabled_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEditorPreviewEnabled_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnEditorPreviewDisabled_29() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnEditorPreviewDisabled_29)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnEditorPreviewDisabled_29() const { return ___OnEditorPreviewDisabled_29; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnEditorPreviewDisabled_29() { return &___OnEditorPreviewDisabled_29; }
	inline void set_OnEditorPreviewDisabled_29(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnEditorPreviewDisabled_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEditorPreviewDisabled_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnTileFinished_30() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnTileFinished_30)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnTileFinished_30() const { return ___OnTileFinished_30; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnTileFinished_30() { return &___OnTileFinished_30; }
	inline void set_OnTileFinished_30(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnTileFinished_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTileFinished_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnTilesStarting_31() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnTilesStarting_31)); }
	inline Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 * get_OnTilesStarting_31() const { return ___OnTilesStarting_31; }
	inline Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 ** get_address_of_OnTilesStarting_31() { return &___OnTilesStarting_31; }
	inline void set_OnTilesStarting_31(Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 * value)
	{
		___OnTilesStarting_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTilesStarting_31), (void*)value);
	}

	inline static int32_t get_offset_of_OnTilesDisposing_32() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnTilesDisposing_32)); }
	inline Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 * get_OnTilesDisposing_32() const { return ___OnTilesDisposing_32; }
	inline Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 ** get_address_of_OnTilesDisposing_32() { return &___OnTilesDisposing_32; }
	inline void set_OnTilesDisposing_32(Action_1_t6DB35A4F5D16D5FC4FA1BE436C37D74A123EEA73 * value)
	{
		___OnTilesDisposing_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTilesDisposing_32), (void*)value);
	}
};


// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct  UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mapbox.Unity.Map.TileTerrainType Mapbox.Unity.MeshGeneration.Data.UnityTile::ElevationType
	int32_t ___ElevationType_4;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterData
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____rasterData_5;
	// Mapbox.Map.VectorTile Mapbox.Unity.MeshGeneration.Data.UnityTile::<VectorData>k__BackingField
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___U3CVectorDataU3Ek__BackingField_6;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____heightTexture_7;
	// System.Single[] Mapbox.Unity.MeshGeneration.Data.UnityTile::HeightData
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___HeightData_8;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_loadingTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____loadingTexture_9;
	// System.Collections.Generic.List`1<Mapbox.Map.Tile> Mapbox.Unity.MeshGeneration.Data.UnityTile::_tiles
	List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * ____tiles_10;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_tileScale
	float ____tileScale_11;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::IsRecycled
	bool ___IsRecycled_12;
	// UnityEngine.MeshRenderer Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ____meshRenderer_13;
	// UnityEngine.MeshFilter Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____meshFilter_14;
	// UnityEngine.Collider Mapbox.Unity.MeshGeneration.Data.UnityTile::_collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ____collider_15;
	// Mapbox.Utils.RectD Mapbox.Unity.MeshGeneration.Data.UnityTile::<Rect>k__BackingField
	RectD_t43C10C8617E7747A0A298175DED993296095CBFC  ___U3CRectU3Ek__BackingField_16;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<InitialZoom>k__BackingField
	int32_t ___U3CInitialZoomU3Ek__BackingField_17;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<CurrentZoom>k__BackingField
	int32_t ___U3CCurrentZoomU3Ek__BackingField_18;
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<UnwrappedTileId>k__BackingField
	UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  ___U3CUnwrappedTileIdU3Ek__BackingField_19;
	// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<CanonicalTileId>k__BackingField
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___U3CCanonicalTileIdU3Ek__BackingField_20;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_relativeScale
	float ____relativeScale_21;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterDataState
	int32_t ____rasterDataState_22;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightDataState
	int32_t ____heightDataState_23;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_vectorDataState
	int32_t ____vectorDataState_24;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_tileState
	int32_t ____tileState_25;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnHeightDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnHeightDataChanged_26;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnRasterDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnRasterDataChanged_27;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnVectorDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnVectorDataChanged_28;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::_isInitialized
	bool ____isInitialized_29;

public:
	inline static int32_t get_offset_of_ElevationType_4() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___ElevationType_4)); }
	inline int32_t get_ElevationType_4() const { return ___ElevationType_4; }
	inline int32_t* get_address_of_ElevationType_4() { return &___ElevationType_4; }
	inline void set_ElevationType_4(int32_t value)
	{
		___ElevationType_4 = value;
	}

	inline static int32_t get_offset_of__rasterData_5() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____rasterData_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__rasterData_5() const { return ____rasterData_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__rasterData_5() { return &____rasterData_5; }
	inline void set__rasterData_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____rasterData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rasterData_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVectorDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CVectorDataU3Ek__BackingField_6)); }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * get_U3CVectorDataU3Ek__BackingField_6() const { return ___U3CVectorDataU3Ek__BackingField_6; }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 ** get_address_of_U3CVectorDataU3Ek__BackingField_6() { return &___U3CVectorDataU3Ek__BackingField_6; }
	inline void set_U3CVectorDataU3Ek__BackingField_6(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * value)
	{
		___U3CVectorDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVectorDataU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of__heightTexture_7() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightTexture_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__heightTexture_7() const { return ____heightTexture_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__heightTexture_7() { return &____heightTexture_7; }
	inline void set__heightTexture_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____heightTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heightTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_HeightData_8() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___HeightData_8)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_HeightData_8() const { return ___HeightData_8; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_HeightData_8() { return &___HeightData_8; }
	inline void set_HeightData_8(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___HeightData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeightData_8), (void*)value);
	}

	inline static int32_t get_offset_of__loadingTexture_9() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____loadingTexture_9)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__loadingTexture_9() const { return ____loadingTexture_9; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__loadingTexture_9() { return &____loadingTexture_9; }
	inline void set__loadingTexture_9(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____loadingTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadingTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of__tiles_10() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tiles_10)); }
	inline List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * get__tiles_10() const { return ____tiles_10; }
	inline List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C ** get_address_of__tiles_10() { return &____tiles_10; }
	inline void set__tiles_10(List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * value)
	{
		____tiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tiles_10), (void*)value);
	}

	inline static int32_t get_offset_of__tileScale_11() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tileScale_11)); }
	inline float get__tileScale_11() const { return ____tileScale_11; }
	inline float* get_address_of__tileScale_11() { return &____tileScale_11; }
	inline void set__tileScale_11(float value)
	{
		____tileScale_11 = value;
	}

	inline static int32_t get_offset_of_IsRecycled_12() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___IsRecycled_12)); }
	inline bool get_IsRecycled_12() const { return ___IsRecycled_12; }
	inline bool* get_address_of_IsRecycled_12() { return &___IsRecycled_12; }
	inline void set_IsRecycled_12(bool value)
	{
		___IsRecycled_12 = value;
	}

	inline static int32_t get_offset_of__meshRenderer_13() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____meshRenderer_13)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get__meshRenderer_13() const { return ____meshRenderer_13; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of__meshRenderer_13() { return &____meshRenderer_13; }
	inline void set__meshRenderer_13(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		____meshRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of__meshFilter_14() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____meshFilter_14)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get__meshFilter_14() const { return ____meshFilter_14; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of__meshFilter_14() { return &____meshFilter_14; }
	inline void set__meshFilter_14(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		____meshFilter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshFilter_14), (void*)value);
	}

	inline static int32_t get_offset_of__collider_15() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____collider_15)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get__collider_15() const { return ____collider_15; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of__collider_15() { return &____collider_15; }
	inline void set__collider_15(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		____collider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRectU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CRectU3Ek__BackingField_16)); }
	inline RectD_t43C10C8617E7747A0A298175DED993296095CBFC  get_U3CRectU3Ek__BackingField_16() const { return ___U3CRectU3Ek__BackingField_16; }
	inline RectD_t43C10C8617E7747A0A298175DED993296095CBFC * get_address_of_U3CRectU3Ek__BackingField_16() { return &___U3CRectU3Ek__BackingField_16; }
	inline void set_U3CRectU3Ek__BackingField_16(RectD_t43C10C8617E7747A0A298175DED993296095CBFC  value)
	{
		___U3CRectU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CInitialZoomU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CInitialZoomU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitialZoomU3Ek__BackingField_17() const { return ___U3CInitialZoomU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitialZoomU3Ek__BackingField_17() { return &___U3CInitialZoomU3Ek__BackingField_17; }
	inline void set_U3CInitialZoomU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitialZoomU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentZoomU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CCurrentZoomU3Ek__BackingField_18)); }
	inline int32_t get_U3CCurrentZoomU3Ek__BackingField_18() const { return ___U3CCurrentZoomU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCurrentZoomU3Ek__BackingField_18() { return &___U3CCurrentZoomU3Ek__BackingField_18; }
	inline void set_U3CCurrentZoomU3Ek__BackingField_18(int32_t value)
	{
		___U3CCurrentZoomU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CUnwrappedTileIdU3Ek__BackingField_19)); }
	inline UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  get_U3CUnwrappedTileIdU3Ek__BackingField_19() const { return ___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711 * get_address_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return &___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline void set_U3CUnwrappedTileIdU3Ek__BackingField_19(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  value)
	{
		___U3CUnwrappedTileIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CCanonicalTileIdU3Ek__BackingField_20)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_U3CCanonicalTileIdU3Ek__BackingField_20() const { return ___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return &___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline void set_U3CCanonicalTileIdU3Ek__BackingField_20(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___U3CCanonicalTileIdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of__relativeScale_21() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____relativeScale_21)); }
	inline float get__relativeScale_21() const { return ____relativeScale_21; }
	inline float* get_address_of__relativeScale_21() { return &____relativeScale_21; }
	inline void set__relativeScale_21(float value)
	{
		____relativeScale_21 = value;
	}

	inline static int32_t get_offset_of__rasterDataState_22() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____rasterDataState_22)); }
	inline int32_t get__rasterDataState_22() const { return ____rasterDataState_22; }
	inline int32_t* get_address_of__rasterDataState_22() { return &____rasterDataState_22; }
	inline void set__rasterDataState_22(int32_t value)
	{
		____rasterDataState_22 = value;
	}

	inline static int32_t get_offset_of__heightDataState_23() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightDataState_23)); }
	inline int32_t get__heightDataState_23() const { return ____heightDataState_23; }
	inline int32_t* get_address_of__heightDataState_23() { return &____heightDataState_23; }
	inline void set__heightDataState_23(int32_t value)
	{
		____heightDataState_23 = value;
	}

	inline static int32_t get_offset_of__vectorDataState_24() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____vectorDataState_24)); }
	inline int32_t get__vectorDataState_24() const { return ____vectorDataState_24; }
	inline int32_t* get_address_of__vectorDataState_24() { return &____vectorDataState_24; }
	inline void set__vectorDataState_24(int32_t value)
	{
		____vectorDataState_24 = value;
	}

	inline static int32_t get_offset_of__tileState_25() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tileState_25)); }
	inline int32_t get__tileState_25() const { return ____tileState_25; }
	inline int32_t* get_address_of__tileState_25() { return &____tileState_25; }
	inline void set__tileState_25(int32_t value)
	{
		____tileState_25 = value;
	}

	inline static int32_t get_offset_of_OnHeightDataChanged_26() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnHeightDataChanged_26)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnHeightDataChanged_26() const { return ___OnHeightDataChanged_26; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnHeightDataChanged_26() { return &___OnHeightDataChanged_26; }
	inline void set_OnHeightDataChanged_26(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnHeightDataChanged_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeightDataChanged_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnRasterDataChanged_27() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnRasterDataChanged_27)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnRasterDataChanged_27() const { return ___OnRasterDataChanged_27; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnRasterDataChanged_27() { return &___OnRasterDataChanged_27; }
	inline void set_OnRasterDataChanged_27(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnRasterDataChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRasterDataChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnVectorDataChanged_28() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnVectorDataChanged_28)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnVectorDataChanged_28() const { return ___OnVectorDataChanged_28; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnVectorDataChanged_28() { return &___OnVectorDataChanged_28; }
	inline void set_OnVectorDataChanged_28(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnVectorDataChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVectorDataChanged_28), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_29() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____isInitialized_29)); }
	inline bool get__isInitialized_29() const { return ____isInitialized_29; }
	inline bool* get_address_of__isInitialized_29() { return &____isInitialized_29; }
	inline void set__isInitialized_29(bool value)
	{
		____isInitialized_29 = value;
	}
};


// SetCameraHeight
struct  SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mapbox.Unity.Map.AbstractMap SetCameraHeight::_map
	AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * ____map_4;
	// UnityEngine.Camera SetCameraHeight::_referenceCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ____referenceCamera_5;
	// System.Single SetCameraHeight::_cameraOffset
	float ____cameraOffset_6;

public:
	inline static int32_t get_offset_of__map_4() { return static_cast<int32_t>(offsetof(SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269, ____map_4)); }
	inline AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * get__map_4() const { return ____map_4; }
	inline AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 ** get_address_of__map_4() { return &____map_4; }
	inline void set__map_4(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * value)
	{
		____map_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____map_4), (void*)value);
	}

	inline static int32_t get_offset_of__referenceCamera_5() { return static_cast<int32_t>(offsetof(SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269, ____referenceCamera_5)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get__referenceCamera_5() const { return ____referenceCamera_5; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of__referenceCamera_5() { return &____referenceCamera_5; }
	inline void set__referenceCamera_5(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		____referenceCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceCamera_5), (void*)value);
	}

	inline static int32_t get_offset_of__cameraOffset_6() { return static_cast<int32_t>(offsetof(SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269, ____cameraOffset_6)); }
	inline float get__cameraOffset_6() const { return ____cameraOffset_6; }
	inline float* get_address_of__cameraOffset_6() { return &____cameraOffset_6; }
	inline void set__cameraOffset_6(float value)
	{
		____cameraOffset_6 = value;
	}
};


// UniAndroidPermission
struct  UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields
{
public:
	// System.Action UniAndroidPermission::onAllowCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onAllowCallback_5;
	// System.Action UniAndroidPermission::onDenyCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onDenyCallback_6;
	// System.Action UniAndroidPermission::onDenyAndNeverAskAgainCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onDenyAndNeverAskAgainCallback_7;

public:
	inline static int32_t get_offset_of_onAllowCallback_5() { return static_cast<int32_t>(offsetof(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields, ___onAllowCallback_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_onAllowCallback_5() const { return ___onAllowCallback_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_onAllowCallback_5() { return &___onAllowCallback_5; }
	inline void set_onAllowCallback_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___onAllowCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAllowCallback_5), (void*)value);
	}

	inline static int32_t get_offset_of_onDenyCallback_6() { return static_cast<int32_t>(offsetof(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields, ___onDenyCallback_6)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_onDenyCallback_6() const { return ___onDenyCallback_6; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_onDenyCallback_6() { return &___onDenyCallback_6; }
	inline void set_onDenyCallback_6(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___onDenyCallback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDenyCallback_6), (void*)value);
	}

	inline static int32_t get_offset_of_onDenyAndNeverAskAgainCallback_7() { return static_cast<int32_t>(offsetof(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields, ___onDenyAndNeverAskAgainCallback_7)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_onDenyAndNeverAskAgainCallback_7() const { return ___onDenyAndNeverAskAgainCallback_7; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_onDenyAndNeverAskAgainCallback_7() { return &___onDenyAndNeverAskAgainCallback_7; }
	inline void set_onDenyAndNeverAskAgainCallback_7(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___onDenyAndNeverAskAgainCallback_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDenyAndNeverAskAgainCallback_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// SQLite4Unity3d.IndexedAttribute[]
struct IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * m_Items[1];

public:
	inline IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};


// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m73C290D7C1DD834B7A25096EA885D9CC800523A8_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4855AE1389C1E454FF70D74FD49D3C642E0DF458_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared (Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared (Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7 * __this, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void SQLite4Unity3d.TableMapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7854E1EF51D1C2E14DE5CF742B917A0106D4FD55 (U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsAutoInc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsAutoInc_m0E15560AA01B78E80D419BD2EFF68568110DF344 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.String SQLite4Unity3d.TableMapping/Column::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_Name_mC9197F9C09BDD3BFF74667C3784B07C4C1D01089 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String SQLite4Unity3d.TableMapping/Column::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_PropertyName_m6D5EF1C3D79A42A4D1D2D7F2A30ECA95886B93C2 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m73C290D7C1DD834B7A25096EA885D9CC800523A8 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m73C290D7C1DD834B7A25096EA885D9CC800523A8_gshared)(p0, method);
}
// System.String SQLite4Unity3d.ColumnAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_Name_m87E9D5D440CFA4E1A3F0C479839DF193F775C480 (ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD * __this, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Name_m77796330C6BD3201740D4D51B4A10A49545ED3F8 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04 (Type_t * p0, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_ColumnType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_ColumnType_mD4301D9671E2FE006826A8C85768B29AADB650E0 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.String SQLite4Unity3d.Orm::Collation(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Orm_Collation_m86E3256E2A2403FCB1701EBB4CE4163B8495BD22 (MemberInfo_t * ___p0, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_Collation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Collation_m23287B788EC96CE4CDA381C5A91C498F766B9460 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean SQLite4Unity3d.Orm::IsPK(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsPK_m1C686F68A30436556C16E3482AF96DFAF48AB74E (MemberInfo_t * ___p0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442 (String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsPK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsPK_m072E1393F62E2CE8556C7762ABD1630E183F9E53 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean SQLite4Unity3d.Orm::IsAutoInc(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsAutoInc_mAA87393A5776B906C34348F3D863C868D64DCA63 (MemberInfo_t * ___p0, const RuntimeMethod* method);
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsPK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsPK_mD01D726782467A35D294636FCC7CEF1715BE5CC1 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.Type SQLite4Unity3d.TableMapping/Column::get_ColumnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Column_get_ColumnType_m8A937CC38C2DD5C46D76351A8AA886702A2CA363 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsAutoGuid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsAutoGuid_mCD33468C8F148C867A8DE53383DE788F60B51478 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsAutoGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsAutoGuid_mEC780B86EE975171517ED10B6E60306B6B750951 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsAutoInc(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsAutoInc_m1BE0976FC9693EDF7AAAE1F2C41926274059D70C (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.Orm::GetIndices(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Orm_GetIndices_m9FE68BD68D12EC6F08AAF5BA12CF464404549E19 (MemberInfo_t * ___p0, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_Indices(System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Indices_mBD4696CEAD596D66FA310EB9EEE2ABAAC9EB86DD (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping/Column::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Column_get_Indices_m330905B3D2A1B5B9A8CEDBAA4919B3A4C426A5C5 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<SQLite4Unity3d.IndexedAttribute>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisIndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C_m180B3BB3CE2327931ADACF7D0ABA6D60F62B20F6 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4855AE1389C1E454FF70D74FD49D3C642E0DF458_gshared)(p0, method);
}
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.IndexedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute__ctor_m77A2F1BC92BF163E732E5B00E61C582431AB38F0 (IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * __this, const RuntimeMethod* method);
// System.Boolean SQLite4Unity3d.Orm::IsMarkedNotNull(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsMarkedNotNull_mF216374BF7A696649AD414768501E1B8595931E8 (MemberInfo_t * ___p0, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsNullable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsNullable_m075C3A49AF70DD730D7DF76E4D3BB725220A265A (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> SQLite4Unity3d.Orm::MaxStringLength(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  Orm_MaxStringLength_mED880FD1195B5405C83D471CAC27F17297E295EB (PropertyInfo_t * ___p0, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.TableMapping/Column::set_MaxStringLength(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_MaxStringLength_m1124592CEEFD7C4D78D551CD417FA0FC67AC2115 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method);
// System.Void SQLite4Unity3d.IndexedAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute__ctor_mF0D7BAA30355C5DED94A78E0129B684741B75C06 (IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * __this, String_t* ___name0, int32_t ___order1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_mC081696C8CED37B1B49D2A1321979DDAA3E2241B (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, float* p1, float* p2, float* p3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Random::ColorHSV(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Random_ColorHSV_m751082C814D8AD8DE57E5B767B08218F3343FF70 (float p0, float p1, float p2, float p3, float p4, float p5, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Mapbox.Unity.Map.AbstractMap>()
inline AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D (const RuntimeMethod* method)
{
	return ((  AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Object_FindObjectOfType_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m807C070DCBD260C48DCA9A6267F38EF36112604A (const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::get_CenterLatitudeLongitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  AbstractMap_get_CenterLatitudeLongitude_m040E2D8564A40DCE8A7BB03362634EE97C3DCC34 (AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void TerrainDataFetcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mB7D6D919F85BD94D5F376D4C7D087A9DEA07A913 (U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.RawPngRasterTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawPngRasterTile__ctor_m4ECEE5616810A555D183EC3FA208827ADCC957AF (RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Mapbox.Map.Tile::Initialize(Mapbox.Platform.IFileSource,Mapbox.Map.CanonicalTileId,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, RuntimeObject* ___fileSource0, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___canonicalTileId1, String_t* ___tilesetId2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___p3, const RuntimeMethod* method);
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD9B22521944666091E201032CAF210456BFEFDF5 (Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mD917EF4D7158E5C1095435B19BD2467208BD2C14 (Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared)(__this, p0, p1, method);
}
// System.Void DataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E (DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 * __this, const RuntimeMethod* method);
// System.Void TerrainDataFetcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82AA74F4EC37979908BF6B1737854CD41D70C107 (U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * __this, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::get_CanonicalTileId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90 (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.CanonicalTileId::op_Inequality(Mapbox.Map.CanonicalTileId,Mapbox.Map.CanonicalTileId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF (CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___a0, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___b1, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.Tile::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> Mapbox.Map.Tile::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.TileErrorEventArgs::.ctor(Mapbox.Map.CanonicalTileId,System.Type,Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * __this, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___TileId0, Type_t * ___TileType1, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___UnityTileInstance2, ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * ___Exceptions3, const RuntimeMethod* method);
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m36A74C0F51F3F7363F9B4E0254CAFE09FB5F0CF7 (Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * p0, RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * p1, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B *, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *, const RuntimeMethod*))Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared)(__this, p0, p1, p2, method);
}
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile>::Invoke(!0,!1)
inline void Action_2_Invoke_m6D89D340A7C98D5B1F68AF4C5C82089C1F89226D (Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * p0, RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, p0, p1, method);
}
// System.Void DataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB (DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void UniAndroidPermission::ResetAllCallBacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52 (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method);
// System.Void VectorDataFetcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorTile__ctor_m2275A9D738A4FF18395A59BCB41069263B03E58C (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorTile__ctor_mE5F5D290EDC3E470D0D26E6F77479EE7E3BE83A1 (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * __this, String_t* ___styleId0, String_t* ___modifiedDate1, const RuntimeMethod* method);
// System.Void Mapbox.Unity.MeshGeneration.Data.UnityTile::AddTile(Mapbox.Map.Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTile_AddTile_mB9B6E64A7668B08A82FA710755EEA53821FB2784 (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * ___tile0, const RuntimeMethod* method);
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72 (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605 (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared)(__this, p0, p1, method);
}
// System.Void VectorDataFetcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, const RuntimeMethod* method);
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569 (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * p0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * p1, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *, const RuntimeMethod*))Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared)(__this, p0, p1, p2, method);
}
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::Invoke(!0,!1)
inline void Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * p0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, p0, p1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SQLite4Unity3d.TableMapping_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m125AC295D1D0D924169967B11B8A24FC90FCF9FC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m125AC295D1D0D924169967B11B8A24FC90FCF9FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * L_0 = (U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 *)il2cpp_codegen_object_new(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7854E1EF51D1C2E14DE5CF742B917A0106D4FD55(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7854E1EF51D1C2E14DE5CF742B917A0106D4FD55 (U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_<>c::<get_InsertColumns>b__30_0(SQLite4Unity3d.TableMapping_Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_InsertColumnsU3Eb__30_0_mC46D3A74293AF87B08EFE8C0E1D8AD8E6D4B977A (U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * __this, Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * ___c0, const RuntimeMethod* method)
{
	{
		Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * L_0 = ___c0;
		NullCheck(L_0);
		bool L_1 = Column_get_IsAutoInc_m0E15560AA01B78E80D419BD2EFF68568110DF344(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String SQLite4Unity3d.TableMapping_<>c::<CreateInsertCommand>b__38_0(SQLite4Unity3d.TableMapping_Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m7D0D55C196322EC89578395B3163F2A3D4B82651 (U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * __this, Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m7D0D55C196322EC89578395B3163F2A3D4B82651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * L_0 = ___c0;
		NullCheck(L_0);
		String_t* L_1 = Column_get_Name_mC9197F9C09BDD3BFF74667C3784B07C4C1D01089(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, L_1, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SQLite4Unity3d.TableMapping_<>c::<CreateInsertCommand>b__38_1(SQLite4Unity3d.TableMapping_Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m5B154B42C7BAED084E37D73150EF4022EC8A494E (U3CU3Ec_t0A2477A1D81EC7A6E2B72106D40648F087DB70A7 * __this, Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m5B154B42C7BAED084E37D73150EF4022EC8A494E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D;
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
// System.Void SQLite4Unity3d.TableMapping_<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m66C310C637454BEC0284D9EDCB5546B1FDA89B0C (U3CU3Ec__DisplayClass33_0_t5547638C1A6FBA8883F6F75B130C035837B70010 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_<>c__DisplayClass33_0::<FindColumnWithPropertyName>b__0(SQLite4Unity3d.TableMapping_Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_0_U3CFindColumnWithPropertyNameU3Eb__0_m6EAA9846A4A589B4FC9C3AFDF305361A06F52E8B (U3CU3Ec__DisplayClass33_0_t5547638C1A6FBA8883F6F75B130C035837B70010 * __this, Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * ___c0, const RuntimeMethod* method)
{
	{
		Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * L_0 = ___c0;
		NullCheck(L_0);
		String_t* L_1 = Column_get_PropertyName_m6D5EF1C3D79A42A4D1D2D7F2A30ECA95886B93C2(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_propertyName_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void SQLite4Unity3d.TableMapping_<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m0FBB5CFEF697528F0F8783FB7ECC1621A668D944 (U3CU3Ec__DisplayClass34_0_t487551D29B6688F152D47C3AE9A290447B2DBEB0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_<>c__DisplayClass34_0::<FindColumn>b__0(SQLite4Unity3d.TableMapping_Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass34_0_U3CFindColumnU3Eb__0_m2E144B2378C156509373BFC0E5678D817A7FB228 (U3CU3Ec__DisplayClass34_0_t487551D29B6688F152D47C3AE9A290447B2DBEB0 * __this, Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * ___c0, const RuntimeMethod* method)
{
	{
		Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * L_0 = ___c0;
		NullCheck(L_0);
		String_t* L_1 = Column_get_Name_mC9197F9C09BDD3BFF74667C3784B07C4C1D01089(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_columnName_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
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
// System.String SQLite4Unity3d.TableMapping_Column::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_Name_mC9197F9C09BDD3BFF74667C3784B07C4C1D01089 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Name_m77796330C6BD3201740D4D51B4A10A49545ED3F8 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String SQLite4Unity3d.TableMapping_Column::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_PropertyName_m6D5EF1C3D79A42A4D1D2D7F2A30ECA95886B93C2 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get__prop_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type SQLite4Unity3d.TableMapping_Column::get_ColumnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Column_get_ColumnType_m8A937CC38C2DD5C46D76351A8AA886702A2CA363 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CColumnTypeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_ColumnType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_ColumnType_mD4301D9671E2FE006826A8C85768B29AADB650E0 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CColumnTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String SQLite4Unity3d.TableMapping_Column::get_Collation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_Collation_m2A4FB9F80097BB26F23B3955C2A62D20779CD057 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCollationU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_Collation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Collation_m23287B788EC96CE4CDA381C5A91C498F766B9460 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCollationU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_Column::get_IsAutoInc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsAutoInc_m0E15560AA01B78E80D419BD2EFF68568110DF344 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsAutoIncU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_IsAutoInc(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsAutoInc_m1BE0976FC9693EDF7AAAE1F2C41926274059D70C (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsAutoIncU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_Column::get_IsAutoGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsAutoGuid_mEC780B86EE975171517ED10B6E60306B6B750951 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsAutoGuidU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_IsAutoGuid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsAutoGuid_mCD33468C8F148C867A8DE53383DE788F60B51478 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsAutoGuidU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_Column::get_IsPK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsPK_mD01D726782467A35D294636FCC7CEF1715BE5CC1 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsPKU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_IsPK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsPK_m072E1393F62E2CE8556C7762ABD1630E183F9E53 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsPKU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping_Column::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Column_get_Indices_m330905B3D2A1B5B9A8CEDBAA4919B3A4C426A5C5 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CIndicesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_Indices(System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Indices_mBD4696CEAD596D66FA310EB9EEE2ABAAC9EB86DD (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CIndicesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping_Column::get_IsNullable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsNullable_mDFA369BA07BC65B40EC686B98A7728E62EE2744B (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsNullableU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_IsNullable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsNullable_m075C3A49AF70DD730D7DF76E4D3BB725220A265A (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsNullableU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Nullable`1<System.Int32> SQLite4Unity3d.TableMapping_Column::get_MaxStringLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  Column_get_MaxStringLength_m664CC9E06543DBFC14F7D34712268397E654343C (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMaxStringLengthU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::set_MaxStringLength(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_MaxStringLength_m1124592CEEFD7C4D78D551CD417FA0FC67AC2115 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = ___value0;
		__this->set_U3CMaxStringLengthU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::.ctor(System.Reflection.PropertyInfo,SQLite4Unity3d.CreateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column__ctor_m142B216CE3E0CF4AC93A1A2B507BDA69AF6493A8 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, PropertyInfo_t * ___prop0, int32_t ___createFlags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Column__ctor_m142B216CE3E0CF4AC93A1A2B507BDA69AF6493A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD * V_0 = NULL;
	bool V_1 = false;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B2_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B3_1 = NULL;
	Type_t * G_B5_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B5_1 = NULL;
	Type_t * G_B4_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B4_1 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B9_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B6_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B8_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B7_0 = NULL;
	int32_t G_B10_0 = 0;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B10_1 = NULL;
	int32_t G_B15_0 = 0;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B17_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B18_1 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B20_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B21_1 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B28_0 = NULL;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * G_B29_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		PropertyInfo_t * L_0 = ___prop0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		RuntimeObject * L_4 = Enumerable_FirstOrDefault_TisRuntimeObject_m73C290D7C1DD834B7A25096EA885D9CC800523A8((RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/Enumerable_FirstOrDefault_TisRuntimeObject_m73C290D7C1DD834B7A25096EA885D9CC800523A8_RuntimeMethod_var);
		V_0 = ((ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD *)CastclassClass((RuntimeObject*)L_4, ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_5 = ___prop0;
		__this->set__prop_0(L_5);
		ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD * L_6 = V_0;
		G_B1_0 = __this;
		if (!L_6)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		ColumnAttribute_t78B50733579D7A1EA45A8AEEF8EE79B6DBF14CBD * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = ColumnAttribute_get_Name_m87E9D5D440CFA4E1A3F0C479839DF193F775C480(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0035:
	{
		PropertyInfo_t * L_9 = ___prop0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		NullCheck(G_B3_1);
		Column_set_Name_m77796330C6BD3201740D4D51B4A10A49545ED3F8(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		PropertyInfo_t * L_11 = ___prop0;
		NullCheck(L_11);
		Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_11);
		Type_t * L_13 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04(L_12, /*hidden argument*/NULL);
		Type_t * L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = __this;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = __this;
			goto IL_0056;
		}
	}
	{
		PropertyInfo_t * L_15 = ___prop0;
		NullCheck(L_15);
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_15);
		G_B5_0 = L_16;
		G_B5_1 = G_B4_1;
	}

IL_0056:
	{
		NullCheck(G_B5_1);
		Column_set_ColumnType_mD4301D9671E2FE006826A8C85768B29AADB650E0(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		PropertyInfo_t * L_17 = ___prop0;
		String_t* L_18 = Orm_Collation_m86E3256E2A2403FCB1701EBB4CE4163B8495BD22(L_17, /*hidden argument*/NULL);
		Column_set_Collation_m23287B788EC96CE4CDA381C5A91C498F766B9460(__this, L_18, /*hidden argument*/NULL);
		PropertyInfo_t * L_19 = ___prop0;
		bool L_20 = Orm_IsPK_m1C686F68A30436556C16E3482AF96DFAF48AB74E(L_19, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if (L_20)
		{
			G_B9_0 = __this;
			goto IL_008f;
		}
	}
	{
		int32_t L_21 = ___createFlags1;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&(int32_t)1))) == ((uint32_t)1))))
		{
			G_B8_0 = G_B6_0;
			goto IL_008c;
		}
	}
	{
		PropertyInfo_t * L_22 = ___prop0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		int32_t L_24 = String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442(L_23, _stringLiteral474AE52625B87D7628AE7B20A499329A99E07119, 5, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		G_B10_1 = G_B7_0;
		goto IL_0090;
	}

IL_008c:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0090:
	{
		NullCheck(G_B10_1);
		Column_set_IsPK_m072E1393F62E2CE8556C7762ABD1630E183F9E53(G_B10_1, (bool)G_B10_0, /*hidden argument*/NULL);
		PropertyInfo_t * L_25 = ___prop0;
		bool L_26 = Orm_IsAutoInc_mAA87393A5776B906C34348F3D863C868D64DCA63(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_27 = Column_get_IsPK_mD01D726782467A35D294636FCC7CEF1715BE5CC1(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_28 = ___createFlags1;
		G_B15_0 = ((((int32_t)((int32_t)((int32_t)L_28&(int32_t)4))) == ((int32_t)4))? 1 : 0);
		goto IL_00b1;
	}

IL_00ad:
	{
		G_B15_0 = 0;
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B15_0 = 1;
	}

IL_00b1:
	{
		V_1 = (bool)G_B15_0;
		bool L_29 = V_1;
		G_B16_0 = __this;
		if (!L_29)
		{
			G_B17_0 = __this;
			goto IL_00cd;
		}
	}
	{
		Type_t * L_30 = Column_get_ColumnType_m8A937CC38C2DD5C46D76351A8AA886702A2CA363(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_31 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_31, /*hidden argument*/NULL);
		bool L_33 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_30, L_32, /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_33));
		G_B18_1 = G_B16_0;
		goto IL_00ce;
	}

IL_00cd:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_00ce:
	{
		NullCheck(G_B18_1);
		Column_set_IsAutoGuid_mCD33468C8F148C867A8DE53383DE788F60B51478(G_B18_1, (bool)G_B18_0, /*hidden argument*/NULL);
		bool L_34 = V_1;
		G_B19_0 = __this;
		if (!L_34)
		{
			G_B20_0 = __this;
			goto IL_00e2;
		}
	}
	{
		bool L_35 = Column_get_IsAutoGuid_mEC780B86EE975171517ED10B6E60306B6B750951(__this, /*hidden argument*/NULL);
		G_B21_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		G_B21_1 = G_B19_0;
		goto IL_00e3;
	}

IL_00e2:
	{
		G_B21_0 = 0;
		G_B21_1 = G_B20_0;
	}

IL_00e3:
	{
		bool L_36 = V_1;
		NullCheck(G_B21_1);
		Column_set_IsAutoInc_m1BE0976FC9693EDF7AAAE1F2C41926274059D70C(G_B21_1, (bool)((int32_t)((int32_t)G_B21_0|(int32_t)L_36)), /*hidden argument*/NULL);
		PropertyInfo_t * L_37 = ___prop0;
		RuntimeObject* L_38 = Orm_GetIndices_m9FE68BD68D12EC6F08AAF5BA12CF464404549E19(L_37, /*hidden argument*/NULL);
		Column_set_Indices_mBD4696CEAD596D66FA310EB9EEE2ABAAC9EB86DD(__this, L_38, /*hidden argument*/NULL);
		RuntimeObject* L_39 = Column_get_Indices_m330905B3D2A1B5B9A8CEDBAA4919B3A4C426A5C5(__this, /*hidden argument*/NULL);
		bool L_40 = Enumerable_Any_TisIndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C_m180B3BB3CE2327931ADACF7D0ABA6D60F62B20F6(L_39, /*hidden argument*/Enumerable_Any_TisIndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C_m180B3BB3CE2327931ADACF7D0ABA6D60F62B20F6_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		bool L_41 = Column_get_IsPK_mD01D726782467A35D294636FCC7CEF1715BE5CC1(__this, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_42 = ___createFlags1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_42&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_43 = Column_get_Name_mC9197F9C09BDD3BFF74667C3784B07C4C1D01089(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		bool L_44 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_43, _stringLiteral474AE52625B87D7628AE7B20A499329A99E07119, 5, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0138;
		}
	}
	{
		IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD* L_45 = (IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD*)(IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD*)SZArrayNew(IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD_il2cpp_TypeInfo_var, (uint32_t)1);
		IndexedAttributeU5BU5D_t1F15FF7A1C2FFD943EA4F70BEF7F8B4D76C71ECD* L_46 = L_45;
		IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C * L_47 = (IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C *)il2cpp_codegen_object_new(IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C_il2cpp_TypeInfo_var);
		IndexedAttribute__ctor_m77A2F1BC92BF163E732E5B00E61C582431AB38F0(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (IndexedAttribute_t15C1A566358ADC3B4E216FD18D9C5DD305C1DB2C *)L_47);
		Column_set_Indices_mBD4696CEAD596D66FA310EB9EEE2ABAAC9EB86DD(__this, (RuntimeObject*)(RuntimeObject*)L_46, /*hidden argument*/NULL);
	}

IL_0138:
	{
		bool L_48 = Column_get_IsPK_mD01D726782467A35D294636FCC7CEF1715BE5CC1(__this, /*hidden argument*/NULL);
		G_B27_0 = __this;
		if (L_48)
		{
			G_B28_0 = __this;
			goto IL_014c;
		}
	}
	{
		PropertyInfo_t * L_49 = ___prop0;
		bool L_50 = Orm_IsMarkedNotNull_mF216374BF7A696649AD414768501E1B8595931E8(L_49, /*hidden argument*/NULL);
		G_B29_0 = ((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		G_B29_1 = G_B27_0;
		goto IL_014d;
	}

IL_014c:
	{
		G_B29_0 = 0;
		G_B29_1 = G_B28_0;
	}

IL_014d:
	{
		NullCheck(G_B29_1);
		Column_set_IsNullable_m075C3A49AF70DD730D7DF76E4D3BB725220A265A(G_B29_1, (bool)G_B29_0, /*hidden argument*/NULL);
		PropertyInfo_t * L_51 = ___prop0;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_52 = Orm_MaxStringLength_mED880FD1195B5405C83D471CAC27F17297E295EB(L_51, /*hidden argument*/NULL);
		Column_set_MaxStringLength_m1124592CEEFD7C4D78D551CD417FA0FC67AC2115(__this, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping_Column::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_SetValue_m6AC5623D30B06CD0EEBE545C5A05A030DD1D47A5 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, RuntimeObject * ___obj0, RuntimeObject * ___val1, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get__prop_0();
		RuntimeObject * L_1 = ___obj0;
		RuntimeObject * L_2 = ___val1;
		NullCheck(L_0);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_1, L_2, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return;
	}
}
// System.Object SQLite4Unity3d.TableMapping_Column::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Column_GetValue_mBF49C4753366161B12039E823995EECA6BFAE4D2 (Column_tB4B7512EF9B3863D213B22C4105ABC59C358F5AF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get__prop_0();
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_0, L_1, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return L_2;
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
// System.Boolean SQLite4Unity3d.UniqueAttribute::get_Unique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniqueAttribute_get_Unique_m4E1B89069D736C42FF2FEDB2D2C69843A9AF4578 (UniqueAttribute_t25165168729557BB3370180332A89CADE7CD84AC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void SQLite4Unity3d.UniqueAttribute::set_Unique(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAttribute_set_Unique_m4721D7A16027D19584D2287B2772F82275F0C37B (UniqueAttribute_t25165168729557BB3370180332A89CADE7CD84AC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SQLite4Unity3d.UniqueAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAttribute__ctor_m8EE081D1C734EC6E7FD78F5801C70A0B7BD37AAE (UniqueAttribute_t25165168729557BB3370180332A89CADE7CD84AC * __this, const RuntimeMethod* method)
{
	{
		IndexedAttribute__ctor_m77A2F1BC92BF163E732E5B00E61C582431AB38F0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SQLite4Unity3d.UniqueAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAttribute__ctor_mEDFF8CBAF9801BDBFABB887DF93D216A031FBB04 (UniqueAttribute_t25165168729557BB3370180332A89CADE7CD84AC * __this, String_t* ___name0, int32_t ___order1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___order1;
		IndexedAttribute__ctor_mF0D7BAA30355C5DED94A78E0129B684741B75C06(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void ScriptablePalette::GeneratePalette()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptablePalette_GeneratePalette_mB0325036823EE105DAB91713A050F4F9C89A9420 (ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptablePalette_GeneratePalette_mB0325036823EE105DAB91713A050F4F9C89A9420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (0.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_m_keyColor_5();
		Color_RGBToHSV_mC081696C8CED37B1B49D2A1321979DDAA3E2241B(L_0, (float*)(&V_0), (float*)(&V_1), (float*)(&V_2), /*hidden argument*/NULL);
		float L_1 = V_0;
		float L_2 = __this->get_m_hueRange_7();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		float L_3 = V_0;
		float L_4 = __this->get_m_hueRange_7();
		V_4 = ((float)il2cpp_codegen_add((float)L_3, (float)L_4));
		float L_5 = V_1;
		float L_6 = __this->get_m_saturationRange_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_5 = L_7;
		float L_8 = V_1;
		float L_9 = __this->get_m_saturationRange_8();
		float L_10 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_add((float)L_8, (float)L_9)), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_6 = L_10;
		float L_11 = V_2;
		float L_12 = __this->get_m_valueRange_9();
		float L_13 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_7 = L_13;
		float L_14 = V_2;
		float L_15 = __this->get_m_valueRange_9();
		float L_16 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)il2cpp_codegen_add((float)L_14, (float)L_15)), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_8 = L_16;
		int32_t L_17 = __this->get_m_numColors_4();
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_18 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var, (uint32_t)L_17);
		__this->set_m_colors_6(L_18);
		V_9 = 0;
		goto IL_00d3;
	}

IL_00b0:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_19 = __this->get_m_colors_6();
		int32_t L_20 = V_9;
		float L_21 = V_3;
		float L_22 = V_4;
		float L_23 = V_5;
		float L_24 = V_6;
		float L_25 = V_7;
		float L_26 = V_8;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_27 = Random_ColorHSV_m751082C814D8AD8DE57E5B767B08218F3343FF70(L_21, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_27);
		int32_t L_28 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00d3:
	{
		int32_t L_29 = V_9;
		int32_t L_30 = __this->get_m_numColors_4();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00b0;
		}
	}
	{
		return;
	}
}
// System.Void ScriptablePalette::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptablePalette__ctor_mCEA72BA7341E18DBD7BAA5DFAEED78DCE7AEFC12 (ScriptablePalette_t059E4E524B58AEEA43DF7A800B2731A18D1AC20A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_numColors_4(3);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_m_keyColor_5(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_m_baseColor_Override_13(L_1);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_m_detailColor1_Override_14(L_2);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_m_detailColor2_Override_15(L_3);
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
// System.Void SetCameraHeight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCameraHeight_Start_m78793D5FDEBB1C786DC7769369F8FCFD89710C6A (SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetCameraHeight_Start_m78793D5FDEBB1C786DC7769369F8FCFD89710C6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * L_0 = __this->get__map_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * L_2 = Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D(/*hidden argument*/Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D_RuntimeMethod_var);
		__this->set__map_4(L_2);
	}

IL_0019:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get__referenceCamera_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = Object_FindObjectOfType_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m807C070DCBD260C48DCA9A6267F38EF36112604A(/*hidden argument*/Object_FindObjectOfType_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m807C070DCBD260C48DCA9A6267F38EF36112604A_RuntimeMethod_var);
		__this->set__referenceCamera_5(L_5);
	}

IL_0032:
	{
		return;
	}
}
// System.Void SetCameraHeight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCameraHeight_Update_m0C6392E41975CB983EE967D9D0C8038B8D43606E (SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get__referenceCamera_5();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * L_3 = __this->get__map_4();
		AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * L_4 = __this->get__map_4();
		NullCheck(L_4);
		Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  L_5 = AbstractMap_get_CenterLatitudeLongitude_m040E2D8564A40DCE8A7BB03362634EE97C3DCC34(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		float L_6 = VirtFuncInvoker1< float, Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  >::Invoke(45 /* System.Single Mapbox.Unity.Map.AbstractMap::QueryElevationInMetersAt(Mapbox.Utils.Vector2d) */, L_3, L_5);
		float L_7 = __this->get__cameraOffset_6();
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = __this->get__referenceCamera_5();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		NullCheck(L_9);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SetCameraHeight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCameraHeight__ctor_mFCB67CFA01A168C5F3ED09BD1BCD264BDC3BB054 (SetCameraHeight_t48F7F844A6D653B8E6D6C451AD9C4C2A8125A269 * __this, const RuntimeMethod* method)
{
	{
		__this->set__cameraOffset_6((100.0f));
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
// System.Void TerrainDataFetcher::FetchData(DataFetcherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataFetcher_FetchData_m589B910983DD21BC69F2A96A480C5E379E75C34F (TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * __this, DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainDataFetcher_FetchData_m589B910983DD21BC69F2A96A480C5E379E75C34F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_0 = (U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mB7D6D919F85BD94D5F376D4C7D087A9DEA07A913(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_2 = V_0;
		DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * L_3 = ___parameters0;
		NullCheck(L_2);
		L_2->set_terrainDataParameters_0(((TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 *)IsInstClass((RuntimeObject*)L_3, TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_4 = V_0;
		NullCheck(L_4);
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_5 = L_4->get_terrainDataParameters_0();
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_6 = V_0;
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_7 = (RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B *)il2cpp_codegen_object_new(RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B_il2cpp_TypeInfo_var);
		RawPngRasterTile__ctor_m4ECEE5616810A555D183EC3FA208827ADCC957AF(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_pngRasterTile_1(L_7);
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_8 = V_0;
		NullCheck(L_8);
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_9 = L_8->get_pngRasterTile_1();
		MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * L_10 = ((DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 *)__this)->get__fileSource_4();
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_11 = V_0;
		NullCheck(L_11);
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_12 = L_11->get_terrainDataParameters_0();
		NullCheck(L_12);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_13 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_12)->get_canonicalTileId_0();
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_14 = V_0;
		NullCheck(L_14);
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_15 = L_14->get_terrainDataParameters_0();
		NullCheck(L_15);
		String_t* L_16 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_15)->get_tilesetId_1();
		U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * L_17 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_18 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m3B61531B00F2F5003DD87D1D07D8A527D2B475ED_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317(L_9, L_10, L_13, L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TerrainDataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataFetcher__ctor_m15F944FB7EB0DDB6F45FEC828197B14CD9599030 (TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainDataFetcher__ctor_m15F944FB7EB0DDB6F45FEC828197B14CD9599030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * G_B2_0 = NULL;
	TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * G_B2_1 = NULL;
	Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * G_B1_0 = NULL;
	TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * G_B1_1 = NULL;
	Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * G_B4_0 = NULL;
	TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * G_B4_1 = NULL;
	Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * G_B3_0 = NULL;
	TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var);
		Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * L_0 = ((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var);
		U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * L_2 = ((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * L_3 = (Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 *)il2cpp_codegen_object_new(Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4_il2cpp_TypeInfo_var);
		Action_2__ctor_mD9B22521944666091E201032CAF210456BFEFDF5(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_0_m0F4D2AEF5D7FE91EEA1C026D30D5361B2CFDADB6_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD9B22521944666091E201032CAF210456BFEFDF5_RuntimeMethod_var);
		Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * L_4 = L_3;
		((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_DataRecieved_5(G_B2_0);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var);
		Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * L_5 = ((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->get_U3CU3E9__3_1_2();
		Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var);
		U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * L_7 = ((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * L_8 = (Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 *)il2cpp_codegen_object_new(Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97_il2cpp_TypeInfo_var);
		Action_3__ctor_mD917EF4D7158E5C1095435B19BD2467208BD2C14(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_1_m2A7F77CE5C4E4A51A5C3BBF11D01AAEE8D601853_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD917EF4D7158E5C1095435B19BD2467208BD2C14_RuntimeMethod_var);
		Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * L_9 = L_8;
		((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->set_U3CU3E9__3_1_2(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_FetchingError_6(G_B4_0);
		DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E(__this, /*hidden argument*/NULL);
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
// System.Void TerrainDataFetcher_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2FE3F2DA7FB27BFA40DBBADCD9AC9C137DB42B76 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2FE3F2DA7FB27BFA40DBBADCD9AC9C137DB42B76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * L_0 = (U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 *)il2cpp_codegen_object_new(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82AA74F4EC37979908BF6B1737854CD41D70C107(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TerrainDataFetcher_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82AA74F4EC37979908BF6B1737854CD41D70C107 (U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TerrainDataFetcher_<>c::<.ctor>b__3_0(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_m0F4D2AEF5D7FE91EEA1C026D30D5361B2CFDADB6 (U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * ___s1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TerrainDataFetcher_<>c::<.ctor>b__3_1(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.RawPngRasterTile,Mapbox.Map.TileErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_1_m2A7F77CE5C4E4A51A5C3BBF11D01AAEE8D601853 (U3CU3Ec_tEE1362DD0C74B1B5D2DAFCC6D96E7B45A5499D36 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * ___r1, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * ___s2, const RuntimeMethod* method)
{
	{
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
// System.Void TerrainDataFetcher_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mB7D6D919F85BD94D5F376D4C7D087A9DEA07A913 (U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TerrainDataFetcher_<>c__DisplayClass2_0::<FetchData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m3B61531B00F2F5003DD87D1D07D8A527D2B475ED (U3CU3Ec__DisplayClass2_0_t9E37D85BF6B61BC99A32EA34F1B3D1409A8857CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m3B61531B00F2F5003DD87D1D07D8A527D2B475ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_0 = __this->get_terrainDataParameters_0();
		NullCheck(L_0);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_1 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_0)->get_tile_2();
		NullCheck(L_1);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_2 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90(L_1, /*hidden argument*/NULL);
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_3 = __this->get_pngRasterTile_1();
		NullCheck(L_3);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_4 = Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112(L_3, /*hidden argument*/NULL);
		bool L_5 = CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_6 = __this->get_pngRasterTile_1();
		NullCheck(L_6);
		bool L_7 = Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		Action_3_t690D314124BE7AC5F5F6024BB00E3140D5B2CA97 * L_9 = L_8->get_FetchingError_6();
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_10 = __this->get_terrainDataParameters_0();
		NullCheck(L_10);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_11 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_10)->get_tile_2();
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_12 = __this->get_pngRasterTile_1();
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_13 = __this->get_terrainDataParameters_0();
		NullCheck(L_13);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_14 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_13)->get_canonicalTileId_0();
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_15 = __this->get_pngRasterTile_1();
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_15, /*hidden argument*/NULL);
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_17 = __this->get_pngRasterTile_1();
		NullCheck(L_17);
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_18 = Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795(L_17, /*hidden argument*/NULL);
		TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * L_19 = (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *)il2cpp_codegen_object_new(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var);
		TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC(L_19, L_14, L_16, (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *)NULL, L_18, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_3_Invoke_m36A74C0F51F3F7363F9B4E0254CAFE09FB5F0CF7(L_9, L_11, L_12, L_19, /*hidden argument*/Action_3_Invoke_m36A74C0F51F3F7363F9B4E0254CAFE09FB5F0CF7_RuntimeMethod_var);
		return;
	}

IL_0079:
	{
		TerrainDataFetcher_tC34FE9B046B22342FBB6CC34E40F322402C40CC0 * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		Action_2_tB73D173D4601DDE2D2386E443569389A8005B1B4 * L_21 = L_20->get_DataRecieved_5();
		TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * L_22 = __this->get_terrainDataParameters_0();
		NullCheck(L_22);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_23 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_22)->get_tile_2();
		RawPngRasterTile_tAC2ECFFA7A15D86CC398894386A614DE6E57A85B * L_24 = __this->get_pngRasterTile_1();
		NullCheck(L_21);
		Action_2_Invoke_m6D89D340A7C98D5B1F68AF4C5C82089C1F89226D(L_21, L_23, L_24, /*hidden argument*/Action_2_Invoke_m6D89D340A7C98D5B1F68AF4C5C82089C1F89226D_RuntimeMethod_var);
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
// System.Void TerrainDataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataFetcherParameters__ctor_mDD709C8747AC91DD6A73B795C0A312F934192B82 (TerrainDataFetcherParameters_t6705CB0CFD884B5D4EB92141FFD61F343225ECE5 * __this, const RuntimeMethod* method)
{
	{
		DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB(__this, /*hidden argument*/NULL);
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
// System.Void UniAndroidPermission::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_Awake_mDD50719323906FDCE4AD412A4F31EB1E553F1342 (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_Awake_mDD50719323906FDCE4AD412A4F31EB1E553F1342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UniAndroidPermission::IsPermitted(AndroidPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniAndroidPermission_IsPermitted_mA2DD4D9F3D52E527349BE9C00BFC6DB89B26ADCD (int32_t ___permission0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void UniAndroidPermission::RequestPermission(AndroidPermission,System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_RequestPermission_mC409DDDAA9B7FB39107CD30F5710D15545BBA5F5 (int32_t ___permission0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onAllow1, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onDeny2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onDenyAndNeverAskAgain3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_RequestPermission_mC409DDDAA9B7FB39107CD30F5710D15545BBA5F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral6C228A31E91B9DCF1AEEAF78DD9E8675C29A0029, /*hidden argument*/NULL);
		return;
	}
}
// System.String UniAndroidPermission::GetPermittionStr(AndroidPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniAndroidPermission_GetPermittionStr_mEABB61BDF5C0DF36EF60FAF7AE17B4A515EEA62A (int32_t ___permittion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_GetPermittionStr_mEABB61BDF5C0DF36EF60FAF7AE17B4A515EEA62A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(AndroidPermission_t4A345C97B8FA7FAC6D2CDB6DB39FC61D246A0991_il2cpp_TypeInfo_var, (&___permittion0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___permittion0 = *(int32_t*)UnBox(L_0);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral57FB6DB1B8DAC827F8F67C072E2536E9BF969E69, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniAndroidPermission::OnAllow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_OnAllow_m19D70D9D4B87E2738424AA20923CCFC820646D56 (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_OnAllow_m19D70D9D4B87E2738424AA20923CCFC820646D56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->get_onAllowCallback_5();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->get_onAllowCallback_5();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniAndroidPermission::OnDeny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_OnDeny_mD949E59892FBB80C71F58FBB289541C8446F589C (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_OnDeny_mD949E59892FBB80C71F58FBB289541C8446F589C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->get_onDenyCallback_6();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->get_onDenyCallback_6();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniAndroidPermission::OnDenyAndNeverAskAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_OnDenyAndNeverAskAgain_mBB96CB98551816D4AF9D10A75A35960DA80C1E4B (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_OnDenyAndNeverAskAgain_mBB96CB98551816D4AF9D10A75A35960DA80C1E4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->get_onDenyAndNeverAskAgainCallback_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->get_onDenyAndNeverAskAgainCallback_7();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniAndroidPermission::ResetAllCallBacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52 (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniAndroidPermission_ResetAllCallBacks_m3923048F2F076ABECC1764440C57FA6161F8EF52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->set_onAllowCallback_5((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL);
		((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->set_onDenyCallback_6((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL);
		((UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_StaticFields*)il2cpp_codegen_static_fields_for(UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46_il2cpp_TypeInfo_var))->set_onDenyAndNeverAskAgainCallback_7((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL);
		return;
	}
}
// System.Void UniAndroidPermission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniAndroidPermission__ctor_mC9B92E8E5864A87FB60383F4E52C338DAC4096BF (UniAndroidPermission_tAA43D9FE219ECF540519BCBA37FBED327A370A46 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void VectorDataFetcher::FetchData(DataFetcherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A (VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * __this, DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * V_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B4_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B3_0 = NULL;
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * G_B5_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B5_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_0 = (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_2 = V_0;
		DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * L_3 = ___parameters0;
		NullCheck(L_2);
		L_2->set_vectorDaraParameters_0(((VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 *)IsInstClass((RuntimeObject*)L_3, VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_4 = V_0;
		NullCheck(L_4);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_5 = L_4->get_vectorDaraParameters_0();
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_6 = V_0;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_7 = V_0;
		NullCheck(L_7);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_8 = L_7->get_vectorDaraParameters_0();
		NullCheck(L_8);
		bool L_9 = L_8->get_useOptimizedStyle_3();
		G_B3_0 = L_6;
		if (L_9)
		{
			G_B4_0 = L_6;
			goto IL_0037;
		}
	}
	{
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_10 = (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *)il2cpp_codegen_object_new(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var);
		VectorTile__ctor_m2275A9D738A4FF18395A59BCB41069263B03E58C(L_10, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		goto IL_005c;
	}

IL_0037:
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_11 = V_0;
		NullCheck(L_11);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_12 = L_11->get_vectorDaraParameters_0();
		NullCheck(L_12);
		Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * L_13 = L_12->get_style_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_Id_1();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_15 = V_0;
		NullCheck(L_15);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_16 = L_15->get_vectorDaraParameters_0();
		NullCheck(L_16);
		Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * L_17 = L_16->get_style_4();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_Modified_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_19 = (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *)il2cpp_codegen_object_new(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var);
		VectorTile__ctor_mE5F5D290EDC3E470D0D26E6F77479EE7E3BE83A1(L_19, L_14, L_18, /*hidden argument*/NULL);
		G_B5_0 = L_19;
		G_B5_1 = G_B4_0;
	}

IL_005c:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_vectorTile_1(G_B5_0);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_20 = V_0;
		NullCheck(L_20);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_21 = L_20->get_vectorDaraParameters_0();
		NullCheck(L_21);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_22 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_21)->get_tile_2();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_23 = V_0;
		NullCheck(L_23);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_24 = L_23->get_vectorTile_1();
		NullCheck(L_22);
		UnityTile_AddTile_mB9B6E64A7668B08A82FA710755EEA53821FB2784(L_22, L_24, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_25 = V_0;
		NullCheck(L_25);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_26 = L_25->get_vectorTile_1();
		MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * L_27 = ((DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 *)__this)->get__fileSource_4();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_28 = V_0;
		NullCheck(L_28);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_29 = L_28->get_vectorDaraParameters_0();
		NullCheck(L_29);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_30 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_29)->get_tile_2();
		NullCheck(L_30);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_31 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90(L_30, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_32 = V_0;
		NullCheck(L_32);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_33 = L_32->get_vectorDaraParameters_0();
		NullCheck(L_33);
		String_t* L_34 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_33)->get_tilesetId_1();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_35 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_36 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_36, L_35, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317(L_26, L_27, L_31, L_34, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3 (VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * G_B2_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B2_1 = NULL;
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * G_B1_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B1_1 = NULL;
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * G_B4_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B4_1 = NULL;
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * G_B3_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_0 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_2 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_3 = (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *)il2cpp_codegen_object_new(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6_il2cpp_TypeInfo_var);
		Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72_RuntimeMethod_var);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_4 = L_3;
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_DataRecieved_5(G_B2_0);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_5 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9__3_1_2();
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_7 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_8 = (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *)il2cpp_codegen_object_new(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E_il2cpp_TypeInfo_var);
		Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605_RuntimeMethod_var);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_9 = L_8;
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9__3_1_2(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_FetchingError_6(G_B4_0);
		DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E(__this, /*hidden argument*/NULL);
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
// System.Void VectorDataFetcher_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_0 = (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A *)il2cpp_codegen_object_new(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void VectorDataFetcher_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher_<>c::<.ctor>b__3_0(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07 (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___s1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VectorDataFetcher_<>c::<.ctor>b__3_1(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524 (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___r1, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * ___s2, const RuntimeMethod* method)
{
	{
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
// System.Void VectorDataFetcher_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher_<>c__DisplayClass2_0::<FetchData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_0 = __this->get_vectorDaraParameters_0();
		NullCheck(L_0);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_1 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_0)->get_tile_2();
		NullCheck(L_1);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_2 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90(L_1, /*hidden argument*/NULL);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_3 = __this->get_vectorTile_1();
		NullCheck(L_3);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_4 = Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112(L_3, /*hidden argument*/NULL);
		bool L_5 = CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_6 = __this->get_vectorTile_1();
		NullCheck(L_6);
		bool L_7 = Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_9 = L_8->get_FetchingError_6();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_10 = __this->get_vectorDaraParameters_0();
		NullCheck(L_10);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_11 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_10)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_12 = __this->get_vectorTile_1();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_13 = __this->get_vectorDaraParameters_0();
		NullCheck(L_13);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_14 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_13)->get_tile_2();
		NullCheck(L_14);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_15 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90(L_14, /*hidden argument*/NULL);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_16 = __this->get_vectorTile_1();
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_16, /*hidden argument*/NULL);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_18 = __this->get_vectorDaraParameters_0();
		NullCheck(L_18);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_19 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_18)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_20 = __this->get_vectorTile_1();
		NullCheck(L_20);
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_21 = Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795(L_20, /*hidden argument*/NULL);
		TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * L_22 = (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *)il2cpp_codegen_object_new(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var);
		TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC(L_22, L_15, L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569(L_9, L_11, L_12, L_22, /*hidden argument*/Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569_RuntimeMethod_var);
		return;
	}

IL_0088:
	{
		VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * L_23 = __this->get_U3CU3E4__this_2();
		NullCheck(L_23);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_24 = L_23->get_DataRecieved_5();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_25 = __this->get_vectorDaraParameters_0();
		NullCheck(L_25);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_26 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_25)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_27 = __this->get_vectorTile_1();
		NullCheck(L_24);
		Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC(L_24, L_26, L_27, /*hidden argument*/Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC_RuntimeMethod_var);
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
// System.Void VectorDataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcherParameters__ctor_mF42BBD278B1900C46FD70D163969B12D8405FBD1 (VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * __this, const RuntimeMethod* method)
{
	{
		DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
