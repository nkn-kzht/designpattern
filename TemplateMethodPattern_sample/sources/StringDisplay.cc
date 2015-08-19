/*
 * StringDisplay.cc
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#include <StringDisplay.hpp>

#include <cstring>
#include <iostream>

StringDisplay::StringDisplay(std::string& string) :
		string_(string), width_(string_.size()) {
}

StringDisplay::~StringDisplay() {
}

void StringDisplay::open() {
	printLine();
}

void StringDisplay::print() {
	std::cout << "|" << string_ << "|" << std::endl;
}

void StringDisplay::close() {
	printLine();
}

void StringDisplay::printLine() {
	std::cout << "+";
	for (int i = 0; i < width_; i++) {
		std::cout << "-";
	}
	std::cout << "+" << std::endl;
}
