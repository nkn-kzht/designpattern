/*
 * Banner.hpp
 *
 *  Created on: 2015/04/26
 *      Author: parallels
 */

#ifndef INCLUDES_BANNER_H_
#define INCLUDES_BANNER_H_

#include <string>

class Banner {
public:
	Banner(std::string& string);
	virtual ~Banner();
	void show_with_paren();
	void show_with_aster();
private:
	std::string string_;
};

#endif /* INCLUDES_BANNER_H_ */
