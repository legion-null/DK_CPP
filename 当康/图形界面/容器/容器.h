#pragma once

#include "图形界面/组件/组件.h"

#include "模板容器/链表/链表.hpp"

命名空间 当康 {
命名空间 图形界面 {

类 容器: 继承 组件 {
类声明(容器)

保护:
	模板容器::链表<组件*> 子组件链表;

公开:
	容器& 构造();
	void 析构();

公开:
	容器& 复制构造(只读 容器 &其他实例);
	容器& 移动构造(容器 &&其他实例);

公开:
	void 添加子组件(组件 *子组件);

公开:
	虚函数 void 绘制自身(图形处理::画笔 *笔) 覆盖;

};

}
}
