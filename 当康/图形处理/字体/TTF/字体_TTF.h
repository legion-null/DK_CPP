#pragma once

#include <图形处理/字体/字体.h>

命名空间 当康 {
命名空间 图形处理 {

类 字体_TTF: 继承 字体 {
类声明(字体_TTF)

公开:
	字体_TTF& 构造();
	void 析构();

公开:
	字体_TTF& 复制构造(只读 字体_TTF &其他实例);
	字体_TTF& 移动构造(字体_TTF &&其他实例);
};

}
}
