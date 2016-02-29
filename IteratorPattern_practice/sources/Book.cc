/*
 * Book.cc
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#include <Book.h>

Book::Book(const std::string& name) {
	name_ = name;
}

const std::string Book::get_name() const {
	return name_;
}
