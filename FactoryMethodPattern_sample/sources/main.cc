/*
 * main.cc
 *
 *  Created on: 2015/04/30
 *      Author: parallels
 */

#include <memory>
#include <iostream>

#include <IDCardFactory.hpp>
#include <IFactory.hpp>
#include <IProduct.hpp>

using framework::IFactory;
using framework::IProduct;
using idcard::IDCardFactory;

int main() {
	std::unique_ptr<IFactory> factory(static_cast<IFactory*>(new IDCardFactory()));
	std::string owner1("なかの");
	std::shared_ptr<IProduct> card1 = factory->create(owner1);
	std::string owner2("あずさ");
	std::shared_ptr<IProduct> card2 = factory->create(owner2);
	std::string owner3("にゃん");
	std::shared_ptr<IProduct> card3 = factory->create(owner3);
	card1->use();
	card2->use();
	card3->use();
	return 0;
}
