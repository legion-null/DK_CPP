#pragma once

#include "定义.h"

//#include <MacOS.h>

命名空间 当康 {
命名空间 图形界面 {

类型别名 结构体 MacOS屏幕相关数据 {

}__attribute__((packed)) MacOS屏幕相关数据;

类型别名 结构体 MacOS事件相关数据 {

}__attribute__((packed)) MacOS事件相关数据;

类型别名 结构体 MacOS图形界面服务相关数据 {
	MacOS屏幕相关数据 屏幕;
	MacOS事件相关数据 事件;
}__attribute__((packed)) MacOS图形界面服务相关数据;

}
}
