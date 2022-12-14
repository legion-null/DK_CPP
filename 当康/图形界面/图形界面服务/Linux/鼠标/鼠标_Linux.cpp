#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

#include "../Linux图形界面服务相关.h"

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::鼠标_Linux)

鼠标_Linux& 鼠标_Linux::构造() {
	return (*this);
}

void 鼠标_Linux::析构() {

}

鼠标_Linux& 鼠标_Linux::复制构造(const 鼠标_Linux &其他实例) {
	throw 异常("鼠标_Linux:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

鼠标_Linux& 鼠标_Linux::移动构造(鼠标_Linux &&其他实例) {
	throw 异常("鼠标_Linux:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

输入事件* 鼠标_Linux::上报输入事件() {
	return nullptr;
}

}
}

