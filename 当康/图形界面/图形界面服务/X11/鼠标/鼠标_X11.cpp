#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

#include "../X11图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::鼠标_X11)

鼠标_X11& 鼠标_X11::构造() {
	if (X11服务 == nullptr)
		X11服务 = new X11图形界面服务相关数据();

	return (*this);
}

void 鼠标_X11::析构() {

}

鼠标_X11& 鼠标_X11::构造(图形界面服务_X11 *服务) {
	X11服务 = 服务->X11服务;

	return (*this);
}

鼠标_X11& 鼠标_X11::复制构造(const 鼠标_X11 &其他实例) {
	throw 异常("鼠标_X11:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

鼠标_X11& 鼠标_X11::移动构造(鼠标_X11 &&其他实例) {
	throw 异常("鼠标_X11:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

输入事件* 鼠标_X11::上报输入事件() {
	::XEvent &e = X11服务->事件;
	鼠标事件 *事件 = new 鼠标事件();

	::XNextEvent(X11服务->显示设备, &e);

	if (e.type == MotionNotify) {
		当前状态.位置.设置位置(e.xmotion.x, e.xmotion.y);
		if (当前状态.左键按下 == false and 当前状态.中键按下 == false and 当前状态.右键按下 == false) {
			当前状态.类型 = 鼠标事件::移动;
		} else {
			当前状态.类型 = 鼠标事件::拖动;
		}
	} else if (e.type == ButtonPress) {
		if (e.xbutton.button == 1) {
			当前状态.左键按下 = true;
		} else if (e.xbutton.button == 2) {
			当前状态.中键按下 = true;
		} else if (e.xbutton.button == 3) {
			当前状态.右键按下 = true;
		}
		当前状态.类型 = 鼠标事件::按下;
	} else if (e.type == ButtonRelease) {
		if (e.xbutton.button == 1) {
			当前状态.左键按下 = false;
		} else if (e.xbutton.button == 2) {
			当前状态.中键按下 = false;
		} else if (e.xbutton.button == 3) {
			当前状态.右键按下 = false;
		}
		if (当前状态.类型 == 鼠标事件::释放) {
			当前状态.类型 = 鼠标事件::点击;
		} else {
			当前状态.类型 = 鼠标事件::释放;
		}
	} else if (e.type == MotionNotify) {
		当前状态.类型 = 鼠标事件::滚动;
	} else {
		delete 事件;
		return nullptr;
	}

	// 复制当前状态到事件
	事件->设置当前状态(当前状态);

	// 打印当前状态
	日志::格式化打印日志(日志::一般信息, "位置(%4d,%4d) 左键按下:%s 中间按下:%s 右键按下:%s %s\n", //
	事件->获取x(), 事件->获取y(), //
	事件->左键按下() ? "真" : "假", //
	事件->中键按下() ? "真" : "假", //
	事件->右键按下() ? "真" : "假", //
	鼠标事件::事件类型转字符串(事件->获取事件类型()).获取文本());

	return 事件;
}

}
}
