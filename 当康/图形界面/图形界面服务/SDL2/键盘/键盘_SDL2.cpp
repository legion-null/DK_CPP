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

键盘_SDL2& 键盘_SDL2::复制构造(const 键盘_SDL2 &其他实例) {
	throw 异常("键盘_SDL2:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

键盘_SDL2& 键盘_SDL2::移动构造(键盘_SDL2 &&其他实例) {
	throw 异常("键盘_SDL2:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

输入事件* 键盘_SDL2::上报输入事件() {
	/*
	 SDL_Event &e = SDL2事件->事件;
	 键盘事件 *事件 = 创建 键盘事件();

	 ::SDL_PollEvent(&e);

	 if (e.type == SDL_KEYDOWN) {

	 } else if (e.type == SDL_KEYUP) {

	 }
	 */
	return nullptr;
}

}
}

