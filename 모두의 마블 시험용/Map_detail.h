#pragma once
#include "Map.h"
#include <iostream>
#include<string>

using namespace std;


class Map_Start :
	public Map
{
private:
	int Start_Pay;
	string Player_Wantmap;
public:
	Map_Start() {
		Start_Pay = 0;
	}
	//������ ���� �ʱ�ȭ
	Map_Start(string Map_Name, int Map_Count,int Start_Pay):Map(Map_Name,Map_Count) {
		this->Start_Pay = Start_Pay;
	}
	//������ ������
	int Pay();
	//������ ����
	void SetPlayer_Wantmap(string Player_Wantmap_);
	string GetPlayer_Wantmap();
};


class Map_World :
	public Map
{
private:
	int Land_Price;//�� ����
	int Villa_Price;//���� ����
	int Building_Price;//���� ����
	int Hotel_Price;//ȣ�� ����
	int RandMark_Price;//���帶ũ ����
	int Land_Owner;//�� ����
	int Villa_Owner;//���� ����
	int Building_Owner;//���� ����
	int Hotel_Owner;//ȣ�� ����
	int RandMark_Owner;//���帶ũ ����



public:
	Map_World() {
		Land_Price = 0;
		Villa_Price = 0;
		Building_Price = 0;
		Hotel_Price = 0;
		RandMark_Price = 0;

	}

	//�ɹ����� �ʱ�ȭ

	Map_World(string Map_Name,int Map_Count, int Land_Price, int Villa_Price, int Building_Price, int Hotel_Price, int RandMark_Price,int Land_Owner, int Villa_Owner,int Building_Owner,int Hotel_Owner,int RandMark_Owner):Map(Map_Name,Map_Count)
	{
		this->Land_Price = Land_Price;
		this->Villa_Price = Villa_Price;
		this->Building_Price = Building_Price;
		this->Hotel_Price = Hotel_Price;
		this->RandMark_Price = RandMark_Price;
		this->Land_Owner = Land_Owner;
		this->Villa_Owner = Villa_Owner;
		this->Building_Owner = Building_Owner;
		this->Hotel_Owner = Hotel_Owner;
		this->RandMark_Owner = RandMark_Owner;
	}

	//������

	int GetLand_Price();//�� ����
	int GetVilla_Price();//���� ����
	int GetBuilding_Price();//���� ����
	int GetHotel_Price();//ȣ�� ����
	int GetRandMark_Price();//���帶ũ ����
	int GetLand_Owner();// �� ����
	int GetVilla_Owner();//���� ����
	int GetBuilding_Owner();//���� ����
	int GetHotel_Owner();//ȣ�� ����
	int GetRandmark_Owner();//���帶ũ ����
	void SetLand_Owner(int k);
	void SetVilla_Owner(int k);
	void SetBuilding_Owner(int k);
	void SetHotel_Owner(int k);
	void SetRandmark_Owner(int k);


	void Map_Construcion(int i,int& Present_Money,int& Toll,int k);
	//�� �Ǽ��ϱ�
	
	void Construction_Str(int i, int& Present_Money);
	//�ǹ� �Ǽ��ϱ�

	int GetRandmark_Check(int i);
	//���帶ũ üũ�ϱ�

	void Construction_Randmark(int i,int& Present_Money);
	//���帶ũ �Ǽ��ϱ�

	void Map_Takeover(int i);
	//�ǹ� �μ��ϱ�

	int Map_Toll();
	//�ǹ� �����

	void Bankruptcy(int i);
	//�Ļ�

};


class Map_Island :
	public Map
{
public:
	Map_Island(string Map_Name,int Map_Count) :Map(Map_Name,Map_Count){
	}
};


class Map_Cashgame :
	public Map
{
private:
	int Cashgame_Pay;
public:
	Map_Cashgame() {
		Cashgame_Pay = 0;
	}
	Map_Cashgame(string Map_Name,int Map_Count, int Cashgame_Pay):Map(Map_Name,Map_Count){
		this->Cashgame_Pay = Cashgame_Pay;
	}
	int Pay();
	int Game_Cashgame();
};

class Map_Casino :
	public Map
{
private:
	int 
		Casino_Pay;
public:
	Map_Casino() {
		Casino_Pay = 0;
	}
	Map_Casino(string Map_Name,int Map_Count, int Casino_Pay):Map(Map_Name,Map_Count)
	{
		this->Casino_Pay = Casino_Pay;
	}
	int Pay();
	int Game_Casino();
};


class Map_Worldtour :
	public Map
{
private:
	int Worldtour_Pay;
	string Player_Wantmap;
public:
	Map_Worldtour() {
		Worldtour_Pay = 0;
		Player_Wantmap = "�޾���";
	}
	Map_Worldtour(string Map_Name,int Map_Count,int Worldtour_Pay):Map(Map_Name,Map_Count)
	{
		this->Worldtour_Pay = Worldtour_Pay;
	}
	int Pay();

	void SetPlayer_Wantmap(string Player_Wantmap_);
	string GetPlayer_Wantmap();
};