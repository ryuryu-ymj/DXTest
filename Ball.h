#pragma once
#include "GameObject.h"

class Ball : public GameObject
{
public:
	Ball();
	~Ball();
	void update();
	void render();
private:
	float speedX, speedY;
	const int RADIUS = 20;
};

