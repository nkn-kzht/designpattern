/*
 * IDCardFactory.cc
 *
 *  Created on: 2015/04/30
 *      Author: parallels
 */

#include <IDCard.h>
#include <IDCardFactory.h>
#include <IProduct.h>
#include <iostream>


using framework::IProduct;
using idcard::IDCard;

namespace idcard {

IDCardFactory::IDCardFactory() {
}

IDCardFactory::~IDCardFactory() {
}

std::shared_ptr<IProduct> IDCardFactory::createProduct(std::string& owner) {
	std::shared_ptr<IProduct> p_product(
			static_cast<IProduct*>(new IDCard(owner)));
	return p_product;
}

void IDCardFactory::registerProduct(
		std::shared_ptr<framework::IProduct>& productPtr) {
	owners_.push_back(productPtr);
}

const std::list<std::shared_ptr<framework::IProduct>>& IDCardFactory::getOwners() {
	return owners_;
}
}  // idcard
