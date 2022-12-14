#pragma once

#include "定义.h"

//#include <Android.h>

namespace 当康 {
namespace 图形界面 {

typedef struct Android屏幕相关数据 {

} __attribute__((packed)) Android屏幕相关数据;

typedef struct Android事件相关数据 {

} __attribute__((packed)) Android事件相关数据;

typedef struct Android图形界面服务相关数据 {
	Android屏幕相关数据 屏幕;
	Android事件相关数据 事件;
} __attribute__((packed)) Android图形界面服务相关数据;

}
}
