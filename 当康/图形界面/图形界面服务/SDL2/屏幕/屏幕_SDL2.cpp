#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;

#include "../SDL2图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::屏幕_SDL2)

屏幕_SDL2& 屏幕_SDL2::构造() {
	return 构造("SDL2_液晶屏模拟器 作者:legion", 800, 600, 32, 图形::不旋转);
}

void 屏幕_SDL2::析构() {
	if (SDL2服务 != nullptr)
		delete SDL2服务;
}

屏幕_SDL2& 屏幕_SDL2::构造(const 基础类::字符串 &屏幕名称, i32 宽度, i32 高度, i32 像素色深, 图形::显示方向 方向) {
	日志::格式化打印日志(日志::调试信息, "屏幕_SDL2& 屏幕_SDL2::构造(只读 基础类::字符串 &屏幕名称 = \"%s\", i32 宽度 = %d, i32 高度 = %d, i32 像素色深 = %d, 图形::显示方向 方向 = %d)\n", 屏幕名称.获取文本(), 宽度, 高度, 像素色深, 方向);

	屏幕::构造(宽度, 高度, 像素色深, 方向);

	this->屏幕名称 = 屏幕名称;

	if (SDL2服务 == nullptr)
		SDL2服务 = new SDL2图形界面服务相关数据();

	::SDL_Init(SDL_INIT_VIDEO);

	SDL2服务->窗口 = ::SDL_CreateWindow(this->屏幕名称.获取文本(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 宽度, 高度, SDL_WINDOW_SHOWN);
	SDL2服务->图层 = SDL_GetWindowSurface((SDL_Window*) SDL2服务->窗口);

	// 缓冲区映射
	SDL2服务->帧缓冲 = (u8*) (SDL2服务->图层->pixels);
	SDL2服务->行缓冲 = new u8*[this->高度];

	for (i32 i = 0; i < this->高度; i++)
		SDL2服务->行缓冲[i] = &(SDL2服务->帧缓冲[行缓冲区大小 * i]);

	日志::格式化打印日志(日志::调试信息, "完成 屏幕_SDL2& 屏幕_SDL2::构造(只读 基础类::字符串 &屏幕名称 = \"%s\", i32 宽度 = %d, i32 高度 = %d, i32 像素色深 = %d, 图形::显示方向 方向 = %d)\n", 屏幕名称.获取文本(), 宽度, 高度, 像素色深, 方向);

	return (*this);
}

屏幕_SDL2& 屏幕_SDL2::构造(图形界面服务_SDL2 *服务) {
	this->SDL2服务 = 服务->SDL2服务;
	return 构造();
}

屏幕_SDL2& 屏幕_SDL2::复制构造(const 屏幕_SDL2 &其他实例) {
	return (*this);
}

屏幕_SDL2& 屏幕_SDL2::移动构造(屏幕_SDL2 &&其他实例) {
	return (*this);
}

void 屏幕_SDL2::刷新矩形区域(i32 x0, i32 y0, i32 宽度, i32 高度) {

	::SDL_UpdateWindowSurface(SDL2服务->窗口);
}

void 屏幕_SDL2::刷新() {
	复制(帧缓冲, SDL2服务->帧缓冲, 缓冲区大小);
	::SDL_UpdateWindowSurface(SDL2服务->窗口);
}

}
}
