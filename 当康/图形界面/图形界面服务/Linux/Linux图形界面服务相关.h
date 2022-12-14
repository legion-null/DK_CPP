#pragma once

#include "定义.h"

//#include <linux/input.h>
//#include <linux/input-event-codes.h>

namespace 当康 {
namespace 图形界面 {

typedef struct Linux屏幕相关数据 {

} __attribute__((packed)) Linux屏幕相关数据;

typedef struct Linux事件相关数据 {

} __attribute__((packed)) Linux事件相关数据;

typedef struct Linux图形界面服务相关数据 {
	Linux屏幕相关数据 屏幕;
	Linux事件相关数据 事件;
} __attribute__((packed)) Linux图形界面服务相关数据;

}
}
