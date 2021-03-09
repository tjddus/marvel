#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Game
{
private:
	int command;
	string map;

public:
	void GAME();
	void Map_image1();
	void Map_image2();
	void Map_image3();
	void Map_image4();
	void Map_image5();
	void Map_image6();
	void Map_image7();
	void MapImage_All();
	void Setting_marvel();
	void Player_image(int Player_number, int Player_money);
	void PlayerLocation_image(int i, int k);
};
