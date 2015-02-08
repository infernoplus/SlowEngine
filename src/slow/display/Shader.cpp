/*
 * Shader.cpp
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#include <display/Shader.h>

using namespace std;

Shader::Shader(int program, string name) {
	this->program = program;
	this->name = name;
	mapUniforms();
}

Shader::~Shader() {
	// TODO Auto-generated destructor stub
}

void Shader::mapUniforms() {
	//int i = glGetUniformLocation(0, "hello");
}

void Shader::useShader() {
	glUseProgram(program);
}
