#pragma once

#include "图形界面/图形界面服务/图形界面服务.h"

命名空间 当康 {
命名空间 图形界面 {

类 图形界面服务_Windows: 继承 图形界面服务 {
类声明(图形界面服务_Windows)

公开:
	图形界面服务_Windows& 构造();
	void 析构();

公开:
	图形界面服务_Windows& 复制构造(只读 图形界面服务_Windows &其他实例);
	图形界面服务_Windows& 移动构造(图形界面服务_Windows &&其他实例);
};

}
}
