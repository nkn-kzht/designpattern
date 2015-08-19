/*
 * StringDisplay.hpp
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#ifndef INCLUDES_STRINGDISPLAY_HPP_
#define INCLUDES_STRINGDISPLAY_HPP_

#include <string>

#include <AbstractDisplay.hpp>

class StringDisplay : public AbstractDisplay {
public:
	StringDisplay(std::string& string);
	virtual ~StringDisplay();
protected:
	virtual void open();
	virtual void print();
	virtual void close();
private:
	void printLine();
	std::string string_;
	int width_;
};

#endif /* INCLUDES_STRINGDISPLAY_HPP_ */
