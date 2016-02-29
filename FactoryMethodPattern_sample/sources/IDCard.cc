/*
 * IDCard.cc
 *
 *  Created on: 2015/04/30
 *      Author: parallels
 */

#include <IDCard.h>
#include <iostream>

namespace idcard {
IDCard::IDCard(std::string& owner) :
		owner_(owner) {
	std::cout << owner_ << "のカードが作られました。" << std::endl;
}

IDCard::~IDCard() {
	std::cout << owner_ << "のカードが破棄されました。" << std::endl;
}

void IDCard::use() {
	std::cout << owner_ << "のカードを使います。" << std::endl;
}

const std::string& IDCard::getOwner() {
	return owner_;
}
}  // idcard
