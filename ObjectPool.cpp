#include "ObjectPool.h"
using namespace std;



ObjectPool::ObjectPool()
{
}


ObjectPool::~ObjectPool()
{
	for (vector<GameObject*> objs : objs_list)
	{
		for (GameObject* obj : objs)
		{
			delete obj;
		}
	}
}

void ObjectPool::Update()
{
	for (vector<GameObject*> objs : objs_list)
	{
		for (GameObject* obj : objs)
		{
			obj->Update();
		}
	}
}

void ObjectPool::Render()
{
	for (vector<GameObject*> objs : objs_list)
	{
		for (GameObject* obj : objs)
		{
			obj->Render();
		}
	}
}

void ObjectPool::AddObjects(vector<GameObject*> objs)
{
	objs_list.push_back(objs);
}
