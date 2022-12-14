#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 图形处理 {

类定义(当康::图形处理::图片)

图片& 图片::构造() {
	return (*this);
}

void 图片::析构() {

}

图片& 图片::复制构造(const 图片 &其他实例) {
	throw 异常("图片:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	return (*this);
}

图片& 图片::移动构造(图片 &&其他实例) {
	throw 异常("图片:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	return (*this);
}

const 颜色 图片::获取像素点(i32 x, i32 y) const {
	return 帧缓冲区::读像素点(x, y);
}

}
}
