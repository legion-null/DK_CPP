#pragma once

#include "基础类/对象/对象.h"

#include "图形处理/颜色/颜色.h"
#include "图形处理/字体/字体.h"

namespace 当康 {
namespace 图形处理 {

class 画布;

class 像素点2D;
class 矩形2D;
class 三角形2D;
class 折线2D;
class 多边形2D;

class 圆弧2D;
class 扇形2D;
class 椭圆形2D;
class 圆形2D;

class 圆角矩形2D;

class 图片;

class 画笔: public 基础类::对象 {
类声明(画笔)

public:
	static void 获取线段像素点(i32 x0, i32 y0, i32 x1, i32 y1, i32 **px, i32 **py, i32 &n);

protected:
	画布 *持有画布 = nullptr;
	颜色 当前颜色 = 颜色::黑色;
	字体 当前字体;

public:
	画笔(画布 *现有画布) {
		构造(现有画布);
	}

public:
	画笔& 构造();
	void 析构();

public:
	画笔& 构造(画布 *现有画布);

public:
	画笔& 复制构造(const 画笔 &其他实例);
	画笔& 移动构造(画笔 &&其他实例);

public:
	const 画布& 获取画布() const;
	void 设置画布(画布 *现有画布);

public:
	const 颜色& 获取颜色() const;
	void 设置颜色(const 颜色 &颜色);

public:
	void 绘制像素点(i32 x, i32 y);
	void 绘制像素点(const 像素点2D &点);

	颜色 获取像素点(i32 x, i32 y);
	颜色 获取像素点(const 像素点2D &点);

public:
	const 字体& 获取字体() const;
	void 设置字体(const 字体 &字体);

public:
	virtual void 绘制线段(i32 x0, i32 y0, i32 x1, i32 y1);
	void 绘制线段(const 像素点2D &点A, const 像素点2D &点B);

	virtual void 绘制矩形(i32 x0, i32 y0, i32 宽度, i32 高度);
	void 绘制矩形(const 矩形2D &矩形);

	virtual void 绘制三角形(i32 x0, i32 y0, i32 x1, i32 y1, i32 x2, i32 y2);
	void 绘制三角形(const 三角形2D &三角形);

	virtual void 绘制折线(i32 *x, i32 *y, i32 n);
	void 绘制折线(const 折线2D &折线);

	virtual void 绘制多边形(i32 *x, i32 *y, i32 n);
	void 绘制多边形(const 多边形2D &多边形);

	virtual void 绘制圆弧(i32 x, i32 y, i32 宽度, i32 高度, i32 起始角度, i32 结束角度);
	virtual void 绘制圆弧(i32 x, i32 y, i32 半径, i32 起始角度, i32 结束角度);
	void 绘制圆弧(const 圆弧2D &圆弧);

	virtual void 绘制扇形(i32 x, i32 y, i32 宽度, i32 高度, i32 起始角度, i32 结束角度);
	virtual void 绘制扇形(i32 x, i32 y, i32 半径, i32 起始角度, i32 结束角度);
	void 绘制扇形(const 扇形2D &扇形);

	virtual void 绘制椭圆形(i32 x, i32 y, i32 宽度, i32 高度);
	void 绘制椭圆形(const 椭圆形2D &椭圆形);

	virtual void 绘制圆形(i32 x, i32 y, i32 半径);
	void 绘制圆形(const 圆形2D &圆形);

	virtual void 绘制圆角矩形(i32 x, i32 y, i32 宽度, i32 高度, i32 圆角半径);
	void 绘制圆角矩形(const 圆角矩形2D &圆角矩形);

public:
	virtual void 填充矩形(i32 x, i32 y, i32 宽度, i32 高度);
	void 填充矩形(const 矩形2D &矩形);

	virtual void 填充三角形(i32 x0, i32 y0, i32 x1, i32 y1, i32 x2, i32 y2);
	void 填充三角形(const 三角形2D &三角形);

	virtual void 填充多边形(i32 *x, i32 *y, i32 n);
	void 填充多边形(const 多边形2D &多边形);

	virtual void 填充扇形(i32 x, i32 y, i32 宽度, i32 高度, f64 起始角度, f64 结束角度);
	void 填充扇形(const 扇形2D &扇形);

	virtual void 填充椭圆形(i32 x, i32 y, i32 宽度, i32 高度);
	void 填充椭圆形(const 椭圆形2D &椭圆形);

	virtual void 填充圆角矩形(i32 x, i32 y, i32 宽度, i32 高度, i32 圆角半径);
	void 填充圆角矩形(const 圆角矩形2D &圆角矩形);

public:
	void 绘制字符(i32 x, i32 y, i32 宽度, i32 高度, i32 字符代码);
	void 绘制字符(const 矩形2D &限制框, i32 字符代码);

public:
	void 绘制字符串(i32 x, i32 y, i32 宽度, i32 高度, const 基础类::字符串 &字符串);
	void 绘制字符串(const 矩形2D &限制框, const 基础类::字符串 &字符串);

public:
	void 绘制图片(i32 x, i32 y, i32 宽度, i32 高度, 图片 *图片);
	void 绘制图片(const 矩形2D &限制框, 图片 *图片);
};

}
}

#include "软件/画笔_软件.h"
#include "OpenGL/画笔_OpenGL.h"

