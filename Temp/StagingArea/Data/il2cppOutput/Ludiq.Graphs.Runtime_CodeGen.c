﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void Ludiq.ConnectionCollection`3::.ctor()
// 0x00000002 System.Void Ludiq.ConnectionCollectionBase`4::.ctor(TCollection)
// 0x00000003 System.Int32 Ludiq.ConnectionCollectionBase`4::get_Count()
// 0x00000004 System.Boolean Ludiq.ConnectionCollectionBase`4::get_IsReadOnly()
// 0x00000005 System.Collections.Generic.IEnumerator`1<TConnection> Ludiq.ConnectionCollectionBase`4::GetEnumerator()
// 0x00000006 System.Collections.IEnumerator Ludiq.ConnectionCollectionBase`4::System.Collections.IEnumerable.GetEnumerator()
// 0x00000007 System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithSource(TSource)
// 0x00000008 System.Collections.Generic.List`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithSourceNoAlloc(TSource)
// 0x00000009 TConnection Ludiq.ConnectionCollectionBase`4::SingleOrDefaultWithSource(TSource)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithDestination(TDestination)
// 0x0000000B System.Collections.Generic.List`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithDestinationNoAlloc(TDestination)
// 0x0000000C TConnection Ludiq.ConnectionCollectionBase`4::SingleOrDefaultWithDestination(TDestination)
// 0x0000000D System.Void Ludiq.ConnectionCollectionBase`4::Add(TConnection)
// 0x0000000E System.Void Ludiq.ConnectionCollectionBase`4::Clear()
// 0x0000000F System.Boolean Ludiq.ConnectionCollectionBase`4::Contains(TConnection)
// 0x00000010 System.Void Ludiq.ConnectionCollectionBase`4::CopyTo(TConnection[],System.Int32)
// 0x00000011 System.Boolean Ludiq.ConnectionCollectionBase`4::Remove(TConnection)
// 0x00000012 System.Void Ludiq.ConnectionCollectionBase`4::BeforeAdd(TConnection)
// 0x00000013 System.Void Ludiq.ConnectionCollectionBase`4::AfterAdd(TConnection)
// 0x00000014 System.Void Ludiq.ConnectionCollectionBase`4::BeforeRemove(TConnection)
// 0x00000015 System.Void Ludiq.ConnectionCollectionBase`4::AfterRemove(TConnection)
// 0x00000016 System.Void Ludiq.ConnectionCollectionBase`4::AddToDictionaries(TConnection)
// 0x00000017 System.Void Ludiq.ConnectionCollectionBase`4::RemoveFromDictionaries(TConnection)
// 0x00000018 System.Void Ludiq.GraphConnectionCollection`3::.ctor(Ludiq.IGraph)
// 0x00000019 TConnection Ludiq.GraphConnectionCollection`3::Ludiq.IKeyedCollection<System.Guid,TConnection>.get_Item(System.Guid)
// 0x0000001A TConnection Ludiq.GraphConnectionCollection`3::Ludiq.IKeyedCollection<System.Guid,TConnection>.get_Item(System.Int32)
// 0x0000001B System.Boolean Ludiq.GraphConnectionCollection`3::TryGetValue(System.Guid,TConnection&)
// 0x0000001C System.Boolean Ludiq.GraphConnectionCollection`3::Contains(System.Guid)
// 0x0000001D System.Boolean Ludiq.GraphConnectionCollection`3::Remove(System.Guid)
// 0x0000001E System.Void Ludiq.GraphConnectionCollection`3::add_ItemAdded(System.Action`1<TConnection>)
// 0x0000001F System.Void Ludiq.GraphConnectionCollection`3::remove_ItemAdded(System.Action`1<TConnection>)
// 0x00000020 System.Void Ludiq.GraphConnectionCollection`3::add_ItemRemoved(System.Action`1<TConnection>)
// 0x00000021 System.Void Ludiq.GraphConnectionCollection`3::remove_ItemRemoved(System.Action`1<TConnection>)
// 0x00000022 System.Void Ludiq.GraphConnectionCollection`3::add_CollectionChanged(System.Action)
// 0x00000023 System.Void Ludiq.GraphConnectionCollection`3::remove_CollectionChanged(System.Action)
// 0x00000024 System.Void Ludiq.GraphConnectionCollection`3::BeforeAdd(TConnection)
// 0x00000025 System.Void Ludiq.GraphConnectionCollection`3::AfterAdd(TConnection)
// 0x00000026 System.Void Ludiq.GraphConnectionCollection`3::BeforeRemove(TConnection)
// 0x00000027 System.Void Ludiq.GraphConnectionCollection`3::AfterRemove(TConnection)
// 0x00000028 TSource Ludiq.IConnection`2::get_source()
// 0x00000029 TDestination Ludiq.IConnection`2::get_destination()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.IConnectionCollection`3::WithSource(TSource)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.IConnectionCollection`3::WithDestination(TDestination)
// 0x0000002C System.Void Ludiq.InvalidConnectionException::.ctor()
extern void InvalidConnectionException__ctor_mE7C4DEEC66970EB73A3340A6D5CA388C0E1A1FD2 (void);
// 0x0000002D System.Void Ludiq.InvalidConnectionException::.ctor(System.String)
extern void InvalidConnectionException__ctor_mD8319B7F287D03526963BFEB25377BC971F6889A (void);
// 0x0000002E System.Void Ludiq.GraphInstances::Instantiate(Ludiq.GraphReference)
extern void GraphInstances_Instantiate_mA601CD77033AD998E4D3FD283275E5C845F4A90C (void);
// 0x0000002F System.Void Ludiq.GraphInstances::Uninstantiate(Ludiq.GraphReference)
extern void GraphInstances_Uninstantiate_m6B7C0DE3F3A1BDDC67AA775E29467FAA879D8DF7 (void);
// 0x00000030 System.Collections.Generic.HashSet`1<Ludiq.GraphReference> Ludiq.GraphInstances::OfPooled(Ludiq.IGraph)
extern void GraphInstances_OfPooled_mFDCC2BD561DB2B8B8D4382B410CAD1F385904A3A (void);
// 0x00000031 System.Collections.Generic.HashSet`1<Ludiq.GraphReference> Ludiq.GraphInstances::ChildrenOfPooled(Ludiq.IGraphParent)
extern void GraphInstances_ChildrenOfPooled_mEC05A68BB068449F12315B35F5E8243BF0DEE042 (void);
// 0x00000032 System.Void Ludiq.GraphInstances::.cctor()
extern void GraphInstances__cctor_m8039957CE1900D8AFA9CF0DBA9316D8511955A0C (void);
// 0x00000033 System.Void Ludiq.Graph::.ctor()
extern void Graph__ctor_m530D61F109D0CBAF911DFA65667FD42673741906 (void);
// 0x00000034 System.String Ludiq.Graph::ToString()
extern void Graph_ToString_mD9F57F5336A418777ACFEF95DE2BBECB2D299785 (void);
// 0x00000035 Ludiq.IGraphData Ludiq.Graph::CreateData()
// 0x00000036 System.Void Ludiq.Graph::Instantiate(Ludiq.GraphReference)
extern void Graph_Instantiate_m40E977EC3E0FCD92FA180B860A8829FC402E49D2 (void);
// 0x00000037 System.Void Ludiq.Graph::Uninstantiate(Ludiq.GraphReference)
extern void Graph_Uninstantiate_mC9D2BD302D357258B8B98979D8D784C073CF2DE3 (void);
// 0x00000038 Ludiq.MergedGraphElementCollection Ludiq.Graph::get_elements()
extern void Graph_get_elements_mDDF938061575C429F42492EED71312FA75A31B07 (void);
// 0x00000039 System.String Ludiq.Graph::get_title()
extern void Graph_get_title_mEE0138BF9F6954330C9AF7B35FF1865BB71F3986 (void);
// 0x0000003A System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.Graph::get_deserializationDependencies()
extern void Graph_get_deserializationDependencies_mF5ABD6B979ACE0561D9C679B6F5E26102DCC55A5 (void);
// 0x0000003B System.Void Ludiq.Graph::OnBeforeSerialize()
extern void Graph_OnBeforeSerialize_m82A5B0DD480CBAAAE57EFC3F632821F6C4EC579A (void);
// 0x0000003C System.Void Ludiq.Graph::OnAfterDeserialize()
extern void Graph_OnAfterDeserialize_m70BE72D84549D94B1D905641185FAA725CE5D62B (void);
// 0x0000003D System.Void Ludiq.Graph::OnAfterDependenciesDeserialized()
extern void Graph_OnAfterDependenciesDeserialized_mFA3EB45493FAB170293308513CC05AEBC806C2B4 (void);
// 0x0000003E System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Graph::get_aotStubs()
extern void Graph_get_aotStubs_mF41F83551D58871D276E2E7D86CC6D9F86865467 (void);
// 0x0000003F System.Void Ludiq.Graph::Prewarm()
extern void Graph_Prewarm_mC1888FF162A287491E0C7C0A31C834B10D43DD20 (void);
// 0x00000040 System.Void Ludiq.Graph::Dispose()
extern void Graph_Dispose_m86CDF2BCBC841F2D298043D26E67E63BF01C4138 (void);
// 0x00000041 System.Void Ludiq.Graph_<>c::.cctor()
extern void U3CU3Ec__cctor_m479A4FD880388B091A9B31F283A1B2D003D3C339 (void);
// 0x00000042 System.Void Ludiq.Graph_<>c::.ctor()
extern void U3CU3Ec__ctor_m6DCD49EBD2F0A0309866ECD355417AD2A916E698 (void);
// 0x00000043 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.Graph_<>c::<get_deserializationDependencies>b__27_0(Ludiq.IGraphElement)
extern void U3CU3Ec_U3Cget_deserializationDependenciesU3Eb__27_0_m6C33B24240B0D5304D2A0589674BE9F874ECC0D0 (void);
// 0x00000044 System.Int32 Ludiq.Graph_<>c::<OnAfterDependenciesDeserialized>b__30_0(Ludiq.IGraphElement,Ludiq.IGraphElement)
extern void U3CU3Ec_U3COnAfterDependenciesDeserializedU3Eb__30_0_m55390FBA96947B5F4889F0CB56D4025A830DE9B2 (void);
// 0x00000045 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Graph_<>c::<get_aotStubs>b__32_0(Ludiq.IGraphElement)
extern void U3CU3Ec_U3Cget_aotStubsU3Eb__32_0_mF2CEDE79DDB3AA2F11C17D32C306C4D2EC55D030 (void);
// 0x00000046 System.Void Ludiq.GraphElementCollection`1::.ctor(Ludiq.IGraph)
// 0x00000047 Ludiq.IGraph Ludiq.GraphElementCollection`1::get_graph()
// 0x00000048 System.Void Ludiq.GraphElementCollection`1::add_ItemAdded(System.Action`1<TElement>)
// 0x00000049 System.Void Ludiq.GraphElementCollection`1::remove_ItemAdded(System.Action`1<TElement>)
// 0x0000004A System.Void Ludiq.GraphElementCollection`1::add_ItemRemoved(System.Action`1<TElement>)
// 0x0000004B System.Void Ludiq.GraphElementCollection`1::remove_ItemRemoved(System.Action`1<TElement>)
// 0x0000004C System.Void Ludiq.GraphElementCollection`1::add_CollectionChanged(System.Action)
// 0x0000004D System.Void Ludiq.GraphElementCollection`1::remove_CollectionChanged(System.Action)
// 0x0000004E System.Boolean Ludiq.GraphElementCollection`1::get_ProxyCollectionChange()
// 0x0000004F System.Void Ludiq.GraphElementCollection`1::set_ProxyCollectionChange(System.Boolean)
// 0x00000050 System.Void Ludiq.GraphElementCollection`1::BeforeAdd(TElement)
// 0x00000051 System.Void Ludiq.GraphElementCollection`1::AfterAdd(TElement)
// 0x00000052 System.Void Ludiq.GraphElementCollection`1::BeforeRemove(TElement)
// 0x00000053 System.Void Ludiq.GraphElementCollection`1::AfterRemove(TElement)
// 0x00000054 System.Void Ludiq.GraphElementCollection`1::InsertItem(System.Int32,TElement)
// 0x00000055 System.Void Ludiq.GraphElementCollection`1::RemoveItem(System.Int32)
// 0x00000056 System.Void Ludiq.GraphElementCollection`1::ClearItems()
// 0x00000057 System.Void Ludiq.GraphElementCollection`1::SetItem(System.Int32,TElement)
// 0x00000058 Ludiq.NoAllocEnumerator`1<TElement> Ludiq.GraphElementCollection`1::GetEnumerator()
// 0x00000059 System.Void Ludiq.GraphElementCollection`1_<>c::.cctor()
// 0x0000005A System.Void Ludiq.GraphElementCollection`1_<>c::.ctor()
// 0x0000005B System.Int32 Ludiq.GraphElementCollection`1_<>c::<ClearItems>b__23_0(TElement,TElement)
// 0x0000005C System.Void Ludiq.GraphData`1::.ctor(TGraph)
// 0x0000005D System.Collections.Generic.Dictionary`2<Ludiq.IGraphElementWithData,Ludiq.IGraphElementData> Ludiq.GraphData`1::get_elementsData()
// 0x0000005E System.Collections.Generic.Dictionary`2<Ludiq.IGraphParentElement,Ludiq.IGraphData> Ludiq.GraphData`1::get_childrenGraphsData()
// 0x0000005F System.Collections.Generic.Dictionary`2<System.Guid,Ludiq.IGraphElementData> Ludiq.GraphData`1::get_phantomElementsData()
// 0x00000060 System.Collections.Generic.Dictionary`2<System.Guid,Ludiq.IGraphData> Ludiq.GraphData`1::get_phantomChildrenGraphsData()
// 0x00000061 System.Boolean Ludiq.GraphData`1::TryGetElementData(Ludiq.IGraphElementWithData,Ludiq.IGraphElementData&)
// 0x00000062 System.Boolean Ludiq.GraphData`1::TryGetChildGraphData(Ludiq.IGraphParentElement,Ludiq.IGraphData&)
// 0x00000063 Ludiq.IGraphElementData Ludiq.GraphData`1::CreateElementData(Ludiq.IGraphElementWithData)
// 0x00000064 System.Void Ludiq.GraphData`1::FreeElementData(Ludiq.IGraphElementWithData)
// 0x00000065 Ludiq.IGraphData Ludiq.GraphData`1::CreateChildGraphData(Ludiq.IGraphParentElement)
// 0x00000066 System.Void Ludiq.GraphData`1::FreeChildGraphData(Ludiq.IGraphParentElement)
// 0x00000067 Ludiq.IGraphNester Ludiq.GraphNest`2::get_nester()
// 0x00000068 System.Void Ludiq.GraphNest`2::set_nester(Ludiq.IGraphNester)
// 0x00000069 Ludiq.GraphSource Ludiq.GraphNest`2::get_source()
// 0x0000006A System.Void Ludiq.GraphNest`2::set_source(Ludiq.GraphSource)
// 0x0000006B TMacro Ludiq.GraphNest`2::get_macro()
// 0x0000006C System.Void Ludiq.GraphNest`2::set_macro(TMacro)
// 0x0000006D TGraph Ludiq.GraphNest`2::get_embed()
// 0x0000006E System.Void Ludiq.GraphNest`2::set_embed(TGraph)
// 0x0000006F TGraph Ludiq.GraphNest`2::get_graph()
// 0x00000070 Ludiq.IGraph Ludiq.GraphNest`2::Ludiq.IGraphNest.get_graph()
// 0x00000071 System.Void Ludiq.GraphNest`2::add_beforeGraphChange(System.Action)
// 0x00000072 System.Void Ludiq.GraphNest`2::remove_beforeGraphChange(System.Action)
// 0x00000073 System.Void Ludiq.GraphNest`2::add_afterGraphChange(System.Action)
// 0x00000074 System.Void Ludiq.GraphNest`2::remove_afterGraphChange(System.Action)
// 0x00000075 System.Void Ludiq.GraphNest`2::BeforeGraphChange()
// 0x00000076 System.Void Ludiq.GraphNest`2::AfterGraphChange()
// 0x00000077 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.GraphNest`2::get_deserializationDependencies()
// 0x00000078 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.GraphNest`2::get_aotStubs()
// 0x00000079 System.Void Ludiq.GraphNest`2::.ctor()
// 0x0000007A System.Void Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::.ctor(System.Int32)
// 0x0000007B System.Void Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::System.IDisposable.Dispose()
// 0x0000007C System.Boolean Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::MoveNext()
// 0x0000007D Ludiq.ISerializationDependency Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::System.Collections.Generic.IEnumerator<Ludiq.ISerializationDependency>.get_Current()
// 0x0000007E System.Void Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::System.Collections.IEnumerator.Reset()
// 0x0000007F System.Object Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::System.Collections.IEnumerator.get_Current()
// 0x00000080 System.Collections.Generic.IEnumerator`1<Ludiq.ISerializationDependency> Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::System.Collections.Generic.IEnumerable<Ludiq.ISerializationDependency>.GetEnumerator()
// 0x00000081 System.Collections.IEnumerator Ludiq.GraphNest`2_<get_deserializationDependencies>d__41::System.Collections.IEnumerable.GetEnumerator()
// 0x00000082 System.Boolean Ludiq.GraphPointer::IsValidRoot(Ludiq.IGraphRoot)
extern void GraphPointer_IsValidRoot_mF1558A9609B6FA51AF6B4C645F7A1D9447EFF482 (void);
// 0x00000083 System.Void Ludiq.GraphPointer::.ctor()
extern void GraphPointer__ctor_m15C9DCBD68F165E40ED9C8F43EF8C4D96179942F (void);
// 0x00000084 System.Void Ludiq.GraphPointer::Initialize(Ludiq.IGraphRoot)
extern void GraphPointer_Initialize_mB85E8940928801AF66EFB14389ABA5F59AABEFFF (void);
// 0x00000085 Ludiq.GraphReference Ludiq.GraphPointer::AsReference()
// 0x00000086 System.Void Ludiq.GraphPointer::CopyFrom(Ludiq.GraphPointer)
extern void GraphPointer_CopyFrom_m9F24A99CA5C32CB5BD9FC4773D28CDD770B02E85 (void);
// 0x00000087 Ludiq.IGraphRoot Ludiq.GraphPointer::get_root()
extern void GraphPointer_get_root_m38F09EBCADFAF169289171B02E9786E4509AC091 (void);
// 0x00000088 System.Void Ludiq.GraphPointer::set_root(Ludiq.IGraphRoot)
extern void GraphPointer_set_root_mE19F416E366370EED2168689A8FFA7149AB0C7E0 (void);
// 0x00000089 UnityEngine.Object Ludiq.GraphPointer::get_rootObject()
extern void GraphPointer_get_rootObject_mBB86B733774D136A298CDD286401DA3487221B07 (void);
// 0x0000008A Ludiq.IMachine Ludiq.GraphPointer::get_machine()
extern void GraphPointer_get_machine_mAC5E56C2C539702E86AF5214F6D235C2B09F24A6 (void);
// 0x0000008B UnityEngine.MonoBehaviour Ludiq.GraphPointer::get_component()
extern void GraphPointer_get_component_m5A029BECBA01CC287769310AEA7021EE427F3318 (void);
// 0x0000008C UnityEngine.GameObject Ludiq.GraphPointer::get_gameObject()
extern void GraphPointer_get_gameObject_m9528DA2805D82CACA5526A34D15642D6B738B998 (void);
// 0x0000008D System.Void Ludiq.GraphPointer::set_gameObject(UnityEngine.GameObject)
extern void GraphPointer_set_gameObject_mA75870566CB977F12D3EBD9064DA51055178C54E (void);
// 0x0000008E UnityEngine.GameObject Ludiq.GraphPointer::get_self()
extern void GraphPointer_get_self_mBA1362F1E003C6D1C57C26958866B433C69B1B4D (void);
// 0x0000008F System.Nullable`1<UnityEngine.SceneManagement.Scene> Ludiq.GraphPointer::get_scene()
extern void GraphPointer_get_scene_m43554F854C626EA27FAC4EE510F97EDD101D416B (void);
// 0x00000090 UnityEngine.Object Ludiq.GraphPointer::get_serializedObject()
extern void GraphPointer_get_serializedObject_mCC89CA268814BE9CA8F088B0BD9041E54E81AA1B (void);
// 0x00000091 System.Int32 Ludiq.GraphPointer::get_depth()
extern void GraphPointer_get_depth_mB17AFFC55FDD6715E5677CB1248651B0F38EA955 (void);
// 0x00000092 System.Boolean Ludiq.GraphPointer::get_isRoot()
extern void GraphPointer_get_isRoot_mA77361E837F43F4E77D09258FF3B4668166B9D89 (void);
// 0x00000093 System.Boolean Ludiq.GraphPointer::get_isChild()
extern void GraphPointer_get_isChild_mC3D522EA57F7907AB03F2E2EB4951911299EE672 (void);
// 0x00000094 System.Void Ludiq.GraphPointer::EnsureChild()
extern void GraphPointer_EnsureChild_mBF2D1B3E99EDBDD8E918FEB14394DA69B276A61A (void);
// 0x00000095 System.Boolean Ludiq.GraphPointer::IsWithin()
// 0x00000096 System.Void Ludiq.GraphPointer::EnsureWithin()
// 0x00000097 Ludiq.IGraphParent Ludiq.GraphPointer::get_parent()
extern void GraphPointer_get_parent_m2FECE2463EF013F343B42F41DDE093D4338E027A (void);
// 0x00000098 T Ludiq.GraphPointer::GetParent()
// 0x00000099 Ludiq.IGraphParentElement Ludiq.GraphPointer::get_parentElement()
extern void GraphPointer_get_parentElement_mD7670B524C2C9EC7D24A414B79372AC2EBF40BF9 (void);
// 0x0000009A Ludiq.IGraph Ludiq.GraphPointer::get_rootGraph()
extern void GraphPointer_get_rootGraph_mBBD2688C7CFEDF243CD1872C818B291715ED8D69 (void);
// 0x0000009B Ludiq.IGraph Ludiq.GraphPointer::get_graph()
extern void GraphPointer_get_graph_m5F401929B1027C0FDC135C44198E6373C27991C3 (void);
// 0x0000009C Ludiq.IGraphData Ludiq.GraphPointer::get__data()
extern void GraphPointer_get__data_m4BA5F0A596AF63931FFC18E4B6266F822FA70A84 (void);
// 0x0000009D System.Void Ludiq.GraphPointer::set__data(Ludiq.IGraphData)
extern void GraphPointer_set__data_m0A73EB28F40FEB83F06561E1A10CF7AC8ED4F626 (void);
// 0x0000009E Ludiq.IGraphData Ludiq.GraphPointer::get_data()
extern void GraphPointer_get_data_m9F040167E297F88A733F30F209F24A3A8F27C1BB (void);
// 0x0000009F Ludiq.IGraphData Ludiq.GraphPointer::get__parentData()
extern void GraphPointer_get__parentData_mC4602C28088019DD1CA0F2DAA3F324408D22F410 (void);
// 0x000000A0 System.Boolean Ludiq.GraphPointer::get_hasData()
extern void GraphPointer_get_hasData_m1D1313525C21F7718E37394CF9514494A2C25852 (void);
// 0x000000A1 System.Void Ludiq.GraphPointer::EnsureDataAvailable()
extern void GraphPointer_EnsureDataAvailable_mD5994EBAFD4AF5A9BE3DA462AF65D770E036E660 (void);
// 0x000000A2 T Ludiq.GraphPointer::GetGraphData()
// 0x000000A3 T Ludiq.GraphPointer::GetElementData(Ludiq.IGraphElementWithData)
// 0x000000A4 System.Func`2<Ludiq.IGraphRoot,Ludiq.IGraphDebugData> Ludiq.GraphPointer::get_fetchRootDebugDataBinding()
extern void GraphPointer_get_fetchRootDebugDataBinding_m0F5BCEA34F342E3973ECFA3B4600FA4A95F70510 (void);
// 0x000000A5 System.Boolean Ludiq.GraphPointer::get_hasDebugData()
extern void GraphPointer_get_hasDebugData_m2192D4A4DB3F4278424DCDF6C191131025043C42 (void);
// 0x000000A6 System.Void Ludiq.GraphPointer::EnsureDebugDataAvailable()
extern void GraphPointer_EnsureDebugDataAvailable_m7F1887752637634FFE50AC324803337DA0676CA6 (void);
// 0x000000A7 Ludiq.IGraphDebugData Ludiq.GraphPointer::get__debugData()
extern void GraphPointer_get__debugData_m7827B40CA0D31AEC1ED3D8B45BC01E92477D91AB (void);
// 0x000000A8 Ludiq.IGraphDebugData Ludiq.GraphPointer::get_debugData()
extern void GraphPointer_get_debugData_m52C55012F8E013B11B98DBA41760BE0F746F59C2 (void);
// 0x000000A9 T Ludiq.GraphPointer::GetElementDebugData(Ludiq.IGraphElementWithDebugData)
// 0x000000AA System.Boolean Ludiq.GraphPointer::TryEnterParentElement(Ludiq.IGraphParentElement,System.String&,System.Nullable`1<System.Int32>,System.Boolean)
extern void GraphPointer_TryEnterParentElement_m3802940F379639FC7E9090477A1D61460BF53B56 (void);
// 0x000000AB System.Void Ludiq.GraphPointer::EnterParentElement(Ludiq.IGraphParentElement)
extern void GraphPointer_EnterParentElement_m28B50AF7E3076FADA813D55D303BC1B99ACB0A07 (void);
// 0x000000AC System.Void Ludiq.GraphPointer::EnterValidParentElement(Ludiq.IGraphParentElement)
extern void GraphPointer_EnterValidParentElement_m428253B9634279D120B77452CCFA2B8B832AAADC (void);
// 0x000000AD System.Void Ludiq.GraphPointer::ExitParentElement()
extern void GraphPointer_ExitParentElement_m6152E5AFCB987A6421FB0F38AC50E49012D2988A (void);
// 0x000000AE System.Boolean Ludiq.GraphPointer::get_isValid()
extern void GraphPointer_get_isValid_m76E25656E88C87C9E76D4738A78717EA75C11444 (void);
// 0x000000AF System.Boolean Ludiq.GraphPointer::InstanceEquals(Ludiq.GraphPointer)
extern void GraphPointer_InstanceEquals_mF188D02D6D456924FFCE6A9CB0689E4D4BDD8C7B (void);
// 0x000000B0 System.Boolean Ludiq.GraphPointer::DefinitionEquals(Ludiq.GraphPointer)
extern void GraphPointer_DefinitionEquals_m1E6E575A7666584B234F27676BE06AC076144530 (void);
// 0x000000B1 System.Int32 Ludiq.GraphPointer::ComputeHashCode()
extern void GraphPointer_ComputeHashCode_m9105F84CC3F0672765839D9E99905B938DBC85DE (void);
// 0x000000B2 System.String Ludiq.GraphPointer::ToString()
extern void GraphPointer_ToString_mBDC69C7B5B3A8C1A1623F517927BA7775A02E008 (void);
// 0x000000B3 System.Void Ludiq.GraphPointerException::.ctor(System.String,Ludiq.GraphPointer)
extern void GraphPointerException__ctor_m257322DCF0BF747E1A40E0BD496767926DBADCC8 (void);
// 0x000000B4 System.Void Ludiq.GraphReference::.cctor()
extern void GraphReference__cctor_m4437B1642A87D1B6C4A781D00CD5D46FF60A64BA (void);
// 0x000000B5 System.Void Ludiq.GraphReference::.ctor()
extern void GraphReference__ctor_m7FEF14F0FF532AE066E5BC3C325039C8A490460E (void);
// 0x000000B6 Ludiq.GraphReference Ludiq.GraphReference::New(Ludiq.IGraphRoot,System.Boolean)
extern void GraphReference_New_m604651552D7A48AEDC6F9095F922776808B90CD3 (void);
// 0x000000B7 Ludiq.GraphReference Ludiq.GraphReference::New(Ludiq.GraphPointer)
extern void GraphReference_New_mC2723AFCA7DDB27FE2D28F1D8130F92CD38F680C (void);
// 0x000000B8 System.Void Ludiq.GraphReference::CopyFrom(Ludiq.GraphPointer)
extern void GraphReference_CopyFrom_m091B7729E0D702335A577783CFC8E09506426C34 (void);
// 0x000000B9 Ludiq.GraphReference Ludiq.GraphReference::Clone()
extern void GraphReference_Clone_m315699D6FFB55309275CFF13EDEA4503EB54C518 (void);
// 0x000000BA Ludiq.GraphReference Ludiq.GraphReference::AsReference()
extern void GraphReference_AsReference_m00172D6505C4FF968F5BAF04CEA662848AFF91F2 (void);
// 0x000000BB Ludiq.GraphStack Ludiq.GraphReference::ToStackPooled()
extern void GraphReference_ToStackPooled_m68D650ED4CD20382BF3BB1C637134A5D20B46E30 (void);
// 0x000000BC System.Void Ludiq.GraphReference::CreateGraphData()
extern void GraphReference_CreateGraphData_m71198EC25EEED08AA8CED6E6D34D538EA5C609BD (void);
// 0x000000BD System.Void Ludiq.GraphReference::FreeGraphData()
extern void GraphReference_FreeGraphData_mBEE71D680135C3143FE7870F89245B616A970D69 (void);
// 0x000000BE System.Boolean Ludiq.GraphReference::Equals(System.Object)
extern void GraphReference_Equals_m725C8E86FEAA87942B46DA0540DAA435BBAFDF8F (void);
// 0x000000BF System.Void Ludiq.GraphReference::Hash()
extern void GraphReference_Hash_m2C9E9A8068F6BF1A8CF43CD183B6F845D479ACAC (void);
// 0x000000C0 System.Int32 Ludiq.GraphReference::GetHashCode()
extern void GraphReference_GetHashCode_m1E50FDB8C03FCCAD42A6377E1A12E87CC26EE203 (void);
// 0x000000C1 System.Boolean Ludiq.GraphReference::op_Equality(Ludiq.GraphReference,Ludiq.GraphReference)
extern void GraphReference_op_Equality_m65E2F3AE8FDAA942E1600FEE086ACE7218C4B462 (void);
// 0x000000C2 System.Boolean Ludiq.GraphReference::op_Inequality(Ludiq.GraphReference,Ludiq.GraphReference)
extern void GraphReference_op_Inequality_mAE259A4ED1A2656C731618EB224E107B74116C65 (void);
// 0x000000C3 Ludiq.GraphReference Ludiq.GraphReference::ParentReference(System.Boolean)
extern void GraphReference_ParentReference_m24EF487044970147CD949DFC16B915C2E465A591 (void);
// 0x000000C4 Ludiq.GraphReference Ludiq.GraphReference::ChildReference(Ludiq.IGraphParentElement,System.Boolean,System.Nullable`1<System.Int32>)
extern void GraphReference_ChildReference_m3DA0AC00AA5A695C3B1B597D1C6B927014D7DEC8 (void);
// 0x000000C5 Ludiq.GraphReference Ludiq.GraphReference::Intern(Ludiq.GraphPointer)
extern void GraphReference_Intern_m7F234E32919A5BDBC1FBE61EC6AB83B6ACE1B449 (void);
// 0x000000C6 System.Void Ludiq.GraphReference::FreeInvalidInterns()
extern void GraphReference_FreeInvalidInterns_mECC4C9FD55D21C0005D856783162DA23CF057ACA (void);
// 0x000000C7 System.Void Ludiq.GraphsExceptionUtility::SetException(Ludiq.IGraphElementWithDebugData,Ludiq.GraphPointer,System.Exception)
extern void GraphsExceptionUtility_SetException_m57F3DE767E1E16EF344A4309119E784AAA735BAA (void);
// 0x000000C8 System.Void Ludiq.GraphsExceptionUtility::HandleException(Ludiq.IGraphElementWithDebugData,Ludiq.GraphPointer,System.Exception)
extern void GraphsExceptionUtility_HandleException_m7228170A36B3BBFC3BD039C888052C2D2340723D (void);
// 0x000000C9 System.Boolean Ludiq.GraphsExceptionUtility::HandledIn(System.Exception,Ludiq.GraphReference)
extern void GraphsExceptionUtility_HandledIn_m4395B1F713C977B3197334B3B29265E030AF184F (void);
// 0x000000CA System.Void Ludiq.GraphStack::.ctor()
extern void GraphStack__ctor_m9FE555920221411DFA29D627F778906CDD11ECB8 (void);
// 0x000000CB Ludiq.GraphStack Ludiq.GraphStack::New(Ludiq.GraphPointer)
extern void GraphStack_New_m1C203B75F7D5D15783BDFFBAD7824F3444084A00 (void);
// 0x000000CC Ludiq.GraphStack Ludiq.GraphStack::Clone()
extern void GraphStack_Clone_mEB8B52FA22275694A156887D88C34DE59A71425B (void);
// 0x000000CD System.Void Ludiq.GraphStack::Dispose()
extern void GraphStack_Dispose_m85D0399453D716897EA2FFE557DF3B4C912A6BE0 (void);
// 0x000000CE System.Void Ludiq.GraphStack::Ludiq.IPoolable.New()
extern void GraphStack_Ludiq_IPoolable_New_m781F799375919ABCE2F56A327D5520EF5C6E15B5 (void);
// 0x000000CF System.Void Ludiq.GraphStack::Ludiq.IPoolable.Free()
extern void GraphStack_Ludiq_IPoolable_Free_m8631D907CA52682102E599CA134F43F28EA8E8AB (void);
// 0x000000D0 Ludiq.GraphReference Ludiq.GraphStack::AsReference()
extern void GraphStack_AsReference_mB31AAF945DBCED254AF83A14842643620A04B956 (void);
// 0x000000D1 Ludiq.GraphReference Ludiq.GraphStack::ToReference()
extern void GraphStack_ToReference_m9F6DE72E97DCB8087BB2209A9BADA5FE95B0D3CC (void);
// 0x000000D2 System.Void Ludiq.GraphStack::EnterParentElement(Ludiq.IGraphParentElement)
extern void GraphStack_EnterParentElement_m9E50A8EAFD03848B852B9381198441B299B8751A (void);
// 0x000000D3 System.Boolean Ludiq.GraphStack::TryEnterParentElement(Ludiq.IGraphParentElement)
extern void GraphStack_TryEnterParentElement_m9E12B584EFCD6648B7E8F57CD469B5103CEAA18B (void);
// 0x000000D4 System.Boolean Ludiq.GraphStack::TryEnterParentElementUnsafe(Ludiq.IGraphParentElement)
extern void GraphStack_TryEnterParentElementUnsafe_m4A44F7C324734FE03EB00DDA938D24B3D01E1DE1 (void);
// 0x000000D5 System.Void Ludiq.GraphStack::ExitParentElement()
extern void GraphStack_ExitParentElement_m6418FCB578ECD88B40739651060E84AF36AA2A66 (void);
// 0x000000D6 System.Void Ludiq.GraphStack_<>c::.cctor()
extern void U3CU3Ec__cctor_mDAB92622A5852D416CCD692C52ED07CEE0362C4F (void);
// 0x000000D7 System.Void Ludiq.GraphStack_<>c::.ctor()
extern void U3CU3Ec__ctor_m3C14250FCDD7C0FDF62E95964D5A67D75FAF59F2 (void);
// 0x000000D8 Ludiq.GraphStack Ludiq.GraphStack_<>c::<New>b__3_0()
extern void U3CU3Ec_U3CNewU3Eb__3_0_m0D5AD6D524D191797208B536A84C9FA5A593CD95 (void);
// 0x000000D9 Ludiq.MergedGraphElementCollection Ludiq.IGraph::get_elements()
// 0x000000DA Ludiq.IGraphData Ludiq.IGraph::CreateData()
// 0x000000DB System.Void Ludiq.IGraph::Instantiate(Ludiq.GraphReference)
// 0x000000DC System.Void Ludiq.IGraph::Uninstantiate(Ludiq.GraphReference)
// 0x000000DD Ludiq.IGraph Ludiq.IGraphElement::get_graph()
// 0x000000DE System.Void Ludiq.IGraphElement::set_graph(Ludiq.IGraph)
// 0x000000DF System.Boolean Ludiq.IGraphElement::HandleDependencies()
// 0x000000E0 System.Int32 Ludiq.IGraphElement::get_dependencyOrder()
// 0x000000E1 System.Guid Ludiq.IGraphElement::get_guid()
// 0x000000E2 System.Void Ludiq.IGraphElement::Instantiate(Ludiq.GraphReference)
// 0x000000E3 System.Void Ludiq.IGraphElement::Uninstantiate(Ludiq.GraphReference)
// 0x000000E4 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.IGraphElement::get_deserializationDependencies()
// 0x000000E5 System.Guid Ludiq.GraphElement`1::get_guid()
// 0x000000E6 System.Void Ludiq.GraphElement`1::Instantiate(Ludiq.GraphReference)
// 0x000000E7 System.Void Ludiq.GraphElement`1::Uninstantiate(Ludiq.GraphReference)
// 0x000000E8 System.Void Ludiq.GraphElement`1::BeforeAdd()
// 0x000000E9 System.Void Ludiq.GraphElement`1::AfterAdd()
// 0x000000EA System.Void Ludiq.GraphElement`1::BeforeRemove()
// 0x000000EB System.Void Ludiq.GraphElement`1::AfterRemove()
// 0x000000EC System.Void Ludiq.GraphElement`1::Dispose()
// 0x000000ED System.Void Ludiq.GraphElement`1::InstantiateNest()
// 0x000000EE System.Void Ludiq.GraphElement`1::UninstantiateNest()
// 0x000000EF System.Int32 Ludiq.GraphElement`1::get_dependencyOrder()
// 0x000000F0 System.Boolean Ludiq.GraphElement`1::HandleDependencies()
// 0x000000F1 TGraph Ludiq.GraphElement`1::get_graph()
// 0x000000F2 System.Void Ludiq.GraphElement`1::set_graph(TGraph)
// 0x000000F3 Ludiq.IGraph Ludiq.GraphElement`1::Ludiq.IGraphElement.get_graph()
// 0x000000F4 System.Void Ludiq.GraphElement`1::Ludiq.IGraphElement.set_graph(Ludiq.IGraph)
// 0x000000F5 Ludiq.IGraph Ludiq.GraphElement`1::Ludiq.IGraphItem.get_graph()
// 0x000000F6 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.GraphElement`1::get_deserializationDependencies()
// 0x000000F7 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.GraphElement`1::get_aotStubs()
// 0x000000F8 System.Void Ludiq.GraphElement`1::Prewarm()
// 0x000000F9 System.Void Ludiq.GraphElement`1::CopyFrom(Ludiq.GraphElement`1<TGraph>)
// 0x000000FA System.String Ludiq.GraphElement`1::ToString()
// 0x000000FB System.Void Ludiq.GraphElement`1::.ctor()
// 0x000000FC Ludiq.IGraph Ludiq.IGraphItem::get_graph()
// 0x000000FD System.Boolean Ludiq.IGraphData::TryGetElementData(Ludiq.IGraphElementWithData,Ludiq.IGraphElementData&)
// 0x000000FE System.Boolean Ludiq.IGraphData::TryGetChildGraphData(Ludiq.IGraphParentElement,Ludiq.IGraphData&)
// 0x000000FF Ludiq.IGraphElementData Ludiq.IGraphData::CreateElementData(Ludiq.IGraphElementWithData)
// 0x00000100 System.Void Ludiq.IGraphData::FreeElementData(Ludiq.IGraphElementWithData)
// 0x00000101 Ludiq.IGraphData Ludiq.IGraphData::CreateChildGraphData(Ludiq.IGraphParentElement)
// 0x00000102 System.Void Ludiq.IGraphData::FreeChildGraphData(Ludiq.IGraphParentElement)
// 0x00000103 Ludiq.IGraphElementDebugData Ludiq.IGraphDebugData::GetOrCreateElementData(Ludiq.IGraphElementWithDebugData)
// 0x00000104 Ludiq.IGraphDebugData Ludiq.IGraphDebugData::GetOrCreateChildGraphData(Ludiq.IGraphParentElement)
// 0x00000105 Ludiq.IGraphElementData Ludiq.IGraphElementWithData::CreateData()
// 0x00000106 System.Void Ludiq.IGraphElementDebugData::set_runtimeException(System.Exception)
// 0x00000107 Ludiq.IGraph Ludiq.IGraphNest::get_graph()
// 0x00000108 Ludiq.IGraphNest Ludiq.IGraphNester::get_nest()
// 0x00000109 System.Void Ludiq.IGraphNester::InstantiateNest()
// 0x0000010A System.Void Ludiq.IGraphNester::UninstantiateNest()
// 0x0000010B Ludiq.IGraph Ludiq.IGraphParent::get_childGraph()
// 0x0000010C System.Boolean Ludiq.IGraphParent::get_isSerializationRoot()
// 0x0000010D UnityEngine.Object Ludiq.IGraphParent::get_serializedObject()
// 0x0000010E Ludiq.IGraph Ludiq.IGraphParent::DefaultGraph()
// 0x0000010F Ludiq.IGraphData Ludiq.IMachine::get_graphData()
// 0x00000110 System.Void Ludiq.IMachine::set_graphData(Ludiq.IGraphData)
// 0x00000111 UnityEngine.GameObject Ludiq.IMachine::get_threadSafeGameObject()
// 0x00000112 System.Void Ludiq.Machine`2::.ctor()
// 0x00000113 Ludiq.GraphNest`2<TGraph,TMacro> Ludiq.Machine`2::get_nest()
// 0x00000114 System.Void Ludiq.Machine`2::set_nest(Ludiq.GraphNest`2<TGraph,TMacro>)
// 0x00000115 Ludiq.IGraphNest Ludiq.Machine`2::Ludiq.IGraphNester.get_nest()
// 0x00000116 UnityEngine.GameObject Ludiq.Machine`2::Ludiq.IMachine.get_threadSafeGameObject()
// 0x00000117 Ludiq.GraphReference Ludiq.Machine`2::get_reference()
// 0x00000118 System.Boolean Ludiq.Machine`2::get_hasGraph()
// 0x00000119 TGraph Ludiq.Machine`2::get_graph()
// 0x0000011A Ludiq.IGraphData Ludiq.Machine`2::get_graphData()
// 0x0000011B System.Void Ludiq.Machine`2::set_graphData(Ludiq.IGraphData)
// 0x0000011C System.Boolean Ludiq.Machine`2::Ludiq.IGraphParent.get_isSerializationRoot()
// 0x0000011D UnityEngine.Object Ludiq.Machine`2::Ludiq.IGraphParent.get_serializedObject()
// 0x0000011E Ludiq.IGraph Ludiq.Machine`2::Ludiq.IGraphParent.get_childGraph()
// 0x0000011F System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Machine`2::Ludiq.IAotStubbable.get_aotStubs()
// 0x00000120 System.Boolean Ludiq.Machine`2::get_isDescriptionValid()
// 0x00000121 System.Void Ludiq.Machine`2::set_isDescriptionValid(System.Boolean)
// 0x00000122 System.Void Ludiq.Machine`2::Awake()
// 0x00000123 System.Void Ludiq.Machine`2::OnEnable()
// 0x00000124 System.Void Ludiq.Machine`2::OnInstantiateWhileEnabled()
// 0x00000125 System.Void Ludiq.Machine`2::OnUninstantiateWhileEnabled()
// 0x00000126 System.Void Ludiq.Machine`2::OnDisable()
// 0x00000127 System.Void Ludiq.Machine`2::OnDestroy()
// 0x00000128 System.Void Ludiq.Machine`2::OnValidate()
// 0x00000129 System.Void Ludiq.Machine`2::CacheReference()
// 0x0000012A System.Void Ludiq.Machine`2::ClearCachedReference()
// 0x0000012B System.Void Ludiq.Machine`2::InstantiateNest()
// 0x0000012C System.Void Ludiq.Machine`2::UninstantiateNest()
// 0x0000012D System.Void Ludiq.Machine`2::TriggerAnimationEvent(UnityEngine.AnimationEvent)
// 0x0000012E System.Void Ludiq.Machine`2::TriggerUnityEvent(System.String)
// 0x0000012F TGraph Ludiq.Machine`2::DefaultGraph()
// 0x00000130 Ludiq.IGraph Ludiq.Machine`2::Ludiq.IGraphParent.DefaultGraph()
// 0x00000131 Ludiq.IGraph Ludiq.IMacro::get_graph()
// 0x00000132 System.Void Ludiq.IMacro::set_graph(Ludiq.IGraph)
// 0x00000133 TGraph Ludiq.Macro`1::get_graph()
// 0x00000134 System.Void Ludiq.Macro`1::set_graph(TGraph)
// 0x00000135 Ludiq.IGraph Ludiq.Macro`1::Ludiq.IMacro.get_graph()
// 0x00000136 System.Void Ludiq.Macro`1::Ludiq.IMacro.set_graph(Ludiq.IGraph)
// 0x00000137 Ludiq.IGraph Ludiq.Macro`1::Ludiq.IGraphParent.get_childGraph()
// 0x00000138 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Macro`1::get_aotStubs()
// 0x00000139 System.Boolean Ludiq.Macro`1::Ludiq.IGraphParent.get_isSerializationRoot()
// 0x0000013A UnityEngine.Object Ludiq.Macro`1::Ludiq.IGraphParent.get_serializedObject()
// 0x0000013B System.Boolean Ludiq.Macro`1::get_isDescriptionValid()
// 0x0000013C System.Void Ludiq.Macro`1::set_isDescriptionValid(System.Boolean)
// 0x0000013D System.Void Ludiq.Macro`1::OnBeforeDeserialize()
// 0x0000013E System.Void Ludiq.Macro`1::OnAfterDeserialize()
// 0x0000013F TGraph Ludiq.Macro`1::DefaultGraph()
// 0x00000140 Ludiq.IGraph Ludiq.Macro`1::Ludiq.IGraphParent.DefaultGraph()
// 0x00000141 System.Void Ludiq.Macro`1::OnEnable()
// 0x00000142 System.Void Ludiq.Macro`1::OnDisable()
// 0x00000143 System.Void Ludiq.Macro`1::.ctor()
// 0x00000144 System.Void Ludiq.GraphGroup::.cctor()
extern void GraphGroup__cctor_m451171D2785DE626FEAAE847235BEE378F6A18BB (void);
// 0x00000145 System.Void Ludiq.MergedGraphElementCollection::add_ItemAdded(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_add_ItemAdded_m1ACE1433A4F397FEE49D91310CF54036C7607EF8 (void);
// 0x00000146 System.Void Ludiq.MergedGraphElementCollection::remove_ItemAdded(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_remove_ItemAdded_m4D73DC2C3A58CF111BDEA63177470CA75EA20C0C (void);
// 0x00000147 System.Void Ludiq.MergedGraphElementCollection::add_ItemRemoved(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_add_ItemRemoved_mC34FCB4D277E2E0DBA5CDD72893F3CC5EA6E83AE (void);
// 0x00000148 System.Void Ludiq.MergedGraphElementCollection::remove_ItemRemoved(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_remove_ItemRemoved_m34815BE1E732B10DD7C0D4BCFEB6BF00DB64A629 (void);
// 0x00000149 System.Void Ludiq.MergedGraphElementCollection::add_CollectionChanged(System.Action)
extern void MergedGraphElementCollection_add_CollectionChanged_mFDC0327B5F5535AB72203FF7A0277A30E2424FCE (void);
// 0x0000014A System.Void Ludiq.MergedGraphElementCollection::remove_CollectionChanged(System.Action)
extern void MergedGraphElementCollection_remove_CollectionChanged_m927E39BF724F880F8FAEE4DC5BCBE6D58C8031C1 (void);
// 0x0000014B System.Void Ludiq.MergedGraphElementCollection::Include(Ludiq.IKeyedCollection`2<System.Guid,TSubItem>)
// 0x0000014C System.Void Ludiq.MergedGraphElementCollection::.ctor()
extern void MergedGraphElementCollection__ctor_m74D50D770C1F1B13684E258C3B99CBF58AAF1EED (void);
// 0x0000014D System.Void Ludiq.MergedGraphElementCollection::<Include>b__9_0(TSubItem)
// 0x0000014E System.Void Ludiq.MergedGraphElementCollection::<Include>b__9_1(TSubItem)
// 0x0000014F System.Void Ludiq.MergedGraphElementCollection::<Include>b__9_2()
static Il2CppMethodPointer s_methodPointers[335] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	InvalidConnectionException__ctor_mE7C4DEEC66970EB73A3340A6D5CA388C0E1A1FD2,
	InvalidConnectionException__ctor_mD8319B7F287D03526963BFEB25377BC971F6889A,
	GraphInstances_Instantiate_mA601CD77033AD998E4D3FD283275E5C845F4A90C,
	GraphInstances_Uninstantiate_m6B7C0DE3F3A1BDDC67AA775E29467FAA879D8DF7,
	GraphInstances_OfPooled_mFDCC2BD561DB2B8B8D4382B410CAD1F385904A3A,
	GraphInstances_ChildrenOfPooled_mEC05A68BB068449F12315B35F5E8243BF0DEE042,
	GraphInstances__cctor_m8039957CE1900D8AFA9CF0DBA9316D8511955A0C,
	Graph__ctor_m530D61F109D0CBAF911DFA65667FD42673741906,
	Graph_ToString_mD9F57F5336A418777ACFEF95DE2BBECB2D299785,
	NULL,
	Graph_Instantiate_m40E977EC3E0FCD92FA180B860A8829FC402E49D2,
	Graph_Uninstantiate_mC9D2BD302D357258B8B98979D8D784C073CF2DE3,
	Graph_get_elements_mDDF938061575C429F42492EED71312FA75A31B07,
	Graph_get_title_mEE0138BF9F6954330C9AF7B35FF1865BB71F3986,
	Graph_get_deserializationDependencies_mF5ABD6B979ACE0561D9C679B6F5E26102DCC55A5,
	Graph_OnBeforeSerialize_m82A5B0DD480CBAAAE57EFC3F632821F6C4EC579A,
	Graph_OnAfterDeserialize_m70BE72D84549D94B1D905641185FAA725CE5D62B,
	Graph_OnAfterDependenciesDeserialized_mFA3EB45493FAB170293308513CC05AEBC806C2B4,
	Graph_get_aotStubs_mF41F83551D58871D276E2E7D86CC6D9F86865467,
	Graph_Prewarm_mC1888FF162A287491E0C7C0A31C834B10D43DD20,
	Graph_Dispose_m86CDF2BCBC841F2D298043D26E67E63BF01C4138,
	U3CU3Ec__cctor_m479A4FD880388B091A9B31F283A1B2D003D3C339,
	U3CU3Ec__ctor_m6DCD49EBD2F0A0309866ECD355417AD2A916E698,
	U3CU3Ec_U3Cget_deserializationDependenciesU3Eb__27_0_m6C33B24240B0D5304D2A0589674BE9F874ECC0D0,
	U3CU3Ec_U3COnAfterDependenciesDeserializedU3Eb__30_0_m55390FBA96947B5F4889F0CB56D4025A830DE9B2,
	U3CU3Ec_U3Cget_aotStubsU3Eb__32_0_mF2CEDE79DDB3AA2F11C17D32C306C4D2EC55D030,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GraphPointer_IsValidRoot_mF1558A9609B6FA51AF6B4C645F7A1D9447EFF482,
	GraphPointer__ctor_m15C9DCBD68F165E40ED9C8F43EF8C4D96179942F,
	GraphPointer_Initialize_mB85E8940928801AF66EFB14389ABA5F59AABEFFF,
	NULL,
	GraphPointer_CopyFrom_m9F24A99CA5C32CB5BD9FC4773D28CDD770B02E85,
	GraphPointer_get_root_m38F09EBCADFAF169289171B02E9786E4509AC091,
	GraphPointer_set_root_mE19F416E366370EED2168689A8FFA7149AB0C7E0,
	GraphPointer_get_rootObject_mBB86B733774D136A298CDD286401DA3487221B07,
	GraphPointer_get_machine_mAC5E56C2C539702E86AF5214F6D235C2B09F24A6,
	GraphPointer_get_component_m5A029BECBA01CC287769310AEA7021EE427F3318,
	GraphPointer_get_gameObject_m9528DA2805D82CACA5526A34D15642D6B738B998,
	GraphPointer_set_gameObject_mA75870566CB977F12D3EBD9064DA51055178C54E,
	GraphPointer_get_self_mBA1362F1E003C6D1C57C26958866B433C69B1B4D,
	GraphPointer_get_scene_m43554F854C626EA27FAC4EE510F97EDD101D416B,
	GraphPointer_get_serializedObject_mCC89CA268814BE9CA8F088B0BD9041E54E81AA1B,
	GraphPointer_get_depth_mB17AFFC55FDD6715E5677CB1248651B0F38EA955,
	GraphPointer_get_isRoot_mA77361E837F43F4E77D09258FF3B4668166B9D89,
	GraphPointer_get_isChild_mC3D522EA57F7907AB03F2E2EB4951911299EE672,
	GraphPointer_EnsureChild_mBF2D1B3E99EDBDD8E918FEB14394DA69B276A61A,
	NULL,
	NULL,
	GraphPointer_get_parent_m2FECE2463EF013F343B42F41DDE093D4338E027A,
	NULL,
	GraphPointer_get_parentElement_mD7670B524C2C9EC7D24A414B79372AC2EBF40BF9,
	GraphPointer_get_rootGraph_mBBD2688C7CFEDF243CD1872C818B291715ED8D69,
	GraphPointer_get_graph_m5F401929B1027C0FDC135C44198E6373C27991C3,
	GraphPointer_get__data_m4BA5F0A596AF63931FFC18E4B6266F822FA70A84,
	GraphPointer_set__data_m0A73EB28F40FEB83F06561E1A10CF7AC8ED4F626,
	GraphPointer_get_data_m9F040167E297F88A733F30F209F24A3A8F27C1BB,
	GraphPointer_get__parentData_mC4602C28088019DD1CA0F2DAA3F324408D22F410,
	GraphPointer_get_hasData_m1D1313525C21F7718E37394CF9514494A2C25852,
	GraphPointer_EnsureDataAvailable_mD5994EBAFD4AF5A9BE3DA462AF65D770E036E660,
	NULL,
	NULL,
	GraphPointer_get_fetchRootDebugDataBinding_m0F5BCEA34F342E3973ECFA3B4600FA4A95F70510,
	GraphPointer_get_hasDebugData_m2192D4A4DB3F4278424DCDF6C191131025043C42,
	GraphPointer_EnsureDebugDataAvailable_m7F1887752637634FFE50AC324803337DA0676CA6,
	GraphPointer_get__debugData_m7827B40CA0D31AEC1ED3D8B45BC01E92477D91AB,
	GraphPointer_get_debugData_m52C55012F8E013B11B98DBA41760BE0F746F59C2,
	NULL,
	GraphPointer_TryEnterParentElement_m3802940F379639FC7E9090477A1D61460BF53B56,
	GraphPointer_EnterParentElement_m28B50AF7E3076FADA813D55D303BC1B99ACB0A07,
	GraphPointer_EnterValidParentElement_m428253B9634279D120B77452CCFA2B8B832AAADC,
	GraphPointer_ExitParentElement_m6152E5AFCB987A6421FB0F38AC50E49012D2988A,
	GraphPointer_get_isValid_m76E25656E88C87C9E76D4738A78717EA75C11444,
	GraphPointer_InstanceEquals_mF188D02D6D456924FFCE6A9CB0689E4D4BDD8C7B,
	GraphPointer_DefinitionEquals_m1E6E575A7666584B234F27676BE06AC076144530,
	GraphPointer_ComputeHashCode_m9105F84CC3F0672765839D9E99905B938DBC85DE,
	GraphPointer_ToString_mBDC69C7B5B3A8C1A1623F517927BA7775A02E008,
	GraphPointerException__ctor_m257322DCF0BF747E1A40E0BD496767926DBADCC8,
	GraphReference__cctor_m4437B1642A87D1B6C4A781D00CD5D46FF60A64BA,
	GraphReference__ctor_m7FEF14F0FF532AE066E5BC3C325039C8A490460E,
	GraphReference_New_m604651552D7A48AEDC6F9095F922776808B90CD3,
	GraphReference_New_mC2723AFCA7DDB27FE2D28F1D8130F92CD38F680C,
	GraphReference_CopyFrom_m091B7729E0D702335A577783CFC8E09506426C34,
	GraphReference_Clone_m315699D6FFB55309275CFF13EDEA4503EB54C518,
	GraphReference_AsReference_m00172D6505C4FF968F5BAF04CEA662848AFF91F2,
	GraphReference_ToStackPooled_m68D650ED4CD20382BF3BB1C637134A5D20B46E30,
	GraphReference_CreateGraphData_m71198EC25EEED08AA8CED6E6D34D538EA5C609BD,
	GraphReference_FreeGraphData_mBEE71D680135C3143FE7870F89245B616A970D69,
	GraphReference_Equals_m725C8E86FEAA87942B46DA0540DAA435BBAFDF8F,
	GraphReference_Hash_m2C9E9A8068F6BF1A8CF43CD183B6F845D479ACAC,
	GraphReference_GetHashCode_m1E50FDB8C03FCCAD42A6377E1A12E87CC26EE203,
	GraphReference_op_Equality_m65E2F3AE8FDAA942E1600FEE086ACE7218C4B462,
	GraphReference_op_Inequality_mAE259A4ED1A2656C731618EB224E107B74116C65,
	GraphReference_ParentReference_m24EF487044970147CD949DFC16B915C2E465A591,
	GraphReference_ChildReference_m3DA0AC00AA5A695C3B1B597D1C6B927014D7DEC8,
	GraphReference_Intern_m7F234E32919A5BDBC1FBE61EC6AB83B6ACE1B449,
	GraphReference_FreeInvalidInterns_mECC4C9FD55D21C0005D856783162DA23CF057ACA,
	GraphsExceptionUtility_SetException_m57F3DE767E1E16EF344A4309119E784AAA735BAA,
	GraphsExceptionUtility_HandleException_m7228170A36B3BBFC3BD039C888052C2D2340723D,
	GraphsExceptionUtility_HandledIn_m4395B1F713C977B3197334B3B29265E030AF184F,
	GraphStack__ctor_m9FE555920221411DFA29D627F778906CDD11ECB8,
	GraphStack_New_m1C203B75F7D5D15783BDFFBAD7824F3444084A00,
	GraphStack_Clone_mEB8B52FA22275694A156887D88C34DE59A71425B,
	GraphStack_Dispose_m85D0399453D716897EA2FFE557DF3B4C912A6BE0,
	GraphStack_Ludiq_IPoolable_New_m781F799375919ABCE2F56A327D5520EF5C6E15B5,
	GraphStack_Ludiq_IPoolable_Free_m8631D907CA52682102E599CA134F43F28EA8E8AB,
	GraphStack_AsReference_mB31AAF945DBCED254AF83A14842643620A04B956,
	GraphStack_ToReference_m9F6DE72E97DCB8087BB2209A9BADA5FE95B0D3CC,
	GraphStack_EnterParentElement_m9E50A8EAFD03848B852B9381198441B299B8751A,
	GraphStack_TryEnterParentElement_m9E12B584EFCD6648B7E8F57CD469B5103CEAA18B,
	GraphStack_TryEnterParentElementUnsafe_m4A44F7C324734FE03EB00DDA938D24B3D01E1DE1,
	GraphStack_ExitParentElement_m6418FCB578ECD88B40739651060E84AF36AA2A66,
	U3CU3Ec__cctor_mDAB92622A5852D416CCD692C52ED07CEE0362C4F,
	U3CU3Ec__ctor_m3C14250FCDD7C0FDF62E95964D5A67D75FAF59F2,
	U3CU3Ec_U3CNewU3Eb__3_0_m0D5AD6D524D191797208B536A84C9FA5A593CD95,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GraphGroup__cctor_m451171D2785DE626FEAAE847235BEE378F6A18BB,
	MergedGraphElementCollection_add_ItemAdded_m1ACE1433A4F397FEE49D91310CF54036C7607EF8,
	MergedGraphElementCollection_remove_ItemAdded_m4D73DC2C3A58CF111BDEA63177470CA75EA20C0C,
	MergedGraphElementCollection_add_ItemRemoved_mC34FCB4D277E2E0DBA5CDD72893F3CC5EA6E83AE,
	MergedGraphElementCollection_remove_ItemRemoved_m34815BE1E732B10DD7C0D4BCFEB6BF00DB64A629,
	MergedGraphElementCollection_add_CollectionChanged_mFDC0327B5F5535AB72203FF7A0277A30E2424FCE,
	MergedGraphElementCollection_remove_CollectionChanged_m927E39BF724F880F8FAEE4DC5BCBE6D58C8031C1,
	NULL,
	MergedGraphElementCollection__ctor_m74D50D770C1F1B13684E258C3B99CBF58AAF1EED,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[335] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	23,
	26,
	111,
	111,
	0,
	0,
	3,
	23,
	14,
	14,
	26,
	26,
	14,
	14,
	14,
	23,
	23,
	23,
	14,
	23,
	23,
	3,
	23,
	28,
	41,
	28,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	109,
	23,
	26,
	14,
	26,
	14,
	26,
	14,
	14,
	14,
	14,
	26,
	14,
	1509,
	14,
	10,
	102,
	102,
	23,
	-1,
	-1,
	14,
	-1,
	14,
	14,
	14,
	14,
	26,
	14,
	14,
	102,
	23,
	-1,
	-1,
	4,
	102,
	23,
	14,
	14,
	-1,
	1510,
	26,
	26,
	23,
	102,
	9,
	9,
	10,
	14,
	27,
	3,
	23,
	110,
	0,
	26,
	14,
	14,
	14,
	23,
	23,
	9,
	23,
	10,
	99,
	99,
	321,
	1511,
	0,
	3,
	144,
	144,
	99,
	23,
	0,
	14,
	23,
	23,
	23,
	14,
	14,
	26,
	9,
	9,
	23,
	3,
	23,
	14,
	14,
	14,
	26,
	26,
	14,
	26,
	102,
	10,
	659,
	26,
	26,
	14,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	14,
	738,
	738,
	28,
	26,
	28,
	26,
	28,
	28,
	14,
	26,
	14,
	14,
	23,
	23,
	14,
	102,
	14,
	14,
	14,
	26,
	14,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	14,
	26,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3,
	26,
	26,
	26,
	26,
	26,
	26,
	-1,
	23,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[20] = 
{
	{ 0x02000002, { 0, 4 } },
	{ 0x02000003, { 4, 48 } },
	{ 0x02000004, { 52, 21 } },
	{ 0x0200000B, { 73, 38 } },
	{ 0x0200000C, { 111, 4 } },
	{ 0x0200000D, { 115, 4 } },
	{ 0x0200000E, { 119, 12 } },
	{ 0x0200000F, { 131, 5 } },
	{ 0x02000018, { 147, 8 } },
	{ 0x02000028, { 155, 22 } },
	{ 0x0200002B, { 177, 5 } },
	{ 0x06000095, { 136, 1 } },
	{ 0x06000096, { 137, 2 } },
	{ 0x06000098, { 139, 2 } },
	{ 0x060000A2, { 141, 2 } },
	{ 0x060000A3, { 143, 2 } },
	{ 0x060000A9, { 145, 2 } },
	{ 0x0600014B, { 182, 8 } },
	{ 0x0600014D, { 190, 1 } },
	{ 0x0600014E, { 191, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[192] = 
{
	{ (Il2CppRGCTXDataType)2, 23079 },
	{ (Il2CppRGCTXDataType)3, 18093 },
	{ (Il2CppRGCTXDataType)3, 18094 },
	{ (Il2CppRGCTXDataType)2, 23075 },
	{ (Il2CppRGCTXDataType)2, 26031 },
	{ (Il2CppRGCTXDataType)3, 18095 },
	{ (Il2CppRGCTXDataType)2, 26032 },
	{ (Il2CppRGCTXDataType)3, 18096 },
	{ (Il2CppRGCTXDataType)2, 23083 },
	{ (Il2CppRGCTXDataType)2, 23098 },
	{ (Il2CppRGCTXDataType)3, 18097 },
	{ (Il2CppRGCTXDataType)2, 23087 },
	{ (Il2CppRGCTXDataType)3, 18098 },
	{ (Il2CppRGCTXDataType)3, 18099 },
	{ (Il2CppRGCTXDataType)3, 18100 },
	{ (Il2CppRGCTXDataType)3, 18101 },
	{ (Il2CppRGCTXDataType)3, 18102 },
	{ (Il2CppRGCTXDataType)2, 26033 },
	{ (Il2CppRGCTXDataType)3, 18103 },
	{ (Il2CppRGCTXDataType)3, 18104 },
	{ (Il2CppRGCTXDataType)3, 18105 },
	{ (Il2CppRGCTXDataType)3, 18106 },
	{ (Il2CppRGCTXDataType)3, 18107 },
	{ (Il2CppRGCTXDataType)2, 23085 },
	{ (Il2CppRGCTXDataType)2, 23097 },
	{ (Il2CppRGCTXDataType)3, 18108 },
	{ (Il2CppRGCTXDataType)2, 23086 },
	{ (Il2CppRGCTXDataType)3, 18109 },
	{ (Il2CppRGCTXDataType)2, 23089 },
	{ (Il2CppRGCTXDataType)3, 18110 },
	{ (Il2CppRGCTXDataType)3, 18111 },
	{ (Il2CppRGCTXDataType)3, 18112 },
	{ (Il2CppRGCTXDataType)3, 18113 },
	{ (Il2CppRGCTXDataType)3, 18114 },
	{ (Il2CppRGCTXDataType)3, 18115 },
	{ (Il2CppRGCTXDataType)3, 18116 },
	{ (Il2CppRGCTXDataType)3, 18117 },
	{ (Il2CppRGCTXDataType)3, 18118 },
	{ (Il2CppRGCTXDataType)3, 18119 },
	{ (Il2CppRGCTXDataType)3, 18120 },
	{ (Il2CppRGCTXDataType)3, 18121 },
	{ (Il2CppRGCTXDataType)3, 18122 },
	{ (Il2CppRGCTXDataType)3, 18123 },
	{ (Il2CppRGCTXDataType)2, 23088 },
	{ (Il2CppRGCTXDataType)3, 18124 },
	{ (Il2CppRGCTXDataType)3, 18125 },
	{ (Il2CppRGCTXDataType)3, 18126 },
	{ (Il2CppRGCTXDataType)3, 18127 },
	{ (Il2CppRGCTXDataType)3, 18128 },
	{ (Il2CppRGCTXDataType)3, 18129 },
	{ (Il2CppRGCTXDataType)3, 18130 },
	{ (Il2CppRGCTXDataType)3, 18131 },
	{ (Il2CppRGCTXDataType)2, 23105 },
	{ (Il2CppRGCTXDataType)3, 18132 },
	{ (Il2CppRGCTXDataType)3, 18133 },
	{ (Il2CppRGCTXDataType)2, 23101 },
	{ (Il2CppRGCTXDataType)3, 18134 },
	{ (Il2CppRGCTXDataType)3, 18135 },
	{ (Il2CppRGCTXDataType)3, 18136 },
	{ (Il2CppRGCTXDataType)3, 18137 },
	{ (Il2CppRGCTXDataType)3, 18138 },
	{ (Il2CppRGCTXDataType)3, 18139 },
	{ (Il2CppRGCTXDataType)3, 16074 },
	{ (Il2CppRGCTXDataType)3, 18140 },
	{ (Il2CppRGCTXDataType)3, 18141 },
	{ (Il2CppRGCTXDataType)3, 18142 },
	{ (Il2CppRGCTXDataType)3, 18143 },
	{ (Il2CppRGCTXDataType)3, 18144 },
	{ (Il2CppRGCTXDataType)3, 18145 },
	{ (Il2CppRGCTXDataType)3, 18146 },
	{ (Il2CppRGCTXDataType)3, 18147 },
	{ (Il2CppRGCTXDataType)3, 18148 },
	{ (Il2CppRGCTXDataType)3, 18149 },
	{ (Il2CppRGCTXDataType)3, 18150 },
	{ (Il2CppRGCTXDataType)2, 23152 },
	{ (Il2CppRGCTXDataType)2, 26034 },
	{ (Il2CppRGCTXDataType)2, 26035 },
	{ (Il2CppRGCTXDataType)2, 23154 },
	{ (Il2CppRGCTXDataType)3, 18151 },
	{ (Il2CppRGCTXDataType)2, 23153 },
	{ (Il2CppRGCTXDataType)3, 18152 },
	{ (Il2CppRGCTXDataType)3, 18153 },
	{ (Il2CppRGCTXDataType)3, 18154 },
	{ (Il2CppRGCTXDataType)3, 18155 },
	{ (Il2CppRGCTXDataType)3, 18156 },
	{ (Il2CppRGCTXDataType)3, 18157 },
	{ (Il2CppRGCTXDataType)3, 18158 },
	{ (Il2CppRGCTXDataType)3, 16077 },
	{ (Il2CppRGCTXDataType)3, 16086 },
	{ (Il2CppRGCTXDataType)3, 18159 },
	{ (Il2CppRGCTXDataType)3, 18160 },
	{ (Il2CppRGCTXDataType)3, 18161 },
	{ (Il2CppRGCTXDataType)3, 18162 },
	{ (Il2CppRGCTXDataType)2, 26036 },
	{ (Il2CppRGCTXDataType)3, 18163 },
	{ (Il2CppRGCTXDataType)3, 18164 },
	{ (Il2CppRGCTXDataType)3, 18165 },
	{ (Il2CppRGCTXDataType)3, 18166 },
	{ (Il2CppRGCTXDataType)2, 23155 },
	{ (Il2CppRGCTXDataType)2, 26037 },
	{ (Il2CppRGCTXDataType)3, 18167 },
	{ (Il2CppRGCTXDataType)2, 26038 },
	{ (Il2CppRGCTXDataType)3, 18168 },
	{ (Il2CppRGCTXDataType)3, 18169 },
	{ (Il2CppRGCTXDataType)3, 18170 },
	{ (Il2CppRGCTXDataType)3, 18171 },
	{ (Il2CppRGCTXDataType)3, 16088 },
	{ (Il2CppRGCTXDataType)3, 18172 },
	{ (Il2CppRGCTXDataType)2, 26039 },
	{ (Il2CppRGCTXDataType)3, 18173 },
	{ (Il2CppRGCTXDataType)3, 18174 },
	{ (Il2CppRGCTXDataType)2, 26040 },
	{ (Il2CppRGCTXDataType)3, 18175 },
	{ (Il2CppRGCTXDataType)2, 26040 },
	{ (Il2CppRGCTXDataType)2, 23160 },
	{ (Il2CppRGCTXDataType)3, 18176 },
	{ (Il2CppRGCTXDataType)3, 18177 },
	{ (Il2CppRGCTXDataType)3, 18178 },
	{ (Il2CppRGCTXDataType)3, 18179 },
	{ (Il2CppRGCTXDataType)3, 18180 },
	{ (Il2CppRGCTXDataType)3, 18181 },
	{ (Il2CppRGCTXDataType)3, 18182 },
	{ (Il2CppRGCTXDataType)2, 23182 },
	{ (Il2CppRGCTXDataType)3, 18183 },
	{ (Il2CppRGCTXDataType)2, 23183 },
	{ (Il2CppRGCTXDataType)3, 18184 },
	{ (Il2CppRGCTXDataType)3, 18185 },
	{ (Il2CppRGCTXDataType)3, 18186 },
	{ (Il2CppRGCTXDataType)3, 18187 },
	{ (Il2CppRGCTXDataType)2, 26041 },
	{ (Il2CppRGCTXDataType)3, 18188 },
	{ (Il2CppRGCTXDataType)3, 18189 },
	{ (Il2CppRGCTXDataType)2, 23193 },
	{ (Il2CppRGCTXDataType)2, 26042 },
	{ (Il2CppRGCTXDataType)3, 18190 },
	{ (Il2CppRGCTXDataType)3, 18191 },
	{ (Il2CppRGCTXDataType)2, 26043 },
	{ (Il2CppRGCTXDataType)3, 18192 },
	{ (Il2CppRGCTXDataType)1, 26044 },
	{ (Il2CppRGCTXDataType)3, 18193 },
	{ (Il2CppRGCTXDataType)2, 23201 },
	{ (Il2CppRGCTXDataType)2, 23202 },
	{ (Il2CppRGCTXDataType)1, 23202 },
	{ (Il2CppRGCTXDataType)2, 23203 },
	{ (Il2CppRGCTXDataType)1, 23203 },
	{ (Il2CppRGCTXDataType)2, 23204 },
	{ (Il2CppRGCTXDataType)1, 23204 },
	{ (Il2CppRGCTXDataType)3, 18194 },
	{ (Il2CppRGCTXDataType)2, 23237 },
	{ (Il2CppRGCTXDataType)3, 18195 },
	{ (Il2CppRGCTXDataType)3, 18196 },
	{ (Il2CppRGCTXDataType)3, 18197 },
	{ (Il2CppRGCTXDataType)3, 18198 },
	{ (Il2CppRGCTXDataType)3, 18199 },
	{ (Il2CppRGCTXDataType)3, 18200 },
	{ (Il2CppRGCTXDataType)2, 23281 },
	{ (Il2CppRGCTXDataType)3, 18201 },
	{ (Il2CppRGCTXDataType)3, 18202 },
	{ (Il2CppRGCTXDataType)3, 18203 },
	{ (Il2CppRGCTXDataType)3, 18204 },
	{ (Il2CppRGCTXDataType)3, 18205 },
	{ (Il2CppRGCTXDataType)3, 18206 },
	{ (Il2CppRGCTXDataType)3, 18207 },
	{ (Il2CppRGCTXDataType)3, 18208 },
	{ (Il2CppRGCTXDataType)2, 23283 },
	{ (Il2CppRGCTXDataType)3, 18209 },
	{ (Il2CppRGCTXDataType)2, 23282 },
	{ (Il2CppRGCTXDataType)3, 18210 },
	{ (Il2CppRGCTXDataType)3, 18211 },
	{ (Il2CppRGCTXDataType)3, 18212 },
	{ (Il2CppRGCTXDataType)3, 18213 },
	{ (Il2CppRGCTXDataType)3, 18214 },
	{ (Il2CppRGCTXDataType)3, 18215 },
	{ (Il2CppRGCTXDataType)3, 18216 },
	{ (Il2CppRGCTXDataType)3, 18217 },
	{ (Il2CppRGCTXDataType)3, 18218 },
	{ (Il2CppRGCTXDataType)3, 18219 },
	{ (Il2CppRGCTXDataType)2, 23298 },
	{ (Il2CppRGCTXDataType)3, 18220 },
	{ (Il2CppRGCTXDataType)3, 18221 },
	{ (Il2CppRGCTXDataType)3, 18222 },
	{ (Il2CppRGCTXDataType)3, 18223 },
	{ (Il2CppRGCTXDataType)3, 18224 },
	{ (Il2CppRGCTXDataType)2, 26045 },
	{ (Il2CppRGCTXDataType)3, 18225 },
	{ (Il2CppRGCTXDataType)2, 26046 },
	{ (Il2CppRGCTXDataType)3, 18226 },
	{ (Il2CppRGCTXDataType)2, 26047 },
	{ (Il2CppRGCTXDataType)3, 18227 },
	{ (Il2CppRGCTXDataType)3, 18228 },
	{ (Il2CppRGCTXDataType)2, 23306 },
	{ (Il2CppRGCTXDataType)2, 23307 },
};
extern const Il2CppCodeGenModule g_Ludiq_Graphs_RuntimeCodeGenModule;
const Il2CppCodeGenModule g_Ludiq_Graphs_RuntimeCodeGenModule = 
{
	"Ludiq.Graphs.Runtime.dll",
	335,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	20,
	s_rgctxIndices,
	192,
	s_rgctxValues,
	NULL,
};