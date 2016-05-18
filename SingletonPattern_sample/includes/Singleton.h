/*
 * Singleton.h
 *
 *  Created on: 2016/03/15
 *      Author: parallels
 */

#ifndef INCLUDES_SINGLETON_H_
#define INCLUDES_SINGLETON_H_

class Singleton final {
 public:
  ~Singleton();
  static const Singleton& getInstance();
 private:
  Singleton();
  static Singleton singleton_;
};

#endif /* INCLUDES_SINGLETON_H_ */
