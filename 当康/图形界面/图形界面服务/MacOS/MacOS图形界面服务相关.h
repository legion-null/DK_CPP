#pragma once

#include "定义.h"

//#include <MacOS.h>

namespace 当康 {
namespace 图形界面 {

typedef struct MacOS屏幕相关数据 {

} __attribute__((packed)) MacOS屏幕相关数据;

typedef struct MacOS事件相关数据 {

} __attribute__((packed)) MacOS事件相关数据;

typedef struct MacOS图形界面服务相关数据 {
	MacOS屏幕相关数据 屏幕;
	MacOS事件相关数据 事件;
} __attribute__((packed)) MacOS图形界面服务相关数据;

}
}
