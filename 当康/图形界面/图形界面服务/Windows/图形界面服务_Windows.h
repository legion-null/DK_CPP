#pragma once

#include "图形界面/图形界面服务/图形界面服务.h"

namespace 当康 {
namespace 图形界面 {

class 图形界面服务_Windows: public 图形界面服务 {
抽象类声明(图形界面服务_Windows)

public:
	图形界面服务_Windows& 构造();
	void 析构();

public:
	图形界面服务_Windows& 复制构造(const 图形界面服务_Windows &其他实例);
	图形界面服务_Windows& 移动构造(图形界面服务_Windows &&其他实例);
};

}
}
