/*
 * MessageBox.cc
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#include <MessageBox.h>

#include <iostream>

using framework::IProduct;

MessageBox::MessageBox(const char decochar)
    : IProduct(),
      decochar_(decochar) {
}
MessageBox::~MessageBox() = default;
std::unique_ptr<IProduct> MessageBox::createClone() {
  return std::unique_ptr<IProduct>(new MessageBox(*this));
}
void MessageBox::use(const std::string& s) const {
  static const int BORDER = 2;
  static const int MARGIN = 2;
  const int length = s.size() + BORDER + MARGIN;
  for (int i = 0; i < length; ++i) {
    std::cout << decochar_;
  }
  std::cout << std::endl;
  std::cout << decochar_ << " " << s << " " << decochar_ << std::endl;
  for (int i = 0; i < length; ++i) {
    std::cout << decochar_;
  }
  std::cout << std::endl;
}
