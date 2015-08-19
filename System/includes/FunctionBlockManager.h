/*
 * IFactory.h
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#ifndef INCLUDES_FUNCTIONBLOCKMANAGER_H_
#define INCLUDES_FUNCTIONBLOCKMANAGER_H_

#include <unordered_map>
#include <log4cxx/logger.h>

namespace mysystem {
namespace framework {
class FunctionBlockA;
class FunctionBlockHolder;
class FunctionBlockManager {
public:
	virtual ~FunctionBlockManager();
	FunctionBlockManager& getInstance();
private:
	FunctionBlockManager();
	FunctionBlockManager(const FunctionBlockManager& obj) = delete;
	FunctionBlockManager& operator=(const FunctionBlockManager& obj) = delete;
	static log4cxx::LoggerPtr loggerPtr;
	FunctionBlockHolder<FunctionBlockA> mfunctionBlockAHolder;
};
}
}

#endif /* INCLUDES_FUNCTIONBLOCKMANAGER_H_ */
