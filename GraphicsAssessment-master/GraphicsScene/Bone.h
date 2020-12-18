#pragma once
#include "Actor.h"

class Bone : public Actor
{
public:
	Bone(Actor startFrame, Actor endFrame);//!< Creates the bones start and end position
	~Bone() {}

	bool update(double deltaTime) override;//!< Updates the bone between the start and end frame
	bool draw() override;//!< Draws each frame

private:
	Actor m_startFrame;//!< Sets the actors start frame
	Actor m_endFrame;//!< Sets the actors end frame
};

