#pragma once
#include "Ball.h"
#include "GameObject.h"
#include <vector>

class ObjectPool
{
public:
	ObjectPool();
	~ObjectPool();
	void Update();
	void Render();
	void AddObjects(std::vector<GameObject*> objs);
	template<typename T> void AddObjects(int objsSize);

private:
	std::vector<std::vector<GameObject*>> objs_list;
	const int BALLS_SIZE = 10;
};

template<typename T>
inline void ObjectPool::AddObjects(int objs_size)
{
	std::vector<GameObject*> objs;
	for (int i = 0; i < objs_size; i++)
	{
		T* obj;
		obj = new T;
		objs.push_back(obj);
	}
	objs_list.push_back(objs);
}
