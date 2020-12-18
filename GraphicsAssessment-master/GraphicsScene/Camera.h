#pragma once
#include "Game.h"
#include "Actor.h"

class Camera : public Actor
{
public:
	Camera(Game* instance) { m_instance = instance; }
	~Camera() {}

	glm::mat4 getViewMatrix();//!< Return The Location the camera will start to project
	glm::mat4 getProjectionMatrix(float width, float height);//!< Gets The area that the camera is looking at

	float getYaw();//!< Get Yaw of Camera
	void setYaw(float degrees);//!< Set Yaw of Camera
	float getPitch();//!< Get Pitch of Camera
	void setPitch(float degrees);//!< Set Pitch of Camera

	bool update(double deltaTime) override;//!< Camera moves with user input

private:
	Game* m_instance;//!< Referenc to the scene the camera is looking at

	float m_yaw = 0.0f; //!< theta
	float m_pitch = 0.0f; //!< phi

	float m_moveSpeed = 10.0f;//!< Camera Movement Speed
	float m_turnSpeed = 0.04f;//!< Camera Rotation Speed

	double m_currentMouseX = 0.0;//!< Used to Store Mouse Y position
	double m_currentMouseY = 0.0;//!< Used to Store Mouse Y position
	double m_previousMouseX = 0.0;//!< Used to Compare Current Mouse Y to Mouse Y on Previous up Date
	double m_previousMouseY = 0.0;//!< Used to Compare Current Mouse Y to Mouse Y on Previous up Date
};

