#pragma once

#include "图形界面/主题/主题.h"

#include "图形处理/颜色/颜色.h"

namespace 当康 {
namespace 图形界面 {

class 主题_简易: public 主题 {
类声明(主题_简易)

protected:
	static const 图形处理::颜色 默认前景色;
	static const 图形处理::颜色 默认背景色;
	static const 图形处理::颜色 默认强调色;

public:
	主题_简易& 构造();
	void 析构();

public:
	主题_简易& 复制构造(const 主题_简易 &其他实例);
	主题_简易& 移动构造(主题_简易 &&其他实例);

protected:
	virtual void 绘制边框(图形处理::画笔 *画笔, 组件 *当前组件) override;
	virtual void 绘制背景(图形处理::画笔 *画笔, 组件 *当前组件) override;

public:
	virtual void 绘制标签(图形处理::画笔 *画笔, 标签 *当前组件) override;

};

}
}
