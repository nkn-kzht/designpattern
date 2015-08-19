/*
 * PrintBanner.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_PRINTBANNER_HPP_
#define INCLUDES_PRINTBANNER_HPP_

#include <Banner.hpp>
#include <IPrint.hpp>

class PrintBanner : public Banner, public IPrint {
public:
	PrintBanner(std::string& string);
	virtual ~PrintBanner();
	virtual void print_weak();
	virtual void print_strong();
};

#endif /* INCLUDES_PRINTBANNER_HPP_ */
