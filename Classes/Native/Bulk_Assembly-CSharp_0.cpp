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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler>
struct List_1_t365750880;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Transform
struct Transform_t3600365921;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t3188643434;
// Vuforia.VirtualButton
struct VirtualButton_t386166510;
// Vuforia.VirtualButtonBehaviour
struct VirtualButtonBehaviour_t1436326451;
// vb_anim
struct vb_anim_t1885597570;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3074832948;
extern String_t* _stringLiteral3520899429;
extern String_t* _stringLiteral3976176641;
extern String_t* _stringLiteral4008151711;
extern String_t* _stringLiteral554493432;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisVirtualButtonBehaviour_t1436326451_m85406358_RuntimeMethod_var;
extern const uint32_t vb_anim_OnButtonPressed_m16613445_MetadataUsageId;
extern const uint32_t vb_anim_OnButtonReleased_m634586958_MetadataUsageId;
extern const uint32_t vb_anim_Start_m1127157330_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SENSITIVITY_T3045829715_H
#define SENSITIVITY_T3045829715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButton/Sensitivity
struct  Sensitivity_t3045829715 
{
public:
	// System.Int32 Vuforia.VirtualButton/Sensitivity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sensitivity_t3045829715, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENSITIVITY_T3045829715_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef VB_ANIM_T1885597570_H
#define VB_ANIM_T1885597570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vb_anim
struct  vb_anim_t1885597570  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject vb_anim::vbBtnObj
	GameObject_t1113636619 * ___vbBtnObj_4;
	// UnityEngine.Animator vb_anim::envAni
	Animator_t434523843 * ___envAni_5;
	// UnityEngine.GameObject vb_anim::modernObj
	GameObject_t1113636619 * ___modernObj_6;
	// UnityEngine.GameObject vb_anim::train
	GameObject_t1113636619 * ___train_7;

public:
	inline static int32_t get_offset_of_vbBtnObj_4() { return static_cast<int32_t>(offsetof(vb_anim_t1885597570, ___vbBtnObj_4)); }
	inline GameObject_t1113636619 * get_vbBtnObj_4() const { return ___vbBtnObj_4; }
	inline GameObject_t1113636619 ** get_address_of_vbBtnObj_4() { return &___vbBtnObj_4; }
	inline void set_vbBtnObj_4(GameObject_t1113636619 * value)
	{
		___vbBtnObj_4 = value;
		Il2CppCodeGenWriteBarrier((&___vbBtnObj_4), value);
	}

	inline static int32_t get_offset_of_envAni_5() { return static_cast<int32_t>(offsetof(vb_anim_t1885597570, ___envAni_5)); }
	inline Animator_t434523843 * get_envAni_5() const { return ___envAni_5; }
	inline Animator_t434523843 ** get_address_of_envAni_5() { return &___envAni_5; }
	inline void set_envAni_5(Animator_t434523843 * value)
	{
		___envAni_5 = value;
		Il2CppCodeGenWriteBarrier((&___envAni_5), value);
	}

	inline static int32_t get_offset_of_modernObj_6() { return static_cast<int32_t>(offsetof(vb_anim_t1885597570, ___modernObj_6)); }
	inline GameObject_t1113636619 * get_modernObj_6() const { return ___modernObj_6; }
	inline GameObject_t1113636619 ** get_address_of_modernObj_6() { return &___modernObj_6; }
	inline void set_modernObj_6(GameObject_t1113636619 * value)
	{
		___modernObj_6 = value;
		Il2CppCodeGenWriteBarrier((&___modernObj_6), value);
	}

