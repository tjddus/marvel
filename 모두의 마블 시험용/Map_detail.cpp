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

// �÷��̾�� ������ ������ �ִ� ��

//������������ �÷��̾ ���ϴ� ���� �ǹ��� �� �Ǽ��� �� �ְ� �ϴ� ��

void Map_Start::SetPlayer_Wantmap(string Player_Wantmap_) {
	Player_Wantmap = Player_Wantmap_;
}
string Map_Start::GetPlayer_Wantmap() {
	return Player_Wantmap;
}


int Map_World::GetLand_Price() { return Land_Price; }
//�� ����
int Map_World:: GetVilla_Price() { return Villa_Price; }
//���� ����
int Map_World::GetBuilding_Price() { return Building_Price; }
//���� ����
int Map_World::GetHotel_Price() { return Hotel_Price; }
//ȣ�� ����
int Map_World::GetRandMark_Price() { return RandMark_Price; }
//���帶ũ ����

int Map_World::GetLand_Owner() { return Land_Owner; }// �� ����
int Map_World::GetVilla_Owner() { return Villa_Owner; }//���� ����
int Map_World::GetBuilding_Owner() { return Building_Owner; }//���� ����
int Map_World::GetHotel_Owner() { return Hotel_Owner; }//ȣ�� ����
int Map_World::GetRandmark_Owner() { return RandMark_Owner; }//���帶ũ ����
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

void Map_World::Map_Construcion(int i, int& Present_Money,int& Toll,int k) {//���� i�� �÷��̾� �ڱ� �ڽ��� �ǹ��Ѵ�.
	Toll = 0;
	if (GetLand_Owner() == 4)
	{
		int Buy_Land = 0;

		cout << "1. �� ���" << endl;
		cout << "2. �� �����ʱ�" << endl;
		cout << "**���ϴ� �ൿ�� ��ȣ�� �Է����ּ���**" << endl;
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
				cout << "�÷��̾��� ���� ���� ���� �� �� �����ϴ�." << endl;
			}
		} 
		else if (Buy_Land == 2)
		{
			cout << "���� �÷��̾��� ������ �Ѿ�ڽ��ϴ�." << endl;
		}
		else
		{
			Map_Construcion(i,Present_Money,Toll, k);//�ٸ� ���� �Է��ϸ� �ٽ�!
		}
	}
	else if (GetLand_Owner() == i) 
	{
		if (GetRandmark_Owner() == i)
		{
			cout << "���� ���帶ũ�� �������ֽ��ϴ�." << endl;
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
		cout << "�÷��̾�" << GetLand_Owner()+1 << "�� ���� �����̽��ϴ�" << endl;
		cout << "�� ���� ������ **" << (6*Map_Toll())/5 << "�Դϴ٤Ф�" << endl;
		Present_Money -= (6*Map_Toll())/5;
		Toll = (6 * Map_Toll()) / 5;
		k = GetLand_Owner();
		//�ǹ������� �ٸ������ ���� ������ ����� ����!

		int Takeover_ok = 0;
		cout << "1. �μ��ϱ�" << endl;
		cout << "2. �μ����� �ʱ�" << endl;
		cout << "���ϰ� ���� �ൿ�� ��ȣ�� �Է��ϼ���" << endl;
		cin >> Takeover_ok;
		if (Takeover_ok == 1)
		{
			if (GetRandmark_Owner() == 4)
			{
				Present_Money -= (3 * Map_Toll()) / 2;
				Map_Takeover(i);
				cout << "������ �ǹ��� �μ��ϼ̽��ϴ�." << endl;
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
				cout << "�� ���� ������ ���帶ũ�� �Ǽ��Ǿ� �־ �μ��� �� �����ϴ�." << endl;
			}
		}
		//�μ��۾�
	}
}
/*���� ������ 
				1.(���� 4): ���� ���	1.����
										2.����
										3.ȣ��
										*(ó������ ���帶ũ�� �Ǽ��� ���� ����)
				2.(�ڱ��ڽ� i)	
								Ȯ���۾�(���帶ũ ����):
											1)�ڱ��ڽ�
													�׳� �Ѿ��
											2)������ ����
													Ȯ���۾�(����,����,ȣ�ڿ� ������ �ִ���)
																1)�ڱ��ڽ�
																		���帶ũ�� �����óİ� ��û�ϱ�
																2)�ϳ���� ���������� ������ ���� �䱸�ϱ�
																		������ �μ� �ǹ��� �����óİ� ��û�ϱ�
				3.(�ܺ���)
						����� �ΰ��� �Ѿ��

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
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ȣ��" << endl;
		cout << "**����  ���� �ǹ��� ��ȣ�� �Է����ּ���. **" << endl;
		cout << "((�ǹ��� �׸� �����÷��� 0�� �����ּ���.))" << endl;
		cin >> Buy_Building;
		if (Buy_Building == 1)
		{
			if (GetVilla_Owner() == i)
			{
				cout << "�̹� �� ���� ���� ������ �ֽ��ϴ�." << endl << endl;
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
					cout << "�÷��̾��� ���� ���� ���� �� �� �����ϴ�." << endl;
				}
			}
		}
		else if (Buy_Building == 2)
		{
			if (GetBuilding_Owner() == i)
			{
				cout << "�̹� �� ���� ������ ������ �ֽ��ϴ�." << endl << endl;
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
					cout << "�÷��̾��� ���� ���� ������ �� �� �����ϴ�." << endl;
				}
			}
		}
		else if (Buy_Building == 3)
		{
			if (GetHotel_Owner() == i)
			{
				cout << "�̹� �� ���� ȣ���� ������ �ֽ��ϴ�." << endl << endl;
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
					cout << "�÷��̾��� ���� ���� ȣ���� �� �� �����ϴ�." << endl;
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
	1)����
	2)����
	3)ȣ��
	3���� �ǹ��� �������� �Լ�!!
*/


