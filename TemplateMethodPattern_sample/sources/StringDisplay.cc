/*
 * StringDisplay.cc
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#include <StringDisplay.h>
#include <cstring>
#include <iostream>

StringDisplay::StringDisplay(const std::string& string)
    : string_(string) {
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
  int size = static_cast<int>(string_.size());
  for (int i = 0; i < size; i++) {
    std::cout << "-";
  }
  std::cout << "+" << std::endl;
}
