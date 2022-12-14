#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 包装类 {

class 整数: public 基础类::对象 {
类声明(整数)

public:
	整数& 构造();
	void 析构();

public:
	整数& 复制构造(const 整数 &其他实例);
	整数& 移动构造(整数 &&其他实例);
}
;

}
}
