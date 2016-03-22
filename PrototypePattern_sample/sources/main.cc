/*
 * main.cc
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#include <iostream>
#include <Manager.h>
#include <MessageBox.h>
#include <UnderLinePen.h>

using framework::Manager;
using framework::IProduct;

int main() {
	Manager& manager = Manager::getInstance();
	MessageBox warning_box('*');
	manager.register_product("warning box", warning_box);
	MessageBox slash_box('/');
	manager.register_product("slash box", slash_box);
	UnderLinePen strong_message('~');
	manager.register_product("strong message", strong_message);
	try {
		std::unique_ptr < IProduct > p1_ptr(manager.create("warning box"));
		p1_ptr->use("Hello world.");
		std::unique_ptr < IProduct > p2_ptr(manager.create("slash box"));
		p2_ptr->use("Hello world.");
		std::unique_ptr < IProduct > p3_ptr(manager.create("strong message"));
		p3_ptr->use("Hello world.");
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
