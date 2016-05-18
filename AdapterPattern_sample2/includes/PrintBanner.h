/*
 * PrintBanner.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_PRINTBANNER_H_
#define INCLUDES_PRINTBANNER_H_

#include <Print.h>
#include <memory>

class Banner;

class PrintBanner : public Print {
 public:
  PrintBanner(std::string& string);
  virtual ~PrintBanner();
  void print_weak();
  void print_strong();
 private:
  std::unique_ptr<Banner> banner_;
};

#endif /* INCLUDES_PRINTBANNER_H_ */
