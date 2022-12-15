#pragma once

#include "图形界面/键盘/键盘.h"

namespace 当康 {
namespace 图形界面 {

class 键盘_X11: public 键盘 {
类声明(键盘_X11)

protected:
	struct X11图形界面服务相关数据 *X11服务 = nullptr;

public:
	键盘_X11(图形界面服务_X11 *服务){
		构造(服务);
	}

public:
	键盘_X11& 构造();
	void 析构();

public:
	键盘_X11& 构造(图形界面服务_X11 *服务);

public:
	键盘_X11& 复制构造(const 键盘_X11 &其他实例);
	键盘_X11& 移动构造(键盘_X11 &&其他实例);

protected:
	virtual 输入事件* 上报输入事件() override;
};

}
}
