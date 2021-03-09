#include "player.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int Player::Getplayer_Money() { return Player_Money; }
//플레이어의 돈에 접근하기

void Player::SetPlayer(int Player_Money_, int Player_Location_, int Player_Turn_)
{
	Player_Money = Player_Money_;
	Player_Location = Player_Location_;
	Player_Turn = Player_Turn_;
}

void Player::Setplayer_Money(int Player_Money_)
{
	Player_Money = Player_Money_;
};

//플레이어의 돈을 설정하기

int Player::GetPlayer_Turn() { return Player_Turn; }

//플레이어 턴수로 무인도,세계여행 구별

void Player::SetPlayer_Turn(int Player_Turn_)
{
	Player_Turn = Player_Turn_;
}

int Player::Player_Dice1(int rannum)
{

	srand((unsigned int)time(NULL));
	return rannum;
};

int Player::Player_Dice2(int rannum)
{

	return rannum;
}

//플레이어의 주사위 굴리기

int Player::Getplayer_Location() { return Player_Location; };

//플레이어의 위치에 접근하기

void Player::SetWorldtour_Location(int Player_Location_)
{
	Player_Location = Player_Location_;
}

int Player::Setplayer_Location(int dice1, int dice2)
{
	Player_Location += dice1 + dice2;
	if (Player_Location >= 24)
	{
		Player_Location -= 24;
		Setplayer_Money(Getplayer_Money() + 750000);
	}

	return Player_Location;
};

//플레이어가 주사위를 던져서 나온 수를 이용한 위치 설정
//플레이어의 위치 설정(주사위 던진 만큼 )