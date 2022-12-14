#pragma once

#include "定义.h"

namespace 当康 {

namespace 基础类 {
class 对象;
}

template<class E, class F>
bool 对象属于类型(F *对象) {
	if (对象->获取类全名() == E::返回类全名())
		return true;
	else
		return false;
}

}
