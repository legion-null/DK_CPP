#pragma once

#include "基础类/对象/对象.h"

namespace 当康 {
namespace 基础类 {

class 异常: public 基础类::对象 {
类声明(异常)

public:
	异常(const 字符串 &字符串) {
		构造(字符串);
	}

public:
	异常& 构造();
	void 析构();

public:
	异常& 构造(const 字符串 &字符串);

public:
	异常& 复制构造(const 异常 &其他实例);
	异常& 移动构造(异常 &&其他实例);
};

}
}
