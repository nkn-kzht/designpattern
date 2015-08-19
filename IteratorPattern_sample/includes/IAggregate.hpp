/*
 * Aggregate.hpp
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#ifndef INCLUDES_IAGGREGATE_HPP_
#define INCLUDES_IAGGREGATE_HPP_

#include <memory>

#include <IIterator.hpp>

class IAggregate {
public:
	virtual ~IAggregate() { }
	virtual std::shared_ptr<IIterator> iterator() = 0;;
};

#endif /* INCLUDES_IAGGREGATE_HPP_ */
