#include "Ball.h"
#include "DxLib.h"
#include "Game.h"


Ball::Ball()
{
	x = windowWidth / 2;
	y = windowHeight / 2;
	speedX = GetRand(10) - 5;
	speedY = 0;
}


Ball::~Ball()
{
}

void Ball::update()
{
	speedY += 0.5;

	if (x > windowWidth || x < 0)
	{
		speedX = -speedX;
	}
	if (y > windowHeight || y < 0)
	{
		speedY = -speedY;
	}

	x += speedX;
	y += speedY;
}

void Ball::render()
{
	DrawCircle((int)x, (int)y, RADIUS, GetColor(255, 0, 0), TRUE);
}
