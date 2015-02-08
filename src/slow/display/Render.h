/*
 * Render.h
 *
 *  Created on: Dec 9, 2014
 *      Author: inferno
 */

#ifndef RENDER_H_
#define RENDER_H_

#include <stdio.h>
#include <string>

#include <GL/glew.h>
#include <GL/glu.h>
#include <GL/gl.h>

#include <vector>
#include <string.h>

#include <fstream>

#include "slow/display/Shader.h"

class Display;

class Render {
public:
	Display* display;

	std::vector<Shader> shaders;
	GLuint gVBO = 0;
	GLuint gIBO = 0;

	Render(Display* d);
	virtual ~Render();

	void render();
	void close();

	bool initGL();

private:
	void useShader(std::string);
	bool compileShaders();
	std::vector<std::string> getShaderFilesLinux();
	std::string openShaderFileLinux(std::string file);
	int compileShader(std::string vert, std::string frag);
	void printProgramLog( GLuint program );
	void printShaderLog( GLuint shader );
	bool ends_with(std::string const & value, std::string const & ending);
};

#endif /* RENDER_H_ */
