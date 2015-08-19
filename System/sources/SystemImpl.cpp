/*
 * SystemImpl.cpp
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#include <SystemImpl.h>

#include <Messages.h>

using log4cxx::Logger;
using log4cxx::LoggerPtr;
using mysystem::messages::Messages;

namespace mysystem {
LoggerPtr SystemImpl::loggerPtr = Logger::getLogger("system.SystemImpl");

SystemImpl::SystemImpl() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}

SystemImpl::~SystemImpl() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}

void SystemImpl::start() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}

void SystemImpl::stop() {
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_ENTER);
	LOG4CXX_TRACE(loggerPtr, Messages::FUNCTION_EXIT);
}
}
