#include "Header_Files/BufferLoad.h"


namespace bl {
	void genBuffers(unsigned int& VBO, unsigned int& VAO, unsigned int& EBO, unsigned int& cubeVAO, unsigned int& lightVAO) {
		//glGenBuffers(1, &VBO);
		//glGenBuffers(1, &EBO);
		//glGenVertexArrays(1, &VAO);
		glGenVertexArrays(1, &cubeVAO);

		//glBindVertexArray(VAO);
		//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
		glBindVertexArray(cubeVAO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);

		glGenVertexArrays(1, &lightVAO);

		//glBindVertexArray(VAO);
		//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
		glBindVertexArray(lightVAO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
	}

	void bindBuffers(unsigned int VAO, unsigned int VBO, unsigned int EBO) {
		
	}

	void bufferData(unsigned int indices[], size_t indexSize, float vertices[], size_t vertexSize) {
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, indexSize, indices, GL_STATIC_DRAW);
		glBufferData(GL_ARRAY_BUFFER, vertexSize, vertices, GL_STATIC_DRAW);
	}

	void vertexAttrib() {
		//Implementing Vertices
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
		glEnableVertexAttribArray(0);

		////Implementing Textures
		//glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
		//glEnableVertexAttribArray(1);
	}
}