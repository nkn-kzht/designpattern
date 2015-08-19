/*
 * PrintBanner.cc
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#include <PrintBanner.hpp>

PrintBanner::PrintBanner(std::string& string) :
		Banner(string) {
}

PrintBanner::~PrintBanner() {
}

void PrintBanner::print_weak() {
	show_with_paren();
}

void PrintBanner::print_strong() {
	show_with_aster();
}
