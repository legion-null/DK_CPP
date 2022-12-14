#pragma once

#include "基础类/对象/对象.h"

namespace 当康 {
namespace 基础类 {

class 字符串: public 基础类::对象 {
类声明(字符串)

public:
	static i32 计算字符串长度(const c8 *字符串);
	static bool 比较字符串(const c8 *字符串1, const c8 *字符串2, i32 长度);
	static bool 比较字符串(const c8 *字符串1, const c8 *字符串2);
	static void 复制字符串(const c8 *源, c8 *目标, i32 长度);
	static void 复制字符串(const c8 *源, c8 *目标);
	static c8* 拼接字符串(const c8 *字符串1, const c8 *字符串2);
	static c8* 截取字符串(const c8 *原字符串, i32 起始位置, i32 长度);
	static i32 查找字符串(const c8 *原字符串, const c8 *目标字符串);
	static i32 查找字符串个数(const c8 *原字符串, const c8 *目标字符串);
	static c8* 替换字符串(const c8 *原字符串, const c8 *原子串, const c8 *替换子串);
	static i32 计算字符串哈希值(const c8 *字符串);

protected:
	c8 *文本 = nullptr;

public:
	字符串(const c8 *字符串) {
		构造(字符串);
	}

	字符串& operator =(const c8 *字符串) {
		return 构造(字符串);
	}

public:
	字符串& 构造();
	void 析构();

public:
	字符串& 构造(const c8 *字符串);

public:
	字符串& 复制构造(const 字符串 &其他实例);
	字符串& 移动构造(字符串 &&其他实例);

public:
	const c8* 获取文本() const;
	void 设置文本(const c8 *字符串);

public:
	i32 获取文本长度() const;

public:
	字符串 拼接(const c8 *字符串);
	字符串 拼接(const 字符串 &字符串);

	字符串 operator+(const c8 *字符串);
	字符串 operator+(const 字符串 &字符串);

	字符串& operator+=(const c8 *字符串);
	字符串& operator+=(const 字符串 &字符串);

public:
	friend bool operator==(const 字符串 &字符串1, const 字符串 &字符串2);
	friend bool operator==(const 字符串 &字符串1, const c8 *字符串2);
	friend bool operator==(const c8 *字符串1, const 字符串 &字符串2);

	friend bool operator!=(const 字符串 &字符串1, const 字符串 &字符串2);
	friend bool operator!=(const 字符串 &字符串1, const c8 *字符串2);
	friend bool operator!=(const c8 *字符串1, const 字符串 &字符串2);
};

bool operator==(const 字符串 &字符串1, const 字符串 &字符串2);
bool operator==(const 字符串 &字符串1, const c8 *字符串2);
bool operator==(const c8 *字符串1, const 字符串 &字符串2);

bool operator!=(const 字符串 &字符串1, const 字符串 &字符串2);
bool operator!=(const 字符串 &字符串1, const c8 *字符串2);
bool operator!=(const c8 *字符串1, const 字符串 &字符串2);

}
}
