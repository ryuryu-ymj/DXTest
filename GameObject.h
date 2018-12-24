#pragma once
class GameObject
{
public:
	int x, y;
	bool active;
	GameObject();
	virtual ~GameObject() {};
	virtual void update() = 0;
	virtual void render() = 0;
};

