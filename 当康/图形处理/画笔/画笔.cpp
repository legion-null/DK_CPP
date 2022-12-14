#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::画笔)

void 画笔::获取线段像素点(i32 x0, i32 y0, i32 x1, i32 y1, i32 **px, i32 **py, i32 &n) {
	i32 x = x0;
	i32 y = y0;

	if (x0 == x1) {
		// 垂直线
		i32 sy = y1 > y0 ? 1 : -1;
		n = (sy == 1 ? y1 - y0 : y0 - y1) + 1;

		*px = new i32[n]; // 分配内存
		*py = new i32[n]; // 分配内存

		for (i32 i = 1; i < n - 1; i++) {
			y = y + sy;
			(*px)[i] = x;
			(*py)[i] = y;
		}
	} else if (y0 == y1) {
		// 水平线
		i32 sx = x1 > x0 ? 1 : -1;
		n = (sx == 1 ? x1 - x0 : x0 - x1) + 1;

		*px = new i32[n]; // 分配内存
		*py = new i32[n]; // 分配内存

		for (i32 i = 1; i < n - 1; i++) {
			x = x + sx;
			(*px)[i] = x;
			(*py)[i] = y;
		}
	} else {
		// 斜线，Bresenham算法
		i32 sx = x1 > x0 ? 1 : -1;
		i32 sy = y1 > y0 ? 1 : -1;
		i32 dx = (sx == 1 ? x1 - x0 : x0 - x1);
		i32 dy = (sy == 1 ? y1 - y0 : y0 - y1);
		i32 erro = (dx > dy ? dx : -dy) / 2;
		n = (dx > dy ? dx : dy) + 1;

		*px = new i32[n]; // 分配内存
		*py = new i32[n]; // 分配内存

		for (i32 i = 1; i < n - 1; i++) {
			if (erro > -dx) {
				erro = erro - dy;
				x = x + sx;
			}
			if (erro < dy) {
				erro = erro + dx;
				y = y + sy;
			}
			(*px)[i] = x;
			(*py)[i] = y;
		}
	}

	// 首尾两点统一处理
	(*px)[0] = x0;
	(*py)[0] = y0;
	(*px)[n - 1] = x1;
	(*py)[n - 1] = y1;
}

画笔& 画笔::构造() {
	return (*this);
}

void 画笔::析构() {

}

画笔& 画笔::构造(画布 *现有画布) {
	设置画布(现有画布);
	return (*this);
}

画笔& 画笔::复制构造(const 画笔 &其他实例) {
	return (*this);
}

画笔& 画笔::移动构造(画笔 &&其他实例) {
	return (*this);
}

const 画布& 画笔::获取画布() const {
	return *持有画布;
}

void 画笔::设置画布(画布 *现有画布) {
	持有画布 = 现有画布;
}

const 颜色& 画笔::获取颜色() const {
	return 当前颜色;
}

void 画笔::设置颜色(const 颜色 &颜色) {
	当前颜色 = 颜色;
}

const 字体& 画笔::获取字体() const {
	return 当前字体;
}

void 画笔::设置字体(const 字体 &字体) {
	当前字体 = 字体;
}

void 画笔::绘制像素点(i32 x, i32 y) {
	return 持有画布->绘制像素点(x, y, 当前颜色.获取颜色值());
}

void 画笔::绘制像素点(const 像素点2D &点) {
	return 绘制像素点(点.获取x(), 点.获取y());
}

颜色 画笔::获取像素点(i32 x, i32 y) {
	return 持有画布->获取像素点(x, y);
}

颜色 画笔::获取像素点(const 像素点2D &点) {
	return 获取像素点(点.获取x(), 点.获取y());
}

void 画笔::绘制线段(i32 x0, i32 y0, i32 x1, i32 y1) {
	if (x0 == x1) {
		return 持有画布->绘制竖线(x0, 取最小值(y0, y1), 取绝对值(y1 - y0) + 1, 当前颜色);
	} else if (y0 == y1) {
		return 持有画布->绘制横线(取最小值(x0, x1), y0, 取绝对值(x1 - x0) + 1, 当前颜色);
	} else {
		// Bresenham算法
		i32 x = x0;
		i32 y = y0;

		i32 sx = x1 > x0 ? 1 : -1;
		i32 sy = y1 > y0 ? 1 : -1;
		i32 dx = sx == 1 ? x1 - x0 : x0 - x1;
		i32 dy = sy == 1 ? y1 - y0 : y0 - y1;
		i32 erro = (dx > dy ? dx : -dy) / 2;
		i32 n = (dx > dy ? dx : dy) + 1;

		for (i32 i = 1; i < n - 1; i++) {
			if (erro > -dx) {
				erro = erro - dy;
				x = x + sx;
			}
			if (erro < dy) {
				erro = erro + dx;
				y = y + sy;
			}
			绘制像素点(x, y);
		}

		// 首尾两点统一处理
		绘制像素点(x0, y0);
		绘制像素点(x1, y1);
	}
}

