/*
 * IFactory.cc
 *
 *  Created on: 2015/04/30
 *      Author: parallels
 */

#include <IFactory.hpp>

#include <IProduct.hpp>

using framework::IProduct;

namespace framework {
IFactory::IFactory() {
}

IFactory::~IFactory() {
}

std::shared_ptr<IProduct> IFactory::create(std::string& owner) {
	std::shared_ptr<IProduct> p_product = createProduct(owner);
	registerProduct(p_product);
	return p_product;
}
}  // framework
