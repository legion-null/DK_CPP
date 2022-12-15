#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

#include "../X11图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::键盘_X11)

键盘_X11& 键盘_X11::构造() {
	return (*this);
}

void 键盘_X11::析构() {

}

键盘_X11& 键盘_X11::构造(图形界面服务_X11 *服务) {
	X11服务 = 服务->X11服务;
	return (*this);
}

键盘_X11& 键盘_X11::复制构造(const 键盘_X11 &其他实例) {
	throw 异常("键盘_X11:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

键盘_X11& 键盘_X11::移动构造(键盘_X11 &&其他实例) {
	throw 异常("键盘_X11:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

输入事件* 键盘_X11::上报输入事件() {
	::XEvent &e = X11服务->事件;
	//键盘事件 *事件 = new 键盘事件();

	::XNextEvent(X11服务->显示设备, &e);

	i32 key = 0;

	if (e.type == KeyPress) {
		key = e.xkey.keycode;
		日志::格式化打印日志(日志::一般信息, "键盘按键按下 %d '%c'\n", key, key);
	} else if (e.type == KeyRelease) {
		key = e.xkey.keycode;
		日志::格式化打印日志(日志::一般信息, "键盘按键释放 %d '%c'\n", key, key);
	}

	return nullptr;
}

}
}
