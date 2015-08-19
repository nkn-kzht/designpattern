/*
 * String.h
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#ifndef INCLUDES_MESSAGES_H_
#define INCLUDES_MESSAGES_H_

#include <string>

namespace mysystem {
namespace messages {
class Messages {
public:
	virtual ~Messages();
	static const std::string FUNCTION_ENTER;
	static const std::string FUNCTION_EXIT;
private:
	Messages() = delete;
	Messages(const Messages& obj) = delete;
	Messages& operator=(const Messages& obj) = delete;
};
}
}

#endif /* INCLUDES_MESSAGES_H_ */
