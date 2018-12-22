#pragma once
#include "Ball.h"

/* 画面のサイズ */
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

