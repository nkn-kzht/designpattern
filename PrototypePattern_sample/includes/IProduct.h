/*
 * IProduct.h
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#ifndef INCLUDES_IPRODUCT_H_
#define INCLUDES_IPRODUCT_H_

#include <string>

namespace framework {
class IProduct {
public:
	virtual ~IProduct() = default;
	IProduct(const IProduct& obj) = default;
	virtual std::unique_ptr<IProduct> createClone() = 0;
	virtual void use(const std::string& s) const = 0;
protected:
	IProduct() = default;
private:
	IProduct(IProduct&& obj) = default;
	IProduct& operator=(const IProduct& obj) = default;
	IProduct& operator=(IProduct&& obj) = default;
};
}

#endif /* INCLUDES_IPRODUCT_H_ */
