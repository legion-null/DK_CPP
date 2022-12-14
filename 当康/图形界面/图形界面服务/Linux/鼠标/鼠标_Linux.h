#pragma once

#include <图形界面/鼠标/鼠标.h>

namespace 当康 {
namespace 图形界面 {

class 鼠标_Linux: public 鼠标 {
类声明(鼠标_Linux)

public:
	鼠标_Linux& 构造();
	void 析构();

public:
	鼠标_Linux& 复制构造(const 鼠标_Linux &其他实例);
	鼠标_Linux& 移动构造(鼠标_Linux &&其他实例);

protected:
	virtual 输入事件* 上报输入事件() override;
};

}
}
