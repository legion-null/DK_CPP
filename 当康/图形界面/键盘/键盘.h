#pragma once

#include <图形界面/输入设备/输入设备.h>

namespace 当康 {
namespace 图形界面 {

class 键盘: public 输入设备 {
抽象类声明(键盘)

public:
	键盘& 构造();
	void 析构();

public:
	键盘& 复制构造(const 键盘 &其他实例);
	键盘& 移动构造(键盘 &&其他实例);
};

}
}
