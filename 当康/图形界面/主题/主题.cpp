#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形界面 {

抽象类定义(当康::图形界面::主题)

const 主题 *主题::简易主题 = new 主题_简易();
const 主题 *主题::CDE主题 = nullptr;
const 主题 *主题::Windows主题 = nullptr;
const 主题 *主题::Flat主题 = nullptr;

主题 *主题::默认主题 = (主题*) 主题::简易主题;

主题& 主题::构造() {
	return (*this);
}

void 主题::析构() {

}

主题& 主题::复制构造(const 主题 &其他实例) {
	throw 异常("主题:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

主题& 主题::移动构造(主题 &&其他实例) {
	throw 异常("主题:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void 主题::绘制框架(图形处理::画笔 *画笔, 组件 *当前组件) {
	绘制背景(画笔, 当前组件);
	绘制边框(画笔, 当前组件);
}

}
}

