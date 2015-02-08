/*
 * Log.cpp
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#include <console/Log.h>

Log::Log() {

}

Log::~Log() {

}

void Log::log(std::string s) {
	std::cout << s << '\n';
}

void Log::close() {

}
