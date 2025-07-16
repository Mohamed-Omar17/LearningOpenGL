//#include "Header_Files/GLFWFuncs.h"
//#include "Header_Files/Camera.h"
//#include <iostream>
//
//
//namespace GLFWFuncs {
//
//	GLFWwindow* initGLFW(int width, int height, const char* title) {
//		glfwInit();
//		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//		
//		GLFWwindow* window = glfwCreateWindow(width, height, title, NULL, NULL);
//		if (window == NULL) {
//			std::cout << "Failed to create GLFW Window" << std::endl;
//			glfwTerminate();
//			return NULL;
//		}
//
//		glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//
//		glfwMakeContextCurrent(window);
//
//		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
//			std::cout << "Failed to initialize GLAD" << std::endl;
//			return NULL;
//		}
//
//		return window;
//	}
//
//	void processInput(GLFWwindow* window, Camera& cam) {
//		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
//			glfwSetWindowShouldClose(window, true);
//		}
//
//		float deltaTime = 0.0f;
//		float lastFrame = 0.0f;
//		float currentFrame = glfwGetTime();
//		deltaTime = currentFrame - lastFrame;
//		lastFrame = currentFrame;
//
//		float cameraSpeed = deltaTime/10000;
//
//		glm::vec3 horizontalFront = glm::normalize(glm::vec3(cam.front.x, 0.0f, cam.front.z));
//
//		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
//			cam.position += cam.speed * horizontalFront;
//		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//			cam.position -= cam.speed * horizontalFront;
//		if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
//			cam.position -= glm::normalize(glm::cross(horizontalFront, cam.up)) * cam.speed;
//		if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
//			cam.position += glm::normalize(glm::cross(horizontalFront, cam.up)) * cam.speed;
//	}
//
//	void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
//		glViewport(0, 0, width, height);
//	}
//
//
//	float lastX = 400;
//	float lastY = 300;
//	void mouse_callback(GLFWwindow* window, double xPos, double yPos) {
//		Camera* cam = static_cast<Camera*>(glfwGetWindowUserPointer(window));
//
//		if (cam->firstMouse) {
//			cam->lastX = xPos;
//			cam->lastY = yPos;
//			cam->firstMouse = false;
//		}
//
//		float xOffset = xPos - cam->lastX;
//		float yOffset = yPos - cam->lastY;
//
//		cam->lastX = xPos;
//		cam->lastY = yPos;
//
//		xOffset *= cam->sensitivity;
//		yOffset *= cam->sensitivity;
//		
//		cam->yaw += xOffset;
//		cam->pitch -= yOffset;
//
//		if (cam->pitch > 89.0f) cam->pitch = 89.0f;
//		if (cam->pitch < -89.0f) cam->pitch = -89.0f;
//
//		cam->front.x = cos(glm::radians(cam->yaw)) * cos(glm::radians(cam->pitch));
//		cam->front.y = sin(glm::radians(cam->pitch));
//		cam->front.z = sin(glm::radians(cam->yaw)) * cos(glm::radians(cam->pitch));
//		cam->front = glm::normalize(cam->front);
//	}
//
//
//	void terminateWindow() {
//		glfwTerminate();
//	}
//}