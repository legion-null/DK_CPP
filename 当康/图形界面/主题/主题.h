#pragma once

#include "基础类/对象/对象.h"

namespace 当康 {
namespace 图形界面 {

class 组件;
class 容器;

class 标签;

class 主题: public 基础类::对象 {
抽象类声明(主题)

public:
	static const 主题 *简易主题;
	static const 主题 *CDE主题;
	static const 主题 *Windows主题;
	static const 主题 *Flat主题;

public:
	static 主题 *默认主题;

public:
	主题& 构造();
	void 析构();

public:
	主题& 复制构造(const 主题 &其他实例);
	主题& 移动构造(主题 &&其他实例);

protected:
	virtual void 绘制边框(图形处理::画笔 *画笔, 组件 *当前组件) = 0;
	virtual void 绘制背景(图形处理::画笔 *画笔, 组件 *当前组件) = 0;

public:
	void 绘制框架(图形处理::画笔 *画笔, 组件 *当前组件);

public:
	virtual void 绘制标签(图形处理::画笔 *画笔, 标签 *当前组件) = 0;
};

}
}

#include "简易/主题_简易.h"
