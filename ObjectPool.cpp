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
	updateGameObjects(balls, BALLS_SIZE);
}

void ObjectPool::render()
{
	for (int i = 0; i < BALLS_SIZE; i++)
	{
		balls[i].render();
	}
}

void ObjectPool::updateGameObjects(GameObject* objects, int objectsSize)
{
	for (int i = 0; i < objectsSize; i++)
	{
		objects[i].update();
	}
}

void ObjectPool::updateGameObject(GameObject* object_ptr)
{
	object_ptr->update();
}
