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
	//시작점 월급 초기화
	Map_Start(string Map_Name, int Map_Count,int Start_Pay):Map(Map_Name,Map_Count) {
		this->Start_Pay = Start_Pay;
	}
	//시작점 생성자
	int Pay();
	//시작점 월급
	void SetPlayer_Wantmap(string Player_Wantmap_);
	string GetPlayer_Wantmap();
};


class Map_World :
	public Map
{
private:
	int Land_Price;//땅 가격
	int Villa_Price;//빌라 가격
	int Building_Price;//빌딩 가격
	int Hotel_Price;//호텔 가격
	int RandMark_Price;//랜드마크 가격
	int Land_Owner;//땅 주인
	int Villa_Owner;//빌라 주인
	int Building_Owner;//빌딩 주인
	int Hotel_Owner;//호텔 주인
	int RandMark_Owner;//랜드마크 주인



public:
	Map_World() {
		Land_Price = 0;
		Villa_Price = 0;
		Building_Price = 0;
		Hotel_Price = 0;
		RandMark_Price = 0;

	}

	//맴버변수 초기화

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

	//생성자

	int GetLand_Price();//땅 가격
	int GetVilla_Price();//빌라 가격
	int GetBuilding_Price();//빌딩 가격
	int GetHotel_Price();//호텔 가격
	int GetRandMark_Price();//랜드마크 가격
	int GetLand_Owner();// 땅 주인
	int GetVilla_Owner();//빌라 주인
	int GetBuilding_Owner();//빌딩 주인
	int GetHotel_Owner();//호텔 주인
	int GetRandmark_Owner();//랜드마크 주인
	void SetLand_Owner(int k);
	void SetVilla_Owner(int k);
	void SetBuilding_Owner(int k);
	void SetHotel_Owner(int k);
	void SetRandmark_Owner(int k);


	void Map_Construcion(int i,int& Present_Money,int& Toll,int k);
	//땅 건설하기
	
	void Construction_Str(int i, int& Present_Money);
	//건물 건설하기

	int GetRandmark_Check(int i);
	//랜드마크 체크하기

	void Construction_Randmark(int i,int& Present_Money);
	//랜드마크 건설하기

	void Map_Takeover(int i);
	//건물 인수하기

	int Map_Toll();
	//건물 통행료

	void Bankruptcy(int i);
	//파산

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
		Player_Wantmap = "휴양지";
	}
	Map_Worldtour(string Map_Name,int Map_Count,int Worldtour_Pay):Map(Map_Name,Map_Count)
	{
		this->Worldtour_Pay = Worldtour_Pay;
	}
	int Pay();

	void SetPlayer_Wantmap(string Player_Wantmap_);
	string GetPlayer_Wantmap();
};