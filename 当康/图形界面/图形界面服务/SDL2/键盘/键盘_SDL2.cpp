#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

#include "../SDL2图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::键盘_SDL2)

键盘_SDL2& 键盘_SDL2::构造() {
	return (*this);
}

void 键盘_SDL2::析构() {

}

键盘_SDL2& 键盘_SDL2::构造(图形界面服务_SDL2 *服务) {
	SDL2服务 = 服务->SDL2服务;
	return (*this);
}

键盘_SDL2& 键盘_SDL2::复制构造(const 键盘_SDL2 &其他实例) {
	throw 异常("键盘_SDL2:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

键盘_SDL2& 键盘_SDL2::移动构造(键盘_SDL2 &&其他实例) {
	throw 异常("键盘_SDL2:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

输入事件* 键盘_SDL2::上报输入事件() {
	::SDL_Event &e = SDL2服务->事件;
	//键盘事件 *事件 = new 键盘事件();

	::SDL_PollEvent(&e);

	i32 sc = 0;
	i32 key = 0;

	if (e.type == SDL_KEYDOWN) {
		sc = e.key.keysym.scancode;
		key = e.key.keysym.sym;
		日志::格式化打印日志(日志::一般信息, "键盘按键按下 0x%08x 0x%08x '%c'\n", sc, key, key);
	} else if (e.type == SDL_KEYUP) {
		key = e.key.keysym.sym;
		日志::格式化打印日志(日志::一般信息, "键盘按键释放 0x%08x 0x%08x '%c'\n", sc, key, key);
	}

	return nullptr;
}

}
}

