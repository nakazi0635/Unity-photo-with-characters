#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AndroidJNIModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2;
IL2CPP_EXTERN_C String_t* _stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringBuilder_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
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

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Mesh/MeshData
struct MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC 
{
	// System.IntPtr UnityEngine.Mesh/MeshData::m_Ptr
	intptr_t ___m_Ptr_0;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___stream0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___stream0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Mesh/MeshData::GetIndexDataSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MeshData_GetIndexDataSize_m929FEC27CC7339B28647B73731184F162163BC9E (intptr_t ___self0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Mesh/MeshData::GetIndexDataPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MeshData_GetIndexDataPtr_m351A1EF1D71E5083E241E5143939A33560AB557B (intptr_t ___self0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
inline NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, const RuntimeMethod*))MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
inline NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, const RuntimeMethod*))MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mesh/MeshData::get_vertexBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Mesh/MeshData::GetVertexDataSize(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MeshData_GetVertexDataSize_m9C750814C36E87F9DBC1FAC6490C18B53F0A61D7 (intptr_t ___self0, int32_t ___stream1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Mesh/MeshData::GetVertexDataPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MeshData_GetVertexDataPtr_m0DF202763444CB92490F67D73948685C29949CAD (intptr_t ___self0, int32_t ___stream1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
inline NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___stream0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, int32_t, const RuntimeMethod*))MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_gshared)(__this, ___stream0, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
inline NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___stream0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, int32_t, const RuntimeMethod*))MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_gshared)(__this, ___stream0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m8D1061D8E0079806BBE251CE5ACAF4262C15EE8E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___args0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2610));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2611));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2613));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2615));
		StringBuilder_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2617));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2618));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2619));
		goto IL_002e;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2620));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2622));
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2626));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2627));
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2628));
		StringBuilder_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2630));
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2634));
		StringBuilder_t* L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2636));
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF017EFBD89137395458CD85A01B48B45892FCE9_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___args0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2610));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2611));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2613));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2615));
		StringBuilder_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2617));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2618));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2619));
		goto IL_002e;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2620));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2622));
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2626));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2627));
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2628));
		StringBuilder_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2630));
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2634));
		StringBuilder_t* L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2636));
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCF75982D40162C5B91D40E003FC6388445B8A9B7_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___args0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2610));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2611));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2613));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2614));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2615));
		StringBuilder_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2617));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2618));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2619));
		goto IL_002e;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2620));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2622));
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2623));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2624));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2626));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2627));
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2628));
		StringBuilder_t* L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2629));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2630));
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2631));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2634));
		StringBuilder_t* L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2635));
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AndroidJNIModule + 2636));
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		CHECK_PAUSE_POINT;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3217));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3218));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3219));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3220));
		intptr_t L_0 = (intptr_t)__this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3221));
		uint64_t L_1;
		L_1 = MeshData_GetIndexDataSize_m929FEC27CC7339B28647B73731184F162163BC9E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3221));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3223));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3223));
		V_1 = (uint64_t)((int64_t)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3224));
		uint64_t L_3 = V_0;
		uint64_t L_4 = V_1;
		V_3 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_3%(uint64_t)(int64_t)L_4))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3225));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3226));
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_7);
		uint64_t L_9 = V_1;
		uint64_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3227));
		String_t* L_12;
		L_12 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C)), L_8, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3228));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3228));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_RuntimeMethod_var)));
	}

IL_0040:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3229));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_14/(uint64_t)(int64_t)L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3230));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3231));
		intptr_t L_16 = (intptr_t)__this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3232));
		intptr_t L_17;
		L_17 = MeshData_GetIndexDataPtr_m351A1EF1D71E5083E241E5143939A33560AB557B(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3232));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3233));
		void* L_18;
		L_18 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3233));
		uint64_t L_19 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3234));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_20;
		L_20 = ((  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_18, ((int32_t)L_19), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3234));
		V_4 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3235));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_21 = V_4;
		V_5 = L_21;
		goto IL_0065;
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3236));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_22 = V_5;
		return L_22;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 _returnValue;
	_returnValue = MeshData_GetIndexData_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFC83EECACD284C6C340883459F61A511AD80A8FF(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3217));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3218));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3219));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3220));
		intptr_t L_0 = (intptr_t)__this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3221));
		uint64_t L_1;
		L_1 = MeshData_GetIndexDataSize_m929FEC27CC7339B28647B73731184F162163BC9E(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3221));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3223));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3223));
		V_1 = (uint64_t)((int64_t)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3224));
		uint64_t L_3 = V_0;
		uint64_t L_4 = V_1;
		V_3 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_3%(uint64_t)(int64_t)L_4))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3225));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3226));
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_7);
		uint64_t L_9 = V_1;
		uint64_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3227));
		String_t* L_12;
		L_12 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C)), L_8, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3228));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3228));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_RuntimeMethod_var)));
	}

