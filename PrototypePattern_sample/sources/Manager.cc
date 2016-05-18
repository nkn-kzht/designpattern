/*
 * Manager.cc
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#include <Manager.h>

#include <IProduct.h>

namespace framework {
Manager Manager::instance_;
Manager::Manager() = default;
Manager::~Manager() = default;
Manager& Manager::getInstance() {
  return instance_;
}
void Manager::register_product(const std::string& name, IProduct& proto) {
  show_case_[name] = std::move(proto.createClone());
}
std::unique_ptr<IProduct> Manager::create(const std::string& name)
    throw (std::out_of_range) {
  return show_case_.at(name)->createClone();
}
}
