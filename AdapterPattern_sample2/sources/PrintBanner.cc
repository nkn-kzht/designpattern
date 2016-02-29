/*
 * PrintBanner.cc
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#include <PrintBanner.h>

PrintBanner::PrintBanner(std::string& string) :
		banner_(new Banner(string)) {
}

PrintBanner::~PrintBanner() {
}

void PrintBanner::print_weak() {
	banner_->show_with_paren();
}

void PrintBanner::print_strong() {
	banner_->show_with_aster();
}
