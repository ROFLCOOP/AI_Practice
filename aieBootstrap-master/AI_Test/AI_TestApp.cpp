#include "AI_TestApp.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include <cassert>
#include <iostream>


AI_TestApp::AI_TestApp()
{
}


AI_TestApp::~AI_TestApp()
{
}

bool AI_TestApp::startup()
{
	m_2dRenderer = new aie::Renderer2D();



	m_font = new aie::Font("../bin/font/consolas", 32);
	vec2 temp(0, 1);
	return true;
}

void AI_TestApp::shutdown()
{
	delete m_font;
	delete m_2dRenderer;
}

void AI_TestApp::update(float deltaTime)
{
	aie::Input* input = aie::Input::getInstance();

	

	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
		quit();
}

void AI_TestApp::draw()
{
	clearScreen();

	m_2dRenderer->begin();

	m_2dRenderer->drawText(m_font, "Press ESC to quit", 0, 0, -0.1f);

	

	aie::Gizmos::add2DTri(vec2(0, 0), vec2(1, 0), vec2(0, 1), vec4(1, 1, 1, 1));

	

	//m_2dRenderer->drawCircle(getWindowWidth() * 0.5f, getWindowHeight() * 0.5f, 5);

	aie::Gizmos::draw2D(getWindowWidth(), getWindowHeight());

	m_2dRenderer->end();
}
