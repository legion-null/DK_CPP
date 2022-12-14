#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

#include "SDL2图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::图形界面服务_SDL2)

图形界面服务_SDL2& 图形界面服务_SDL2::构造() {
	// 初始化 SDL2 服务
	::SDL_Init(SDL_INIT_EVERYTHING);

	// 创建SDL2服务相关数据
	SDL2服务 = new SDL2图形界面服务相关数据;

	// 初始化屏幕
	this->当前屏幕 = new 屏幕_SDL2(this);
	// 初始化鼠标
	this->当前鼠标 = new 鼠标_SDL2(this);
	// 初始化键盘
	// 本元->当前键盘 = 创建 键盘_SDL2();
	// 初始化触摸板
	// 本元->当前触摸板 = 创建 触摸板_SDL2();

	return (*this);
}

void 图形界面服务_SDL2::析构() {
	// 关闭 SDL2 服务
	::SDL_Quit();
}

图形界面服务_SDL2& 图形界面服务_SDL2::复制构造(const 图形界面服务_SDL2 &其他实例) {
	throw 异常("图形界面服务_SDL2:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

图形界面服务_SDL2& 图形界面服务_SDL2::移动构造(图形界面服务_SDL2 &&其他实例) {
	throw 异常("图形界面服务_SDL2:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

}
}
