/*
 * main.cc
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#include <memory>

#include <Print.hpp>
#include <PrintBanner.hpp>

int main() {
	std::string string = "Hello";
	std::unique_ptr<Print> print(static_cast<Print*>(new PrintBanner(string)));
	print->print_weak();
	print->print_strong();
	return 0;
}
