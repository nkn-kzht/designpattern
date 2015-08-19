/*
 * ISingleton.cpp
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#include <FunctionBlockManager.h>
#include <Messages.h>

using log4cxx::Logger;
using log4cxx::LoggerPtr;
using mysystem::messages::Messages;

namespace mysystem {
namespace framework {
LoggerPtr FunctionBlockManager::loggerPtr = Logger::getLogger(
		"system.FunctionBlockManager");

FunctionBlockManager::FunctionBlockManager() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}

FunctionBlockManager::~FunctionBlockManager() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}

FunctionBlockManager& FunctionBlockManager::getInstance() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	static FunctionBlockManager functionBlockManager;
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
	return functionBlockManager;
}
}
}
