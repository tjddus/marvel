#include "Map_detail.h"
#include "Map.h"
#include "player.h"
#include "GAME.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;




int Map_Start::Pay() {

	return Start_Pay;
}

// 플레이어에게 시작점 월급을 주는 것

//시작지점에서 플레이어가 원하는 곳에 건물을 더 건설할 수 있게 하는 것

void Map_Start::SetPlayer_Wantmap(string Player_Wantmap_) {
	Player_Wantmap = Player_Wantmap_;
}
string Map_Start::GetPlayer_Wantmap() {
	return Player_Wantmap;
}


int Map_World::GetLand_Price() { return Land_Price; }
//땅 가격
int Map_World:: GetVilla_Price() { return Villa_Price; }
//빌라 가격
int Map_World::GetBuilding_Price() { return Building_Price; }
//빌딩 가격
int Map_World::GetHotel_Price() { return Hotel_Price; }
//호텔 가격
int Map_World::GetRandMark_Price() { return RandMark_Price; }
//랜드마크 가격

int Map_World::GetLand_Owner() { return Land_Owner; }// 땅 주인
int Map_World::GetVilla_Owner() { return Villa_Owner; }//빌라 주인
int Map_World::GetBuilding_Owner() { return Building_Owner; }//빌딩 주인
int Map_World::GetHotel_Owner() { return Hotel_Owner; }//호텔 주인
int Map_World::GetRandmark_Owner() { return RandMark_Owner; }//랜드마크 주인
void Map_World::SetLand_Owner(int k){
	Land_Owner = k;
}

void Map_World::SetVilla_Owner(int k) {
	Villa_Owner = k;
}
void Map_World::SetBuilding_Owner(int k) {
	Building_Owner = k;
}
void Map_World::SetHotel_Owner(int k) {
	Hotel_Owner = k;
}
void Map_World::SetRandmark_Owner(int k) {
	RandMark_Owner = k;
}

void Map_World::Map_Construcion(int i, int& Present_Money,int& Toll,int k) {//변수 i는 플레이어 자기 자신을 의미한다.
	Toll = 0;
	if (GetLand_Owner() == 4)
	{
		int Buy_Land = 0;

		cout << "1. 땅 사기" << endl;
		cout << "2. 땅 사지않기" << endl;
		cout << "**원하는 행동의 번호를 입력해주세요**" << endl;
		cin >> Buy_Land;
		if (Buy_Land == 1)
		{
			if (Present_Money>= GetLand_Price())
			{
				SetLand_Owner(i);
				Present_Money -= GetLand_Price();
				Construction_Str(i, Present_Money);
			}
			else
			{
				cout << "플레이어의 돈이 없어 땅을 살 수 없습니다." << endl;
			}
		} 
		else if (Buy_Land == 2)
		{
			cout << "다음 플레이어의 턴으로 넘어가겠습니다." << endl;
		}
		else
		{
			Map_Construcion(i,Present_Money,Toll, k);//다른 수를 입력하면 다시!
		}
	}
	else if (GetLand_Owner() == i) 
	{
		if (GetRandmark_Owner() == i)
		{
			cout << "현재 랜드마크가 지어져있습니다." << endl;
		}
		else if(GetRandmark_Owner()==4)
		{
			if (GetRandmark_Check(i) == 3)
			{
				Construction_Randmark(i,Present_Money);
			}
			else if (GetRandmark_Check(i) < 3)
			{
				Construction_Str(i,Present_Money);
			}
		}
	}
	else
	{
		cout << "플레이어" << GetLand_Owner()+1 << "의 땅을 밟으셨습니다" << endl;
		cout << "이 땅의 통행료는 **" << (6*Map_Toll())/5 << "입니다ㅠㅠ" << endl;
		Present_Money -= (6*Map_Toll())/5;
		Toll = (6 * Map_Toll()) / 5;
		k = GetLand_Owner();
		//의무적으로 다른사람의 땅을 밟으면 통행료 내기!

		int Takeover_ok = 0;
		cout << "1. 인수하기" << endl;
		cout << "2. 인수하지 않기" << endl;
		cout << "취하고 싶은 행동의 번호를 입력하세요" << endl;
		cin >> Takeover_ok;
		if (Takeover_ok == 1)
		{
			if (GetRandmark_Owner() == 4)
			{
				Present_Money -= (3 * Map_Toll()) / 2;
				Map_Takeover(i);
				cout << "상대방의 건물을 인수하셨습니다." << endl;
				if (GetRandmark_Check(i) == 3)
				{
					Construction_Randmark(i, Present_Money);
				}
				else if (GetRandmark_Check(i) < 3)
				{
					Construction_Str(i, Present_Money);
				}
			}
			else if(GetRandmark_Owner()==GetLand_Owner())
			{
				cout << "이 땅은 상대방의 랜드마크가 건설되어 있어서 인수할 수 없습니다." << endl;
			}
		}
		//인수작업
	}
}
/*땅의 주인이 
				1.(없음 4): 땅을 사고	1.빌라
										2.빌딩
										3.호텔
										*(처음부터 랜드마크를 건설할 수는 없다)
				2.(자기자신 i)	
								확인작업(랜드마크 주인):
											1)자기자신
													그냥 넘어가기
											2)주인이 없음
													확인작업(빌라,빌딩,호텔에 주인이 있는지)
																1)자기자신
																		랜드마크를 지으시냐고 요청하기
																2)하나라고 빠져있으면 지을실 건지 요구하기
																		나머지 부수 건물들 지으시냐고 요청하기
				3.(외부인)
						통행료 부과로 넘어가기

*/


