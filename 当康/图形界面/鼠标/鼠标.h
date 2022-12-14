#pragma once

#include "图形界面/输入设备/输入设备.h"

#include "图形界面/鼠标事件/鼠标事件.h"

namespace 当康 {
namespace 图形界面 {

class 鼠标: public 输入设备 {
抽象类声明(鼠标)

protected:
	鼠标事件::设备状态 当前状态;

public:
	鼠标& 构造();
	void 析构();

public:
	鼠标& 复制构造(const 鼠标 &其他实例);
	鼠标& 移动构造(鼠标 &&其他实例);

};

}
}
