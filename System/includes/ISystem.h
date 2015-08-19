/*
 * ISystem.h
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#ifndef INCLUDES_ISYSTEM_H_
#define INCLUDES_ISYSTEM_H_

#include <memory>

#include <log4cxx/logger.h>

namespace mysystem {
/**
 * システムインタフェース.
 */
class ISystem {
public:
	/**
	 * コンストラクタ.
	 */
	ISystem();

	/**
	 * デストラクタ.
	 */
	virtual ~ISystem();

	/**
	 * システム開始.
	 */
	virtual void start() = 0;

	/**
	 * システム停止.
	 */
	virtual void stop() = 0;

private:
	ISystem(const ISystem& obj) = delete;
	ISystem& operator=(const ISystem& obj) = delete;
	static log4cxx::LoggerPtr loggerPtr;
};

typedef std::shared_ptr<ISystem> ISystemSharedPtr;
typedef std::unique_ptr<ISystem> ISystemUniquePtr;

}

#endif /* INCLUDES_ISYSTEM_H_ */
