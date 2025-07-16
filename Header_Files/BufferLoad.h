#ifndef TEXLOAD_H
#define TEXLOAD_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <Header_Files/Shader.h>

namespace bl {
	void genBuffers(unsigned int& VBO, unsigned int& VAO, unsigned int& EBO, unsigned int& cubeVAO, unsigned int& lightVAO);

	void bindBuffers(unsigned int VAO, unsigned int VBO, unsigned int EBO);

	void bufferData(unsigned int indices[], size_t indexSize, float vertices[], size_t vertexSize);

	void vertexAttrib();
}
#endif //TEXLOAD_H