/*
 * Book.hpp
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#ifndef INCLUDES_BOOK_H_
#define INCLUDES_BOOK_H_

#include <IItem.h>
#include <iostream>
#include <string>

class Book : public IItem {
 public:
  explicit Book(const std::string& name);
  virtual ~Book() {
  }
  const std::string get_name() const;
 private:
  std::string name_;
};

#endif /* INCLUDES_BOOK_H_ */
