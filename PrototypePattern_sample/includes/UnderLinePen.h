/*
 * UnderLinePen.h
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#ifndef INCLUDES_UNDERLINEPEN_H_
#define INCLUDES_UNDERLINEPEN_H_

#include <memory>
#include <IProduct.h>

class UnderLinePen : public framework::IProduct {
 public:
  explicit UnderLinePen(const char ulchar);
  virtual ~UnderLinePen();
  UnderLinePen(const UnderLinePen& obj) = default;
  virtual std::unique_ptr<framework::IProduct> createClone();
  virtual void use(const std::string& s) const;
 private:
  UnderLinePen(UnderLinePen&& obj) = delete;
  UnderLinePen& operator=(const UnderLinePen& obj) = delete;
  UnderLinePen& operator=(UnderLinePen && obj) = delete;
  const char ulchar_;
};

#endif /* INCLUDES_UNDERLINEPEN_H_ */
