#pragma once

#include "图形处理/画笔/画笔.h"

命名空间 当康 {
命名空间 图形处理 {

类 画笔_OpenGL: 继承 画笔 {
类声明(画笔_OpenGL)

公开:
	画笔_OpenGL& 构造();
	void 析构();

公开:
	画笔_OpenGL& 复制构造(只读 画笔_OpenGL &其他实例);
	画笔_OpenGL& 移动构造(画笔_OpenGL &&其他实例);
};

}
}
