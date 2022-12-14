#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 文件类 {

class 文件: public 基础类::对象 {
类声明(文件)

public:
	文件& 构造();
	void 析构();

public:
	文件& 复制构造(const 文件 &其他实例);
	文件& 移动构造(文件 &&其他实例);
};

}
}
