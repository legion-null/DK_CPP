#pragma once

#include "基础类/对象/对象.h"

namespace 当康 {
namespace 基础类 {

class 类型: public 对象 {
类声明(类型)

protected:

public:
	static i32 类型注册(const 字符串 *类全名指针);
	static 对象* 根据类全名构建对象(const 字符串 &类全名);

public:
	类型& 构造();
	void 析构();

public:
	类型& 复制构造(const 类型 &其他实例);
	类型& 移动构造(类型 &&其他实例);
}
;

}
}
