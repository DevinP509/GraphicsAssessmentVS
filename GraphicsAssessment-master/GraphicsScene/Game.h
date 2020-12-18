#pragma once
#include <gl_core_4_4.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <Gizmos.h>
#include <Texture.h>
#include "OBJMesh.h"
#include "Shader.h"
#include "Mesh.h"
#include "Light.h"
#include "Bone.h"
#include "Skeleton.h"
#include <vector>

class Camera;

class Game
{
public:
	Game();
	Game(int width, int height, const char* title);
	~Game();

	int run();//!< Runs Program

	bool start();//!< Reports if the program Successfully started 
	bool update(double deltaTime);//!< Reports if the game Successfully updated
	bool draw();//!< Reports if the game Successfully drew
	bool end();//!< Reports if the game Successfully ended

	GLFWwindow* getWindow() { return m_window; }//!< Gets a reference to the window
	int getWidth() { return m_width; }//!< Gets the windows width
	int getHeight() { return m_height; }//!< Gets the windows height
	const char* getTitle() { return m_title; }//!< Gets the windows title
protected:
	GLFWwindow*	m_window;//!< The programs window
	Camera*		m_camera;//!< The Games Camera

	aie::ShaderProgram	m_shader;//!< Programs Shader

	Light m_light;//!< The First Light
	Light m_light2;//!< The Second Light

	aie::OBJMesh		m_objMesh;//!< The mesh of the object

	glm::mat4			m_meshTransform;//!< The meshes Transform


	Mesh				m_mesh;//!< Not Rendered
	aie::Texture		m_texture;//!< Not Rendered

	Bone*		m_hipBone;//!< Not Rendered
	Bone*		m_kneeBone;//!< Not Rendered
	Bone*		m_ankleBone;//!< Not Rendered
	Skeleton*	m_skeleton;//!< Not Rendered


private:
	int m_width, m_height;//!< Stores Windows width and height
	const char* m_title;//!< Title of the window
	
};

