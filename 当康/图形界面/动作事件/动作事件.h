#pragma once

#include "基础类/事件/事件.h"

命名空间 当康 {
命名空间 图形界面 {

类 动作事件: 继承 基础类::事件 {
类声明(动作事件)

公开:
	动作事件& 构造();
	void 析构();

公开:
	动作事件& 复制构造(只读 动作事件 &其他实例);
	动作事件& 移动构造(动作事件 &&其他实例);
};

}
}