void 画笔::绘制线段(const 像素点2D &点A, const 像素点2D &点B) {
	return 绘制线段(点A.获取x(), 点A.获取y(), 点B.获取x(), 点B.获取y());
}

void 画笔::绘制矩形(i32 x0, i32 y0, i32 宽度, i32 高度) {
	i32 x1 = x0 + 宽度 - 1;
	i32 y1 = y0 + 高度 - 1;

	绘制线段(x0, y0, x1, y0);
	绘制线段(x0, y0, x0, y1);
	绘制线段(x1, y0, x1, y1);
	绘制线段(x0, y1, x1, y1);
}

void 画笔::绘制矩形(const 矩形2D &矩形) {
	return 绘制矩形(矩形.获取x(), 矩形.获取y(), 矩形.获取宽度(), 矩形.获取高度());
}

void 画笔::绘制三角形(i32 x0, i32 y0, i32 x1, i32 y1, i32 x2, i32 y2) {
	绘制线段(x0, y0, x1, y1);
	绘制线段(x1, y1, x2, y2);
	绘制线段(x2, y2, x0, y0);
}

void 画笔::绘制三角形(const 三角形2D &三角形) {
	return 绘制三角形(0, 0, 0, 0, 0, 0);
}

void 画笔::绘制折线(i32 *x, i32 *y, i32 n) {
	for (i32 i = 0; i < n - 1; i++)
		绘制线段(x[i], y[i], x[i + 1], y[i + 1]);
}

void 画笔::绘制折线(const 折线2D &折线) {
	return 绘制折线(0, 0, 0);
}

void 画笔::绘制多边形(i32 *x, i32 *y, i32 n) {
	绘制折线(x, y, n);
	绘制线段(x[0], y[0], x[n - 1], y[n - 1]);
}

void 画笔::绘制多边形(const 多边形2D &多边形) {
	return 绘制多边形(0, 0, 0);
}

void 画笔::绘制圆弧(i32 x, i32 y, i32 宽度, i32 高度, i32 起始角度, i32 结束角度) {

}

void 画笔::绘制圆弧(i32 x, i32 y, i32 半径, i32 起始角度, i32 结束角度) {
	return 绘制圆弧(x, y, 半径 * 2, 半径 * 2, 起始角度, 结束角度);
}

void 画笔::绘制圆弧(const 圆弧2D &圆弧) {
	return 绘制圆弧(0, 0, 0, 0, 0, 0);
}

void 画笔::绘制扇形(i32 x, i32 y, i32 宽度, i32 高度, i32 起始角度, i32 结束角度) {
}

void 画笔::绘制扇形(i32 x, i32 y, i32 半径, i32 起始角度, i32 结束角度) {
	return 绘制扇形(x, y, 半径 * 2, 半径 * 2, 起始角度, 结束角度);
}

void 画笔::绘制扇形(const 扇形2D &扇形) {
	return 绘制扇形(0, 0, 0, 0, 0, 0);
}

void 画笔::绘制椭圆形(i32 x0, i32 y0, i32 宽度, i32 高度) {
	if (宽度 > 高度) {	// 焦点纵坐标相同的椭圆
		i32 a = 宽度 / 2;
		i32 b = 高度 / 2;
		i32 a2 = a * a;
		i32 b2 = b * b;
		i32 basis = a2 * b2;
		i32 dx = a;
		i32 dy = 0;

		x0 = x0 + a;
		y0 = y0 + b;

		while (dy <= b && dx >= 0) {
			绘制像素点(x0 + dx, y0 + dy);	//   0 pi ~ 1/2 pi
			绘制像素点(x0 - dx, y0 + dy);	// 1/2 pi ~   1 pi
			绘制像素点(x0 - dx, y0 - dy);	//   1 pi ~ 3/2 pi
			绘制像素点(x0 + dx, y0 - dy);	// 3/2 pi ~   2 pi

			dx = dx - 1;
			dy = dy + 1;

			if (b2 * dx * dx + a2 * dy * dy <= basis)
				dx = dx + 1;
			else
				dy = dy - 1;
		}
	} else {	// 焦点横坐标相同的椭圆
		i32 a = 高度 / 2;
		i32 b = 宽度 / 2;
		i32 a2 = a * a;
		i32 b2 = b * b;
		i32 basis = a2 * b2;
		i32 dy = a;
		i32 dx = 0;

		x0 = x0 + b;
		y0 = y0 + a;

		while (dx <= b && dy >= 0) {
			绘制像素点(x0 + dx, y0 - dy);	//   0 pi ~ 1/2 pi
			绘制像素点(x0 - dx, y0 - dy);	// 1/2 pi ~   1 pi
			绘制像素点(x0 - dx, y0 + dy);	//   1 pi ~ 3/2 pi
			绘制像素点(x0 + dx, y0 + dy);	// 3/2 pi ~   2 pi

			dy = dy - 1;
			dx = dx + 1;

			if (a2 * dx * dx + b2 * dy * dy <= basis)
				dy = dy + 1;
			else
				dx = dx - 1;
		}
	}
}

