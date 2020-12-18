#pragma once
#include "Actor.h"

class Light
{
public:
	glm::vec3 getDirection() { return m_direction; }//!< Gets Direction of light
	void setDirection(glm::vec3 direction) { m_direction = direction; }//!< Sets Direction of light
	glm::vec3 getAmbient() { return m_ambient; }//!< Gets Ambient Values
	void setAmbient(glm::vec3 ambient) { m_ambient = ambient; }//!< Sets Ambient Values
	glm::vec3 getDiffuse() { return m_diffuse; }//!< Gets Diffuse Values
	void setDiffuse(glm::vec3 diffuse) { m_diffuse = diffuse; }//!< Sets Diffuse Values
	glm::vec3 getSpecular() { return m_specular; }//!< Gets Specular
	void setSpecular(glm::vec3 specular) { m_specular = specular; }//!< Sets Specular

private:
	glm::vec3 m_direction;//!< The direction of the light
	glm::vec3 m_ambient;//!< Light spreading at its point
	glm::vec3 m_diffuse;//!< Lights reflection
	glm::vec3 m_specular;//!< Lights reflection and the view
};

