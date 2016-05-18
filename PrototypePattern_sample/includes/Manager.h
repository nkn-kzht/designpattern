/*
 * Manager.h
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#ifndef INCLUDES_MANAGER_H_
#define INCLUDES_MANAGER_H_

#include <map>
#include <memory>
#include <string>

namespace framework {
class IProduct;
class Manager {
 public:
  virtual ~Manager();
  static Manager& getInstance();
  void register_product(const std::string& name, IProduct& proto);
  std::unique_ptr<IProduct> create(const std::string& protoname)
      throw (std::out_of_range);
 private:
  Manager();
  Manager(const Manager& obj) = delete;
  Manager& operator=(const Manager& obj) = delete;
  static Manager instance_;
  std::map<const std::string, std::unique_ptr<IProduct>> show_case_;
};
}

#endif /* INCLUDES_MANAGER_H_ */
