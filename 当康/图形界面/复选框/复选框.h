#pragma once

#include "图形界面/抽象按钮/抽象按钮.h"

命名空间 当康 {
命名空间 图形界面 {

类 复选框: 继承 抽象按钮 {
类声明(复选框)

公开:
	复选框& 构造();
	void 析构();

公开:
	复选框& 复制构造(只读 复选框 &其他实例);
	复选框& 移动构造(复选框 &&其他实例);
};

}
}
