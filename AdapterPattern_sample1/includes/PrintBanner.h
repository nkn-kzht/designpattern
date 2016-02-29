/*
 * PrintBanner.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_PRINTBANNER_H_
#define INCLUDES_PRINTBANNER_H_

#include <Banner.h>
#include <IPrint.h>

class PrintBanner: public Banner, public IPrint {
public:
	PrintBanner(std::string& string);
	virtual ~PrintBanner();
	virtual void print_weak();
	virtual void print_strong();
};

#endif /* INCLUDES_PRINTBANNER_H_ */
