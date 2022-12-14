#pragma once

#include "基础类/对象/对象.h"

#include "多线程/线程接口/线程接口.h"
#include "图形界面/输入事件/输入事件.h"

#include "模板容器/队列/队列.hpp"

namespace 当康 {
namespace 图形界面 {

class 输入设备: public 基础类::对象, virtual public 多线程::线程接口 {
抽象类声明(输入设备)

protected:
	模板容器::队列<输入事件*> 事件队列;

public:
	输入设备& 构造();
	void 析构();

public:
	输入设备& 复制构造(const 输入设备 &其他实例);
	输入设备& 移动构造(输入设备 &&其他实例);

public:
	virtual void* 运行() override;

protected:
	virtual 输入事件* 上报输入事件() = 0;

public:
	bool 输入事件是否就绪();
	输入事件* 获取输入事件();

};

}
}
