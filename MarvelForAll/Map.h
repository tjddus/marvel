#pragma once
#include <iostream>
#include <string>

using namespace std;

class Map
{
protected:
	string Map_Name;
	int Map_Count;

public:
	Map()
	{
	}

	Map(string Map_Name)
	{
		this->Map_Name = Map_Name;
	}

	Map(string Map_Name, int Map_Count)
	{
		this->Map_Name = Map_Name;
		this->Map_Count = Map_Count;
	}

	int GetMap_count();
	string GetMap_Name();
};