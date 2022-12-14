#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;
using namespace 当康::图形界面;

i32 图形界面_标签_测试(i32 参数个数, c8 **参数列表) {
	(void) 参数个数;
	(void) 参数列表;

	屏幕 *屏 = new 屏幕_SDL2("SDL2_液晶屏模拟器 作者:legion", 800, 600, 32, 图形::不旋转);
	画笔 *笔 = new 画笔(屏);

	标签 *测试标签 = new 标签(20, 20, 200, 20, "标签");

	while (true) {
		for (i32 x = 0; x < 800; x++) {
			屏->清屏(颜色::白色);
			测试标签->设置x(x);
			测试标签->绘制自身(笔);

			屏->刷新();
		}
	}
	return 0;
}
