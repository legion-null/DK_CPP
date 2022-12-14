#pragma once

#include "图形界面/键盘/键盘.h"

namespace 当康 {
namespace 图形界面 {

class 键盘_SDL2: public 键盘 {
类声明(键盘_SDL2)

protected:
	struct SDL2事件相关数据 *SDL2事件 = nullptr;

public:
	键盘_SDL2& 构造();
	void 析构();

public:
	键盘_SDL2& 复制构造(const 键盘_SDL2 &其他实例);
	键盘_SDL2& 移动构造(键盘_SDL2 &&其他实例);

protected:
	virtual 输入事件* 上报输入事件() override;

};

}
}
