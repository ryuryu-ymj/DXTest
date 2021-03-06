#include "Ball.h"
#include "DxLib.h"
#include "Game.h"
#include <random>


Ball::Ball()
{
	std::random_device rd;

	std::mt19937 mt(rd());

	std::uniform_int_distribution<int> dice(-5, 5);

	x = windowWidth / 2;
	y = windowHeight / 2;
	speedX = dice(mt);
	speedY = dice(mt);
}


Ball::~Ball()
{
}

void Ball::Update()
{
	speedY += 0.5;

	if (x > windowWidth)
	{
		x = windowWidth;
		speedX = -speedX;
	}
	else if (x < 0)
	{
		x = 0;
		speedX = -speedX;
	}
	if (y > windowHeight)
	{
		y = windowHeight;
		speedY = -speedY;
	}
	else if (y < 0)
	{
		y = 0;
		speedY = -speedY;
	}

	x += speedX;
	y += speedY;
}

void Ball::Render()
{
	DrawCircle((int)x, (int)y, RADIUS, GetColor(255, 0, 0), TRUE);
}
