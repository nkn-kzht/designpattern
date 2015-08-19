/*
 * AbstractDisplay.cc
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#include <AbstractDisplay.hpp>

AbstractDisplay::AbstractDisplay() {
}

AbstractDisplay::~AbstractDisplay() {
}

void AbstractDisplay::display() {
	static const int TIMES = 5;
	open();
	for (int i = 0; i < TIMES; i++) {
		print();
	}
	close();
}
