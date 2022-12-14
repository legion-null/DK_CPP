#pragma once

#include "基础类/接口/接口.h"

namespace 当康 {
namespace 多线程 {

class 线程接口: virtual public 基础类::接口 {
接口声明(线程接口)

public:
	virtual void* 运行() = 0;
};

}
}
