#pragma once

#include "图形界面/输入设备/输入设备.h"

#include "图形界面/鼠标事件/鼠标事件.h"

命名空间 当康 {
命名空间 图形界面 {

类 鼠标: 继承 输入设备 {
抽象类声明(鼠标)



保护:
	鼠标事件::设备状态 当前状态;

公开:
	鼠标& 构造();
	void 析构();

公开:
	鼠标& 复制构造(只读 鼠标 &其他实例);
	鼠标& 移动构造(鼠标 &&其他实例);

};

}
}
