#pragma once
#include "Ball.h"

/* ��ʂ̃T�C�Y */
static int windowWidth = 800, windowHeight = 600;
static int colorBitDepth;

class Game
{
public:
	Ball ball;
	void update();
	void render();
};

