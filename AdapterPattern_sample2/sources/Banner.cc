/*
 * Banner.cc
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#include <Banner.h>
#include <iostream>

Banner::Banner(std::string& string) {
  string_ = string;
}

Banner::~Banner() {
}

void Banner::show_with_paren() {
  std::cout << "(" << string_ << ")" << std::endl;
}

void Banner::show_with_aster() {
  std::cout << "*" << string_ << "*" << std::endl;
}