	inline static int32_t get_offset_of_train_7() { return static_cast<int32_t>(offsetof(vb_anim_t1885597570, ___train_7)); }
	inline GameObject_t1113636619 * get_train_7() const { return ___train_7; }
	inline GameObject_t1113636619 ** get_address_of_train_7() { return &___train_7; }
	inline void set_train_7(GameObject_t1113636619 * value)
	{
		___train_7 = value;
		Il2CppCodeGenWriteBarrier((&___train_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VB_ANIM_T1885597570_H
#ifndef VIRTUALBUTTONBEHAVIOUR_T1436326451_H
#define VIRTUALBUTTONBEHAVIOUR_T1436326451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButtonBehaviour
struct  VirtualButtonBehaviour_t1436326451  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String Vuforia.VirtualButtonBehaviour::mName
	String_t* ___mName_5;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonBehaviour::mSensitivity
	int32_t ___mSensitivity_6;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_7;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonBehaviour::mPrevTransform
	Matrix4x4_t1817901843  ___mPrevTransform_8;
	// UnityEngine.GameObject Vuforia.VirtualButtonBehaviour::mPrevParent
	GameObject_t1113636619 * ___mPrevParent_9;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mSensitivityDirty
	bool ___mSensitivityDirty_10;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonBehaviour::mPreviousSensitivity
	int32_t ___mPreviousSensitivity_11;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mPreviouslyEnabled
	bool ___mPreviouslyEnabled_12;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mPressed
	bool ___mPressed_13;
	// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler> Vuforia.VirtualButtonBehaviour::mHandlers
	List_1_t365750880 * ___mHandlers_14;
	// UnityEngine.Vector2 Vuforia.VirtualButtonBehaviour::mLeftTop
	Vector2_t2156229523  ___mLeftTop_15;
	// UnityEngine.Vector2 Vuforia.VirtualButtonBehaviour::mRightBottom
	Vector2_t2156229523  ___mRightBottom_16;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mUnregisterOnDestroy
	bool ___mUnregisterOnDestroy_17;
	// Vuforia.VirtualButton Vuforia.VirtualButtonBehaviour::mVirtualButton
	VirtualButton_t386166510 * ___mVirtualButton_18;

public:
	inline static int32_t get_offset_of_mName_5() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mName_5)); }
	inline String_t* get_mName_5() const { return ___mName_5; }
	inline String_t** get_address_of_mName_5() { return &___mName_5; }
	inline void set_mName_5(String_t* value)
	{
		___mName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mName_5), value);
	}

	inline static int32_t get_offset_of_mSensitivity_6() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mSensitivity_6)); }
	inline int32_t get_mSensitivity_6() const { return ___mSensitivity_6; }
	inline int32_t* get_address_of_mSensitivity_6() { return &___mSensitivity_6; }
	inline void set_mSensitivity_6(int32_t value)
	{
		___mSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_mHasUpdatedPose_7() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mHasUpdatedPose_7)); }
	inline bool get_mHasUpdatedPose_7() const { return ___mHasUpdatedPose_7; }
	inline bool* get_address_of_mHasUpdatedPose_7() { return &___mHasUpdatedPose_7; }
	inline void set_mHasUpdatedPose_7(bool value)
	{
		___mHasUpdatedPose_7 = value;
	}

	inline static int32_t get_offset_of_mPrevTransform_8() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPrevTransform_8)); }
	inline Matrix4x4_t1817901843  get_mPrevTransform_8() const { return ___mPrevTransform_8; }
	inline Matrix4x4_t1817901843 * get_address_of_mPrevTransform_8() { return &___mPrevTransform_8; }
	inline void set_mPrevTransform_8(Matrix4x4_t1817901843  value)
	{
		___mPrevTransform_8 = value;
	}

	inline static int32_t get_offset_of_mPrevParent_9() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPrevParent_9)); }
	inline GameObject_t1113636619 * get_mPrevParent_9() const { return ___mPrevParent_9; }
	inline GameObject_t1113636619 ** get_address_of_mPrevParent_9() { return &___mPrevParent_9; }
	inline void set_mPrevParent_9(GameObject_t1113636619 * value)
	{
		___mPrevParent_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPrevParent_9), value);
	}

	inline static int32_t get_offset_of_mSensitivityDirty_10() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mSensitivityDirty_10)); }
	inline bool get_mSensitivityDirty_10() const { return ___mSensitivityDirty_10; }
	inline bool* get_address_of_mSensitivityDirty_10() { return &___mSensitivityDirty_10; }
	inline void set_mSensitivityDirty_10(bool value)
	{
		___mSensitivityDirty_10 = value;
	}

	inline static int32_t get_offset_of_mPreviousSensitivity_11() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPreviousSensitivity_11)); }
	inline int32_t get_mPreviousSensitivity_11() const { return ___mPreviousSensitivity_11; }
	inline int32_t* get_address_of_mPreviousSensitivity_11() { return &___mPreviousSensitivity_11; }
	inline void set_mPreviousSensitivity_11(int32_t value)
	{
		___mPreviousSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_mPreviouslyEnabled_12() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPreviouslyEnabled_12)); }
	inline bool get_mPreviouslyEnabled_12() const { return ___mPreviouslyEnabled_12; }
	inline bool* get_address_of_mPreviouslyEnabled_12() { return &___mPreviouslyEnabled_12; }
	inline void set_mPreviouslyEnabled_12(bool value)
	{
		___mPreviouslyEnabled_12 = value;
	}

	inline static int32_t get_offset_of_mPressed_13() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPressed_13)); }
	inline bool get_mPressed_13() const { return ___mPressed_13; }
	inline bool* get_address_of_mPressed_13() { return &___mPressed_13; }
	inline void set_mPressed_13(bool value)
	{
		___mPressed_13 = value;
	}

	inline static int32_t get_offset_of_mHandlers_14() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mHandlers_14)); }
	inline List_1_t365750880 * get_mHandlers_14() const { return ___mHandlers_14; }
	inline List_1_t365750880 ** get_address_of_mHandlers_14() { return &___mHandlers_14; }
	inline void set_mHandlers_14(List_1_t365750880 * value)
	{
		___mHandlers_14 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_14), value);
	}

	inline static int32_t get_offset_of_mLeftTop_15() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mLeftTop_15)); }
	inline Vector2_t2156229523  get_mLeftTop_15() const { return ___mLeftTop_15; }
	inline Vector2_t2156229523 * get_address_of_mLeftTop_15() { return &___mLeftTop_15; }
	inline void set_mLeftTop_15(Vector2_t2156229523  value)
	{
		___mLeftTop_15 = value;
	}

	inline static int32_t get_offset_of_mRightBottom_16() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mRightBottom_16)); }
	inline Vector2_t2156229523  get_mRightBottom_16() const { return ___mRightBottom_16; }
	inline Vector2_t2156229523 * get_address_of_mRightBottom_16() { return &___mRightBottom_16; }
	inline void set_mRightBottom_16(Vector2_t2156229523  value)
	{
		___mRightBottom_16 = value;
	}

	inline static int32_t get_offset_of_mUnregisterOnDestroy_17() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mUnregisterOnDestroy_17)); }
	inline bool get_mUnregisterOnDestroy_17() const { return ___mUnregisterOnDestroy_17; }
	inline bool* get_address_of_mUnregisterOnDestroy_17() { return &___mUnregisterOnDestroy_17; }
	inline void set_mUnregisterOnDestroy_17(bool value)
	{
		___mUnregisterOnDestroy_17 = value;
	}

	inline static int32_t get_offset_of_mVirtualButton_18() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mVirtualButton_18)); }
	inline VirtualButton_t386166510 * get_mVirtualButton_18() const { return ___mVirtualButton_18; }
	inline VirtualButton_t386166510 ** get_address_of_mVirtualButton_18() { return &___mVirtualButton_18; }
	inline void set_mVirtualButton_18(VirtualButton_t386166510 * value)
	{
		___mVirtualButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVirtualButton_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONBEHAVIOUR_T1436326451_H


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Vuforia.VirtualButtonBehaviour>()
inline VirtualButtonBehaviour_t1436326451 * GameObject_GetComponent_TisVirtualButtonBehaviour_t1436326451_m85406358 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  VirtualButtonBehaviour_t1436326451 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void Vuforia.VirtualButtonBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonBehaviour_RegisterEventHandler_m1227097985 (VirtualButtonBehaviour_t1436326451 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * Component_GetComponent_TisAnimator_t434523843_m2351447238 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1697843332 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
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
// System.Void vb_anim::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vb_anim__ctor_m2747475702 (vb_anim_t1885597570 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void vb_anim::Start()
extern "C" IL2CPP_METHOD_ATTR void vb_anim_Start_m1127157330 (vb_anim_t1885597570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vb_anim_Start_m1127157330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3976176641, /*hidden argument*/NULL);
		__this->set_vbBtnObj_4(L_0);
		GameObject_t1113636619 * L_1 = __this->get_vbBtnObj_4();
		NullCheck(L_1);
		VirtualButtonBehaviour_t1436326451 * L_2 = GameObject_GetComponent_TisVirtualButtonBehaviour_t1436326451_m85406358(L_1, /*hidden argument*/GameObject_GetComponent_TisVirtualButtonBehaviour_t1436326451_m85406358_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualButtonBehaviour_RegisterEventHandler_m1227097985(L_2, __this, /*hidden argument*/NULL);
		Animator_t434523843 * L_3 = __this->get_envAni_5();
		NullCheck(L_3);
		Component_GetComponent_TisAnimator_t434523843_m2351447238(L_3, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3520899429, /*hidden argument*/NULL);
		__this->set_train_7(L_4);
		GameObject_t1113636619 * L_5 = __this->get_modernObj_6();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void vb_anim::OnButtonPressed(Vuforia.VirtualButtonBehaviour)
extern "C" IL2CPP_METHOD_ATTR void vb_anim_OnButtonPressed_m16613445 (vb_anim_t1885597570 * __this, VirtualButtonBehaviour_t1436326451 * ___vb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vb_anim_OnButtonPressed_m16613445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_envAni_5();
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_modernObj_6();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		Animator_t434523843 * L_2 = __this->get_envAni_5();
		NullCheck(L_2);
		Animator_Play_m1697843332(L_2, _stringLiteral4008151711, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_train_7();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Translate_m1810197270(L_4, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3074832948, /*hidden argument*/NULL);
		return;
	}
}
// System.Void vb_anim::OnButtonReleased(Vuforia.VirtualButtonBehaviour)
extern "C" IL2CPP_METHOD_ATTR void vb_anim_OnButtonReleased_m634586958 (vb_anim_t1885597570 * __this, VirtualButtonBehaviour_t1436326451 * ___vb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vb_anim_OnButtonReleased_m634586958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_envAni_5();
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_modernObj_6();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral554493432, /*hidden argument*/NULL);
		return;
	}
}
// System.Void vb_anim::Update()
extern "C" IL2CPP_METHOD_ATTR void vb_anim_Update_m1795114650 (vb_anim_t1885597570 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
