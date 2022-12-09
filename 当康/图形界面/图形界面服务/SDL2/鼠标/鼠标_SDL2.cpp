#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

#include "SDL2图形界面服务相关.h"

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
	鼠标事件 *事件 = 创建 鼠标事件();

	::SDL_PollEvent(&e);

	/*
	// 更新事件
	switch (e.type) {
	case SDL_MOUSEMOTION:
		事件->类型 = 鼠标事件::移动;
		本元->位置.设置位置(e.motion.x, e.motion.y);
		break;
	case SDL_MOUSEBUTTONDOWN:
		switch (e.button.button) {
		case 0:
			本元->左键按下 = 真;
			break;
		case 1:
			本元->右键按下 = 真;
			break;
		}
		事件->类型 = 鼠标事件::按下;
		break;
	case SDL_MOUSEBUTTONUP:
		switch (e.button.button) {
		case 0:
			本元->左键按下 = 假;
			break;
		case 1:
			本元->右键按下 = 假;
			break;
		}
		事件->类型 = 鼠标事件::释放;
		break;
	case SDL_MOUSEWHEEL:
		事件->类型 = 鼠标事件::滚动;
		break;
	default:
		返回 0;
	}

	事件->位置 = 本元->位置;
*/
	返回 事件;
}

}
}

