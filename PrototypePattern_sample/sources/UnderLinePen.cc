/*
 * UnderLinePen.cc
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#include <UnderLinePen.h>

#include <iostream>

using framework::IProduct;

UnderLinePen::UnderLinePen(const char ulchar)
    : IProduct(),
      ulchar_(ulchar) {
}
UnderLinePen::~UnderLinePen() = default;
std::unique_ptr<IProduct> UnderLinePen::createClone() {
  return std::unique_ptr<IProduct>(new UnderLinePen(*this));
}
void UnderLinePen::use(const std::string& s) const {
  const int length = s.size();
  std::cout << "\"" << s << "\"" << std::endl;
  std::cout << " ";
  for (int i = 0; i < length; ++i) {
    std::cout << ulchar_;
  }
  std::cout << " ";
  std::cout << std::endl;
}
