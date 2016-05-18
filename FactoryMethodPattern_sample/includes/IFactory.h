/*
 * IFactory.hpp
 *
 *  Created on: 2015/04/28
 *      Author: parallels
 */

#ifndef INCLUDES_IFACTORY_H_
#define INCLUDES_IFACTORY_H_

#include <memory>
#include <string>

namespace framework {
class IProduct;
class IFactory {
 public:
  IFactory();
  virtual ~IFactory();
  std::shared_ptr<framework::IProduct> create(std::string& owner);
 protected:
  virtual std::shared_ptr<framework::IProduct> createProduct(
      std::string& owner) = 0;
  virtual void registerProduct(
      std::shared_ptr<framework::IProduct>& productPtr) = 0;
};
}

#endif /* INCLUDES_IFACTORY_H_ */