IL_0040:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3229));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_14/(uint64_t)(int64_t)L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3230));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3231));
		intptr_t L_16 = (intptr_t)__this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3232));
		intptr_t L_17;
		L_17 = MeshData_GetIndexDataPtr_m351A1EF1D71E5083E241E5143939A33560AB557B(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3232));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3233));
		void* L_18;
		L_18 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3233));
		uint64_t L_19 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3234));
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_20;
		L_20 = ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_18, ((int32_t)L_19), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3234));
		V_4 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3235));
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_21 = V_4;
		V_5 = L_21;
		goto IL_0065;
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3236));
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_22 = V_5;
		return L_22;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 _returnValue;
	_returnValue = MeshData_GetIndexData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m01F7E5FFB429983A574F5099B8D108A8C11D594D(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___stream0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3178));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3179));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3180));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3181));
		int32_t L_0 = ___stream0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___stream0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3182));
		int32_t L_2;
		L_2 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3182));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3183));
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3184));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3185));
		int32_t L_4;
		L_4 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3185));
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___stream0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3186));
		String_t* L_10;
		L_10 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), L_6, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3186));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3187));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3187));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_RuntimeMethod_var)));
	}

IL_003e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3188));
		intptr_t L_12 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_13 = ___stream0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3189));
		uint64_t L_14;
		L_14 = MeshData_GetVertexDataSize_m9C750814C36E87F9DBC1FAC6490C18B53F0A61D7(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3189));
		V_0 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3191));
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3191));
		V_1 = (uint64_t)((int64_t)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3192));
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_1;
		V_4 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)L_17))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3193));
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3194));
		uint64_t L_19 = V_0;
		uint64_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_20);
		uint64_t L_22 = V_1;
		uint64_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_23);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3195));
		String_t* L_25;
		L_25 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78)), L_21, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3196));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3196));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_RuntimeMethod_var)));
	}

IL_0080:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3197));
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_27/(uint64_t)(int64_t)L_28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3198));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3199));
		intptr_t L_29 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_30 = ___stream0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3200));
		intptr_t L_31;
		L_31 = MeshData_GetVertexDataPtr_m0DF202763444CB92490F67D73948685C29949CAD(L_29, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3200));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3201));
		void* L_32;
		L_32 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3201));
		uint64_t L_33 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3202));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_34;
		L_34 = ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_32, ((int32_t)L_33), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3202));
		V_5 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3203));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_35 = V_5;
		V_6 = L_35;
		goto IL_00a6;
	}

IL_00a6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3204));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_36 = V_6;
		return L_36;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C_AdjustorThunk (RuntimeObject* __this, int32_t ___stream0, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 _returnValue;
	_returnValue = MeshData_GetVertexData_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFA17A951C9C399FF2854D20E995D044D5C0E4C6C(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___stream0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3178));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3179));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3180));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3181));
		int32_t L_0 = ___stream0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___stream0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3182));
		int32_t L_2;
		L_2 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3182));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3183));
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3184));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3185));
		int32_t L_4;
		L_4 = MeshData_get_vertexBufferCount_mA6E407D61AFF65C192204BCA96BA14B5509EBD4F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3185));
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___stream0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3186));
		String_t* L_10;
		L_10 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), L_6, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3186));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3187));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3187));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_RuntimeMethod_var)));
	}

IL_003e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3188));
		intptr_t L_12 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_13 = ___stream0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3189));
		uint64_t L_14;
		L_14 = MeshData_GetVertexDataSize_m9C750814C36E87F9DBC1FAC6490C18B53F0A61D7(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3189));
		V_0 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3191));
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3191));
		V_1 = (uint64_t)((int64_t)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3192));
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_1;
		V_4 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)L_17))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3193));
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3194));
		uint64_t L_19 = V_0;
		uint64_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_20);
		uint64_t L_22 = V_1;
		uint64_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_23);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3195));
		String_t* L_25;
		L_25 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78)), L_21, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3196));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3196));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_RuntimeMethod_var)));
	}

IL_0080:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3197));
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_27/(uint64_t)(int64_t)L_28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3198));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3199));
		intptr_t L_29 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_30 = ___stream0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3200));
		intptr_t L_31;
		L_31 = MeshData_GetVertexDataPtr_m0DF202763444CB92490F67D73948685C29949CAD(L_29, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3200));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3201));
		void* L_32;
		L_32 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3201));
		uint64_t L_33 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3202));
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_34;
		L_34 = ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_32, ((int32_t)L_33), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3202));
		V_5 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3203));
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_35 = V_5;
		V_6 = L_35;
		goto IL_00a6;
	}

IL_00a6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3204));
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_36 = V_6;
		return L_36;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5_AdjustorThunk (RuntimeObject* __this, int32_t ___stream0, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD _returnValue;
	_returnValue = MeshData_GetVertexData_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9114317AC8FD04F74E2728D7581DEC77914223E5(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
