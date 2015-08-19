/*
 * SystemImpl.h
 *
 *  Created on: 2015/07/31
 *      Author: parallels
 */

#ifndef INCLUDES_SYSTEMIMPL_H_
#define INCLUDES_SYSTEMIMPL_H_

#include <memory>
#include <log4cxx/logger.h>
#include <ISystem.h>

namespace mysystem {
/**
 * システム.
 */
class SystemImpl: public ISystem {
public:
	/**
	 * コンストラクタ.
	 */
	SystemImpl();

	/**
	 * デストラクタ.
	 */
	virtual ~SystemImpl();

	/**
	 * システム開始.
	 */
	virtual void start();

	/**
	 * システム停止.
	 */
	virtual void stop();

private:
	SystemImpl(const SystemImpl& obj) = delete;
	SystemImpl& operator=(const SystemImpl& obj) = delete;
	static log4cxx::LoggerPtr loggerPtr;

};

typedef std::shared_ptr<SystemImpl> SystemImplSharedPtr;
typedef std::unique_ptr<SystemImpl> SystemImplUniquePtr;
}

#endif /* INCLUDES_SYSTEMIMPL_H_ */
