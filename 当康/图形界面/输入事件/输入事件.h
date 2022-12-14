#pragma once

#include <基础类/事件/事件.h>

namespace 当康 {
namespace 图形界面 {

class 输入事件: public 基础类::事件 {
类声明(输入事件)

protected:
	u64 毫秒时间戳 = 0;

public:
	输入事件& 构造();
	void 析构();

public:
	输入事件& 复制构造(const 输入事件 &其他实例);
	输入事件& 移动构造(输入事件 &&其他实例);

};

}
}
