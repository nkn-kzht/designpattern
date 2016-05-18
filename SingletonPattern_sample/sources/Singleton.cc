/*
 * Singleton.cpp
 *
 *  Created on: 2016/03/15
 *      Author: parallels
 */

#include <Singleton.h>

Singleton Singleton::singleton_;

Singleton::~Singleton() {
}

const Singleton& Singleton::getInstance() {
  return singleton_;
}

Singleton::Singleton() {
}
