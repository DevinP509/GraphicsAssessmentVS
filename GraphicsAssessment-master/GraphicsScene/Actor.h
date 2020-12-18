#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>

class Actor
{
public:
	Actor() {}
	Actor(glm::vec3 position, glm::quat rotation, glm::vec3 scale = { 1.0f, 1.0f, 1.0f });
	~Actor() {}

	virtual bool start() { return true; }//!< Starts the actor
	virtual bool update(double deltaTime) { return true; }//!< Updates the actor
	virtual bool draw() { return true; }//!< Draws the actor
	virtual bool end() { return true; }//!< Ends the actor

	glm::vec3 getPosition() { return m_position; } //!< Gets the actors position
	void setPosition(glm::vec3 position) { m_position = position; }//!< Sets the actors position
	glm::quat getRotation() { return m_rotation; }//!< Gets the actors rotation
	void setRotation(glm::quat rotation) { m_rotation = rotation; }//!< Sets the actors rotation
	glm::vec3 getScale() { return m_scale; }//!< Gets the actors scale
	void setScale(glm::vec3 scale) { m_scale = scale; }//!< Sets the actors scale
	glm::mat4 getTransform();//!< Gets the transform of the actor

	Actor* getParent() { return m_parent; }//!< Gets the actors partent
	void setParent(Actor* parent) { m_parent = parent; }//!< Sets the actors parent
	glm::vec3 getParentPosition();//!< Gets the actors parents position
	glm::quat getParentRotation();//!< Gets the actors parents rotation

protected:
	glm::vec3 m_position{ 0.0f, 0.0f, 0.0f };//!< Actors position
	glm::quat m_rotation{ 1.0f, 0.0f, 0.0f, 0.0f };//!< Actors rotaton
	glm::vec3 m_scale{ 1.0f, 1.0f, 1.0f };//!< Actors scale

private:
	Actor* m_parent = nullptr;//!< Actors parent
};

