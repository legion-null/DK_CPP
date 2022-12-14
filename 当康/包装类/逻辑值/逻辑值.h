#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 包装类 {

class 逻辑值: public 基础类::对象 {
类声明(逻辑值)

public:
	逻辑值& 构造();
	void 析构();

public:
	逻辑值& 复制构造(const 逻辑值 &其他实例);
	逻辑值& 移动构造(逻辑值 &&其他实例);
}
;

}
}
