#pragma once
#include "GameObject.h"

class Ball : public GameObject
{
public:
	Ball();
	~Ball();
	void Update();
	void Render();
private:
	float speedX, speedY;
	const int RADIUS = 20;
};

