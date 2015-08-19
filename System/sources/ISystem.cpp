/*
 * ISystem.h
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#include <ISystem.h>

#include <Messages.h>

using log4cxx::Logger;
using log4cxx::LoggerPtr;
using mysystem::messages::Messages;

namespace mysystem {
LoggerPtr ISystem::loggerPtr = Logger::getLogger("system.ISystem");

ISystem::ISystem() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}

ISystem::~ISystem() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}
}
