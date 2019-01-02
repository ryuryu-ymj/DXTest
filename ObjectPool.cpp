#include "ObjectPool.h"
using namespace std;



ObjectPool::ObjectPool()
{
}


ObjectPool::~ObjectPool()
{
}

void ObjectPool::update()
{
	for (vector<GameObject*> objs : objs_list)
	{
		for (GameObject* obj : objs)
		{
			obj->update();
		}
	}
}

void ObjectPool::render()
{
	for (vector<GameObject*> objs : objs_list)
	{
		for (GameObject* obj : objs)
		{
			obj->render();
		}
	}
}

void ObjectPool::addObjects(vector<GameObject*> objs)
{
	objs_list.push_back(objs);
}
