#pragma once

#include "图形界面/容器/容器.h"

namespace 当康 {
namespace 图形界面 {

class 抽象按钮: public 容器 {
抽象类声明(抽象按钮)

protected:
	i8 按下 :1;
	i8 回弹 :1;

public:
	抽象按钮& 构造();
	void 析构();

public:
	抽象按钮& 复制构造(const 抽象按钮 &其他实例);
	抽象按钮& 移动构造(抽象按钮 &&其他实例);

public:
	bool 获取按下() const;
	void 设置按下(bool 按下);

public:
	bool 获取回弹() const;
	void 设置回弹(bool 回弹);

public:

};

}
}
