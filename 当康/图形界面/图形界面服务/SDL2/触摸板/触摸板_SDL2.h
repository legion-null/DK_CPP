#pragma once

#include "图形界面/图形界面服务/图形界面服务.h"

namespace 当康 {
namespace 图形界面 {

class 触摸板_SDL2: public 触摸板 {
抽象类声明(触摸板_SDL2)

public:
	触摸板_SDL2& 构造();
	void 析构();

public:
	触摸板_SDL2& 复制构造(const 触摸板_SDL2 &其他实例);
	触摸板_SDL2& 移动构造(触摸板_SDL2 &&其他实例);

};

}
}
