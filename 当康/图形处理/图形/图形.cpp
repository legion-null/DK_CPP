#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

抽象类定义(当康::图形处理::图形)

void 图形::像素点映射(i32 &x, i32 &y, i32 &画布宽度, i32 &画布高度, 显示方向 方向) {
	i32 x0 = x;
	i32 y0 = y;

	switch (方向) {
	case 显示方向::不旋转:
		break;
	case 显示方向::顺时针90度:
		x = y0;
		y = 画布高度 - 1 - x0;
		break;
	case 显示方向::顺时针180度:
		x = 画布宽度 - 1 - x0;
		y = 画布高度 - 1 - y0;
		break;
	case 显示方向::顺时针270度:
		x = 画布宽度 - 1 - y0;
		y = x0;
		break;
	}
}

void 图形::像素点反映射(i32 &x, i32 &y, i32 &画布宽度, i32 &画布高度, 显示方向 方向) {
	i32 x0 = x;
	i32 y0 = y;

	switch (方向) {
	case 显示方向::不旋转:
		break;
	case 显示方向::顺时针90度:
		x = 画布高度 - 1 - y0;
		y = x0;
		break;
	case 显示方向::顺时针180度:
		x = 画布宽度 - 1 - x0;
		y = 画布高度 - 1 - y0;
		break;
	case 显示方向::顺时针270度:
		x = y0;
		y = 画布宽度 - 1 - x0;
		break;
	}
}

图形& 图形::构造() {
	return (*this);
}

void 图形::析构() {

}

图形& 图形::复制构造(const 图形 &其他实例) {
	return (*this);
}

图形& 图形::移动构造(图形 &&其他实例) {
	return (*this);
}

}
}

