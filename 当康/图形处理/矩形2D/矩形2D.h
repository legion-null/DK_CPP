#pragma once

#include <图形处理/图形2D/图形2D.h>

namespace 当康 {
namespace 图形处理 {

class 矩形2D: public 图形2D {
类声明(矩形2D)

protected:
	i32 宽度 = 0;
	i32 高度 = 0;

public:
	矩形2D(i32 x, i32 y, i32 宽度, i32 高度) {
		构造(x, y, 宽度, 高度);
	}

	矩形2D(const 像素点2D &位置, i32 宽度, i32 高度) {
		构造(位置, 宽度, 高度);
	}

	矩形2D(i32 宽度, i32 高度) {
		构造(宽度, 高度);
	}

public:
	矩形2D& 构造();
	void 析构();

public:
	矩形2D& 复制构造(const 矩形2D &其他实例);
	矩形2D& 移动构造(矩形2D &&其他实例);

public:
	矩形2D& 构造(i32 x, i32 y, i32 宽度, i32 高度);
	矩形2D& 构造(const 像素点2D &位置, i32 宽度, i32 高度);
	矩形2D& 构造(i32 宽度, i32 高度);

public:
	i32 获取宽度() const;
	i32 获取高度() const;
	void 获取大小(i32 &宽度, i32 &高度) const;

	void 设置宽度(i32 宽度);
	void 设置高度(i32 高度);
	void 设置大小(i32 宽度, i32 高度);

public:
	virtual f64 计算面积() override;

	virtual void 获取外接矩形(i32 &x, i32 &y, i32 &宽度, i32 &高度) const override;
	virtual void 设置外接矩形(i32 x, i32 y, i32 宽度, i32 高度) override;
}
;

}
}
