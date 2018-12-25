#include "ObjectPool.h"



ObjectPool::ObjectPool()
{
	balls = new Ball[BALLS_SIZE];
}


ObjectPool::~ObjectPool()
{
	delete[] balls;
}

void ObjectPool::update()
{
	for (int i = 0; i < BALLS_SIZE; i++)
	{
		balls[i].update();
	}
}

void ObjectPool::render()
{
	for (int i = 0; i < BALLS_SIZE; i++)
	{
		balls[i].render();
	}
}
