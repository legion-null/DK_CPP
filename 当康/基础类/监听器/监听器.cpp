#include "当康.h"

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

命名空间 当康 {
命名空间 基础类 {

接口定义(当康::基础类::监听器)

监听器& 监听器::构造() {
	返回 本体;
}

void 监听器::析构() {

}

监听器& 监听器::复制构造(只读 监听器 &其他实例) {
	返回 本体;
}

监听器& 监听器::移动构造(监听器 &&其他实例) {
	返回 本体;
}

}
}
