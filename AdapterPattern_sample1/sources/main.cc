/*
 * main.cc
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#include <IPrint.h>
#include <PrintBanner.h>
#include <memory>

int main() {
  std::string string = "Hello";
  std::unique_ptr<IPrint> print(static_cast<IPrint*>(new PrintBanner(string)));
  print->print_weak();
  print->print_strong();
  return 0;
}
