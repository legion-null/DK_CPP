#pragma once

#include "图形界面/组件/组件.h"

#include "模板容器/链表/链表.hpp"

namespace 当康 {
namespace 图形界面 {

class 容器: public 组件 {
类声明(容器)

protected:
	模板容器::链表<组件*> 子组件链表;

public:
	容器& 构造();
	void 析构();

public:
	容器& 复制构造(const 容器 &其他实例);
	容器& 移动构造(容器 &&其他实例);

public:
	void 添加子组件(组件 *子组件);

public:
	virtual void 绘制自身(图形处理::画笔 *画笔) override;

};

}
}
