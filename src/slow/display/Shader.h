/*
 * Shader.h
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#ifndef SHADER_H_
#define SHADER_H_

#include <stdio.h>
#include <string>

#include <GL/glew.h>
#include <GL/glu.h>
#include <GL/gl.h>

#include <vector>
#include <string.h>

class Shader {
public:
	int program;
	std::string name;

	Shader(int program, std::string name);
	virtual ~Shader();

	void useShader();

private:
	void mapUniforms();
};

#endif /* SHADER_H_ */
