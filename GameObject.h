#pragma once
class GameObject
{
public:
	float x, y;
	bool active;
	GameObject();
	virtual ~GameObject() {};
	virtual void Update() = 0;
	virtual void Render() = 0;
};

