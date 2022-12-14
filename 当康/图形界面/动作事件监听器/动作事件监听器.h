#pragma once

#include "基础类/监听器/监听器.h"

#include "图形界面/动作事件/动作事件.h"

namespace 当康 {
namespace 图形界面 {

class 动作事件监听器: public 基础类::监听器 {
接口声明(动作事件监听器)

public:
	virtual void 处理动作事件(动作事件 *事件) = 0;
};

}
}