void Map_World::Construction_Randmark(int i,int& Present_Money) {
	int Rand_ok = 0;
	cout << "1. ���帶ũ �Ǽ��ϱ�" << endl;
	cout << "2. ���帶ũ �Ǽ����� �ʱ�" << endl;
	cout << "**���ϰ� ���� �ൿ�� ��ȣ�� �Է����ּ���**" << endl;
	cin >> Rand_ok;
	if (Rand_ok==1)
	{
		if (Present_Money >= GetRandMark_Price())
		{
			SetRandmark_Owner(i);
			cout << "**********************���帶ũ �Ǽ�*****************************" << endl;
			Present_Money -= GetBuilding_Price();
		}
		else
		{
			cout << "�÷��̾��� ���� ���� ���帶ũ�� �� �� �����ϴ�." << endl;
		}
	}
	else
	{
		cout << "���� �÷��̾��� ������ �Ѿ�ϴ�." << endl;
	}	
}

//���帶ũ ���� �Լ�


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

//����ᰡ ������ ����ϴ� �Լ�

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

//������ ���� �μ��ϴ� �۾�

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

//�÷��̾ �Ļ� �� ��� �÷��̾��� ���� �� ������ ���� ���·� �ǵ��� ����

int Map_Cashgame::Pay() {

	return Cashgame_Pay;
}

//�÷��̾�� ĳ�����ӿ��� �̱�� �� �ִ� ��

int Map_Cashgame::Game_Cashgame() {
	int Player_Dice = 0;
	int Computer_Dice = 0;
	Player_Dice = rand() % 6 + 1;
	Computer_Dice = rand() % 6 + 1;
	if (Player_Dice < Computer_Dice)//CashGame���� ��
	{
		return 0;
	}
	else if (Player_Dice == Computer_Dice)//CashGame���� ���
	{
		return 2;
	}
	else //CashGame���� �̱�
	{
		return 1;
	}
}

//CashGame���� �÷��̾ ������

int Map_Casino::Pay() {

	return Casino_Pay;
}

//�÷��̾ ī���� ���ӿ��� �̱�� ���޴� ��

int Map_Casino::Game_Casino() {
	int Player_number[4] = {0,0,0,0};
	int Computer_number[4] = {0,0,0,0};
	for (int i = 0; i < 4; i++)
	{
		cout << "->";
		cin >> Player_number[i];
	}
	//�÷��̾ ī���� ���ӿ��� ���� �Է��ϱ�
	
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
	}//��ǻ���� ī���� ���ӿ��� ���ڰ� �ߺ��Ǵ��� Ȯ��!

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
	}//��ǻ�Ϳ� �÷��̾��� ���ڰ� ������ Ȯ��

	return Casino_Check; //0-4������ ��ȯ���� ����
}

//ī���� ���ӿ��� �÷��̾ �󸶸�ŭ�� ���ڰ� ������ Ȯ���ϴ� ��

int Map_Worldtour::Pay(){

	return Worldtour_Pay;
}

//�÷��̾ ���迩���� �������ؼ� �����ϴ� ��


//�÷��̾ ���迩�� ������ ���� �Լ�

void Map_Worldtour::SetPlayer_Wantmap(string Player_Wantmap_) {
	Player_Wantmap = Player_Wantmap_;
}
string Map_Worldtour::GetPlayer_Wantmap() {
	return Player_Wantmap;
}