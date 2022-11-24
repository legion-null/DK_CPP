#pragma once

// 类型长度规范化代码，更换编译平台可能需要修改

// 整数类型
#define d8		char
#define d16		short
#define d32		int
#define d64		long int

// 有符号整数类型
typedef signed d8 i8;
typedef signed d16 i16;
typedef signed d32 i32;
typedef signed d64 i64;

// 无符号整数类型
typedef unsigned d8 u8;
typedef unsigned d16 u16;
typedef unsigned d32 u32;
typedef unsigned d64 u64;

// CPU架构相关类型
typedef i64 iSize;
typedef u64 uSize;

// 浮点数类型
typedef float f32;
typedef double f64;
typedef long double f128;

// 字符类型
typedef char c8;
typedef char16_t c16;
typedef char32_t c32;
