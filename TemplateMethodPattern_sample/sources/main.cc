/*
 * main.cc
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#include <AbstractDisplay.h>
#include <CharDisplay.h>
#include <StringDisplay.h>
#include <memory>

int main() {
  std::unique_ptr<AbstractDisplay> display1(
      static_cast<AbstractDisplay*>(new CharDisplay('H')));
  std::string string1("Hello, world.");
  std::unique_ptr<AbstractDisplay> display2(
      static_cast<AbstractDisplay*>(new StringDisplay(string1)));
  std::string string2("こんにちは。");
  std::unique_ptr<AbstractDisplay> display3(
      static_cast<AbstractDisplay*>(new StringDisplay(string2)));

  display1->display();
  display2->display();
  display3->display();

  return 0;
}
