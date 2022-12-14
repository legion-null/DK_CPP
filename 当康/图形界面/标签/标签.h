#pragma once

#include "图形界面/容器/容器.h"

#include "基础类/字符串/字符串.h"

namespace 当康 {
namespace 图形界面 {

class 标签: public 容器 {
类声明(标签)

public:
	typedef enum 对齐方向 : i8 {
		左上角, 正上侧, 右上角, 正左侧, 中心, 正右侧, 左下角, 正下侧, 右下角
	} 对齐方向;

protected:
	bool 透明性 = true;
	基础类::字符串 文本 = "标签";
	对齐方向 文本对齐方向 = 正左侧;

public:
	标签(i32 x, i32 y, i32 宽度, i32 高度, const 基础类::字符串 &文本) {
		构造(x, y, 宽度, 高度, 文本);
	}

public:
	标签& 构造();
	void 析构();

public:
	标签& 构造(i32 x, i32 y, i32 宽度, i32 高度, const 基础类::字符串 &文本);

public:
	标签& 复制构造(const 标签 &其他实例);
	标签& 移动构造(标签 &&其他实例);

public:
	bool 获取透明性() const;
	void 设置透明性(bool 透明性);

public:
	const 基础类::字符串& 获取文本() const;
	void 设置文本(const 基础类::字符串 &文本);

public:
	对齐方向 获取文本对齐方向() const;
	void 设置文本对齐方向(对齐方向 文本对齐方向);

public:
	virtual void 绘制自身(图形处理::画笔 *画笔) override;
};

}
}