int Map_World::GetRandmark_Check(int i)
{
	int Randmark_Check = 0;
	if (GetVilla_Owner() == i)
	{
		Randmark_Check++;
	}
	if (GetBuilding_Owner() == i)
	{
		Randmark_Check++;
	}
	if (GetHotel_Owner() == i)
	{
		Randmark_Check++;
	}

	return Randmark_Check;
}


void Map_World::Construction_Str(int i,int& Present_Money) {

	while (1)
	{
		int Buy_Building = 0;
		cout << "1. 빌라" << endl;
		cout << "2. 빌딩" << endl;
		cout << "3. 호텔" << endl;
		cout << "**짓고  싶은 건물의 번호를 입력해주세요. **" << endl;
		cout << "((건물을 그만 지으시려면 0으 눌러주세요.))" << endl;
		cin >> Buy_Building;
		if (Buy_Building == 1)
		{
			if (GetVilla_Owner() == i)
			{
				cout << "이미 이 땅의 빌라를 가지고 있습니다." << endl << endl;
			}
			else  if (GetVilla_Owner() == 4)
			{
				if (Present_Money>= GetVilla_Price())
				{
					SetVilla_Owner(i);
					Present_Money-= GetVilla_Price();
				}
				else
				{
					cout << "플레이어의 돈이 없어 빌라를 살 수 없습니다." << endl;
				}
			}
		}
		else if (Buy_Building == 2)
		{
			if (GetBuilding_Owner() == i)
			{
				cout << "이미 이 땅의 빌딩을 가지고 있습니다." << endl << endl;
			}
			else if (GetBuilding_Owner() == 4)
			{
				if (Present_Money >= GetBuilding_Price())
				{
					SetBuilding_Owner(i);
					Present_Money -= GetBuilding_Price();
				}
				else
				{
					cout << "플레이어의 돈이 없어 빌딩을 살 수 없습니다." << endl;
				}
			}
		}
		else if (Buy_Building == 3)
		{
			if (GetHotel_Owner() == i)
			{
				cout << "이미 이 땅의 호텔을 가지고 있습니다." << endl << endl;
			}
			else if (GetHotel_Owner() == 4)
			{
				if (Present_Money>= GetHotel_Price())
				{
					SetHotel_Owner(i);
					Present_Money -= GetHotel_Price();
				}
				else
				{
					cout << "플레이어의 돈이 없어 호텔을 살 수 없습니다." << endl;
				}
			}
		}
		else if (Buy_Building == 0)
		{
			break;
		}
	}
}

/*
	1)빌라
	2)빌딩
	3)호텔
	3개의 건물을 짓는지의 함수!!
*/


void Map_World::Construction_Randmark(int i,int& Present_Money) {
	int Rand_ok = 0;
	cout << "1. 랜드마크 건설하기" << endl;
	cout << "2. 랜드마크 건설하지 않기" << endl;
	cout << "**취하고 싶은 행동의 번호를 입력해주세요**" << endl;
	cin >> Rand_ok;
	if (Rand_ok==1)
	{
		if (Present_Money >= GetRandMark_Price())
		{
			SetRandmark_Owner(i);
			cout << "**********************랜드마크 건설*****************************" << endl;
			Present_Money -= GetBuilding_Price();
		}
		else
		{
			cout << "플레이어의 돈이 없어 랜드마크를 살 수 없습니다." << endl;
		}
	}
	else
	{
		cout << "다음 플레이어의 턴으로 넘어갑니다." << endl;
	}	
}

