/*
 * Print.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_PRINT_H_
#define INCLUDES_PRINT_H_

class Print {
 public:
  Print();
  virtual ~Print();
  virtual void print_weak() = 0;
  virtual void print_strong() = 0;
};

#endif /* INCLUDES_PRINT_H_ */
