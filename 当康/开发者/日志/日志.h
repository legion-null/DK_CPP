#pragma once

#include "基础类/对象/对象.h"

namespace 当康 {
namespace 开发者 {

class 日志: public 基础类::对象 {
类声明(日志)

public:
	typedef enum 日志级别 : i8 {
		致命错误 = 0, //
		严重错误, //
		一般错误, //
		严重警告, //
		一般警告, //
		调试信息, //
		一般信息 //
	} 日志级别;

public:
	static 日志级别 当前日志级别;

public:
	static void 格式化打印日志(日志级别 级别, const c8 *格式, ...);
	static void 打印日志(日志级别 级别, const 基础类::字符串 &文本);

public:
	日志& 构造();
	void 析构();

public:
	日志& 复制构造(const 日志 &其他实例);
	日志& 移动构造(日志 &&其他实例);

};

}
}

