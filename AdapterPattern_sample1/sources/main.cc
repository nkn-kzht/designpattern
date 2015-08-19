/*
 * main.cc
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#include <memory>

#include <IPrint.hpp>
#include <PrintBanner.hpp>

int main() {
	std::string string = "Hello";
	std::unique_ptr<IPrint> print(static_cast<IPrint*>(new PrintBanner(string)));
	print->print_weak();
	print->print_strong();
	return 0;
}
