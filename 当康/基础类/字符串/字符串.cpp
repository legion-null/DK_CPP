#include "当康.h"

using namespace 当康::基础类;
using namespace 当康::包装类;
using namespace 当康::开发者;

namespace 当康 {
namespace 基础类 {

类定义(当康::基础类::字符串)

i32 字符串::计算字符串长度(const c8 *字符串) {
	if (字符串 == nullptr)
		throw 异常("空指针异常\n");

	i32 字符串长度 = 0;
	const c8 *p = 字符串;

	while (*p != 0) {
		p++;
		字符串长度++;
	}

	return 字符串长度;
}

void 字符串::复制字符串(const c8 *源, c8 *目标, i32 长度) {
	复制(源, 目标, 长度);
}

void 字符串::复制字符串(const c8 *源, c8 *目标) {
	复制字符串(源, 目标, 计算字符串长度(源) + 1);
}

bool 字符串::比较字符串(const c8 *字符串1, const c8 *字符串2, i32 长度) {
	const c8 *p1 = 字符串1;
	const c8 *p2 = 字符串2;

	for (i32 i = 0; i < 长度; i++) {
		if (*p1 != *p2)
			return false;
		p1++;
		p2++;
	}

	return true;
}

bool 字符串::比较字符串(const c8 *字符串1, const c8 *字符串2) {
	const c8 *p1 = 字符串1;
	const c8 *p2 = 字符串2;

	while (*p1 != 0) {
		if (*p1 != *p2)
			return false;
		p1++;
		p2++;
	}

	return true;
}

c8* 字符串::拼接字符串(const c8 *字符串1, const c8 *字符串2) {
	i32 字符串1长度 = 计算字符串长度(字符串1);
	i32 字符串2长度 = 计算字符串长度(字符串2);

	c8 *新字符串 = new c8[字符串1长度 + 字符串2长度 + 1];

	复制字符串(字符串1, 新字符串, 字符串1长度);
	复制字符串(字符串2, 新字符串 + 字符串1长度, 字符串2长度);

	return 新字符串;
}

c8* 字符串::截取字符串(const c8 *原字符串, i32 起始位置, i32 长度) {
	c8 *新字符串 = new c8[长度 + 1];

	复制字符串(原字符串 + 起始位置, 新字符串, 长度);

	return 新字符串;
}

i32 字符串::查找字符串(const c8 *原字符串, const c8 *目标字符串) {
	i32 原字符串长度 = 计算字符串长度(原字符串);
	i32 目标字符串长度 = 计算字符串长度(目标字符串);

	if (原字符串长度 < 目标字符串长度)
		throw 异常("");

	for (i32 i = 0; i < 原字符串长度 - 目标字符串长度; i++) {
		if (比较字符串(原字符串 + i, 目标字符串, 目标字符串长度))
			return i;
	}

	return -1;
}

i32 字符串::查找字符串个数(const c8 *原字符串, const c8 *目标字符串) {
	i32 目标字符串长度 = 计算字符串长度(目标字符串);

	const c8 *p = 原字符串;
	i32 n = 0;

	while (true) {
		i32 索引 = 查找字符串(p, 目标字符串);
		if (索引 < 0)
			break;
		n++;
		p = p + 索引 + 目标字符串长度;
	}

	return n;
}

c8* 字符串::替换字符串(const c8 *原字符串, const c8 *原子串, const c8 *替换子串) {
	i32 原字符串长度 = 计算字符串长度(原字符串);
	i32 原子串长度 = 计算字符串长度(原子串);
	i32 替换子串长度 = 计算字符串长度(替换子串);

	if (原子串长度 == 0 || 原字符串长度 == 0 || 原字符串长度 < 原子串长度)
		return 0;

	i32 替换次数 = 0;
	i32 *替换位置 = new i32[原字符串长度 + 1];

	for (i32 偏移量 = 0, 临时值 = -1;;) {
		临时值 = 查找字符串(原字符串 + 偏移量, 原子串);
		if (临时值 == -1)
			break;
		替换位置[替换次数++] = 临时值 + 偏移量;
		偏移量 = 偏移量 + 临时值 + 原子串长度;
	}

	i32 新字符串长度 = 原字符串长度 + 替换次数 * (替换子串长度 - 原子串长度) + 1;
	c8 *新字符串 = new c8[新字符串长度];

	for (i32 i = 0, i1 = 0, i2 = 0; i1 < 原字符串长度;) {
		if (i1 == 替换位置[i]) {
			复制字符串(替换子串, 新字符串 + i2);
			i2 = i2 + 替换子串长度;
			i1 = i1 + 原子串长度;
			i++;
		} else {
			新字符串[i2] = 原字符串[i1];
			i2++;
			i1++;
		}
	}
	新字符串[新字符串长度 - 1] = 0;

	delete[] 替换位置;

	return 新字符串;
}

i32 字符串::计算字符串哈希值(const c8 *字符串) {
	i32 哈希值 = 0;
	for (i32 i = 0; 字符串[i] != 0; i++) {
		哈希值 = 31 * 哈希值 + (字符串[i] & 0xff);
	}

	return 哈希值;
}

字符串& 字符串::构造() {
	return (*this);
}

void 字符串::析构() {
	if (文本 != nullptr)
		delete[] 文本;
}

字符串& 字符串::构造(const c8 *字符串) {
	设置文本(字符串);

	return (*this);
}

字符串& 字符串::复制构造(const 字符串 &其他实例) {
	设置文本(其他实例.文本);
	return (*this);
}

字符串& 字符串::移动构造(字符串 &&其他实例) {
	return (*this);
}

const c8* 字符串::获取文本() const {
	return 文本;
}

void 字符串::设置文本(const c8 *字符串) {
	i32 字符串长度 = 计算字符串长度(字符串);
	c8 *临时数据 = new c8[字符串长度 + 1];

	复制(字符串, 临时数据, 字符串长度 + 1);

	交换(文本, 临时数据);

	if (临时数据 != nullptr)
		delete[] 临时数据;
}

i32 字符串::获取文本长度() const {
	return 字符串::计算字符串长度(文本);
}

字符串 字符串::拼接(const c8 *字符串) {
	return 基础类::字符串("123");
}

字符串 字符串::拼接(const 字符串 &字符串) {
	return 拼接(字符串.文本);
}

字符串 字符串::operator +(const c8 *字符串) {
	return 拼接(字符串);
}

字符串 字符串::operator +(const 字符串 &字符串) {
	return 拼接(字符串);
}

字符串& 字符串::operator +=(const c8 *字符串) {
	return (*this);
}

字符串& 字符串::operator +=(const 字符串 &字符串) {
	return (*this);
}

bool operator ==(const 字符串 &字符串1, const 字符串 &字符串2) {
	return 字符串::比较字符串(字符串1.文本, 字符串2.文本);
}

bool operator ==(const 字符串 &字符串1, const c8 *字符串2) {
	return 字符串::比较字符串(字符串1.文本, 字符串2);
}

bool operator ==(const c8 *字符串1, const 字符串 &字符串2) {
	return 字符串::比较字符串(字符串1, 字符串2.文本);
}

bool operator !=(const 字符串 &字符串1, const 字符串 &字符串2) {
	return !(字符串1 == 字符串2);
}

bool operator !=(const 字符串 &字符串1, const c8 *字符串2) {
	return !(字符串1 == 字符串2);
}

bool operator !=(const c8 *字符串1, const 字符串 &字符串2) {
	return !(字符串1 == 字符串2);
}

}
}

