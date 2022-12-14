#pragma once

#include "定义.h"

namespace 当康 {
namespace 基础类 {

class 字符串;

class 对象 {
类声明(对象)

public:
	static bool 对象类型比较(对象 *对象1, 对象 *对象2);
	static bool 对象类型比较(对象 &对象1, 对象 &对象2);
	static bool 对象类型比较(对象 &对象1, 对象 *对象2);

public:
	对象& 构造();
	void 析构();

public:
	对象& 复制构造(const 对象 &其他实例);
	对象& 移动构造(对象 &&其他实例);

public:
	virtual const c8* 转为字符串();

};

}
}
