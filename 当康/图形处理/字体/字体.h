#pragma once

#include <基础类/对象/对象.h>

namespace 当康 {
namespace 图形处理 {

class 字体: public 基础类::对象 {
类声明(字体)

public:
	字体& 构造();
	void 析构();

public:
	字体& 复制构造(const 字体 &其他实例);
	字体& 移动构造(字体 &&其他实例);
};

}
}

#include "点阵/字体_点阵.h"
#include "TTF/字体_TTF.h"
