#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 基础类 {

class 事件: public 基础类::对象 {
类声明(事件)

public:
	事件& 构造();
	void 析构();

public:
	事件& 复制构造(const 事件 &其他实例);
	事件& 移动构造(事件 &&其他实例);
}
;

}
}
