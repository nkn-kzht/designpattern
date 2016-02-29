/*
 * IProduct.hpp
 *
 *  Created on: 2015/04/28
 *      Author: parallels
 */

#ifndef INCLUDES_IPRODUCT_H_
#define INCLUDES_IPRODUCT_H_

namespace framework {
class IProduct {
public:
	virtual ~IProduct() {
	}
	virtual void use() = 0;
};
}

#endif /* INCLUDES_IPRODUCT_H_ */
