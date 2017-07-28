#pragma once
#include <iostream>

class Player
{
private:
	 int Player_Money;
	 int Player_Location;
	 int Player_Turn;
public:

	Player():Player_Money(0),Player_Location(0),Player_Turn(0){}
	void SetPlayer(int Player_Money_, int Player_Location_, int Player_Turn_);

	 int Getplayer_Money();
	 void Setplayer_Money(int Player_Money_);

	 int GetPlayer_Turn();
	 void SetPlayer_Turn(int Player_Turn_);

	int Player_Dice1(int rannum);
	int Player_Dice2(int rannum);
	int Getplayer_Location();
	void SetWorldtour_Location(int Player_Location_);
	int Setplayer_Location(int dice1,int dice2);

};

