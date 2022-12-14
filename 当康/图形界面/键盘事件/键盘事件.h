#pragma once

#include "图形界面/输入事件/输入事件.h"

namespace 当康 {
namespace 图形界面 {

class 键盘事件: public 输入事件 {
类声明(键盘事件)

public:
	typedef enum 按键代码 : i16 {

	} 按键代码;

public:
	class 设备状态 {
	public:

	};

public:
	键盘事件& 构造();
	void 析构();

public:
	键盘事件& 复制构造(const 键盘事件 &其他实例);
	键盘事件& 移动构造(键盘事件 &&其他实例);
};

}
}
