#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 图形处理 {

class 图形: public 基础类::对象 {
抽象类声明(图形)

public:
	typedef enum 显示方向 : i8 {
		不旋转, 顺时针90度, 顺时针180度, 顺时针270度
	} 显示方向;

public:
	static void 像素点映射(i32 &x, i32 &y, i32 &画布宽度, i32 &画布高度, 显示方向 方向);
	static void 像素点反映射(i32 &x, i32 &y, i32 &画布宽度, i32 &画布高度, 显示方向 方向);

public:
	图形& 构造();
	void 析构();

public:
	图形& 复制构造(const 图形 &其他实例);
	图形& 移动构造(图形 &&其他实例);
}
;

}
}
