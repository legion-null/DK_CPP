#pragma once

#include "图形界面/输入事件/输入事件.h"

#include <linux/input.h>

namespace 当康 {
namespace 图形界面 {

class 键盘事件: public 输入事件 {
类声明(键盘事件)

public:
	typedef enum 按键代码 : i16 {

	} 按键代码;

public:
	typedef enum 事件类型 : i8 {
		未定义, 无操作, 按键按下, 按键释放
	} 事件类型;

public:
	class 设备状态 {
	public:
		bool CapsLock = false;
		bool NumLock = false;
	};

	struct 键盘数据包 {
		struct 特殊按键 {
			u8 LCtrl :1;
			u8 LShift :1;
			u8 LAlt :1;
			u8 LWin :1;
			u8 RCtrl :1;
			u8 RShift :1;
			u8 RAlt :1;
			u8 RWin :1;
		};
		u8 留空;
		u8 键值[6];
	};

protected:
	设备状态 当前状态;
	按键代码 代码;
	事件类型 类型;

public:
	键盘事件& 构造();
	void 析构();

public:
	键盘事件& 复制构造(const 键盘事件 &其他实例);
	键盘事件& 移动构造(键盘事件 &&其他实例);
};

}
}
