#include "当康.h"

#include <SDL2/SDL.h>

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 图形界面 {

类定义(当康::图形界面::鼠标_SDL2)

鼠标_SDL2& 鼠标_SDL2::构造() {
	返回 本体;
}

void 鼠标_SDL2::析构() {

}

鼠标_SDL2& 鼠标_SDL2::复制构造(只读 鼠标_SDL2 &其他实例) {
	抛出 异常("鼠标_SDL2:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

鼠标_SDL2& 鼠标_SDL2::移动构造(鼠标_SDL2 &&其他实例) {
	抛出 异常("鼠标_SDL2:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

输入事件* 鼠标_SDL2::上报输入事件() {
	SDL_Event e;

	::SDL_PollEvent(&e);

	switch (e.type) {
	case SDL_MOUSEMOTION:
		break;
	case SDL_MOUSEBUTTONDOWN:
		break;
	case SDL_MOUSEBUTTONUP:
		break;
	case SDL_MOUSEWHEEL:
		break;
	default:
		返回 0;
	}

	返回 0;
}

}
}

