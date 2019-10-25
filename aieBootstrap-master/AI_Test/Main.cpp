#include "AI_TestApp.h"

int main()
{
	auto app = new AI_TestApp();

	app->run("AI_Test", 1280, 720, false);

	delete app;

	return 0;
}