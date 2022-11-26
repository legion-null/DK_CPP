#pragma once

#include <基础类/对象/对象.h>

命名空间 当康 {
命名空间 图形处理 {

抽象类 图形: 继承 基础类::对象 {
抽象类声明(图形)

公开:
	类型别名 枚举 显示方向 : i8 {
		不旋转, 顺时针90度, 顺时针180度, 顺时针270度
	}显示方向;

公开:
	静态 void 像素点映射(i32 &x, i32 &y, i32 &画布宽度, i32 &画布高度, 显示方向 方向);
	静态 void 像素点反映射(i32 &x, i32 &y, i32 &画布宽度, i32 &画布高度, 显示方向 方向);

公开:
	图形& 构造();
	void 析构();

公开:
	图形& 复制构造(只读 图形 &其他实例);
	图形& 移动构造(图形 &&其他实例);
}
;

}
}
