#pragma once

#include "基础类/对象/对象.h"

namespace 当康 {
namespace 常用单例 {

class 系统: public 基础类::对象 {
单例声明(系统)

public:
	static 系统 *此系统;

public:

protected:

protected:
	系统& 构造();
	void 析构();

protected:
	系统& 复制构造(const 系统 &其他实例);
	系统& 移动构造(系统 &&其他实例);

public:

};

}
}
