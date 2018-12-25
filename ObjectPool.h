#pragma once
#include "Ball.h"
#include "GameObject.h"

class ObjectPool
{
public:
	Ball* balls;

	ObjectPool();
	~ObjectPool();
	void update();
	void render();

private:
	const int BALLS_SIZE = 10;
};

