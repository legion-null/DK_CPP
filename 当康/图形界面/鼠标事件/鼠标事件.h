#pragma once

#include "图形界面/输入事件/输入事件.h"

#include "图形处理/像素点2D/像素点2D.h"

namespace 当康 {
namespace 图形界面 {

class 鼠标事件: public 输入事件 {
类声明(鼠标事件)

public:
	typedef enum 事件类型 : i8 {
		未定义事件,	//
		移动,		//
		按下,		//
		释放,		//
		点击,		//
		拖动,		//
		滚动,		//
	} 事件类型;

	static 基础类::字符串 事件类型转字符串(事件类型 类型);

public:
	class 设备状态 {
	public:
		图形处理::像素点2D 位置;
		i8 左键按下 :1;
		i8 中键按下 :1;
		i8 右键按下 :1;
		事件类型 类型 = 事件类型::未定义事件;
	public:
		设备状态() {
			左键按下 = 0;
			中键按下 = 0;
			右键按下 = 0;
		}
	};
protected:
	设备状态 当前状态;

public:
	鼠标事件& 构造();
	void 析构();

public:
	鼠标事件& 复制构造(const 鼠标事件 &其他实例);
	鼠标事件& 移动构造(鼠标事件 &&其他实例);

public:
	void 设置当前状态(设备状态 &状态);

public:
	i32 获取x() const;
	i32 获取y() const;
	void 获取位置(i32 &x, i32 &y) const;
	图形处理::像素点2D 获取位置() const;

public:
	bool 左键按下() const;
	bool 中键按下() const;
	bool 右键按下() const;

public:
	事件类型 获取事件类型() const;

};

}
}