void 画笔::绘制椭圆形(const 椭圆形2D &椭圆形) {
	return 绘制椭圆形(0, 0, 0, 0);
}

void 画笔::绘制圆形(i32 x, i32 y, i32 半径) {
}

void 画笔::绘制圆形(const 圆形2D &圆形) {
}

void 画笔::绘制圆角矩形(i32 x, i32 y, i32 宽度, i32 高度, i32 圆角半径) {
}

void 画笔::绘制圆角矩形(const 圆角矩形2D &圆角矩形) {
	return 绘制圆角矩形(0, 0, 0, 0, 0);
}

void 画笔::填充矩形(i32 x0, i32 y0, i32 宽度, i32 高度) {
	i32 x1 = x0 + 宽度 - 1;
	i32 y1 = y0 + 高度 - 1;
	for (i32 y = y0; y <= y1; y++)
		绘制线段(x0, y, x1, y);
}

void 画笔::填充矩形(const 矩形2D &矩形) {
	return 填充矩形(矩形.获取x(), 矩形.获取y(), 矩形.获取宽度(), 矩形.获取高度());
}

void 画笔::填充三角形(i32 x0, i32 y0, i32 x1, i32 y1, i32 x2, i32 y2) {
	i32 起始点x = x0;
	i32 起始点y = y0;
	i32 中点x = x0;
	i32 中点y = y0;
	i32 结束点x = x0;
	i32 结束点y = y0;

	i32 *起始点到中点x = nullptr;
	i32 *起始点到中点y = nullptr;
	i32 *中点到结束点x = nullptr;
	i32 *中点到结束点y = nullptr;
	i32 *起始点到结束点x = nullptr;
	i32 *起始点到结束点y = nullptr;

	i32 起始点到中点n = 0;
	i32 中点到结束点n = 0;
	i32 起始点到结束点n = 0;

	// 自顶向下水平渲染，先根据y坐标对点进行排序
	// 最顶端点
	if (起始点y > y1) {
		起始点y = y1;
		起始点x = x1;
		if (起始点y > y2) {
			起始点y = y2;
			起始点x = x2;
		}
	} else if (起始点y > y2) {
		起始点y = y2;
		起始点x = x2;
	}
	// 最底端点
	if (结束点y < y1) {
		结束点y = y1;
		结束点x = x1;
		if (结束点y < y2) {
			结束点y = y2;
			结束点x = x2;
		}
	} else if (结束点y < y2) {
		结束点y = y2;
		结束点x = x2;
	}

	// 中间端点
	中点x = x0 + x1 + x2 - 起始点x - 结束点x;
	中点y = y0 + y1 + y2 - 起始点y - 结束点y;

	// 边框渲染
	获取线段像素点(起始点x, 起始点y, 中点x, 中点y, &起始点到中点x, &起始点到中点y, 起始点到中点n);
	获取线段像素点(中点x, 中点y, 结束点x, 结束点y, &中点到结束点x, &中点到结束点y, 中点到结束点n);
	获取线段像素点(起始点x, 起始点y, 结束点x, 结束点y, &起始点到结束点x, &起始点到结束点y, 起始点到结束点n);

	绘制线段(起始点x, 起始点y, 中点x, 中点y);
	绘制线段(中点x, 中点y, 结束点x, 结束点y);
	绘制线段(起始点x, 起始点y, 结束点x, 结束点y);

	// 内部渲染
	i32 i = 0; // 作为lineStart2End下标
	i32 j = 0; // 作为lineStart2Mid、lineMid2End下标
	if (起始点y != 中点y)
		for (i32 y = 起始点y; y <= 中点y; y++) {
			while (起始点到结束点y[i] != y)
				i++;
			while (起始点到中点y[j] != y)
				j++;
			绘制线段(起始点到结束点x[i], y, 起始点到中点x[j], y);
		}

	j = 0;
	if (中点y != 结束点y)
		for (i32 y = 中点y; y <= 结束点y; y++) {
			while (起始点到结束点y[i] != y)
				i++;
			while (中点到结束点y[j] != y)
				j++;
			绘制线段(起始点到结束点x[i], y, 中点到结束点x[j], y);
		}

	// 释放内存
	delete[] 起始点到中点x;
	delete[] 起始点到中点y;
	delete[] 中点到结束点x;
	delete[] 中点到结束点y;
	delete[] 起始点到结束点x;
	delete[] 起始点到结束点y;
}

