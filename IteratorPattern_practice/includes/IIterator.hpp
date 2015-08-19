/*
 * Iterator.hpp
 *
 *  Created on: 2015/04/25
 *      Author: parallels
 */

#ifndef INCLUDES_IITERATOR_HPP_
#define INCLUDES_IITERATOR_HPP_

#include <IItem.hpp>

class IIterator {
public:
	virtual ~IIterator() { }
	virtual bool has_next() const = 0;
	virtual const IItem& next() = 0;
};

#endif /* INCLUDES_IITERATOR_HPP_ */
