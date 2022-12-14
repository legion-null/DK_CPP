#pragma once

#include "图形界面/输入事件监听器/输入事件监听器.h"

namespace 当康 {
namespace 图形界面 {

class 鼠标事件监听器: public 输入事件监听器 {
接口声明(鼠标事件监听器)

public:
	virtual bool 处理鼠标事件() = 0;

};

}
}
