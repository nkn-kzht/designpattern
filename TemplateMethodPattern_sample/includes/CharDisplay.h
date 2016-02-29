/*
 * CharDisplay.hpp
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#ifndef INCLUDES_CHARDISPLAY_H_
#define INCLUDES_CHARDISPLAY_H_

#include <AbstractDisplay.h>

class CharDisplay: public AbstractDisplay {
public:
	CharDisplay(const char ch);
	virtual ~CharDisplay();
protected:
	virtual void open();
	virtual void print();
	virtual void close();
private:
	char ch_;
};

#endif /* INCLUDES_CHARDISPLAY_H_ */
