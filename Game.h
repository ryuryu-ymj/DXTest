#pragma once
#include "Ball.h"

/* âÊñ ÇÃÉTÉCÉY */
static int windowWidth = 800, windowHeight = 600;
static int colorBitDepth;

class Game
{
public:
	Game();
	~Game();
	Ball* balls;
	void update();
	void render();
};

