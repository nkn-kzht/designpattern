/*
 * Print.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_IPRINT_HPP_
#define INCLUDES_IPRINT_HPP_

class IPrint {
public:
	virtual ~IPrint() { }
	virtual void print_weak() = 0;
	virtual void print_strong() = 0;
};

#endif /* INCLUDES_IPRINT_HPP_ */
