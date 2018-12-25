#pragma once
class GameObject
{
public:
	float x, y;
	bool active;
	GameObject();
	virtual ~GameObject() {};
	virtual void update() = 0;
	virtual void render() = 0;
};

