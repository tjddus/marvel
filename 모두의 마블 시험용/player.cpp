#include "player.h"
#include<iostream>
#include<string>
#include <ctime>
#include<cstdlib>

using namespace std;


int Player::Getplayer_Money() { return Player_Money; }
//�÷��̾��� ���� �����ϱ�


void Player::SetPlayer(int Player_Money_, int Player_Location_, int Player_Turn_)
{
	Player_Money = Player_Money_;
	Player_Location = Player_Location_;
	Player_Turn = Player_Turn_;
}

void Player::Setplayer_Money(int Player_Money_) {
	Player_Money = Player_Money_;
};

//�÷��̾��� ���� �����ϱ�


int Player::GetPlayer_Turn() { return Player_Turn; }

//�÷��̾� �ϼ��� ���ε�,���迩�� ����

void Player::SetPlayer_Turn(int Player_Turn_) {
	Player_Turn = Player_Turn_;
}

int Player::Player_Dice1(int rannum) {

	srand((unsigned int)time(NULL));
	return rannum;

};

int Player::Player_Dice2(int rannum) {

	
	return rannum;
}

//�÷��̾��� �ֻ��� ������

int Player::Getplayer_Location() { return Player_Location; };

//�÷��̾��� ��ġ�� �����ϱ�

void Player::SetWorldtour_Location(int Player_Location_)
{
	Player_Location = Player_Location_;
}

int Player::Setplayer_Location(int dice1,int dice2) {
	Player_Location += dice1+dice2;
	if (Player_Location >= 24)
	{
		Player_Location -= 24;
		Setplayer_Money(Getplayer_Money() + 750000);
	}

	return Player_Location;
};



//�÷��̾ �ֻ����� ������ ���� ���� �̿��� ��ġ ����
//�÷��̾��� ��ġ ����(�ֻ��� ���� ��ŭ )
