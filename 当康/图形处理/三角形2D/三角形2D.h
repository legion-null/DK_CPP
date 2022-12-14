#pragma once

#include <图形处理/图形2D/图形2D.h>

namespace 当康 {
namespace 图形处理 {

class 三角形2D: public 图形2D {
类声明(三角形2D)

public:
	三角形2D& 构造();
	void 析构();

public:
	三角形2D& 复制构造(const 三角形2D &其他实例);
	三角形2D& 移动构造(三角形2D &&其他实例);

public:
	virtual f64 计算面积() override;

	virtual void 获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const override;
	virtual void 设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度) override;
}
;

}
}
