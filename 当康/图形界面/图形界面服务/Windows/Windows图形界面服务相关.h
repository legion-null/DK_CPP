#pragma once

#include "定义.h"

//#include <windows.h>

命名空间 当康 {
命名空间 图形界面 {

类型别名 结构体 Windows屏幕相关数据 {

}__attribute__((packed)) Windows屏幕相关数据;

类型别名 结构体 Windows事件相关数据 {

}__attribute__((packed)) Windows事件相关数据;

类型别名 结构体 Windows图形界面服务相关数据 {
	Windows屏幕相关数据 屏幕;
	Windows事件相关数据 事件;
}__attribute__((packed)) Windows图形界面服务相关数据;

}
}
