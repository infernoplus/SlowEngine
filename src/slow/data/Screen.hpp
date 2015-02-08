/*
 * Screen.hpp
 *
 *  Created on: Jan 18, 2015
 *      Author: inferno
 */

#ifndef SCREEN_HPP_
#define SCREEN_HPP_


class Screen {
public:
	int width;
	int height;

	Screen(int w, int h) {
		this->width = w;
		this->height = h;
	}
	~Screen() {
	}
};

#endif /* SCREEN_HPP_ */
