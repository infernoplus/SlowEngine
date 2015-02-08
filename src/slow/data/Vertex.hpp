/*
 * Vertex.hpp
 *
 *  Created on: Jan 18, 2015
 *      Author: inferno
 */

#ifndef VERTEX_HPP_
#define VERTEX_HPP_

class Vert2f {
public:
	float x, y;
	Vert2f() {
		this->x = 0.0f;
		this->y = 0.0f;
	}
	Vert2f(float x, float y) {
		this->x = x;
		this->y = y;
	}
	~Vert2f() {

	}

	//Operators
};

class Vert3f {
public:
	float x, y, z;
	Vert3f() {
		this->x = 0.0f;
		this->y = 0.0f;
		this->z = 0.0f;
	}
	Vert3f(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	~Vert3f() {

	}

	//Operators
};

class Quat4f {
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
};



#endif /* VERTEX_HPP_ */
