/*
 * main.cc
 *
 *  Created on: 2016/03/15
 *      Author: parallels
 */

#include <iostream>

#include <Singleton.h>

int main() {
	Singleton& obj1 = Singleton::getInstance();
	Singleton& obj2 = Singleton::getInstance();
	if (&obj1 == &obj2) {
		std::cout << "obj1とobj2は同一インスタンスです。" << std::endl;
	} else {
		std::cout << "obj1とobj2は同一インスタンスではありません。" << std::endl;
	}
	return 0;
}
