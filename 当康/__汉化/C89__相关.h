#pragma once

// C89关键字汉化

// 复杂类型关键字
#define		结构体		struct		// 结构体声明。（K&R时期引入）
#define		共用体		union		// 联合体声明。（K&R时期引入）
#define		枚举			enum		// 枚举声明。（C89标准新增）
#define		类型别名		typedef		// 声明类型别名。（K&R时期引入）
#define		取字节数		sizeof		// 得到特定类型或特定类型变量的大小。（K&R时期引入）

// 存储级别关键字
#define		自动			auto		// 指定为自动变量，由编译器自动分配及释放。通常在栈上分配。与static相反。当变量未指定时默认为auto。（K&R时期引入）
#define		静态			static		// 指定为静态变量，分配在静态变量区，修饰函数时，指定函数作用域为文件内部。（K&R时期引入）
#define		寄存器		register	// 指定为寄存器变量，建议编译器将变量存储到寄存器中使用，也可以修饰函数形参，建议编译器通过寄存器而不是堆栈传递参数。（K&R时期引入）
#define		外部			extern		// 指定对应变量为外部变量，即标示变量或者函数的#define在别的文件中，提示编译器遇到此变量和函数时在其他模块中寻找其#define。（K&R时期引入）
#define		只读			const		// 指定变量不可被当前线程改变（但有可能被系统或其他线程改变）。（C89标准新增）
#define		易变			volatile	// 指定变量的值有可能会被系统或其他线程改变，强制编译器每次从内存中取得该变量的值，阻止编译器把该变量优化成寄存器变量。（C89标准新增）

// 流程控制关键字
// 跳转结构
#define		返回			return		// 用在函数体中，返回特定值（如果是void类型，则不返回函数值）。（K&R时期引入）
#define		继续			continue	// 结束当前循环，开始下一轮循环。（K&R时期引入）
#define		跳出			break		// 跳出当前循环或switch结构。（K&R时期引入）
#define		跳转			goto		// 无条件跳转语句。（K&R时期引入）
// 分支结构
#define		如果			if			// 条件语句，后面不需要放分号。（K&R时期引入）
#define		否则			else		// 条件语句否定分支（与if连用）。（K&R时期引入）
#define		选择			switch		// 开关语句（多重分支语句）。（K&R时期引入）
#define		分支			case		// 开关语句中的分支标记，与switch连用。（K&R时期引入）
#define		默认			default		// 开关语句中的“其他”分支，可选。（K&R时期引入）
// 循环结构
#define		循环			for
#define		循环当		while
#define		执行			do

// 其他
#define		主函数		main		// C语言一般入口函数名
