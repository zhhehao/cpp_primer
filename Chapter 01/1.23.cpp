/*
 * 习题 1.23
 */

#include <iostream>
#include <map>
#include <string>
#include "Sales_item.h"

int main()
{
	std::map <std::string, Sales_item> items_map; // 用来存储 Sales_item 对象实例，使用isbn作为key
	Sales_item item;

	while (std::cin >> item) {
		if (items_map.count(item.isbn()) != 0) {
			items_map[item.isbn()] += item;
		}
		else {
			items_map[item.isbn()] = item;
		}
	}

	// 遍历map
	std::map <std::string, Sales_item>::iterator it;
	for (it = items_map.begin(); it != items_map.end(); ++it)
		std::cout << it->second << std::endl;

	return 0;
}
