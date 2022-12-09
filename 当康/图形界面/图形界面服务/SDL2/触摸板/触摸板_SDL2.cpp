#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 图形界面 {

类定义(当康::图形界面::触摸板_SDL2)

触摸板_SDL2& 触摸板_SDL2::构造() {
	返回 本体;
}

void 触摸板_SDL2::析构() {

}

触摸板_SDL2& 触摸板_SDL2::复制构造(只读 触摸板_SDL2 &其他实例) {
	抛出 异常("触摸板_SDL2:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

触摸板_SDL2& 触摸板_SDL2::移动构造(触摸板_SDL2 &&其他实例) {
	抛出 异常("触摸板_SDL2:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

}
}
