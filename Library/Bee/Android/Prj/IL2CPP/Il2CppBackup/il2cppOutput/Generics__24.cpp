﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
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
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328;
struct Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B;
struct Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0;
struct Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA;
struct Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17;
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6;
struct EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799;
struct EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0;
struct EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB;
struct ICollection_1_tD56FFE4395E7AAA9BC6513B7180B31801ABF0135;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tD7D6ABAE0ED462D1FFC5A89FEDD63734A24D7B40;
struct ICollection_1_tEF23B8A78E9122DAA952DB1517D31EB7EC90563B;
struct ICollection_1_tF4C64DF26B8FE4410E638D50CB7C3382DB4E8266;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t3381305A744C76E55F9228ECAB6F2095CE361AC5;
struct ICollection_1_tC698F91BB80BEC862B6764ED6EA111A05F9F4AD4;
struct ICollection_1_t690A44EE45DB0B90617CD1DBA1E65CDE445EFFC0;
struct IDictionary_2_t5ED29B7576BFA09F8B576E5350DD49EE7B4EB02B;
struct IDictionary_2_t72D4169CF403E2E17BAFC51B90EDA8C88609F36D;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IDictionary_2_t725FDA3142E88CD6B0DAA09DECCB00A586E71F46;
struct IDictionary_2_t0703527E59433E235850D1B9FD929ABA2AD79343;
struct IDictionary_2_tDE69D6B4E9CC81F7319D2AE7B25435C900F5B81F;
struct IDictionary_2_t6402A282383D911C87711CC49893D1E642D2E668;
struct IEnumerator_1_t265088B8D1EB3EC048C038600A4DC87A7BEAA55E;
struct IEnumerator_1_t535BEFB917EB1D803D332DFF1480088D7D3C7A24;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_tAF1F66184FC8BB340B500ED9AB9E004D6D883F5E;
struct IEnumerator_1_tF7BAB0E66C83F0F3318F056EE7287531869D6D4E;
struct IEnumerator_1_t5B0C40550E35B30A22DCCA2EE1862821A6A23A36;
struct IEnumerator_1_t3ACED7703A7C2BAFCF0227C81F1D492B06A7C3A6;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IEqualityComparer_1_tA4FF235620F3AC81D5CAC53556987A2EF981D346;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t0C30D40D1D05AE59EA63C24DBF582A788E026FDF;
struct IEqualityComparer_1_tF9EA8524A32983CE2C63D9413DF821AA5BF0E5EA;
struct IEqualityComparer_1_t02D27407750845538E348EF21AC8FF0C8CEEC818;
struct KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8;
struct KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E;
struct KeyCollection_tCF89724C527E8BD5473935E551BF231159652320;
struct KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A;
struct KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7;
struct ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62;
struct ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C;
struct ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829;
struct ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C;
struct ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872;
struct EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD;
struct EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3;
struct EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA;
struct EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6;
struct EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D;
struct KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5;
struct KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD;
struct KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F;
struct KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584;
struct KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;

