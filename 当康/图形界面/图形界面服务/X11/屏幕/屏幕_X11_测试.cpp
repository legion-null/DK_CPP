#include "当康.h"

引入 当康;

引入 当康::基础类;
引入 当康::包装类;
引入 当康::开发者;

引入 当康::图形处理;
引入 当康::图形界面;

i32 图形处理_屏幕_X11_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	屏幕 *屏幕 = 创建 屏幕_X11("X11_液晶屏模拟器 作者:legion", 800, 600, 32, 图形::不旋转);

	屏幕->测试();

	while(真)
		;

	返回 0;
}