//랜드마크 짓는 함수


int Map_World::Map_Toll() {
	int Toll = 0;
	if (GetLand_Owner() != 4)
	{
		if (GetVilla_Owner() == GetLand_Owner())
		{
			Toll += GetVilla_Price();
		}
		if (GetBuilding_Owner() == GetLand_Owner())
		{
			Toll += GetBuilding_Price();
		}
		if (GetHotel_Owner() == GetLand_Owner())
		{
			Toll += GetHotel_Price();
		}
		if (GetRandmark_Owner() == GetLand_Owner())
		{
			Toll += GetRandMark_Price();
		}
		return Toll;
	}

}

//통행료가 얼마인지 계산하는 함수

void Map_World::Map_Takeover(int i) {
	
	if (GetLand_Owner() != 4)
	{
		SetLand_Owner(i);
		if (GetVilla_Owner() != 4)
		{
			SetVilla_Owner(i);
		}
		if (GetBuilding_Owner() != 4)
		{
			SetBuilding_Owner(i);
		}
		if (GetHotel_Owner() != 4)
		{
			SetHotel_Owner(i);
		}
	}
} 

//상대방의 땅을 인수하는 작업

void Map_World::Bankruptcy(int i) {
	if (GetLand_Owner() == i)
	{
		SetLand_Owner(4);
	}
	if (GetVilla_Owner() == i)
	{
		SetVilla_Owner(4);
	}
	if (GetBuilding_Owner() == i)
	{
		SetBuilding_Owner(4);
	}
	if (GetHotel_Owner() == i)
	{
		SetHotel_Owner(4);
	}
	if (GetRandmark_Owner() == i)
	{
		SetRandmark_Owner(4);
	}

}

//플레이어가 파산 후 모든 플레이어의 땅을 다 주인이 없는 상태로 되돌려 놓기

int Map_Cashgame::Pay() {

	return Cashgame_Pay;
}

//플레이어에게 캐쉬게임에서 이기면 돈 주는 것

int Map_Cashgame::Game_Cashgame() {
	int Player_Dice = 0;
	int Computer_Dice = 0;
	Player_Dice = rand() % 6 + 1;
	Computer_Dice = rand() % 6 + 1;
	if (Player_Dice < Computer_Dice)//CashGame에서 짐
	{
		return 0;
	}
	else if (Player_Dice == Computer_Dice)//CashGame에서 비김
	{
		return 2;
	}
	else //CashGame에서 이김
	{
		return 1;
	}
}

//CashGame에서 플레이어가 게임함

int Map_Casino::Pay() {

	return Casino_Pay;
}

//플레이어가 카지노 게임에서 이기면 돈받는 곳

int Map_Casino::Game_Casino() {
	int Player_number[4] = {0,0,0,0};
	int Computer_number[4] = {0,0,0,0};
	for (int i = 0; i < 4; i++)
	{
		cout << "->";
		cin >> Player_number[i];
	}
	//플레이어가 카지노 게임에서 숫자 입력하기
	
	for (int i = 0; i < 4; i++)
	{
		Computer_number[i] = rand() % 20 + 1;
		for (int j = 0; j < i; j++)
		{
			if (Computer_number[i] == Computer_number[j])
			{
				i--;
				break;
			}
		}
	}//컴퓨터의 카지노 게임에서 숫자가 중복되는지 확인!

	int Casino_Check = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (Computer_number[i] == Player_number[j])
			{
				Casino_Check++;
			}
		}
	}//컴퓨터와 플레이어의 숫자가 같은지 확인

	return Casino_Check; //0-4까지의 반환값을 만듬
}

//카지노 게임에서 플레이어가 얼마만큼의 숫자가 같은지 확인하는 것

int Map_Worldtour::Pay(){

	return Worldtour_Pay;
}

//플레이어가 세계여행을 가기위해서 지불하는 돈


//플레이어가 세계여행 갈곳을 적는 함수

void Map_Worldtour::SetPlayer_Wantmap(string Player_Wantmap_) {
	Player_Wantmap = Player_Wantmap_;
}
string Map_Worldtour::GetPlayer_Wantmap() {
	return Player_Wantmap;
}