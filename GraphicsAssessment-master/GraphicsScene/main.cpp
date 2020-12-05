#include "Game.h"

int main()
{
	Game* app = new Game(1280, 720, "Computer Graphics");

	app->run();

	delete app;

	return 0;
}