#pragma once

#include "图形处理/字体/字体.h"

namespace 当康 {
namespace 图形处理 {

class 字体_点阵: public 字体 {
类声明(字体_点阵)

protected:

public:
	字体_点阵& 构造();
	void 析构();

public:
	字体_点阵& 复制构造(const 字体_点阵 &其他实例);
	字体_点阵& 移动构造(字体_点阵 &&其他实例);
};

}
}
