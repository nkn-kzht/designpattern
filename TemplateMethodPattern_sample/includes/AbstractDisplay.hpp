/*
 * AbstractDisplay.hpp
 *
 *  Created on: 2015/04/27
 *      Author: parallels
 */

#ifndef INCLUDES_ABSTRACTDISPLAY_HPP_
#define INCLUDES_ABSTRACTDISPLAY_HPP_

class AbstractDisplay {
public:
	AbstractDisplay();
	virtual ~AbstractDisplay();
	void display();
protected:
	virtual void open() = 0;
	virtual void print() = 0;
	virtual void close() = 0;
};

#endif /* INCLUDES_ABSTRACTDISPLAY_HPP_ */
