#pragma once

#include "定义.h"

#include <SDL2/SDL.h>

namespace 当康 {
namespace 图形界面 {

struct SDL2图形界面服务相关数据 {
	// 屏幕相关
	SDL_Window *窗口;
	SDL_Surface *图层;
	u8 *帧缓冲;
	u8 **行缓冲;
	// 输入相关
	SDL_Event 事件;
};

}
}
