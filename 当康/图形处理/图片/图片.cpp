#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 图形处理 {

类定义(当康::图形处理::图片)

图片& 图片::构造() {
	返回 本体;
}

void 图片::析构() {

}

图片& 图片::复制构造(只读 图片 &其他实例) {
	抛出 异常("图片:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

图片& 图片::移动构造(图片 &&其他实例) {
	抛出 异常("图片:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

颜色 图片::获取像素点(i32 x, i32 y) 只读 {
	返回 帧缓冲区::读像素点(x, y);
}

}
}
