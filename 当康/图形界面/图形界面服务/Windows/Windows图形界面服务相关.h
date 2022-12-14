#pragma once

#include "定义.h"

//#include <windows.h>

namespace 当康 {
namespace 图形界面 {

typedef struct Windows屏幕相关数据 {

} __attribute__((packed)) Windows屏幕相关数据;

typedef struct Windows事件相关数据 {

} __attribute__((packed)) Windows事件相关数据;

typedef struct Windows图形界面服务相关数据 {
	Windows屏幕相关数据 屏幕;
	Windows事件相关数据 事件;
} __attribute__((packed)) Windows图形界面服务相关数据;

}
}
