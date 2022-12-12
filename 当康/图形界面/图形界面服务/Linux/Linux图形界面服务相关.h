#pragma once

#include "定义.h"

//#include <linux/input.h>
//#include <linux/input-event-codes.h>

命名空间 当康 {
命名空间 图形界面 {

类型别名 结构体 Linux屏幕相关数据 {

}__attribute__((packed)) Linux屏幕相关数据;

类型别名 结构体 Linux事件相关数据 {

}__attribute__((packed)) Linux事件相关数据;

类型别名 结构体 Linux图形界面服务相关数据 {
	Linux屏幕相关数据 屏幕;
	Linux事件相关数据 事件;
}__attribute__((packed)) Linux图形界面服务相关数据;

}
}
