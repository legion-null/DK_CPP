#pragma once

#include "图形界面/抽象按钮/抽象按钮.h"

namespace 当康 {
namespace 图形界面 {

class 单选框: public 抽象按钮 {
类声明(单选框)

public:
	单选框& 构造();
	void 析构();

public:
	单选框& 复制构造(const 单选框 &其他实例);
	单选框& 移动构造(单选框 &&其他实例);

private:
	using 抽象按钮::回弹;

	using 抽象按钮::获取回弹;
	using 抽象按钮::设置回弹;
};

}
}
