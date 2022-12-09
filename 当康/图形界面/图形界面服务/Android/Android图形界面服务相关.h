#pragma once

#include "定义.h"

//#include <Android.h>

命名空间 当康 {
命名空间 图形界面 {

类型别名 结构体 Android屏幕相关数据 {

}__attribute__((packed)) Android屏幕相关数据;

类型别名 结构体 Android事件相关数据 {

}__attribute__((packed)) Android事件相关数据;

类型别名 结构体 Android图形界面服务相关数据 {
	Android屏幕相关数据 屏幕;
	Android事件相关数据 事件;
}__attribute__((packed)) Android图形界面服务相关数据;

}
}
