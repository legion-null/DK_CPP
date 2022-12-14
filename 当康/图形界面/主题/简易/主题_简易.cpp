#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;

namespace 当康 {
namespace 图形界面 {

类定义(当康::图形界面::主题_简易)

const 颜色 主题_简易::默认前景色 = 颜色::黑色;
const 颜色 主题_简易::默认背景色 = 颜色::白色;
const 颜色 主题_简易::默认强调色 = 颜色::红色;

主题_简易& 主题_简易::构造() {
	return (*this);
}

void 主题_简易::析构() {

}

主题_简易& 主题_简易::复制构造(const 主题_简易 &其他实例) {
	throw 异常("主题_简易:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

主题_简易& 主题_简易::移动构造(主题_简易 &&其他实例) {
	throw 异常("主题_简易:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

void 主题_简易::绘制边框(画笔 *画笔, 组件 *当前组件) {
	画笔->设置颜色(默认前景色);
	画笔->绘制矩形(当前组件->获取绝对外接矩形());
}

void 主题_简易::绘制背景(画笔 *画笔, 组件 *当前组件) {
	矩形2D 矩形 = 当前组件->获取绝对外接矩形();

	画笔->设置颜色(默认背景色);
	画笔->填充矩形(矩形.获取x() + 1, 矩形.获取y() + 1, 矩形.获取宽度() - 2, 矩形.获取高度() - 2);
}

void 主题_简易::绘制标签(画笔 *画笔, 标签 *当前组件) {
	if (当前组件->获取透明性() == false)
		绘制框架(画笔, 当前组件);

	画笔->绘制字符串(当前组件->获取绝对外接矩形(), 当前组件->获取文本());
}

}
}

