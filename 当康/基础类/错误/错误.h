#pragma once

#include "基础类/异常/异常.h"

namespace 当康 {
namespace 基础类 {

class 错误: public 基础类::异常 {
类声明(错误)

public:
	错误& 构造();
	void 析构();

public:
	错误& 复制构造(const 错误 &其他实例);
	错误& 移动构造(错误 &&其他实例);
};

}
}
