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
	void updateGameObjects(GameObject* objects, int objectsSize);
	void updateGameObject(GameObject* objects);
	const int BALLS_SIZE = 10;
};

