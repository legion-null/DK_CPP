#include "当康.h"

#include <unistd.h>

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

using namespace 当康::图形处理;
using namespace 当康::图形界面;

i32 图形处理_图片_BMP_测试(i32 参数个数, c8 **参数列表) {
	屏幕 *屏 = new 屏幕_SDL2("SDL2_液晶屏模拟器 作者:legion", 800, 600, 32, 图形::不旋转);
	画笔 *笔 = new 画笔(屏);
	图片 *图1 = new 图片_BMP("/disks/Data/工程/日蚀_CPP/当康__模板/资源/bmp/test1.bmp");
	图片 *图2 = new 图片_BMP("/disks/Data/工程/日蚀_CPP/当康__模板/资源/bmp/test2.bmp");

	while (true) {
		笔->绘制图片(0, 0, 800, 600, 图1);
		屏->刷新();
		::sleep(1);
		笔->绘制图片(0, 0, 800, 600, 图2);
		屏->刷新();
		::sleep(1);
	}

	return 0;
}
