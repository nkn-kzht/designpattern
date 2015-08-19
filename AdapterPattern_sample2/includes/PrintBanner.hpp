/*
 * PrintBanner.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_PRINTBANNER_HPP_
#define INCLUDES_PRINTBANNER_HPP_

#include <memory>

#include <Banner.hpp>
#include <Print.hpp>

class PrintBanner : public Print {
public:
	PrintBanner(std::string& string);
	virtual ~PrintBanner();
	void print_weak();
	void print_strong();
private:
	std::unique_ptr<Banner> banner_;
};

#endif /* INCLUDES_PRINTBANNER_HPP_ */
