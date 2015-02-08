/*
 * Log.h
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#ifndef LOG_H_
#define LOG_H_

#include <iostream>
#include <stdio.h>
#include <string>

class Log {
public:
	Log();
	virtual ~Log();

	void log(std::string s);
	void close();
};

#endif /* LOG_H_ */
