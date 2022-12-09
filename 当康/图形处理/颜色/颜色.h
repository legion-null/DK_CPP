#pragma once

#include "基础类/对象/对象.h"

命名空间 当康 {
命名空间 图形处理 {

类 颜色: 继承 基础类::对象 {
类声明(颜色)

公开:
	枚举 典型颜色 : i32 {
		黑色 = 0x00000000, // Black
		昏灰色 = 0x00696969, // Dim Gray
		灰色 = 0x00808080, // Gray
		暗灰色 = 0x00A9A9A9, // Dark Gray
		银色 = 0x00C0C0C0, // Silver
		亮灰色 = 0x00D3D3D3, // Light Gray
		庚斯博罗灰色 = 0x00DCDCDC, // Gainsboro
		白烟色 = 0x00F5F5F5, // White Smoke
		白色 = 0x00FFFFFF, // White
		雪色 = 0x00FFFAFA, // Snow
		铁灰色 = 0x00625B57, // Iron Gray
		沙棕色 = 0x00E6C3C3, // Sand Beige
		玫瑰褐色 = 0x00BC8F8F, // Rosy Brown
		亮珊瑚色 = 0x00F08080, // Light Coral
		印度红色 = 0x00CD5C5C, // Indian Red
		褐色 = 0x00A52A2A, // Brown
		砖红色 = 0x00B22222, // Fire Brick
		栗色 = 0x00800000, // Maroon
		暗红色 = 0x008B0000, // Dark Red
		鲜红色 = 0x00E60000, // Strong Red
		红色 = 0x00FF0000, // Red
		柿子橙色 = 0x00FF4D40, // Persimmon
		雾玫瑰色 = 0x00FFE4E1, // Misty Rose
		鲑红色 = 0x00FA8072, // Salmon
		腥红色 = 0x00FF2400, // Scarlet
		蕃茄红色 = 0x00FF6347, // Tomato
		暗鲑红色 = 0x00E9967A, // Dark Salmon
		珊瑚红色 = 0x00FF7F50, // Coral
		橙红色 = 0x00FF4500, // Orange Red
		亮鲑红色 = 0x00FFA07A, // Light Salmon
		朱红色 = 0x00FF4D00, // Vermilion
		赭黄色 = 0x00A0522D, // Sienna
		热带橙色 = 0x00FF8033, // Tropical Orange
		驼色 = 0x00A16B47, // Camel
		杏黄色 = 0x00E69966, // Apricot
		椰褐色 = 0x004D1F00, // Coconut Brown
		海贝色 = 0x00FFF5EE, // Seashell
		鞍褐色 = 0x008B4513, // Saddle Brown
		巧克力色 = 0x00D2691E, // Chocolate
		燃橙色 = 0x00CC5500, // Burnt Orange
		阳橙色 = 0x00FF7300, // Sun Orange
		粉扑桃色 = 0x00FFDAB9, // Peach Puff
		沙褐色 = 0x00F4A460, // Sand Brown
		铜色 = 0x00CD7F32, // Bronze
		亚麻色 = 0x00FAF0E6, // Linen
		蜜橙色 = 0x00FFB366, // Honey Orange
		秘鲁色 = 0x00CD853F, // Peru
		乌贼墨色 = 0x00704214, // Sepia
		赭色 = 0x00CC7722, // Ocher
		陶坯黄色 = 0x00FFE4C4, // Bisque
		橘色 = 0x00F28500, // Tangerine
		暗橙色 = 0x00FF8C00, // Dark Orange
		古董白色 = 0x00FAEBD7, // Antique White
		日晒色 = 0x00D2B48C, // Tan
		硬木色 = 0x00DEB887, // Burly Wood
		杏仁白色 = 0x00FFEBCD, // Blanched Almond
		那瓦霍白色 = 0x00FFDEAD, // Navajo White
		万寿菊黄色 = 0x00FF9900, // Marigold
		蕃木瓜色 = 0x00FFEFD5, // Papaya Whip
		灰土色 = 0x00CCB38C, // Pale Ocre
		卡其色 = 0x00996B1F, // Khaki
		鹿皮鞋色 = 0x00FFE4B5, // Moccasin
		旧蕾丝色 = 0x00FDF5E6, // Old Lace
		小麦色 = 0x00F5DEB3, // Wheat
		桃色 = 0x00FFE5B4, // Peach
		橙色 = 0x00FFA500, // Orange
		花卉白色 = 0x00FFFAF0, // Floral White
		金菊色 = 0x00DAA520, // Goldenrod
		暗金菊色 = 0x00B8860B, // Dark Goldenrod
		咖啡色 = 0x004D3900, // Coffee
		茉莉黄色 = 0x00E6C35C, // Jasmine
		琥珀色 = 0x00FFBF00, // Amber
		玉米丝色 = 0x00FFF8DC, // Cornsilk
		铬黄色 = 0x00E6B800, // Chrome Yellow
		金色 = 0x00FFD700, // Golden
		柠檬绸色 = 0x00FFFACD, // Lemon Chiffon
		亮卡其色 = 0x00F0E68C, // Light Khaki
		灰金菊色 = 0x00EEE8AA, // Pale Goldenrod
		暗卡其色 = 0x00BDB76B, // Dark Khaki
		含羞草黄色 = 0x00E6D933, // Mimosa
		奶油色 = 0x00FFFDD0, // Cream
		象牙色 = 0x00FFFFF0, // Ivory
		米色 = 0x00F5F5DC, // Beige
		亮黄色 = 0x00FFFFE0, // Light Yellow
		亮金菊黄色 = 0x00FAFAD2, // Light Goldenrod Yellow
		香槟黄色 = 0x00FFFF99, // Champagne Yellow
		芥末黄色 = 0x00CCCC4D, // Mustard
		月黄色 = 0x00FFFF4D, // Moon Yellow
		橄榄色 = 0x00808000, // Olive
		鲜黄色 = 0x00FFEF00, // Canary Yellow
		黄色 = 0x00FFFF00, // Yellow
		苔藓绿色 = 0x00697723, // Moss Green
		亮柠檬绿色 = 0x00CCFF00, // Light Lime
		橄榄军服绿色 = 0x006B8E23, // Olive Drab
		黄绿色 = 0x009ACD32, // Yellow Green
		暗橄榄绿色 = 0x00556B2F, // Dark Olive Green
		苹果绿色 = 0x008CE600, // Apple Green
		绿黄色 = 0x00ADFF2F, // Green Yellow
		草绿色 = 0x0099E64D, // Grass Green
		草坪绿色 = 0x007CFC00, // Lawn Green
		查特酒绿色 = 0x007FFF00, // Chartreuse
		叶绿色 = 0x0073B839, // Foliage Green
		嫩绿色 = 0x0099FF4D, // Fresh Leaves
		明绿色 = 0x0066FF00, // Bright Green
		钴绿色 = 0x0066FF59, // Cobalt Green
		蜜瓜绿色 = 0x00F0FFF0, // Honeydew
		暗海绿色 = 0x008FBC8F, // Dark Sea Green
		亮绿色 = 0x0090EE90, // Light Green
		灰绿色 = 0x0098FB98, // Pale Green
		常春藤绿色 = 0x0036BF36, // Ivy Green
		森林绿色 = 0x00228B22, // Forest Green
		柠檬绿色 = 0x0032CD32, // Lime Green
		暗绿色 = 0x00006400, // Dark Green
		绿色 = 0x00008000, // Green
		鲜绿色 = 0x0000FF00, // Lime
		孔雀石绿色 = 0x0022C32E, // Malachite
		薄荷绿色 = 0x0016982B, // Mint
		青瓷绿色 = 0x00ACE1AF, // Celadon
		浅孔雀石绿色 = 0x0073E68C, // Very Light Malachite Green
		绿松石绿色 = 0x004DE680, // Turquoise Green
		铬绿色 = 0x00127436, // Viridian
		苍色 = 0x00B8DDC8, // Horizon Blue
		海绿色 = 0x002E8B57, // Sea Green
		中海绿色 = 0x003CB371, // Medium Sea Green
		薄荷奶油色 = 0x00F5FFFA, // Mint Cream
		春绿色 = 0x0000FF80, // Spring Green
		孔雀绿色 = 0x0000A15C, // Peacock Green
		中春绿色 = 0x0000FA9A, // Medium Spring Green
		中碧蓝色 = 0x0066CDAA, // Medium Aquamarine
		碧蓝色 = 0x007FFFD4, // Aquamarine
		青蓝色 = 0x000DBF8C, // Cyan Blue
		水蓝色 = 0x0066FFE6, // Aqua Blue
		土耳其蓝色 = 0x0000FFEF, // Turquoise Blue
		绿松石色 = 0x0040E0D0, // Turquoise
		亮海绿色 = 0x0020B2AA, // Light Sea Green
		中绿松石色 = 0x0048D1CC, // Medium Turquoise
		亮青色 = 0x00E0FFFF, // Light Cyan
		浅蓝色 = 0x0089CFF0, // Baby Blue
		灰绿松石色 = 0x00AFEEEE, // Pale Turquoise
		暗岩灰色 = 0x002F4F4F, // Dark Slate Gray
		凫绿色 = 0x00008080, // Teal
		暗青色 = 0x00008B8B, // Dark Cyan
		青色 = 0x0000FFFF, // Cyan
		水色 = 0x00AFDFE4, // Aqua
		暗绿松石色 = 0x0000CED1, // Dark Turquoise
		军服蓝色 = 0x005F9EA0, // Cadet Blue
		孔雀蓝色 = 0x0000808C, // Peacock Blue
		粉蓝色 = 0x00B0E0E6, // Powder Blue
		浓蓝色 = 0x00006374, // Strong Blue
		亮蓝色 = 0x00ADD8E6, // Light Blue
		灰蓝色 = 0x00D1EDF2, // Pale Blue
		萨克斯蓝色 = 0x004798B3, // Saxe Blue
		深天蓝色 = 0x0000BFFF, // Deep Sky Blue
		水手蓝色 = 0x0000477D, // Marine Blue
		普鲁士蓝色 = 0x00003153, // Prussian blue
		爱丽丝蓝色 = 0x00F0F8FF, // Alice Blue
		道奇蓝色 = 0x001E90FF, // Dodger Blue
		矿蓝色 = 0x00004D99, // Mineral Blue
		湛蓝色 = 0x00007FFF, // Azure
		韦奇伍德瓷蓝色 = 0x005686BF, // Wedgwood Blue
		亮钢蓝色 = 0x00B0C4DE, // Light Steel Blue
		钴蓝色 = 0x000047AB, // Cobalt Blue
		灰丁宁蓝色 = 0x005E86C1, // Pale Denim
		鼠尾草蓝色 = 0x004D80E6, // Salvia Blue
		暗粉蓝色 = 0x00003399, // Dark Powder Blue
		蓝宝石色 = 0x00082567, // Sapphire
		国际奇连蓝色 = 0x00002FA7, // International Klein Blue
		蔚蓝色 = 0x002A52BE, // Cerulean blue
		品蓝色 = 0x004169E1, // Royal Blue
		暗矿蓝色 = 0x0024367D, // Dark Mineral Blue
		极浓海蓝色 = 0x000033FF, // Ultramarine
		天青石蓝色 = 0x0026619C, // Lapis Lazuli
		幽灵白色 = 0x00F8F8FF, // Ghost White
		薰衣草雾色 = 0x00E6E6FA, // Lavender Mist
		薰衣草蓝色 = 0x00CCCCFF, // Lavender Blue
		长春花色 = 0x00C3CDE6, // Periwinkle
		午夜蓝色 = 0x00191970, // Midnight Blue
		藏青色 = 0x00000080, // Navy Blue
		暗蓝色 = 0x0000008B, // Dark Blue
		中蓝色 = 0x000000CD, // Medium Blue
		蓝色 = 0x000000FF, // Blue
		浅灰紫红色 = 0x008674A1, // Grayish Purple
		靛色 = 0x004B0080, // Indigo
		暗岩蓝色 = 0x00483D8B, // Dark Slate Blue
		钢青色 = 0x004682B4, // Steel Blue
		碧绿色 = 0x0050C878, // Emerald
		紫色 = 0x006A0DAD, // Purple
		岩蓝色 = 0x006A5ACD, // Slate Blue
		矢车菊蓝色 = 0x006495ED, // Cornflower Blue
		中岩蓝色 = 0x007B68EE, // Medium Slate Blue
		紫罗兰色 = 0x008000FF, // Violet
		岩灰色 = 0x00708090, // Slate Gray
		亮岩灰色 = 0x00778899, // Light Slate Gray
		蓝紫色 = 0x008A2BE2, // Blue Violet
		暗洋红色 = 0x008B008B, // Dark Magenta
		李红色 = 0x008E4585, // Plum
		天空蓝色 = 0x0087CEEB, // Sky Blue
		浅天蓝色 = 0x0087CEFA, // Light Sky Blue
		勃艮第酒红色 = 0x00800020, // Burgundy
		宗主教色 = 0x00800080, // Patriarch
		中紫红色 = 0x009370DB, // Medium Purple
		暗紫色 = 0x009400D3, // Dark Violet
		暗兰紫色 = 0x009932CC, // Dark Orchid
		紫水晶色 = 0x009966CC, // Amethyst
		中兰紫色 = 0x00BA55D3, // Medium Orchid
		薰衣草紫色 = 0x00B57EDC, // Lavender
		三色堇紫色 = 0x007400A1, // Pansy
		锦葵紫色 = 0x00D94DFF, // Mallow
		优品紫红色 = 0x00B784A7, // Opera Mauve
		淡紫丁香色 = 0x00E6CFE6, // Pail Lilac
		矿紫色 = 0x00A39DAE, // Mineral Violet
		亮紫色 = 0x00B09DB9, // Light Violet
		紫藤色 = 0x00C9A0DC, // Wisteria
		紫丁香色 = 0x00C8A2C8, // Lilac
		梅红色 = 0x00DDA0DD, // Medium Lavender Magenta
		薰衣草紫红色 = 0x00EE82EE, // Lavender Magenta
		缬草紫色 = 0x00DF73FF, // Heliotrope
		木槿紫色 = 0x00E0B0FF, // Mauve
		蓟紫色 = 0x00D8BFD8, // Thistle
		铁线莲紫色 = 0x00CCA3CC, // Clematis
		洋红色 = 0x00FF00FF, // Magenta
		品红色 = 0x00F400A1, // Fuchsia
		兰紫色 = 0x00DA70D6, // Orchid
		浅珍珠红色 = 0x00FFB3E6, // Pearl Pink
		陈玫红色 = 0x00C08081, // Old Rose
		浅玫瑰红色 = 0x00FF66CC, // Rose Pink
		中青紫红色 = 0x00C71585, // Medium Violet Red
		洋玫瑰红色 = 0x00FF0DA6, // Magenta Rose
		玫瑰红色 = 0x00FF007F, // Rose
		红宝石色 = 0x00CC0080, // Ruby
		山茶红色 = 0x00E63995, // Camellia
		深粉红色 = 0x00FF1493, // Deep Pink
		火鹤红色 = 0x00E68AB8, // Flamingo
		浅珊瑚红色 = 0x00FF80BF, // Coral Pink
		暖粉红色 = 0x00FF69B4, // Hot Pink
		尖晶石红色 = 0x00FF73B3, // Spinel Red
		胭脂红色 = 0x00E6005C, // Carmine
		浅粉红色 = 0x00FFD9E6, // Baby Pink
		枢机红色 = 0x00990036, // Cardinal Red
		浅薰衣草紫红色 = 0x00FFF0F5, // Lavender Blush
		灰紫红色 = 0x00DB7093, // Pale Violet Red
		樱桃红色 = 0x00DE3163, // Cerise
		浅鲑红色 = 0x00FF8099, // Salmon Pink
		绯红色 = 0x00DC143C, // Crimson
		粉红色 = 0x00FFC0CB, // Pink
		亮粉红色 = 0x00FFB6C1, // Light Pink
		壳黄红色 = 0x00FFB3BF, // Shell Pink
		茜红色 = 0x00E32636, // Alizarin Crimson

	};

保护:
	结构体 RGB555 {
		i32 :17;
		i32 r :5;
		i32 g :5;
		i32 b :5;
	}__attribute__ ((packed));

	结构体 RGB888 { // 默认数据类型
		i8 :8;
		i8 r;
		i8 g;
		i8 b;
	}__attribute__ ((packed));

	结构体 ARGB8888 {
		i8 a;
		i8 r;
		i8 g;
		i8 b;
	}__attribute__ ((packed));

	共用体 颜色数据 {
		i32 值;
		结构体 RGB555 RGB555;
		结构体 RGB888 RGB888;
		结构体 ARGB8888 ARGB8888;
	}__attribute__ ((packed));

保护:
	共用体 颜色数据 颜色数据;

公开:
	颜色(i32 颜色值) {
		构造(颜色值);
	}

	颜色& 操作符 =(i32 颜色值) {
		返回 构造(颜色值);
	}

公开:
	颜色& 构造();
	void 析构();

公开:
	颜色& 构造(i32 颜色值);

公开:
	颜色& 复制构造(只读 颜色 &其他实例);
	颜色& 移动构造(颜色 &&其他实例);

公开:
	i32 获取颜色值() 只读;
	void 设置颜色值(i32 颜色值);

公开:
	u8 获取R();
	u8 获取G();
	u8 获取B();

	void 获取RGB(u8 &R, u8 &G, u8 &B);

公开:
	void 设置R(u8 R);
	void 设置G(u8 G);
	void 设置B(u8 B);

	void 设置RGB(u8 R, u8 G, u8 B);

公开:
	f32 获取r();
	f32 获取g();
	f32 获取b();

	void 获取rgb(f32 &r, f32 &g, f32 &b);

公开:
	void 设置r(f32 r);
	void 设置g(f32 g);
	void 设置b(f32 b);

	void 设置rgb(f32 r, f32 g, f32 b);

公开:

}
;

}
}
