#pragma once

#include "图形界面/输入设备/输入设备.h"

namespace 当康 {
namespace 图形界面 {

class 触摸板: public 输入设备 {
抽象类声明(触摸板)

public:
	触摸板& 构造();
	void 析构();

public:
	触摸板& 复制构造(const 触摸板 &其他实例);
	触摸板& 移动构造(触摸板 &&其他实例);
};

}
}
