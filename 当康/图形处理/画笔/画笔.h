#pragma once

#include "基础类/对象/对象.h"

#include "图形处理/颜色/颜色.h"
#include "图形处理/字体/字体.h"

命名空间 当康 {
命名空间 图形处理 {

类 画布;

类 像素点2D;
类 矩形2D;
类 三角形2D;
类 折线2D;
类 多边形2D;

类 圆弧2D;
类 扇形2D;
类 椭圆形2D;
类 圆形2D;

类 圆角矩形2D;

类 图片;

类 画笔: 继承 基础类::对象 {
类声明(画笔)

公开:
	静态 void 获取线段像素点(i32 x0, i32 y0, i32 x1, i32 y1, i32 **px, i32 **py, i32 &n);

保护:
	画布 *持有画布 = 空指针;
	颜色 当前颜色 = 颜色::黑色;
	字体 当前字体;

公开:
	画笔(画布 *现有画布) {
		构造(现有画布);
	}

公开:
	画笔& 构造();
	void 析构();

公开:
	画笔& 构造(画布 *现有画布);

公开:
	画笔& 复制构造(只读 画笔 &其他实例);
	画笔& 移动构造(画笔 &&其他实例);

公开:
	只读 画布& 获取画布() 只读;
	void 设置画布(画布 *现有画布);

公开:
	只读 颜色& 获取颜色() 只读;
	void 设置颜色(只读 颜色 &颜色);

公开:
	void 绘制像素点(i32 x, i32 y);
	void 绘制像素点(只读 像素点2D &点);

	颜色 获取像素点(i32 x, i32 y);
	颜色 获取像素点(只读 像素点2D &点);

公开:
	只读 字体& 获取字体() 只读;
	void 设置字体(只读 字体 &字体);

公开:
	void 绘制线段(i32 x0, i32 y0, i32 x1, i32 y1);
	void 绘制线段(只读 像素点2D &点A, 只读 像素点2D &点B);

	void 绘制矩形(i32 x0, i32 y0, i32 宽度, i32 高度);
	void 绘制矩形(只读 矩形2D &矩形);

	void 绘制三角形(i32 x0, i32 y0, i32 x1, i32 y1, i32 x2, i32 y2);
	void 绘制三角形(只读 三角形2D &三角形);

	void 绘制折线(i32 *x, i32 *y, i32 n);
	void 绘制折线(只读 折线2D &折线);

	void 绘制多边形(i32 *x, i32 *y, i32 n);
	void 绘制多边形(只读 多边形2D &多边形);

	void 绘制圆弧(i32 x, i32 y, i32 宽度, i32 高度, i32 起始角度, i32 结束角度);
	void 绘制圆弧(i32 x, i32 y, i32 半径, i32 起始角度, i32 结束角度);
	void 绘制圆弧(只读 圆弧2D &圆弧);

	void 绘制扇形(i32 x, i32 y, i32 宽度, i32 高度, i32 起始角度, i32 结束角度);
	void 绘制扇形(i32 x, i32 y, i32 半径, i32 起始角度, i32 结束角度);
	void 绘制扇形(只读 扇形2D &扇形);

	void 绘制椭圆形(i32 x, i32 y, i32 宽度, i32 高度);
	void 绘制椭圆形(只读 椭圆形2D &椭圆形);

	void 绘制圆形(i32 x, i32 y, i32 半径);
	void 绘制圆形(只读 圆形2D &圆形);

	void 绘制圆角矩形(i32 x, i32 y, i32 宽度, i32 高度, i32 圆角半径);
	void 绘制圆角矩形(只读 圆角矩形2D &圆角矩形);

公开:
	void 填充矩形(i32 x, i32 y, i32 宽度, i32 高度);
	void 填充矩形(只读 矩形2D &矩形);

	void 填充三角形(i32 x0, i32 y0, i32 x1, i32 y1, i32 x2, i32 y2);
	void 填充三角形(只读 三角形2D &三角形);

	void 填充多边形(i32 *x, i32 *y, i32 n);
	void 填充多边形(只读 多边形2D &多边形);

	void 填充扇形(i32 x, i32 y, i32 宽度, i32 高度, f64 起始角度, f64 结束角度);
	void 填充扇形(只读 扇形2D &扇形);

	void 填充椭圆形(i32 x, i32 y, i32 宽度, i32 高度);
	void 填充椭圆形(只读 椭圆形2D &椭圆形);

	void 填充圆角矩形(i32 x, i32 y, i32 宽度, i32 高度, i32 圆角半径);
	void 填充圆角矩形(只读 圆角矩形2D &圆角矩形);

公开:
	void 绘制字符(i32 x, i32 y, i32 宽度, i32 高度, i32 字符代码);
	void 绘制字符(只读 矩形2D &限制框, i32 字符代码);

公开:
	void 绘制字符串(i32 x, i32 y, i32 宽度, i32 高度, 只读 基础类::字符串 &字符串);
	void 绘制字符串(只读 矩形2D &限制框, 只读 基础类::字符串 &字符串);

公开:
	void 绘制图片(i32 x, i32 y, i32 宽度, i32 高度, 图片 *图片);
	void 绘制图片(只读 矩形2D &限制框, 图片 *图片);
}
;

}
}
