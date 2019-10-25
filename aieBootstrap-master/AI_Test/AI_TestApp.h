#pragma once
#include "Application.h"
#include "Renderer2D.h"
#include "Node.h"
#include <Gizmos.h>
#include <glm/ext.hpp>

using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat4;

class AI_TestApp : public aie::Application
{
public:
	AI_TestApp();
	virtual ~AI_TestApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

private:
	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;

	
};

