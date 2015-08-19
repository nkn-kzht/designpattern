/*
 * IDCard.hpp
 *
 *  Created on: 2015/04/28
 *      Author: parallels
 */

#ifndef INCLUDES_IDCARD_HPP_
#define INCLUDES_IDCARD_HPP_

#include <string>

#include <IProduct.hpp>

namespace idcard {
class IDCard : public framework::IProduct {
public:
	IDCard(std::string& owner);
	virtual ~IDCard();
	virtual void use();
	const std::string& getOwner();
private:
	std::string owner_;
};
}

#endif /* INCLUDES_IDCARD_HPP_ */
