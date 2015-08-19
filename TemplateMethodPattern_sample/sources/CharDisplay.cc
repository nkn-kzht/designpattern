/*
 * CharDisplay.cc
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#include <CharDisplay.hpp>

#include <iostream>

CharDisplay::CharDisplay(const char ch) {
	ch_ = ch;
}

CharDisplay::~CharDisplay() {
}

void CharDisplay::open() {
	std::cout << "<<";
}

void CharDisplay::print() {
	std::cout << ch_;
}

void CharDisplay::close() {
	std::cout << ">>" << std::endl;
}
