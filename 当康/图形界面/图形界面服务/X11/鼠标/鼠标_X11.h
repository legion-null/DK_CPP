#pragma once

#include "图形界面/鼠标/鼠标.h"

namespace 当康 {
namespace 图形界面 {

class 鼠标_X11: public 鼠标 {
类声明(鼠标_X11)

protected:
	struct X11图形界面服务相关数据 *X11服务 = nullptr;

public:
	鼠标_X11(图形界面服务_X11 *服务){
		构造(服务);
	}

public:
	鼠标_X11& 构造();
	void 析构();

public:
	鼠标_X11& 构造(图形界面服务_X11 *服务);

public:
	鼠标_X11& 复制构造(const 鼠标_X11 &其他实例);
	鼠标_X11& 移动构造(鼠标_X11 &&其他实例);

protected:
	virtual 输入事件* 上报输入事件() override;
};

}
}
