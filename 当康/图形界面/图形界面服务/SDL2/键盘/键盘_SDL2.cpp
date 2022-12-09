#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

#include "SDL2图形界面服务相关.h"

命名空间 当康 {
命名空间 图形界面 {

类定义(当康::图形界面::键盘_SDL2)

键盘_SDL2& 键盘_SDL2::构造() {
	返回 本体;
}

void 键盘_SDL2::析构() {

}

键盘_SDL2& 键盘_SDL2::复制构造(只读 键盘_SDL2 &其他实例) {
	抛出 异常("键盘_SDL2:复制构造方法不存在！\n"); // 默认操作，实现复制构造方法需将其删除

	返回 本体;
}

键盘_SDL2& 键盘_SDL2::移动构造(键盘_SDL2 &&其他实例) {
	抛出 异常("键盘_SDL2:移动构造方法不存在！\n"); // 默认操作，实现移动构造方法需将其删除

	返回 本体;
}

}
}
