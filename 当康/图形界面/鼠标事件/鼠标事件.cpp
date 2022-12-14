#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::鼠标事件)

基础类::字符串 鼠标事件::事件类型转字符串(事件类型 类型) {
	if (类型 == 未定义事件) {
		return "未定义事件";
	} else if (类型 == 移动) {
		return "移动";
	} else if (类型 == 按下) {
		return "按下";
	} else if (类型 == 释放) {
		return "释放";
	} else if (类型 == 点击) {
		return "点击";
	} else if (类型 == 拖动) {
		return "拖动";
	} else if (类型 == 滚动) {
		return "滚动";
	}

	return "";
}

鼠标事件& 鼠标事件::构造() {
	return (*this);
}

void 鼠标事件::析构() {

}

鼠标事件& 鼠标事件::复制构造(const 鼠标事件 &其他实例) {
	throw 异常("鼠标事件:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

鼠标事件& 鼠标事件::移动构造(鼠标事件 &&其他实例) {
	throw 异常("鼠标事件:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void 鼠标事件::设置当前状态(设备状态 &状态) {
	当前状态 = 状态;
}

i32 鼠标事件::获取x() const {
	return 当前状态.位置.获取x();
}

i32 鼠标事件::获取y() const {
	return 当前状态.位置.获取y();
}

void 鼠标事件::获取位置(i32 &x, i32 &y) const {
	return 当前状态.位置.获取位置(x, y);
}

图形处理::像素点2D 鼠标事件::获取位置() const {
	return 当前状态.位置;
}

bool 鼠标事件::左键按下() const {
	return 当前状态.左键按下 == 0 ? false : true;
}

bool 鼠标事件::中键按下() const {
	return 当前状态.中键按下 == 0 ? false : true;
}

bool 鼠标事件::右键按下() const {
	return 当前状态.右键按下 == 0 ? false : true;
}

鼠标事件::事件类型 鼠标事件::获取事件类型() const {
	return 当前状态.类型;
}

}
}

