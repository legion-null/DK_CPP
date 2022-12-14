#pragma once

#include "基础类/对象/对象.h"

#include "图形界面/动作事件监听器/动作事件监听器.h"
#include "图形界面/主题/主题.h"

#include "图形处理/像素点2D/像素点2D.h"
#include "图形处理/矩形2D/矩形2D.h"

namespace 当康 {
namespace 图形处理 {
class 画笔;
}
namespace 图形界面 {

class 组件: public 基础类::对象 {
类声明(组件)

protected:
	图形处理::矩形2D 外接矩形;

	组件 *父组件 = nullptr;

protected:
	动作事件监听器 *当前监听器 = nullptr;

protected:
	主题 *当前主题 = 主题::默认主题;

public:
	组件(i32 x, i32 y, i32 宽度, i32 高度) {
		构造(x, y, 宽度, 高度);
	}

public:
	组件& 构造();
	void 析构();

public:
	组件& 构造(i32 x, i32 y, i32 宽度, i32 高度);

public:
	组件& 复制构造(const 组件 &其他实例);
	组件& 移动构造(组件 &&其他实例);

public:
	i32 获取x() const;
	i32 获取y() const;

	void 获取位置(i32 &x, i32 &y) const;
	const 图形处理::像素点2D& 获取位置() const;

	void 设置x(i32 x);
	void 设置y(i32 y);

	void 设置位置(i32 x, i32 y);
	void 设置位置(const 图形处理::像素点2D &位置);

public:
	i32 获取宽度() const;
	i32 获取高度() const;
	void 获取大小(i32 &宽度, i32 &高度) const;

	void 设置宽度(i32 宽度);
	void 设置高度(i32 高度);
	void 设置大小(i32 宽度, i32 高度);

public:
	void 获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const;
	const 图形处理::矩形2D& 获取外接矩形() const;

	void 设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度);
	void 设置外接矩形(const 图形处理::矩形2D &外接矩形);

public:
	i32 获取绝对x();
	i32 获取绝对y();

	void 获取绝对位置(i32 &x, i32 &y);
	图形处理::像素点2D 获取绝对位置();

public:
	void 获取绝对外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度);
	图形处理::矩形2D 获取绝对外接矩形();

public:
	组件* 获取父组件() const;
	void 设置父组件(组件 *父组件);

public:
	void 设置动作监听器(动作事件监听器 *监听器);
	void 发送动作事件(动作事件 *事件);

public:
	virtual void 绘制自身(图形处理::画笔 *画笔);

};

}
}
