#pragma once

#include <图形处理/图形2D/图形2D.h>

命名空间 当康 {
命名空间 图形处理 {

类 矩形2D: 继承 图形2D {
类声明(矩形2D)

保护:
	i32 宽度 = 0;
	i32 高度 = 0;

公开:
	矩形2D(i32 宽度, i32 高度) {
		构造(宽度, 高度);
	}

公开:
	矩形2D& 构造();
	void 析构();

公开:
	矩形2D& 复制构造(只读 矩形2D &其他实例);
	矩形2D& 移动构造(矩形2D &&其他实例);

公开:
	矩形2D& 构造(i32 宽度, i32 高度);

公开:
	i32 获取宽度() 只读;
	i32 获取高度() 只读;

	void 获取大小(i32 &宽度, i32 &高度) 只读;

公开:
	void 设置宽度(i32 宽度);
	void 设置高度(i32 高度);

	void 设置大小(i32 宽度, i32 高度);

公开:
	虚函数 f64 计算面积() 覆盖;

}
;

}
}
