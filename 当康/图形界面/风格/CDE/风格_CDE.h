#pragma once

#include "图形界面/风格/风格.h"

命名空间 当康 {
命名空间 图形界面 {

类 风格_CDE: 继承 风格 {
类声明(风格_CDE)

公开:
	静态 风格* 获取风格(组件 *组件指针);

公开:
	风格_CDE& 构造();
	void 析构();

公开:
	风格_CDE& 复制构造(只读 风格_CDE &其他实例);
	风格_CDE& 移动构造(风格_CDE &&其他实例);
};

}
}
