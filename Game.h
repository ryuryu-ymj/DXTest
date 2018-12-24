#pragma once
#include "Ball.h"
#include "GameObject.h"
#include "ObjectPool.h"

/* 画面のサイズ */
static int windowWidth = 800, windowHeight = 600;
static int colorBitDepth;

class Game
{
public:
	ObjectPool op;
	Game();
	~Game();
	void update();
	void render();
};

