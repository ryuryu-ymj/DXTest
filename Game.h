#pragma once
#include "Ball.h"
#include "GameObject.h"
#include "ObjectPool.h"

/* âÊñ ÇÃÉTÉCÉY */
static int windowWidth = 800, windowHeight = 600;
static int colorBitDepth;

class Game
{
public:
	ObjectPool op;
	std::vector<Ball*> balls;
	Game();
	~Game();
	void Update();
	void Render();
};

