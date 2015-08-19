/*
 * main.cpp
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#include <iostream>

#include <log4cxx/logger.h>
#include <log4cxx/helpers/exception.h>
#include <log4cxx/propertyconfigurator.h>

#include <SystemImpl.h>

using log4cxx::Logger;
using log4cxx::LoggerPtr;
using log4cxx::PropertyConfigurator;
using mysystem::SystemImpl;
using mysystem::ISystemSharedPtr;

int main() {
	try {
		PropertyConfigurator::configure("./log4cxx.properties");
		static LoggerPtr loggerPtr = Logger::getLogger("main");
		LOG4CXX_INFO(loggerPtr, "start");

		ISystemSharedPtr system = std::make_shared<SystemImpl>();
		system->start();
		system->stop();

		LOG4CXX_INFO(loggerPtr, "stop");
	} catch (const log4cxx::helpers::Exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
