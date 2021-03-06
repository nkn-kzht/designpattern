/*
 * IDCardFactory.hpp
 *
 *  Created on: 2015/04/28
 *      Author: parallels
 */

#ifndef INCLUDES_IDCARDFACTORY_H_
#define INCLUDES_IDCARDFACTORY_H_

#include <IFactory.h>
#include <list>

namespace framework {
class IProduct;
}
namespace idcard {
class IDCardFactory : public framework::IFactory {
 public:
  IDCardFactory();
  virtual ~IDCardFactory();
  const std::list<std::shared_ptr<framework::IProduct>>& getOwners();
 protected:
  virtual std::shared_ptr<framework::IProduct> createProduct(
      std::string& owner);
  virtual void registerProduct(
      std::shared_ptr<framework::IProduct>& productPtr);
 private:
  std::list<std::shared_ptr<framework::IProduct>> owners_;
};
}

#endif /* INCLUDES_IDCARDFACTORY_H_ */