struct EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD;
struct EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3;
struct EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA;
struct EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6;
struct EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D;
struct KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5;
struct KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD;
struct KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F;
struct KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584;
struct KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* ____keys;
	ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* ____keys;
	ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* ____keys;
	ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* ____keys;
	ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* ____keys;
	ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* ____keys;
	ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17  : public RuntimeObject
{
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6  : public RuntimeObject
{
};
struct EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799  : public RuntimeObject
{
};
struct EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0  : public RuntimeObject
{
};
struct EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB  : public RuntimeObject
{
};
struct KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8  : public RuntimeObject
{
	Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ____dictionary;
};
struct KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9  : public RuntimeObject
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E  : public RuntimeObject
{
	Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ____dictionary;
};
struct KeyCollection_tCF89724C527E8BD5473935E551BF231159652320  : public RuntimeObject
{
	Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ____dictionary;
};
struct KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A  : public RuntimeObject
{
	Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ____dictionary;
};
struct KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7  : public RuntimeObject
{
	Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ____dictionary;
};
struct ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62  : public RuntimeObject
{
	Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ____dictionary;
};
struct ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7  : public RuntimeObject
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C  : public RuntimeObject
{
	Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ____dictionary;
};
struct ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829  : public RuntimeObject
{
	Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ____dictionary;
};
struct ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C  : public RuntimeObject
{
	Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ____dictionary;
};
struct ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872  : public RuntimeObject
{
	Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page;
	int32_t ____idx;
};
struct ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 
{
	Type_t* ___source;
	Type_t* ___destination;
};
struct ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27_marshaled_pinvoke
{
	Type_t* ___source;
	Type_t* ___destination;
};
struct ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27_marshaled_com
{
	Type_t* ___source;
	Type_t* ___destination;
};
struct TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 
{
	Type_t* ____initialType;
	Type_t* ____targetType;
};
struct TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97_marshaled_pinvoke
{
	Type_t* ____initialType;
	Type_t* ____targetType;
};
struct TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97_marshaled_com
{
	Type_t* ____initialType;
	Type_t* ____targetType;
};
struct TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 
{
	String_t* ___AssemblyName;
	String_t* ___TypeName;
};
struct TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1_marshaled_pinvoke
{
	char* ___AssemblyName;
	char* ___TypeName;
};
struct TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1_marshaled_com
{
	Il2CppChar* ___AssemblyName;
	Il2CppChar* ___TypeName;
};
struct Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint64_t ___key;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 
{
	int32_t ___hashCode;
	int32_t ___next;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___key;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___value;
};
struct Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50 
{
	int32_t ___hashCode;
	int32_t ___next;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___key;
	int32_t ___value;
};
struct Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A 
{
	int32_t ___hashCode;
	int32_t ___next;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___key;
	RuntimeObject* ___value;
};
struct Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1 
{
	int32_t ___hashCode;
	int32_t ___next;
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___key;
	RuntimeObject* ___value;
};
struct Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907 
{
	int32_t ___hashCode;
	int32_t ___next;
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 
{
	uint64_t ___key;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___key;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___value;
};
struct KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 
{
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB 
{
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED 
{
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F 
{
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___key;
	RuntimeObject* ___value;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 
{
	Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t773D4603FB435BF24C573582D3AE30498235105F 
{
	Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C 
{
	Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 
{
	Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D 
{
	Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F ____current;
	int32_t ____getEnumeratorRetType;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* ___defaultComparer;
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* ___defaultComparer;
};
struct EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields
{
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799_StaticFields
{
	EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* ___defaultComparer;
};
struct EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0_StaticFields
{
	EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* ___defaultComparer;
};
struct EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB_StaticFields
{
	EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6 m_Items[1];

	inline Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6 value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 m_Items[1];

	inline KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 value)
	{
		m_Items[index] = value;
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 m_Items[1];

	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 m_Items[1];

	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____page), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____page), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50 m_Items[1];

	inline Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
	}
	inline Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 m_Items[1];

	inline KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A m_Items[1];

	inline Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB m_Items[1];

	inline KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___destination), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1 m_Items[1];

	inline Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____initialType), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____targetType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____initialType), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____targetType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED m_Items[1];

	inline KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____initialType), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____targetType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____initialType), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->____targetType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907 m_Items[1];

	inline Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___TypeName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___TypeName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F m_Items[1];

	inline KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___TypeName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___TypeName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2201297F7278DF0E470EDA07456CDFE164860587_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_gshared_inline (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_gshared_inline (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mE4E44F08DA941C1BE8361BF5E76AAFF4F93F6D02_gshared (KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* __this, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m9707FDD0EC0201F00BB354E936750452BD117644_gshared (ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* __this, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDCE0F781225409266580C8D71490D7798DA1DAC0_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC877F573458084E2842262558DA8F49733C63E6E_gshared (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71_gshared (Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77* __this, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m59A139B6FCD55BCDD2146323B5D698D263999B73_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m93A0C54E7E49C70F3B273B0F58EB46097EEF26D2_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* Dictionary_2_get_Keys_m225E02D64D44C0B321BBA8B87BED02808D920A06_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* Dictionary_2_get_Values_mE9DC349363777FDD159A899251EF56DFBF348277_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m01EAE1BA6A0DE90A7A5651EC27937DAAAD9BFB19_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m37D4D21FE7DC0F12E71CFF97E8ADA5E15BD25E1A_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9360A491FF3774FFFEEE34C8B31133CEA542F193_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E_gshared (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465_gshared (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6_gshared (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA_gshared (Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* Dictionary_2_get_Keys_m9A2810E095217DC279EE0C83EC7CBC52547972A2_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* Dictionary_2_get_Values_m0C3710D8A0224DD51D2F0909B2CA6D60F9F68910_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9A8C7D6ABEAD348E93C2A641F7643AF05D7C9DF_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_gshared_inline (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_gshared_inline (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mA2C3BB3311FC1E51FB6A2F3D9D47AECAE5C693B5_gshared (KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* __this, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m04F2749CD5CF722CEFC20F917466B3F6F061EC1A_gshared (ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* __this, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE125CCF47547042EFEBD8F527ACB3467CE141645_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mCE8ED6EDAA6D7FE168B89322FA265984584FED6E_gshared (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC_gshared (Enumerator_t773D4603FB435BF24C573582D3AE30498235105F* __this, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m617CDD3B841954B472F6AE66CBCB2EBD0FC1D0C9_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7E276047DB29276D2CA2537EFFDD97FB7206B5A6_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* Dictionary_2_get_Keys_mF91F1CD679DA834807C50DB0FC4378ED95BBD7CC_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* Dictionary_2_get_Values_m64BC473AC4F212B056135E2F0C94718C7DE38BF1_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2202BDF286655851C979A0B3B23BCF1E895379D_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE7EA5B0505113A034FC619C33D596E62D0A743BC_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0B0FF5465C0A4A2AF39A098E18EEC1E13265CFED_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_gshared_inline (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_gshared_inline (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m6DB01668D362CA8343DD996ADD4321C6DEB0FCB7_gshared (KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* __this, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA347769221B381A708E2BF2350C0DF19D9EA005A_gshared (ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* __this, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m39617AE9F756FBA318EC40A490DED72F93BF2DAC_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7926D53BD82C8BD255A3353B13E30429FC507AA4_gshared (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D_gshared (Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C* __this, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0CA29A5F3A65718C27424EA7F01E4E50D205E685_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m11452DDB015567C2F86F75AD2A645418B862CFE7_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* Dictionary_2_get_Keys_m23FDC88FD0F4EA8180EDCA8DC71761BAF61DC438_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* Dictionary_2_get_Values_m165F3FB848DD9E3ED2E54B66613169E565BDABAD_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAB4DF65AE3AE96C50FB6B104FF729839363566C6_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m11DA5CA59198F37D15455A067A9D6DDDBF96E6BF_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB3521C909E8367C92EB04EFC98310F958E77A410_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_gshared_inline (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_gshared_inline (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEE34CE6929DF7A6FFF4042FB805694E080EA6E39_gshared (KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* __this, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m11506FCC6A22E53DECFE464794E72CE379AB5811_gshared (ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* __this, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2C83973323B8F704669344FE89E5683F4AFC3F86_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF0F908D2A05C11BB48B0144BBA5312BAA3B1C694_gshared (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41_gshared (Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4* __this, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCA8A1733D482FFCE64A873A9943F79060CC8B563_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD70411757A5D9363EB0E52A61EF62BEB393BBA27_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* Dictionary_2_get_Keys_m85D045902AFB76E0DF1A85397D0BB9389456F4C2_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* Dictionary_2_get_Values_m8478C8561248F6931322A3F5BE997D7906E6268D_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m86CB9EC052E286E28807D37AC162EBB17A1AF2B1_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mAE2B8C7158680A03FC90E9CC2350C31ABCCF8F0C_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF345821B1365FF3651F1EE5212A0BCE4E019CF3E_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_gshared_inline (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_gshared_inline (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m728670657F74356D3962C473AF3B7267BBF0140C_gshared (KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* __this, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA20A744369360B28C8FD088FC39F1C1506DC0006_gshared (ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* __this, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8F3088C1141879085398786BD4F6C88F505DA4E5_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m798426DEAD81A50676A91F04FAFAE2CC30F50901_gshared (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB_gshared (Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D* __this, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F26A526356569D21E336CF069A6F0AF20744D44_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6F88304866DDB8C6E666F5D1096AEE9D11B4F888_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* Dictionary_2_get_Keys_m7F5E76BFA4C32D5757A0D8D38EE578C2B6E018C0_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* Dictionary_2_get_Values_mD42B2B895003745EA6AF0C57487E8940180C9A07_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDC8E451808C2EE1B7CC1DF61A63142CD8E5A0B96_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCDD6E6004F72783FB0319D54FAE7EAB13BAE43F2_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* EqualityComparer_1_CreateComparer_mAD8BA1E861F7248EFC3BE2A9BBED6F1930A84866_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* EqualityComparer_1_CreateComparer_m600578C2945EE64B1EFC64A070E95166AB2F35CD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* EqualityComparer_1_CreateComparer_m2082A2F2964D9F368ADA9CB20E2B3BBD1A3E43CA_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m2201297F7278DF0E470EDA07456CDFE164860587 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m2201297F7278DF0E470EDA07456CDFE164860587_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654_gshared)(__this, ___0_key, ___1_value, method);
}
inline uint64_t KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_gshared_inline)(__this, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_inline (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mE4E44F08DA941C1BE8361BF5E76AAFF4F93F6D02 (KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* __this, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8*, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, const RuntimeMethod*))KeyCollection__ctor_mE4E44F08DA941C1BE8361BF5E76AAFF4F93F6D02_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m9707FDD0EC0201F00BB354E936750452BD117644 (ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* __this, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62*, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, const RuntimeMethod*))ValueCollection__ctor_m9707FDD0EC0201F00BB354E936750452BD117644_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, uint64_t, const RuntimeMethod*))Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mDCE0F781225409266580C8D71490D7798DA1DAC0 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_mDCE0F781225409266580C8D71490D7798DA1DAC0_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, const RuntimeMethod*))Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mC877F573458084E2842262558DA8F49733C63E6E (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3*, uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))KeyValuePair_2__ctor_mC877F573458084E2842262558DA8F49733C63E6E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71 (Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77* __this, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77*, Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m59A139B6FCD55BCDD2146323B5D698D263999B73 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, const RuntimeMethod*))Dictionary_2_Resize_m59A139B6FCD55BCDD2146323B5D698D263999B73_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m93A0C54E7E49C70F3B273B0F58EB46097EEF26D2 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m93A0C54E7E49C70F3B273B0F58EB46097EEF26D2_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* Dictionary_2_get_Keys_m225E02D64D44C0B321BBA8B87BED02808D920A06 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, const RuntimeMethod*))Dictionary_2_get_Keys_m225E02D64D44C0B321BBA8B87BED02808D920A06_gshared)(__this, method);
}
inline ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* Dictionary_2_get_Values_mE9DC349363777FDD159A899251EF56DFBF348277 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, const RuntimeMethod*))Dictionary_2_get_Values_mE9DC349363777FDD159A899251EF56DFBF348277_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m01EAE1BA6A0DE90A7A5651EC27937DAAAD9BFB19 (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Dictionary_2_set_Item_m01EAE1BA6A0DE90A7A5651EC27937DAAAD9BFB19_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m37D4D21FE7DC0F12E71CFF97E8ADA5E15BD25E1A (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m37D4D21FE7DC0F12E71CFF97E8ADA5E15BD25E1A_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m9360A491FF3774FFFEEE34C8B31133CEA542F193 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m9360A491FF3774FFFEEE34C8B31133CEA542F193_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1_gshared)(__this, ___0_key, ___1_value, method);
}
inline XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method)
{
	return ((  XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 (*) (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937*, const RuntimeMethod*))KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_gshared_inline)(__this, method);
}
inline XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method)
{
	return ((  XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 (*) (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9*, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465 (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7*, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6 (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA (Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863* __this, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863*, Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, const RuntimeMethod*))Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* Dictionary_2_get_Keys_m9A2810E095217DC279EE0C83EC7CBC52547972A2 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))Dictionary_2_get_Keys_m9A2810E095217DC279EE0C83EC7CBC52547972A2_gshared)(__this, method);
}
inline ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* Dictionary_2_get_Values_m0C3710D8A0224DD51D2F0909B2CA6D60F9F68910 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, const RuntimeMethod*))Dictionary_2_get_Values_m0C3710D8A0224DD51D2F0909B2CA6D60F9F68910_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90 (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, const RuntimeMethod*))Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD_gshared)(__this, ___0_key, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mC9A8C7D6ABEAD348E93C2A641F7643AF05D7C9DF (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC9A8C7D6ABEAD348E93C2A641F7643AF05D7C9DF_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, int32_t, const RuntimeMethod*))Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104_gshared)(__this, ___0_key, ___1_value, method);
}
inline ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, const RuntimeMethod* method)
{
	return ((  ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 (*) (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_inline (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mA2C3BB3311FC1E51FB6A2F3D9D47AECAE5C693B5 (KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* __this, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E*, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, const RuntimeMethod*))KeyCollection__ctor_mA2C3BB3311FC1E51FB6A2F3D9D47AECAE5C693B5_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m04F2749CD5CF722CEFC20F917466B3F6F061EC1A (ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* __this, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C*, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, const RuntimeMethod*))ValueCollection__ctor_m04F2749CD5CF722CEFC20F917466B3F6F061EC1A_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, const RuntimeMethod*))Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mE125CCF47547042EFEBD8F527ACB3467CE141645 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, const RuntimeMethod*))Dictionary_2_Remove_mE125CCF47547042EFEBD8F527ACB3467CE141645_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, const RuntimeMethod*))Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mCE8ED6EDAA6D7FE168B89322FA265984584FED6E (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mCE8ED6EDAA6D7FE168B89322FA265984584FED6E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC (Enumerator_t773D4603FB435BF24C573582D3AE30498235105F* __this, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t773D4603FB435BF24C573582D3AE30498235105F*, Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, int32_t, const RuntimeMethod*))Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24 (ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m617CDD3B841954B472F6AE66CBCB2EBD0FC1D0C9 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, const RuntimeMethod*))Dictionary_2_Resize_m617CDD3B841954B472F6AE66CBCB2EBD0FC1D0C9_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7E276047DB29276D2CA2537EFFDD97FB7206B5A6 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7E276047DB29276D2CA2537EFFDD97FB7206B5A6_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* Dictionary_2_get_Keys_mF91F1CD679DA834807C50DB0FC4378ED95BBD7CC (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, const RuntimeMethod*))Dictionary_2_get_Keys_mF91F1CD679DA834807C50DB0FC4378ED95BBD7CC_gshared)(__this, method);
}
inline ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* Dictionary_2_get_Values_m64BC473AC4F212B056135E2F0C94718C7DE38BF1 (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, const RuntimeMethod*))Dictionary_2_get_Values_m64BC473AC4F212B056135E2F0C94718C7DE38BF1_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mA2202BDF286655851C979A0B3B23BCF1E895379D (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mA2202BDF286655851C979A0B3B23BCF1E895379D_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mE7EA5B0505113A034FC619C33D596E62D0A743BC (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, const RuntimeMethod*))Dictionary_2_ContainsKey_mE7EA5B0505113A034FC619C33D596E62D0A743BC_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m0B0FF5465C0A4A2AF39A098E18EEC1E13265CFED (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m0B0FF5465C0A4A2AF39A098E18EEC1E13265CFED_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6_gshared)(__this, ___0_key, ___1_value, method);
}
inline ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, const RuntimeMethod* method)
{
	return ((  ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 (*) (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB*, const RuntimeMethod*))KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_inline (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m6DB01668D362CA8343DD996ADD4321C6DEB0FCB7 (KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* __this, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tCF89724C527E8BD5473935E551BF231159652320*, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, const RuntimeMethod*))KeyCollection__ctor_m6DB01668D362CA8343DD996ADD4321C6DEB0FCB7_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA347769221B381A708E2BF2350C0DF19D9EA005A (ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* __this, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829*, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, const RuntimeMethod*))ValueCollection__ctor_mA347769221B381A708E2BF2350C0DF19D9EA005A_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, const RuntimeMethod*))Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m39617AE9F756FBA318EC40A490DED72F93BF2DAC (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, const RuntimeMethod*))Dictionary_2_Remove_m39617AE9F756FBA318EC40A490DED72F93BF2DAC_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, const RuntimeMethod*))Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7926D53BD82C8BD255A3353B13E30429FC507AA4 (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7926D53BD82C8BD255A3353B13E30429FC507AA4_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D (Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C* __this, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C*, Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m0CA29A5F3A65718C27424EA7F01E4E50D205E685 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, const RuntimeMethod*))Dictionary_2_Resize_m0CA29A5F3A65718C27424EA7F01E4E50D205E685_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m11452DDB015567C2F86F75AD2A645418B862CFE7 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m11452DDB015567C2F86F75AD2A645418B862CFE7_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* Dictionary_2_get_Keys_m23FDC88FD0F4EA8180EDCA8DC71761BAF61DC438 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, const RuntimeMethod*))Dictionary_2_get_Keys_m23FDC88FD0F4EA8180EDCA8DC71761BAF61DC438_gshared)(__this, method);
}
inline ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* Dictionary_2_get_Values_m165F3FB848DD9E3ED2E54B66613169E565BDABAD (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, const RuntimeMethod*))Dictionary_2_get_Values_m165F3FB848DD9E3ED2E54B66613169E565BDABAD_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mAB4DF65AE3AE96C50FB6B104FF729839363566C6 (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mAB4DF65AE3AE96C50FB6B104FF729839363566C6_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m11DA5CA59198F37D15455A067A9D6DDDBF96E6BF (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, const RuntimeMethod*))Dictionary_2_ContainsKey_m11DA5CA59198F37D15455A067A9D6DDDBF96E6BF_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mB3521C909E8367C92EB04EFC98310F958E77A410 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB3521C909E8367C92EB04EFC98310F958E77A410_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F_gshared)(__this, ___0_key, ___1_value, method);
}
inline TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, const RuntimeMethod* method)
{
	return ((  TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 (*) (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED*, const RuntimeMethod*))KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_inline (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mEE34CE6929DF7A6FFF4042FB805694E080EA6E39 (KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* __this, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A*, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, const RuntimeMethod*))KeyCollection__ctor_mEE34CE6929DF7A6FFF4042FB805694E080EA6E39_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m11506FCC6A22E53DECFE464794E72CE379AB5811 (ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* __this, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C*, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, const RuntimeMethod*))ValueCollection__ctor_m11506FCC6A22E53DECFE464794E72CE379AB5811_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, const RuntimeMethod*))Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m2C83973323B8F704669344FE89E5683F4AFC3F86 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, const RuntimeMethod*))Dictionary_2_Remove_m2C83973323B8F704669344FE89E5683F4AFC3F86_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, const RuntimeMethod*))Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mF0F908D2A05C11BB48B0144BBA5312BAA3B1C694 (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mF0F908D2A05C11BB48B0144BBA5312BAA3B1C694_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41 (Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4* __this, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4*, Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_mE29BB08A4A4ACA8607B1FAFC605A7A9D66347C88 (TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mCA8A1733D482FFCE64A873A9943F79060CC8B563 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, const RuntimeMethod*))Dictionary_2_Resize_mCA8A1733D482FFCE64A873A9943F79060CC8B563_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mD70411757A5D9363EB0E52A61EF62BEB393BBA27 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mD70411757A5D9363EB0E52A61EF62BEB393BBA27_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* Dictionary_2_get_Keys_m85D045902AFB76E0DF1A85397D0BB9389456F4C2 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, const RuntimeMethod*))Dictionary_2_get_Keys_m85D045902AFB76E0DF1A85397D0BB9389456F4C2_gshared)(__this, method);
}
inline ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* Dictionary_2_get_Values_m8478C8561248F6931322A3F5BE997D7906E6268D (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, const RuntimeMethod*))Dictionary_2_get_Values_m8478C8561248F6931322A3F5BE997D7906E6268D_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m86CB9EC052E286E28807D37AC162EBB17A1AF2B1 (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m86CB9EC052E286E28807D37AC162EBB17A1AF2B1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mAE2B8C7158680A03FC90E9CC2350C31ABCCF8F0C (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, const RuntimeMethod*))Dictionary_2_ContainsKey_mAE2B8C7158680A03FC90E9CC2350C31ABCCF8F0C_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mF345821B1365FF3651F1EE5212A0BCE4E019CF3E (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF345821B1365FF3651F1EE5212A0BCE4E019CF3E_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8_gshared)(__this, ___0_key, ___1_value, method);
}
inline TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, const RuntimeMethod* method)
{
	return ((  TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 (*) (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F*, const RuntimeMethod*))KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_inline (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m728670657F74356D3962C473AF3B7267BBF0140C (KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* __this, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7*, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, const RuntimeMethod*))KeyCollection__ctor_m728670657F74356D3962C473AF3B7267BBF0140C_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA20A744369360B28C8FD088FC39F1C1506DC0006 (ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* __this, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872*, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, const RuntimeMethod*))ValueCollection__ctor_mA20A744369360B28C8FD088FC39F1C1506DC0006_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, const RuntimeMethod*))Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m8F3088C1141879085398786BD4F6C88F505DA4E5 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, const RuntimeMethod*))Dictionary_2_Remove_m8F3088C1141879085398786BD4F6C88F505DA4E5_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, const RuntimeMethod*))Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m798426DEAD81A50676A91F04FAFAE2CC30F50901 (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m798426DEAD81A50676A91F04FAFAE2CC30F50901_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB (Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D* __this, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D*, Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_m56603FE5921E623CB9FE9BB1BF121D5713B2B1FF (TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m3F26A526356569D21E336CF069A6F0AF20744D44 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, const RuntimeMethod*))Dictionary_2_Resize_m3F26A526356569D21E336CF069A6F0AF20744D44_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m6F88304866DDB8C6E666F5D1096AEE9D11B4F888 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m6F88304866DDB8C6E666F5D1096AEE9D11B4F888_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* Dictionary_2_get_Keys_m7F5E76BFA4C32D5757A0D8D38EE578C2B6E018C0 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, const RuntimeMethod*))Dictionary_2_get_Keys_m7F5E76BFA4C32D5757A0D8D38EE578C2B6E018C0_gshared)(__this, method);
}
inline ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* Dictionary_2_get_Values_mD42B2B895003745EA6AF0C57487E8940180C9A07 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, const RuntimeMethod*))Dictionary_2_get_Values_mD42B2B895003745EA6AF0C57487E8940180C9A07_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_mDC8E451808C2EE1B7CC1DF61A63142CD8E5A0B96 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mDC8E451808C2EE1B7CC1DF61A63142CD8E5A0B96_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mCDD6E6004F72783FB0319D54FAE7EAB13BAE43F2 (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, const RuntimeMethod*))Dictionary_2_ContainsKey_mCDD6E6004F72783FB0319D54FAE7EAB13BAE43F2_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared)(method);
}
inline EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B_gshared)(method);
}
inline EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704_gshared)(method);
}
inline EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* EqualityComparer_1_CreateComparer_mAD8BA1E861F7248EFC3BE2A9BBED6F1930A84866 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mAD8BA1E861F7248EFC3BE2A9BBED6F1930A84866_gshared)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* EqualityComparer_1_CreateComparer_m600578C2945EE64B1EFC64A070E95166AB2F35CD (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m600578C2945EE64B1EFC64A070E95166AB2F35CD_gshared)(method);
}
inline EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* EqualityComparer_1_CreateComparer_m2082A2F2964D9F368ADA9CB20E2B3BBD1A3E43CA (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2082A2F2964D9F368ADA9CB20E2B3BBD1A3E43CA_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7964F544E98FA37EBFFA47CAE775B68FD692EC03_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEA9DD12CA8780457A2C9924F1D76E9E749A3DE5B_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m295BE79881556CDECAC477753FB2A930B595A6C8_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_5;
		L_5 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED0196D76A1473DE81E3D019F1EA02AF7D5DD897_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m2201297F7278DF0E470EDA07456CDFE164860587(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2201297F7278DF0E470EDA07456CDFE164860587_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* G_B2_0 = NULL;
	Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m61160AF7577477CB8CB886F208F15C6D8ADE2C96(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* L_11 = ((Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint64_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint64_t L_32;
				L_32 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE879E90460B4303E249D27CF6023DD1D94C2A81D_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* Dictionary_2_get_Keys_m225E02D64D44C0B321BBA8B87BED02808D920A06_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_1 = (KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mE4E44F08DA941C1BE8361BF5E76AAFF4F93F6D02(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mDB14F9FFCBBE409D23B4AE53C306F024C6474DDB_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_1 = (KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mE4E44F08DA941C1BE8361BF5E76AAFF4F93F6D02(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* Dictionary_2_get_Values_mE9DC349363777FDD159A899251EF56DFBF348277_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_1 = (ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m9707FDD0EC0201F00BB354E936750452BD117644(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63FEDC7216EEDC10285E59044FCD981C79569E4E_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_1 = (ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m9707FDD0EC0201F00BB354E936750452BD117644(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Dictionary_2_get_Item_m1828398A47F54B00B05F56B0A849B47F28C30D36_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		uint64_t L_6 = ___0_key;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m01EAE1BA6A0DE90A7A5651EC27937DAAAD9BFB19_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_key;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_key;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40E235D3CE202048541A628A1FC62C59309919DC_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m05EADCEE66047CDAE25365F38F759A298CDA5337_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_3;
		L_3 = EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF364A2A57E8DEAA212BBAAD8366115F68EAD8FC4_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_3;
		L_3 = EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint64_t L_9;
		L_9 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mDCE0F781225409266580C8D71490D7798DA1DAC0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m75EE753789DF2EE116E82B7FBA05AD34C4A008B5_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m37D4D21FE7DC0F12E71CFF97E8ADA5E15BD25E1A_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m3B827954AEA1CA2B9C2B6F939DC806D5E8300087_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_6;
		L_6 = EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint64_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mC877F573458084E2842262558DA8F49733C63E6E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 Dictionary_2_GetEnumerator_m71037A4DD07A8FBA9EA04362358074CEAAA2C777_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBDD2785D5B76B8307EE2BDA222DE2244F6C16A34_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5983D0A0500FCD8DDE49079952C5E35C799EA05F_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_6;
		L_6 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_14 = (KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5*)(KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_15 = V_0;
		Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint64_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_19;
		L_19 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint64_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		uint64_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint64_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint64_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		uint64_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_5 = (EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD*)(EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* V_10 = NULL;
	uint64_t V_11 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint64_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint64_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_24;
		L_24 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint64_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint64_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint64_t L_35 = ___0_key;
		uint64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint64_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		uint64_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint64_t L_61 = ___0_key;
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m59A139B6FCD55BCDD2146323B5D698D263999B73(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_94 = V_10;
		uint64_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_96 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m732B18142C2214C41AC60B9A60AB4EF289F9F9B4_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mFC06328B12C4F818634F9D917CDB5FCEE31C0D4F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint64_t L_21;
		L_21 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint64_t L_24;
		L_24 = KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m59A139B6FCD55BCDD2146323B5D698D263999B73_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m93A0C54E7E49C70F3B273B0F58EB46097EEF26D2(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m93A0C54E7E49C70F3B273B0F58EB46097EEF26D2_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_1 = NULL;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_3 = (EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD*)(EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_5 = __this->____entries;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint64_t));
		uint64_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint64_t* L_17 = (uint64_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDCE0F781225409266580C8D71490D7798DA1DAC0_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint64_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_20;
		L_20 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_21 = V_4;
		uint64_t L_22 = L_21->___key;
		uint64_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_25 = V_4;
		uint64_t L_26 = L_25->___key;
		uint64_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t55450489A8CC50D73156AE21EE96A28EF01E10E6* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC9AFCB13449F6A5002724C9C64B3296E6E077A88_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___1_value;
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m3401EB9A78C672A516A045FC22AB6FB74D909977_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, uint64_t ___0_key, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_key;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m5228B96BD45D9B527D0C68C6BDC5290A25A51466(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mA7F905EC9A204834C09BE43BED5EAB5537620B03_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD30296F19FF293C1C93B852365DA17A08CC90AAD_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mFF3B6502C56618FCE45825F16F66EEA006702E12_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mA60F8C1BFF9D0812F0DEE5D512B59CA537C681D0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tA51C78B4038F2937F2A256276B977238C587E5D5* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m88E97B66E88C6B1C454AF5FAA8775D913963C080(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint64_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint64_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mC877F573458084E2842262558DA8F49733C63E6E((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m955E4B87D42FD1A15B87177B7A1E40BC2C9ED15E_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m745863B4BFF0EC2AFDFC62E393E9025DB77485A4_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m222992EDB12FE9588144DA49612A342AA6AA268D_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m084EB96D6122062D7A8F41991251621AFD2DD01D_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m92926EE8835AC428C3BE14AAC12E422E62695C39_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m19A53856818998F22812BC34FAE6CE476B233A78_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t47D62DDEE51AABADF152CFC32CA58FB84CDA10E8* L_0;
		L_0 = Dictionary_2_get_Keys_m225E02D64D44C0B321BBA8B87BED02808D920A06(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mE1DFDF23CD336CD5D38B8FE3A884BC3081A9EA4D_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t24BE9A80DDB882A89803A4F065795D5EE9CDFD62* L_0;
		L_0 = Dictionary_2_get_Values_mE9DC349363777FDD159A899251EF56DFBF348277(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mCEB9DEC11F441028110C6ADC484E7453AB929D48_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m49862482B26ABD4DA421910B6EC8AE650756AAED(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5A8A61506B2A01F6F4D9CED0E824EFA224C652CD* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4572E10EC32DC3E2395886F876F7FC72AEF53151_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m01EAE1BA6A0DE90A7A5651EC27937DAAAD9BFB19(__this, L_3, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m85AE17A15B2D06D5F23F7FF479B2AA4A3F6DC646_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m324F5138093FF3CE47A8D32DC3391BAB7F7F8654(__this, L_3, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mE694216D23244C7D94E3087D5D9832AF9D4193EF_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m37D4D21FE7DC0F12E71CFF97E8ADA5E15BD25E1A(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m539C886545EC36A6474EEBCC45C113D72C468284_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF60DC9987C2540FD730C609D539303CEFE565B71((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t089B2C39108EF5CACAE85CB405391F5D301C8A77 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mD03928C4D10602FE77EEBDF3C5C03F989DA3674A_gshared (Dictionary_2_t0AF08A1FB3BA921D8096283529C9C35B921B6328* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m51786E5E0D86DEC07C03FC674335AEB8E91BBB62(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mDCE0F781225409266580C8D71490D7798DA1DAC0(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF5FF8B899356859561D618FE0BD1658BA1355E3A_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1702709E09367B39518E7D4147FB8EAA71C1983E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA2D13EBFB19DD6CA2C930BBA74A3E64C4CCCA23D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_5;
		L_5 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF12690674B33248C1D9BAF335D2775E996C4FE00_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m9360A491FF3774FFFEEE34C8B31133CEA542F193(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9360A491FF3774FFFEEE34C8B31133CEA542F193_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* G_B2_0 = NULL;
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mCAA291BC8A0F9DE7E5BEF2272BEBC0A0A7580706(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* L_11 = ((Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_32;
				L_32 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_33;
				L_33 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0DA5FB4C75863697941CB337B9BBAEE187E799D6_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* Dictionary_2_get_Keys_m9A2810E095217DC279EE0C83EC7CBC52547972A2_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_1 = (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mD32AD4BECA83189CA1E5E1153191B5344671EF46_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_1 = (KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m31D2AF1C181005502164CA4DAD208EE4DD9DB59E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* Dictionary_2_get_Values_m0C3710D8A0224DD51D2F0909B2CA6D60F9F68910_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_1 = (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m439A47E52857ECE2DA5F5E2E70BC4E13354FE263_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_1 = (ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m0D1D55AC4B16C4AF03DE43D5B408C3396CE61465(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 Dictionary_2_get_Item_m020D5E0F6FA094EB12F56AC0313B224A1B84B49C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5516E6FB521E8145C1873812FF9BA0239A5B5DEF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0;
		L_0 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1;
		L_1 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD3B8898DB53741DC84135395AC01402A64786D4D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0;
		L_0 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_3;
		L_3 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7;
		L_7 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB8612E2A123B936BDA52D972B5F97CE604CCC06E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0;
		L_0 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_3;
		L_3 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7;
		L_7 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_9;
		L_9 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m7AD57DCC9D95FED40324C99B9E1775A6E927FC0D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m4DAE614CBC12FABCDBDB4CEAC05B392066A8656E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_0 = NULL;
	int32_t V_1 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_6;
		L_6 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 Dictionary_2_GetEnumerator_mF21E9488B8FB0FB059A67C5A3BB3A121F708F963_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m518D08F3216798D82621BEE16CA4FD0EFFAA9389_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8BF946BDED99F2DDEE97B53959555D57EC42A04F_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_6;
		L_6 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_14 = (KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)(KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_15 = V_0;
		Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_19;
		L_19 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_5 = (EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)(EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* V_10 = NULL;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_24;
		L_24 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____page), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_35 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____page), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_61 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_94 = V_10;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____page), (void*)NULL);
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_96 = V_10;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____page), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mC0CCBEF70238073149E53DDB2A839EE3E93E790C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m421F3590090FECC9384E0A2922FBB54180B34579(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_21;
		L_21 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_24;
		L_24 = KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27;
		L_27 = KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF88350DAC9079ECFEDFAEF7869880A1A81F895BE_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5207780E2C3E7F9DDC3EE357A99DEE5048B3A864_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_1 = NULL;
	int32_t V_2 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_3 = (EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)(EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_5 = __this->____entries;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_17 = (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_20;
		L_20 = EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_21 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_22 = L_21->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_25 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_26 = L_25->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_41 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_42 = (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_00ff:
	{
	}
	{
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_43 = V_4;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_44 = (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tE850363938764CC80F151D8A949A63B1588A5BF9* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3ED1E06E43A9342E7FF51C9DB84D236E7196E83C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_3 = ___1_value;
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)L_3)->____page), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m83499A0BC4DE94FB77D0891776EC9F3B0C886115_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_key, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___1_value, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = ___0_key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE6CB7E2A268B1BB09CFBB5106D129FF739B0569C(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m359233A42C52DB81B318A899BB3C27AA983AED48_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m084F324651D346AD470C5CCD6D00227F20E65AED_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mADAEF0AFB096686C709C511A5E7E15732D785404_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m8FB83A511CBD8E87C4B76B13161BCF5AED0D6C16(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t074CDE742B1876B064906E345B1A1909777F980F* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m73785D4B552D84FA1D201EAE45F0EB7CE59B4400(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE87676080E91A2A32A27135A3EF04BEC8E2EBEE6((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32CB59A992434863C7CA530E14BE3ACE19D53A0C_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14F2F1F86D25316069BEB2F0B49D8E2BD05315FF_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA58D9AFB9307931F5656F18E23DAE9E34232E084_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mEFF7154587D247B854E5734907A2F2793218CDE0_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m9F74188009ED85453A24ADCC2A37A179781C609D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m25A4E66F7DF3E1A7394444A57B352BCC5D8F9220_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t40F6F0E03631CE7E45E4B1FFD0442602CE3535A9* L_0;
		L_0 = Dictionary_2_get_Keys_m9A2810E095217DC279EE0C83EC7CBC52547972A2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mCC68A656343A9F73910F9B96AFF67DB1E45CC116_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7* L_0;
		L_0 = Dictionary_2_get_Values_m0C3710D8A0224DD51D2F0909B2CA6D60F9F68910(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m29394AD2CE04196A9A36C7C08BEE11D628E0E34D_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD78317B321EDEDE6A40B5960A99836488CBBECDF(__this, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB41736D0B14C835560EDC6DACAFDBBB71A62660B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m73442AC643D5851CC864442B4E3321AEB67483B8_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m8648C3BECE952DC317626512BB228420B4BB3E90(__this, L_3, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mDF952813F5740E6D39C0CACBC5E4FBBF5B7C8A0E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m442C8C93DC5454CE5F953408866A7B5761EE1F30(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_mE1258769871BEB13AAC7AB1EC59D57AB799B74D1(__this, L_3, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m60872939F0BDCF39A2CC4F433303DF8778ECBE97_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC2374D05E07DB677F2804413801EE682DC5E41BD(__this, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13BDD87937EAB692F79D9D99AE040E08F86AC0D8_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1EDECAF353D448162F5DC259F478EC28985C50FA((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tC7AD7202D2C214F6574A888A88850CC42E28D863 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m9895D05C0BB006D30D178303D51D0F19AA46FB3E_gshared (Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9BB716D3E0E7E52AF66FCB82F2E1E6F86C8B121A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mADFC592E5CA281E2AF1221CE45FC9EE7D2AA1646(__this, ((*(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)((XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CE78C81B3C997FF9C14675CFBBAD014EF68FE30_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_33 = L_22;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_31 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	memset(V_4, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B2_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_11 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_31);
				il2cpp_codegen_memcpy(V_4, L_31, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_32);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_33);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_33: *(void**)L_33));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mBE37F43780B97B9F8911558CF1758A6E0573F81A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m83C40C3BF1DFD21198ED5D890CD53F2B726FFF78_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_22 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_22, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? il2cpp_codegen_memcpy(L_20, L_16, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_21, L_19, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_19), il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_22, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_25 = L_0;
	const Il2CppFullySharedGenericAny L_44 = L_0;
	const Il2CppFullySharedGenericAny L_54 = L_0;
	const Il2CppFullySharedGenericAny L_70 = L_0;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_45 = L_26;
	const Il2CppFullySharedGenericAny L_71 = L_26;
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 47), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key));
		V_5 = ((int32_t)(L_8&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)(L_10%((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_14, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_14);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_16 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_2;
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_26: *(void**)L_26));
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_34;
		L_34 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = V_2;
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) < ((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_40 = V_5;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_41 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_41);
		bool L_46;
		L_46 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_45: *(void**)L_45));
		if (L_46)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_49;
		int32_t L_50 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_51 = V_2;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_53 = V_4;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_54: *(void**)L_54));
		V_8 = ((int32_t)(L_55&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_1;
		int32_t L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		NullCheck(L_58);
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)(L_57%((int32_t)(((RuntimeArray*)L_58)->max_length))));
		int32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_012b:
	{
		int32_t L_61 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_62 = V_2;
		NullCheck(L_62);
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_63 = V_2;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_66 = V_8;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_67 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_68 = V_2;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		il2cpp_codegen_memcpy(L_70, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_67);
		bool L_72;
		L_72 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_70: *(void**)L_70), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_71: *(void**)L_71));
		if (L_72)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_2;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_19 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_56 = L_0;
	const Il2CppFullySharedGenericAny L_64 = L_0;
	const Il2CppFullySharedGenericAny L_81 = L_0;
	const Il2CppFullySharedGenericAny L_89 = L_0;
	const Il2CppFullySharedGenericAny L_122 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_57 = L_31;
	const Il2CppFullySharedGenericAny L_82 = L_31;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_62 = L_36;
	const Il2CppFullySharedGenericAny L_87 = L_36;
	const Il2CppFullySharedGenericAny L_124 = L_36;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 47), L_11, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key));
		G_B7_0 = L_12;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		NullCheck(L_15);
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_14%((int32_t)(((RuntimeArray*)L_15)->max_length)))))));
		int32_t* L_16 = V_4;
		int32_t L_17 = *((int32_t*)L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_19, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_19);
		if (!L_20)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_21 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = V_0;
		NullCheck(L_22);
		if ((!(((uint32_t)L_21) < ((uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_31: *(void**)L_31));
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___2_behavior;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_36, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___2_behavior;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_46;
		L_46 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_46;
	}

IL_0111:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_48 = V_0;
		NullCheck(L_48);
		if ((!(((uint32_t)L_47) < ((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_53 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_57: *(void**)L_57));
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_62, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_64);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_65, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_66 = V_0;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_68;
		int32_t L_69 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_70 = V_0;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		NullCheck(L_73);
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_77 = V_2;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_79 = V_0;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		il2cpp_codegen_memcpy(L_81, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_82, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_78);
		bool L_83;
		L_83 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_81: *(void**)L_81), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_82: *(void**)L_82));
		if (!L_83)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_84 = ___2_behavior;
		if ((!(((uint32_t)L_84) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		il2cpp_codegen_memcpy(L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_87, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_88 = ___2_behavior;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_89, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_105 = __this->____entries;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_114 = V_10;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		__this->____freeList = L_115;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_116 = V_10;
		int32_t L_117 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_116, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), L_117);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_118, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), ((int32_t)il2cpp_codegen_subtract(L_120, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_121 = V_10;
		il2cpp_codegen_memcpy(L_122, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_instance_field_data(L_121, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2), L_122, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_123 = V_10;
		il2cpp_codegen_memcpy(L_124, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(L_123, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_124, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 47), L_19, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), ((int32_t)(L_20&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), ((int32_t)il2cpp_codegen_subtract(L_36, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_43);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_1;
		__this->____entries = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_24 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_29 = L_25;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 47), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key));
		G_B6_0 = L_6;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_7: *(void**)L_7));
		G_B6_0 = L_8;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		V_1 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = __this->____entries;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_17 = V_4;
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = __this->____comparer;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_23 = V_4;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25));
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		int32_t L_33 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_34 = V_4;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = __this->____entries;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_39);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_40 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_40, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_41 = V_4;
		int32_t L_42 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_42);
		bool L_43;
		L_43 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		if (!L_43)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_45;
		L_45 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_46 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_60 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m6B325002C83A39C48EE433C300692849D3B17B71_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mCB7FB79310BFA8537169F33C6312059A2A980737_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2BAC5DEF1C5EC223FCDB30D10041CF87E9C154D7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m399CC0BA5A4F1BC1D411E66032CFF75064047405_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0;
		L_0 = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mF823AA54EA409E05B95BF34DAC275E9D27837E29_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0;
		L_0 = ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_9);
		return L_10;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_10 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_10, L_12, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_13 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_14 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_14, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m4C04B28E0F448E6668328CDF17784B92080DB9A0_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_10 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_10, L_12, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_13 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_14 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_14, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)), il2cpp_rgctx_method(method->klass->rgctx_data, 66), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mF1B05D2823B0E1697B8FA449F74EA0838059E448_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m979F315A63424B89F0048BC9CE8A655857D4C399_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6AB963787EA7D1E024B60E9F2A6FC26E0ED10F9D_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4245FC39FE2282DDE49762F9E3E7947B3B9361BD_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_5;
		L_5 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA00CF3732697207DCEC86E8171F098552055B90C_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mC9A8C7D6ABEAD348E93C2A641F7643AF05D7C9DF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9A8C7D6ABEAD348E93C2A641F7643AF05D7C9DF_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* G_B2_0 = NULL;
	Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mC70DCF3ADBA3FEBE619576320B8DC8415D1E8573(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* L_11 = ((Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_32;
				L_32 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1D5FBEB908C9EDA488EF20AEF8A5A4439D1A661_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* Dictionary_2_get_Keys_mF91F1CD679DA834807C50DB0FC4378ED95BBD7CC_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_1 = (KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mA2C3BB3311FC1E51FB6A2F3D9D47AECAE5C693B5(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61CB1B65BB181982A67B15417420D15989E46540_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_1 = (KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mA2C3BB3311FC1E51FB6A2F3D9D47AECAE5C693B5(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* Dictionary_2_get_Values_m64BC473AC4F212B056135E2F0C94718C7DE38BF1_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_1 = (ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m04F2749CD5CF722CEFC20F917466B3F6F061EC1A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9DB83F2A9B5356C2DBAE5E76F224CB6F3AAE6F6F_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_1 = (ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m04F2749CD5CF722CEFC20F917466B3F6F061EC1A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m1EF0C6B43247C5BB7CB1C9403BCB08A92317874C_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_6 = ___0_key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2202BDF286655851C979A0B3B23BCF1E895379D_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m864F572C70E19BA0E418B7218557DDF7E915C96D_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0;
		L_0 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mB09CF33989A9E6D3187FCF0612DB00135F4494B1_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0;
		L_0 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m02E3A39ECD2DAA8D9A3F697A9CD5D2F06130D015_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0;
		L_0 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_9;
		L_9 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mE125CCF47547042EFEBD8F527ACB3467CE141645(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1365E9484D378352BC6699F1A9E997BA35D18451_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE7EA5B0505113A034FC619C33D596E62D0A743BC_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m996FAF561D7EA4C68E7BC2D04D725A346B72AE8B_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mCE8ED6EDAA6D7FE168B89322FA265984584FED6E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t773D4603FB435BF24C573582D3AE30498235105F Dictionary_2_GetEnumerator_m831198C4B028EDA4897B4071F9213AA2D15F9439_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m479DC7771C1DCB6E3DFDA4798284D44710CBE129_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mC2CA768512E73F88F4FCC9A58A1AC6B22F0D747D_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_6;
		L_6 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_14 = (KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD*)(KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_15 = V_0;
		Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_19;
		L_19 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_5 = (EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3*)(EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* V_10 = NULL;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_24;
		L_24 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_35 = ___0_key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_61 = ___0_key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m617CDD3B841954B472F6AE66CBCB2EBD0FC1D0C9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_94 = V_10;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___destination), (void*)NULL);
		#endif
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_96 = V_10;
		int32_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m214D98691FBC333CC2871A1C1E045675B8D07AAB_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m20256B4A09091FA9BAF763AB1A676B85BE7D1CA2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_21;
		L_21 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_24;
		L_24 = KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m617CDD3B841954B472F6AE66CBCB2EBD0FC1D0C9_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7E276047DB29276D2CA2537EFFDD97FB7206B5A6(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7E276047DB29276D2CA2537EFFDD97FB7206B5A6_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_1 = NULL;
	int32_t V_2 = 0;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_3 = (EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3*)(EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_5 = __this->____entries;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27* L_17 = (ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE125CCF47547042EFEBD8F527ACB3467CE141645_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_20;
		L_20 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_21 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_22 = L_21->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_25 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_26 = L_25->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_41 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27* L_42 = (ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t0971E8C4EBEE5C8A4504F092809DE8E775004F50* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF294BCC0BFFBA69B3D98B2A25DA26A84B4CA5DB7_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6507A12953F60FBE96D5BCDDD40D38F59576FA54_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m6885FCAA8346ADA2422DD737E89518E733163D91(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mCC4AF1F693EC0326E8C03580BFD4BECAD451F1F8_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38CD86549DFF3F69092EE476EFFDF5805C74280D_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3E17B17BC6B508567AE3B8D1289C382A2910A8BA_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mAC7F123BB334761EE0CCBBAD9BB818F90DD8C955(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0DE958EE4BBCEE76297EEA7DF5FD78525E33BEFD* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m74B8DF4C56456FCF56974BF5A2E6F18ADE5F441A(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mCE8ED6EDAA6D7FE168B89322FA265984584FED6E((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFD42916A37D4A00733B3BA097B7523C66294BE35_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mDB48FEA259034380B07D663BF9DA5A87AADDF34C_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8FE5DC297F8DAE8F880D4C93B8930C3F64C0CD54_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m787234738EE6ABB5361EC7C97B4EA2C7B1594A9F_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m07F71BED644E42D90C7CEFA9443A4C6E3B25ADDA_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m6BF41CEEE928A31EE88CE2FEE881A80DC85512B9_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t194B52D387535A41A8AC24480930A6EF9237894E* L_0;
		L_0 = Dictionary_2_get_Keys_mF91F1CD679DA834807C50DB0FC4378ED95BBD7CC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m7C538DD5B9656C39FEEE6024FBF546082CE2B37A_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t08F60DFA8DD89EE442A58A42FB0D43B2B079610C* L_0;
		L_0 = Dictionary_2_get_Values_m64BC473AC4F212B056135E2F0C94718C7DE38BF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m9A417D512AF4887CF6A542596666E9EB7A890AB2_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m987D7386AF918543787C302FBB4583CDD4203E70(__this, ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5093078B7BDEBE50E3ED607925C45964973E0BD3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD5E634FDF7CC6CADA5A3478125F7EDD367145EBA_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA2202BDF286655851C979A0B3B23BCF1E895379D(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m568D5E8F5B2988739B38C1BD59951E22D76250F8_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_mB399A2DE5639F782CE510F27A259419A0B887104(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mE30A94D4155D25B773BC4A89E269953CC08E1768_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mE7EA5B0505113A034FC619C33D596E62D0A743BC(__this, ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1182B6136C55C25C1237058ACE406BEDE361895A_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m59F6B9B5B5DEF5BE4AE38B52CC2130726FFA3EBC((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t773D4603FB435BF24C573582D3AE30498235105F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m7A358721C399EEF79FA38BA37055B2BF833FF701_gshared (Dictionary_2_t59DA07352ADF4B492AFF689EB4BA4B4313A6388B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m3560D656BC8EA33EDF2FFBFDA772B6EF399BAEC1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mE125CCF47547042EFEBD8F527ACB3467CE141645(__this, ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m559A3B967BD641CACBEBAB22D6EE2479F8A21EF0_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m125FF0DEEA5119DC272AFFF24E2393D10ED485D2_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8A03B2FDE6B2F1949061CB59868464D6B473AB31_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_5;
		L_5 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD23387AA1AD283B361A4663DEF8C802AF2821494_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m0B0FF5465C0A4A2AF39A098E18EEC1E13265CFED(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0B0FF5465C0A4A2AF39A098E18EEC1E13265CFED_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* G_B2_0 = NULL;
	Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mF06E8A266E24464F92E8E98944B0B02A38A2684B(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* L_11 = ((Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_32;
				L_32 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m27D138150AD2485915FDE52F82EBD39FF953170E_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* Dictionary_2_get_Keys_m23FDC88FD0F4EA8180EDCA8DC71761BAF61DC438_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_1 = (KeyCollection_tCF89724C527E8BD5473935E551BF231159652320*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m6DB01668D362CA8343DD996ADD4321C6DEB0FCB7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26C8525118B5018CF36F28882636025CC8904626_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_1 = (KeyCollection_tCF89724C527E8BD5473935E551BF231159652320*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m6DB01668D362CA8343DD996ADD4321C6DEB0FCB7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* Dictionary_2_get_Values_m165F3FB848DD9E3ED2E54B66613169E565BDABAD_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_1 = (ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mA347769221B381A708E2BF2350C0DF19D9EA005A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mA4FCF61B3F75FAB7A128202E0586555291124224_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_1 = (ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mA347769221B381A708E2BF2350C0DF19D9EA005A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m6094091C2512B5D6BD21B65E35AC860FD9BC160B_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_6 = ___0_key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAB4DF65AE3AE96C50FB6B104FF729839363566C6_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA3C9978C6E800D7F710DD27035D31B45F8F70692_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0;
		L_0 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2440B2E403F35438CF0164569A582E6ED49BD288_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0;
		L_0 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51161A601FC584F21810545EF4E98D529868ADF6_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0;
		L_0 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_9;
		L_9 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m39617AE9F756FBA318EC40A490DED72F93BF2DAC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5743F5BBE0558E7526E5D9942220AEF5486844FB_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m11DA5CA59198F37D15455A067A9D6DDDBF96E6BF_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m025C3BE0B36F4D0FB3B96884C8BD8A05CC18EBBB_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7926D53BD82C8BD255A3353B13E30429FC507AA4((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C Dictionary_2_GetEnumerator_m6EC38240CBF07A4A2CBBA57F88789DC78A807EE8_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m552E793478182E8847D960FE1A1CFDFA37CF4822_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5B712D8DCAD48261BA713184A80B4769FCB83B0D_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_6;
		L_6 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_14 = (KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F*)(KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_15 = V_0;
		Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_19;
		L_19 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_5 = (EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA*)(EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* V_10 = NULL;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_24;
		L_24 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_35 = ___0_key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_61 = ___0_key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m0CA29A5F3A65718C27424EA7F01E4E50D205E685(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_94 = V_10;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___source), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___destination), (void*)NULL);
		#endif
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m196EC84442BD44DA43FEBFAF2DFC0098C88D2E9A_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m63AEBFCD8A5950842F44931AD2BD54DC746AF9C2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_21;
		L_21 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_24;
		L_24 = KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0CA29A5F3A65718C27424EA7F01E4E50D205E685_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m11452DDB015567C2F86F75AD2A645418B862CFE7(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m11452DDB015567C2F86F75AD2A645418B862CFE7_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_1 = NULL;
	int32_t V_2 = 0;
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_3 = (EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA*)(EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_5 = __this->____entries;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27* L_17 = (ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m39617AE9F756FBA318EC40A490DED72F93BF2DAC_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ConversionQuery_GetHashCode_m19A38C82ED3B33971CCA4792FC48A99BA21BBC24((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_20;
		L_20 = EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_21 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_22 = L_21->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_25 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_26 = L_25->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_41 = V_4;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27* L_42 = (ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27));
	}

IL_00ff:
	{
	}
	{
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tC9690D7735E8A37295E24386A06CF64A4CDF530A* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9E3FAF9D6CF8291D2747D4A4A16AA4A80EFFDB4E_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5E91F3BC43EFF8B1271C35CED56FFCD531A6AACB_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDF4C78F52D12F749FEF2D2652E18AA75BC5162EE(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m78DEC53043EF2B30F275AE569C4DD378B9286718_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21168EF6435FFD8E5E03EE04C9631D068613BA7E_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m72165C10197471355B8B8B122DD898F5455D809C_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mBC3EB02FABF0B763FC51141746C76A2B122A0C95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9072F108A2F9AD9521E08D7ED9864840D96A0F8F* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m9F675A9E0F5C40C0644A2E92F3F18FF594826A85(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7926D53BD82C8BD255A3353B13E30429FC507AA4((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7EA04692820A19A03B6FC394A78FC5C7E5F053C7_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4A64BDE0DE0BD97839CCDB605500FCAB2477618D_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64C5C55DB9773FC9539368C74AE389898FDA5B15_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2F9391919127D328E5B05B4DBBA58BB3DFB12639_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m5AE74ADCC78896B6FA25B7CA40D1A8DFEF5D2425_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m5D5DD17F5F36EC6AA38353DB12C77A651E3DC92C_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCF89724C527E8BD5473935E551BF231159652320* L_0;
		L_0 = Dictionary_2_get_Keys_m23FDC88FD0F4EA8180EDCA8DC71761BAF61DC438(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m65BBBC0EC8FB9B6CC6D296AE661D05EA04799F82_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8E94CB687CA72459BC8D655DAD485EC62E007829* L_0;
		L_0 = Dictionary_2_get_Values_m165F3FB848DD9E3ED2E54B66613169E565BDABAD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m09D231D890960000803A2D508CEC7CD25DB3FA63_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m1E78EC2B425FB7536B56ACA2D72EB6DA7075AB84(__this, ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5082D8ACBDA7ADDA638091A338DDDA2B2A35C8BA* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mF680C2AA175BD00004B7DE8082465289B3B1A07A_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mAB4DF65AE3AE96C50FB6B104FF729839363566C6(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m27B1DFDEA3D86D095A99CF0B157A075A7BC32082_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m828F5E9803A14E42500585D905DDE8C07C755CD6(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m858A986442DB3D787A248D4783FBE470C18F3E32_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m11DA5CA59198F37D15455A067A9D6DDDBF96E6BF(__this, ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8C3880E6F37F7B5CF9669B61B56A1BC63529F462_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF8AD8A0C6774672C3C6ECB911FBB75FAE5665C9D((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t3219A68F30AAD0815375413BEEB87BCBB61C662C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m074732C200606199EC287C46FBB01B836FC840A5_gshared (Dictionary_2_t909F73896D59BAC1FFBEA249FCC69261B3CEF3A0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m934798E9172E94AB043DE0F345E8180C75008F27(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m39617AE9F756FBA318EC40A490DED72F93BF2DAC(__this, ((*(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)((ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)(ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2B6881340811B8C08C129E69E40CF918A4459075_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB33844E5597BD6726A4D62C03DB7C2372DDC30F0_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00C75CBFCD290384E094604C8E7C1FF214ABB480_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_5;
		L_5 = EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m73054532F5CBC03058DE0E056F70198FA1B23BD8_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mB3521C909E8367C92EB04EFC98310F958E77A410(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB3521C909E8367C92EB04EFC98310F958E77A410_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* G_B2_0 = NULL;
	Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m124FBB875FDECADCF8AA215B728E3E6DF3581E48(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* L_11 = ((Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_32;
				L_32 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5BB8EC4712567BDB57E548A0FD2EB5574D0C8C75_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* Dictionary_2_get_Keys_m85D045902AFB76E0DF1A85397D0BB9389456F4C2_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_1 = (KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mEE34CE6929DF7A6FFF4042FB805694E080EA6E39(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m4C8B14E266770E75058A2B837CEB762864111259_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_1 = (KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mEE34CE6929DF7A6FFF4042FB805694E080EA6E39(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* Dictionary_2_get_Values_m8478C8561248F6931322A3F5BE997D7906E6268D_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_1 = (ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m11506FCC6A22E53DECFE464794E72CE379AB5811(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mD5CA75A2B44B48B529C19D1EEDF2BF8DA0F26783_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_1 = (ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m11506FCC6A22E53DECFE464794E72CE379AB5811(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m147F7F26ABDACD686A2CFDD9024EC1B5832B0C6D_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_6 = ___0_key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m86CB9EC052E286E28807D37AC162EBB17A1AF2B1_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44362A7E901A3C97F8E205845AEAA3E354B348E6_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0;
		L_0 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m899BF125D8CCC9DD9BBFF6606798B4064089B76F_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0;
		L_0 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA1DF1223D34645FACED8329C1352DF516D1A3E32_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0;
		L_0 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_9;
		L_9 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m2C83973323B8F704669344FE89E5683F4AFC3F86(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8DAAA7FCFF7859096C7EA0AA3A0E80CAF2C3D95D_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mAE2B8C7158680A03FC90E9CC2350C31ABCCF8F0C_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) 
{
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m8D2500E33F1C3DA463FB78CDCA05E09ED5F60219_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF0F908D2A05C11BB48B0144BBA5312BAA3B1C694((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 Dictionary_2_GetEnumerator_m1388ED6855F5E126C0A040FC191A06244C69312E_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7145DB5B781825782572091FCDB13F11E378A461_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m7A562FFC1FF4845F5E82EABF2B5D0677746FD5EF_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_6;
		L_6 = EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_14 = (KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584*)(KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_15 = V_0;
		Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = TypeConvertKey_GetHashCode_mE29BB08A4A4ACA8607B1FAFC605A7A9D66347C88((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_19;
		L_19 = EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_5 = (EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6*)(EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* V_10 = NULL;
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = TypeConvertKey_GetHashCode_mE29BB08A4A4ACA8607B1FAFC605A7A9D66347C88((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_24;
		L_24 = EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_35 = ___0_key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_61 = ___0_key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mCA8A1733D482FFCE64A873A9943F79060CC8B563(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_94 = V_10;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____initialType), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->____targetType), (void*)NULL);
		#endif
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mBF53C54622804CED0E877C8942F0CBD9FE6178F7_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m1945465B7BF14081191ED81C78292DE18F69A1A2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_21;
		L_21 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_24;
		L_24 = KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCA8A1733D482FFCE64A873A9943F79060CC8B563_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mD70411757A5D9363EB0E52A61EF62BEB393BBA27(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD70411757A5D9363EB0E52A61EF62BEB393BBA27_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_1 = NULL;
	int32_t V_2 = 0;
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_3 = (EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6*)(EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_5 = __this->____entries;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97));
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97* L_17 = (TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = TypeConvertKey_GetHashCode_mE29BB08A4A4ACA8607B1FAFC605A7A9D66347C88(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2C83973323B8F704669344FE89E5683F4AFC3F86_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = TypeConvertKey_GetHashCode_mE29BB08A4A4ACA8607B1FAFC605A7A9D66347C88((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_20;
		L_20 = EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_21 = V_4;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_22 = L_21->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_25 = V_4;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_26 = L_25->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_41 = V_4;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97* L_42 = (TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97));
	}

IL_00ff:
	{
	}
	{
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t0E2CC75B90BBFC454F3E79503FBD8780C02E77F1* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF29C3DA611926AB1C6BADDF943C5E2C362FA7DDC_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m06EDCA90950DBC8F53ACD32B0F6A5E818D2A2175_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDDADC30E1DA33B415193586F18A8E006457EF2DA(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8FF90036CB047422EC06461B8D0623A4BA238235_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m332F09AC4A807595B0EE07645E004806DE0AD9A9_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mF6EFAE1A26D56968FB32A043EDB604DF749C11FE_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m3F551E54E5D596C12B2E5B6EA78C3196172993AD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t366B9AC5E3C218493E04B1D16EEBAE2525884584* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m90ABFB6C226FDE9E37515C6D2B305190C5B4F891(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mF0F908D2A05C11BB48B0144BBA5312BAA3B1C694((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFA37C95FA0F1BDADA09F28A29ECBE940F0B0A877_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mE71CEF66A0380392EADE6EC46592897A47D0293E_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37EF98AA29BA0003B9F7091784965AE389A07C79_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m46A4237B1F8952207E6B67AB1599C08FABBC635A_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m28AC8336376C2E5991AB8791D82D1738AB78C42F_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mC344373A14CDCF94A89C7FCD528B57C7B7930B46_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t16F72499C66FE71415AB051D94EB5E511065240A* L_0;
		L_0 = Dictionary_2_get_Keys_m85D045902AFB76E0DF1A85397D0BB9389456F4C2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mF9B766BA75E3AA8E8D154E75BDBD731CD9C52EB2_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t67259B4C059931E27A0D19FD312497FB21AC0F9C* L_0;
		L_0 = Dictionary_2_get_Values_m8478C8561248F6931322A3F5BE997D7906E6268D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mD7A3B3A021A77AFA25C0CF895EF94C64252DF7F6_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m76614C1C292360AD8CB55AFE1066545FA9FE0B45(__this, ((*(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)((TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tFE7456DB0DD0A50F5A26CD761A815619E4E880C6* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m09CE96C2A35553D0815D6C451ED4AB809BCF7C7D_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)((TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m86CB9EC052E286E28807D37AC162EBB17A1AF2B1(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m8D0585E309FFCC117951E4BEA5FA5B636FAC7292_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)((TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m16E4D0662F0A10BD613AB892124F68FC7DA8919F(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m5B9D3EC889647A70854266F0D3ED28B1B00F7FEF_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mAE2B8C7158680A03FC90E9CC2350C31ABCCF8F0C(__this, ((*(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)((TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8EF9C1844083265A9C1F9EE09751E859481DFBA5_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5C7E96C7F91EE84B2740A27FE7583EE2E95AAF41((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t0161FAF4FB02E579B2B0AC96BDE84169FB0C16D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mC60AEB2E98555E6DC414BCD947E64767776A58CF_gshared (Dictionary_2_tC7E3ADD270CF1B521906D57E308951760A70A0EA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m71F515F56996DB8ECD16F7F42CD56E8F8C76DB31(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m2C83973323B8F704669344FE89E5683F4AFC3F86(__this, ((*(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)((TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)(TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2586404ADDEB2811D7D8AFB6CCC59DB329D5DDFF_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAFD762A9D47744133CC20C12B9C74C58B03A41B8_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3EEE0D031F653D13CB53D5FD80CF5B0F8742E6CA_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_5;
		L_5 = EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B0FC7283961E38617310BD325AC7D90FD8A2739_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mF345821B1365FF3651F1EE5212A0BCE4E019CF3E(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF345821B1365FF3651F1EE5212A0BCE4E019CF3E_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* G_B2_0 = NULL;
	Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m119E73DF14C008E400240860EF7BC1B029E01D65(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* L_11 = ((Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_32;
				L_32 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7C3EB5E6BD22D3867FC8DE4D5CD88AB5ED927C57_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* Dictionary_2_get_Keys_m7F5E76BFA4C32D5757A0D8D38EE578C2B6E018C0_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_1 = (KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m728670657F74356D3962C473AF3B7267BBF0140C(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m07848B05CCB5900960274396F065B18F007021EA_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_1 = (KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m728670657F74356D3962C473AF3B7267BBF0140C(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* Dictionary_2_get_Values_mD42B2B895003745EA6AF0C57487E8940180C9A07_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_1 = (ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mA20A744369360B28C8FD088FC39F1C1506DC0006(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mC8CCDD32ED7E42104E80ED48916C8AB44BDF0FDA_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_1 = (ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mA20A744369360B28C8FD088FC39F1C1506DC0006(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m63DAD64A6C48E92A863B2D4274914A9D1B9FE1F9_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_6 = ___0_key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDC8E451808C2EE1B7CC1DF61A63142CD8E5A0B96_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m774B56941FA57603502200B3A433D1D8C1017EDE_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0;
		L_0 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mEDD7C91F344D9A58F97F7CEA73A8C86AC240C466_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0;
		L_0 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3E998644E3CAE352CD0C58AC95DE2A8695BD0A4F_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0;
		L_0 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_9;
		L_9 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m8F3088C1141879085398786BD4F6C88F505DA4E5(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5098EBB83988170690C5ED3EA34A59EB5FD49893_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCDD6E6004F72783FB0319D54FAE7EAB13BAE43F2_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) 
{
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mEBC849CECC86268991F1744C7A6E8E5C5F8C1020_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m798426DEAD81A50676A91F04FAFAE2CC30F50901((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D Dictionary_2_GetEnumerator_m3A888ACEF0C8A1B1F76F6F415A755BBB89006605_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4031418CAEAA9F9F626AFA93CEEB1DC260E15349_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m651ABF4B7E023A8B089F8EF9E2CB24BAE22F5BBC_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_6;
		L_6 = EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_14 = (KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D*)(KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_15 = V_0;
		Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = TypeNameKey_GetHashCode_m56603FE5921E623CB9FE9BB1BF121D5713B2B1FF((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_19;
		L_19 = EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_5 = (EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D*)(EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* V_10 = NULL;
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = TypeNameKey_GetHashCode_m56603FE5921E623CB9FE9BB1BF121D5713B2B1FF((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_24;
		L_24 = EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_35 = ___0_key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_61 = ___0_key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m3F26A526356569D21E336CF069A6F0AF20744D44(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_94 = V_10;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___TypeName), (void*)NULL);
		#endif
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m01D53C1BED91D957068C75BD4AED99D53E53447E_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mDD42A62EC26952C5BA3FA56BA932A59D00629E60(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_21;
		L_21 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_24;
		L_24 = KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F26A526356569D21E336CF069A6F0AF20744D44_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m6F88304866DDB8C6E666F5D1096AEE9D11B4F888(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6F88304866DDB8C6E666F5D1096AEE9D11B4F888_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_1 = NULL;
	int32_t V_2 = 0;
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_3 = (EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D*)(EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_5 = __this->____entries;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1));
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1* L_17 = (TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = TypeNameKey_GetHashCode_m56603FE5921E623CB9FE9BB1BF121D5713B2B1FF(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8F3088C1141879085398786BD4F6C88F505DA4E5_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = TypeNameKey_GetHashCode_m56603FE5921E623CB9FE9BB1BF121D5713B2B1FF((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_20;
		L_20 = EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_21 = V_4;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_22 = L_21->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_25 = V_4;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_26 = L_25->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_41 = V_4;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1* L_42 = (TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E8521226167A335876EC9B6F8E4B192E6F8C907* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6A4DE6118FEDA7B0C8F50E0C9BE049012FFD1BFD_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m85C5331CF497C192F9A4F0A8BCB8D5FD407CA84A_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mFECC465201DA6733215F0C0C8CF7E902871FB25A(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0B2C8D9B6CD5D623B511410F87DB6F5FD23CFF78_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m406136F03555AE5CB421C5821A20FCB27C0D954D_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m74B126584D19A8A039B8138CD8B20069BEDF6018_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m715BAAD950015938D825BD51D1D8BAF2B50B1879(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB4526A768D668C2ABF97F2E990EDCE7E90B51A0D* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7A4432D7657A3298193F1EB11E8CD12B53D49619(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m798426DEAD81A50676A91F04FAFAE2CC30F50901((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6640E1592B17B216E234BA52BB54E6D43B60E8C5_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mC4C8715421125C46C931F2A7BF11D6F29D1F85E0_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD99D5BFFF612FAE142A6A47AC077C22DCAA5AD96_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2586F13E1738ADE6F9433BE2BB814479807FC527_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2E2CA84600FD9F2C4D16C46A3565CC330F4D48C0_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mF3AD51E7312A76AC9F8AB7D51B8B4226DA368B8E_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t950D42AFDADBD3FAE2E224EA0B17AEE8704727D7* L_0;
		L_0 = Dictionary_2_get_Keys_m7F5E76BFA4C32D5757A0D8D38EE578C2B6E018C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m4C51E9A3C2E723CFA4744F7435B677A9AF2BB81F_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t51971B936BEB7EB24139A6FF733B33C880414872* L_0;
		L_0 = Dictionary_2_get_Values_mD42B2B895003745EA6AF0C57487E8940180C9A07(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC429F223164E7127093926B4CF10D3F044041187_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mFAA8D6AF691633A62C1E9B39F0B4123BFC338429(__this, ((*(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)((TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tA7CB46BB07234A7DB833A7ABADC3F5589A33DF9D* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m65B7ADF7B805481E87C1E63F7173BDC1D05CC5EC_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)((TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mDC8E451808C2EE1B7CC1DF61A63142CD8E5A0B96(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m25823321C525DB9B64BA7881C6E60BCF006FC52B_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)((TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_mBD17BE0A9731F70FE7722858FC71C08C7D5EDFB8(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 65)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mFD2873FDE782085DC2EFC0FC652210EEEB370259_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mCDD6E6004F72783FB0319D54FAE7EAB13BAE43F2(__this, ((*(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)((TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mB319933BCCFFE2FD902C4989766DEA0E36BBD105_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9A2172C236F606E01962EC1574810FC1AF0CB3AB((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tE60B4D8CE7037A925F196445410169CA5D12916D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m2A616B7E1F23697273F7C3AB7A33B45E453DFC15_gshared (Dictionary_2_tE01992DCF8C37AC9812E0CA8207F541DD2212773* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m16BCF1DC3D4674013328ECA44404EA07721E6285(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m8F3088C1141879085398786BD4F6C88F505DA4E5(__this, ((*(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)((TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)(TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_0 = NULL;
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_0 = ((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m37CD996F679E0A7567008B8ECD6AD510DDB4C0AA_gshared_inline (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m1546BF27C3927CA912C9F84BBBE168B182169C8A_gshared_inline (KeyValuePair_2_t6AEB309612EB6BA0A2AE52CFB92A999DF873AFB3* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* V_0 = NULL;
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_0 = ((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* EqualityComparer_1_get_Default_mE5477F43A9000CC172F5C8D1193F65287467FA0E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* V_0 = NULL;
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_0 = ((EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAA45B05C7943D68C13B6088091B86D8AF7ACA704(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tFE100E175C748410921C56413EA81193CF1BF411* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Key_m91CD644BEF40C82B9E078D3C621EDA89D3A9120D_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 KeyValuePair_2_get_Value_mB24B9E0A407074537FD1D3A0649C8A85704B057F_gshared_inline (KeyValuePair_2_tF34E5A81603AC7D66F6CC0579133888A275D3937* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* EqualityComparer_1_get_Default_m46F30FF6DE21E917F6EEFD1200695DF1CE480296_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* V_0 = NULL;
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_0 = ((EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAD8BA1E861F7248EFC3BE2A9BBED6F1930A84866(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6E86BD9AA5AD102E0BD5510D6AEF1EE601966799* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 KeyValuePair_2_get_Key_m9F0DF8EFF08E0A86AAA4F41A0DE8C6918E8F71D5_gshared_inline (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mD60F5AA2758E2F6167E7C3EA79B0E3196FBD2B31_gshared_inline (KeyValuePair_2_tDC6623EE9EEBCBCB2E6CF28C177C97C07D0AC913* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 KeyValuePair_2_get_Key_m7BC8BC0FC4A331B28B0EA32A46D198C36F54314F_gshared_inline (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, const RuntimeMethod* method) 
{
	{
		ConversionQuery_t6020D69A92AFFF57B10D74FC393A84457FDB4E27 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m22656539F6E6C2F5ECC089616A3A817BB9666878_gshared_inline (KeyValuePair_2_t601FDB79A8E334D8F56C83F365EE1C198B3363DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* EqualityComparer_1_get_Default_mE5FB7461E6FFAA929F70EF9ACB198980F2246B12_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* V_0 = NULL;
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_0 = ((EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m600578C2945EE64B1EFC64A070E95166AB2F35CD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t84B8E20F2C6410885B98EBCA1FAE7339C10F2EA0* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 KeyValuePair_2_get_Key_m69D62B36D8E01A5413913046127D9689DC7E52AB_gshared_inline (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, const RuntimeMethod* method) 
{
	{
		TypeConvertKey_t2C27BFF39BA05B5EC16008FFC0B6D79B05AECE97 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2F558490DA6900EE3758BB75FFCD64D461E73E01_gshared_inline (KeyValuePair_2_tEE6F2578D70264B7405027FB1D98E19C8246B6ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* EqualityComparer_1_get_Default_m4103D8806A6098B946427674EEBFD37DFA7207E5_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* V_0 = NULL;
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_0 = ((EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2082A2F2964D9F368ADA9CB20E2B3BBD1A3E43CA(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t0063CBC0F61AD93BF85DF115DEFC9A51B6E360FB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 KeyValuePair_2_get_Key_mEDDC0D8D0EB6DC4FCE85D5F9A1976E996EDBFD33_gshared_inline (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, const RuntimeMethod* method) 
{
	{
		TypeNameKey_t78E5EF22DCB1F7E0AD6ABFA394C44CB8E7B5D1D1 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m14D3AB21FA02F5E728A1C0AB5AF9088B8D13987E_gshared_inline (KeyValuePair_2_t9B22F42D40D79AAFB996058FB59BF64569DCA63F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
