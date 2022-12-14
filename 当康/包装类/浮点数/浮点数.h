#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 包装类 {

class 浮点数: public 基础类::对象 {
类声明(浮点数)

public:
	浮点数& 构造();
	void 析构();

public:
	浮点数& 复制构造(const 浮点数 &其他实例);
	浮点数& 移动构造(浮点数 &&其他实例);
}
;

}
}