void 画笔::填充三角形(const 三角形2D &三角形) {
	return 填充三角形(0, 0, 0, 0, 0, 0);
}

void 画笔::填充多边形(i32 *x, i32 *y, i32 n) {
	// 暂时使用
	for (i32 i = 0; i < n - 1; i++)
		填充三角形(x[0], y[0], x[i], y[i], x[i + 1], y[i + 1]);
}

void 画笔::填充多边形(const 多边形2D &多边形) {
	return 填充多边形(0, 0, 0);
}

void 画笔::填充扇形(i32 x, i32 y, i32 宽度, i32 高度, f64 起始角度, f64 结束角度) {

}

void 画笔::填充扇形(const 扇形2D &扇形) {
	return 填充扇形(0, 0, 0, 0, 0, 0);
}

void 画笔::填充椭圆形(i32 x0, i32 y0, i32 宽度, i32 高度) {
	if (宽度 > 高度) {	// 焦点纵坐标相同的椭圆
		i32 a = 宽度 / 2;
		i32 b = 高度 / 2;
		i32 a2 = a * a;
		i32 b2 = b * b;
		i32 basis = a2 * b2;
		i32 dx = a;
		i32 dy = 0;

		x0 = x0 + a;
		y0 = y0 + b;

		while (dy <= b && dx >= 0) {
			绘制线段(x0 + dx, y0 + dy, x0 - dx, y0 + dy);	//   0 pi ~   1 pi
			绘制线段(x0 + dx, y0 - dy, x0 - dx, y0 - dy);	//   1 pi ~   2 pi

			dx = dx - 1;
			dy = dy + 1;

			if (b2 * dx * dx + a2 * dy * dy <= basis)
				dx = dx + 1;
			else
				dy = dy - 1;
		}
	} else {	// 焦点横坐标相同的椭圆
		i32 a = 高度 / 2;
		i32 b = 宽度 / 2;
		i32 a2 = a * a;
		i32 b2 = b * b;
		i32 basis = a2 * b2;
		i32 dy = a;
		i32 dx = 0;

		x0 = x0 + b;
		y0 = y0 + a;

		while (dx <= b && dy >= 0) {
			绘制线段(x0 + dx, y0 + dy, x0 - dx, y0 + dy);	//   0 pi ~   1 pi
			绘制线段(x0 + dx, y0 - dy, x0 - dx, y0 - dy);	//   1 pi ~   2 pi

			dy = dy - 1;
			dx = dx + 1;

			if (a2 * dx * dx + b2 * dy * dy <= basis)
				dy = dy + 1;
			else
				dx = dx - 1;
		}
	}
}

void 画笔::填充椭圆形(const 椭圆形2D &椭圆形) {
	return 填充椭圆形(0, 0, 0, 0);
}

void 画笔::填充圆角矩形(i32 x, i32 y, i32 宽度, i32 高度, i32 圆角半径) {
}

void 画笔::填充圆角矩形(const 圆角矩形2D &圆角矩形) {
	return 填充圆角矩形(0, 0, 0, 0, 0);
}

void 画笔::绘制字符(i32 x, i32 y, i32 宽度, i32 高度, i32 字符代码) {
	颜色 临时颜色 = 获取颜色();
	设置颜色(颜色::红色);
	绘制矩形(x, y, 宽度, 高度);
	绘制矩形(x + 2, y + 2, 宽度 - 4, 高度 - 4);
	设置颜色(临时颜色);
}

void 画笔::绘制字符(const 矩形2D &限制框, i32 字符代码) {
	return 绘制字符(限制框.获取x(), 限制框.获取y(), 限制框.获取宽度(), 限制框.获取高度(), 字符代码);
}

void 画笔::绘制字符串(i32 x, i32 y, i32 宽度, i32 高度, const 基础类::字符串 &字符串) {
	for (i32 i = 0; i < 字符串.获取文本长度(); i++) {
		绘制字符(x + i * 高度, y, 高度, 高度, 0);
	}
}

void 画笔::绘制字符串(const 矩形2D &限制框, const 基础类::字符串 &字符串) {
	return 绘制字符串(限制框.获取x(), 限制框.获取y(), 限制框.获取宽度(), 限制框.获取高度(), 字符串);
}

void 画笔::绘制图片(i32 x0, i32 y0, i32 宽度, i32 高度, 图片 *图片) {
	for (i32 y = 0; y < 高度; y++)
		for (i32 x = 0; x < 宽度; x++) {
			this->持有画布->绘制像素点(x0 + x, y0 + y, 图片->获取像素点(x, y));
		}
}

void 画笔::绘制图片(const 矩形2D &限制框, 图片 *图片) {
	return 绘制图片(限制框.获取x(), 限制框.获取y(), 限制框.获取宽度(), 限制框.获取高度(), 图片);
}

}
}
