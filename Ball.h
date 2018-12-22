#pragma once
class Ball
{
public:
	Ball();
	~Ball();
	void update();
	void render();
private:
	float x, y;
	float speedX, speedY;
	const int RADIUS = 20;
};

