#include <iostream>
#include<string>
#include <Windows.h>
#include "Map.h"
#include "Map_detail.h"
#include"player.h"
#include"GAME.h"

using namespace std;


void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void setcolor(int color, int bgcolor)

{

	color &= 0xf;

	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);

}

void Game::Setting_marvel ()
{
	setcolor(12,0);
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	setcolor(15,0);
	cout << "\t\t\t                                                                                  " << endl;
	cout << "\t\t\t                                                                                  " << endl;
	cout << "\t\t\t***          ***       **       ******** **             ************ **          " << endl;
	cout << "\t\t\t** **      ** **      ****      **     ** **           ** **         **           " << endl;
	cout << "\t\t\t**   **  **   **     **  **     **     **  **         **  **         **          " << endl;
	cout << "\t\t\t**     **     **    **    **    ********    **       **   *********  **            " << endl;
	cout << "\t\t\t**            **   **********   ** **        **     **    *********  **            " << endl;
	cout << "\t\t\t**            **  **        **  **  **        **   **     **         **             " << endl;
	cout << "\t\t\t**            ** **          ** **   **        ** **      **         **                 "<< endl;
	cout << "\t\t\t**            ****            ****    ***       ***       ********** *************      " << endl;
	cout << "\t\t\t                                                                                       " << endl;
	cout << "\t\t" << endl;
	setcolor(11,0);
	cout << "\t\t\t**********   * * **********  *                **     *        ********   **          " << endl;
	cout << "\t\t\t       **    * *        **   *            ********** *              **   **         " << endl;
	cout << "\t\t\t      **     * *      **     ***   **       **  **   *        *******    **       " << endl;
	cout << "\t\t\t     **  ***** *    **  **   *     **        ****    *****        **     **    " << endl; 
	cout << "\t\t\t    ***      * *  **      ** *                **     *           **      **   " << endl;
	cout << "\t\t\t   ** **     * * *************     **    *************         **        **    " << endl;
	cout << "\t\t\t  **   **    * *             *     **         *****  *         ************           " << endl;
	cout << "\t\t\t **     **   * *             *               **   **           **        **     " << endl;
	cout << "\t\t\t**       **  * *             *                *****            ************       " << endl;
	setcolor(12, 0);
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	Sleep(2000);
	system("cls");
	MapImage_All();
}




void Game::Map_image1()
{
	cout << "������������" ;
}

void Game::Map_image2()
{
	cout << "��        ��" ;
}
void Game::Map_image3()
{
	cout << "������������" ;
}

void Game::Map_image4()
{
	Map_image1();
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	Map_image1();
	cout << endl;
	Map_image2();
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	Map_image2();
	cout << endl;
}
void Game::Map_image5()
{
	cout << endl;
	Map_image2();
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	Map_image2();
	cout << endl;
	Map_image3();
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	Map_image3();
	cout << endl;
}
void Game::Map_image6()
{
	for (int i = 0; i < 7; i++)
	{
		Map_image1();
	}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		Map_image2();
	}
	cout << endl;
}
void Game::Map_image7()
{
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		Map_image2();
	}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		Map_image3();
	}
	cout << endl;
}

void Game::MapImage_All()
{
	setcolor(15, 0);
	string Space[24] = {"������","����","����¡","Ÿ������","�ι���","ī�̷�","���ε�","����",
						"�õ��","ī����","����","���Ŀ��","CASH GAME","������","������","��ũ��","���׹�",
						"�θ�","���迩��","����","�ĸ�","ī����","����","����"};

	system("mode con:cols=100 lines=130");
	//�� �����
	Map_image6();
	for (int i = 12; i < 19; i++)
	{
		cout << "  " << Space[i]<< "   ";
	}
	Map_image7();
	//ù��° ��


	Map_image4();
	cout << "  " << Space[11];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t  ";
	}
	cout << "   " << Space[19];
	Map_image5();

	//�ι�° ��

	Map_image4();
	cout << "   " << Space[10];
	for (int i = 0; i < 9; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[20];
	Map_image5();

	//����° ��

	Map_image4();
	cout << "   " << Space[9];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[21];
	Map_image5();

	//�׹�° ��

	Map_image4();
	cout << "   " << Space[8];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[22];
	Map_image5();

	//�ټ���° ��

	Map_image4();
	cout << "   " << Space[7];
	for (int i = 0; i < 9; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[23];
	Map_image5();

	//������° ��

	Map_image6();
	for (int i = 6; i >= 0; i--)
	{
		cout << "   " << Space[i]<< "   ";
	}
	Map_image7();
}

void Game::Player_image(int Player_number, int Player_money)
{
	if (Player_number == 0)
	{
		setcolor(10, 0);
	}
	else if (Player_number == 1)
	{
		setcolor(11, 0);
	}
	else if (Player_number == 2)
	{
		setcolor(12, 0);
	}
	else if (Player_number == 3)
	{
		setcolor(13, 0);
	}
	if (Player_money < 0)
	{
		gotoxy(15, 7 + (5 * Player_number));
		cout << "   ���� PLAYER" << Player_number + 1 << "����" << endl;
		gotoxy(15, 8 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 9 + (5 * Player_number));
		cout << "   **** �Ļ� ****" << endl;
		gotoxy(15, 10 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 11 + (5 * Player_number));
		cout << "   ����������������" << endl;
	}
	else
	{
		gotoxy(15, 7+(5*Player_number));
		cout << "   ���� PLAYER" << Player_number + 1 << "����" << endl;
		gotoxy(15, 8+ (5 * Player_number));
		cout << endl;
		gotoxy(15, 9+ (5 * Player_number));
		cout << "     �� : " << Player_money << endl;
		gotoxy(15, 10+ (5 * Player_number));
		cout << endl;
		gotoxy(15, 11+ (5 * Player_number));
		cout << "   ����������������" << endl;
	}
	setcolor(15, 0);
}
//���� �÷��̾��� ��� ���¸� �����ִ� �Լ�


void Game::PlayerLocation_image( int i,int k )
{
	if (i == 0)
	{
		setcolor(10, 0);
	}
	else if (i== 1)
	{
		setcolor(11, 0);
	}
	else if (i == 2)
	{
		setcolor(12, 0);
	}
	else if (i == 3)
	{
		setcolor(13, 0);
	}
	if (0<=k&&k<6)
	{
		gotoxy(74 - k * 12+(2*i), 33);
	}
	else if (6<=k&&k<12)
	{
		gotoxy(2+(2*i), 33 - 5 * (k - 6));
	}
	else if (12<=k&&k<18)
	{
		gotoxy(2 + 12 * (k - 12)+ (2 * i), 3);
	}
	else if (18<=k&&k<=23)
	{
		gotoxy(74+ (2 * i), 3 + 5 * (k - 18));
	}
	cout << i+1<<"p";
	setcolor(15, 0);
}
//�÷��̾��� ��ġ ���¸� �˷��ִ� �Լ�

void Play_dice(int& random1,int& random2 )
{
	int command = 0;
	gotoxy(0, 35);
	cout << "**********�ֻ����� ������ �ʹٸ� �ƹ� ���ڳ� ������**********" << endl;
	cin >> command;
    random1 = rand() % 6 + 1;
    random2 = rand() % 6 + 1;
}

//�Ϲ��ൿ �ֻ��� ������



void Game::GAME()
{
	Map* space0 = new Map_Start("������", 0, 750000);
	Map* space1 = new Map_World("����", 1, 50000, 25000, 75000, 125000, 125000, 4, 4, 4, 4, 4);
	Map* space2 = new Map_World("����¡", 2, 65000, 25000, 75000, 125000, 125000, 4, 4, 4, 4, 4);
	Map* space3 = new Map_World("Ÿ������", 3, 120000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map* space4 = new Map_World("�ι���", 4, 120000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map* space5 = new Map_World("ī�̷�", 5, 135000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map* space6 = new Map_Island("���ε�", 6);
	Map* space7 = new Map_World("����", 7, 180000, 75000, 225000, 375000, 375000, 4, 4, 4, 4, 4);
	Map* space8 = new Map_World("�õ��", 8, 180000, 75000, 225000, 375000, 375000, 4, 4, 4, 4, 4);
	Map* space9 = new Map_Casino("ī����", 9, 250000);
	Map* space10 = new Map_World("����", 10, 235000, 100000, 300000, 500000, 500000, 4, 4, 4, 4, 4);
	Map* space11 = new Map_World("���Ŀ��", 11, 235000, 100000, 300000, 500000, 500000, 4, 4, 4, 4, 4);
	Map* space12 = new Map_Cashgame("CASH GAME", 12, 500000);
	Map* space13 = new Map_World("������", 13, 295000, 125000, 375000, 625000, 625000, 4, 4, 4, 4, 4);
	Map* space14 = new Map_World("������", 14, 310000, 125000, 375000, 625000, 625000, 4, 4, 4, 4, 4);
	Map* space15 = new Map_World("��ũ��", 15, 350000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map* space16 = new Map_World("���׹�", 16, 365000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map* space17 = new Map_World("�θ�", 17, 365000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map* space18 = new Map_Worldtour("���迩��", 18, 100000);
	Map* space19 = new Map_World("����", 19, 410000, 175000, 525000, 875000, 875000, 4, 4, 4, 4, 4);
	Map* space20 = new Map_World("�ĸ�", 20, 425000, 175000, 525000, 875000, 875000, 4, 4, 4, 4, 4);
	Map* space21 = new Map_Casino("ī����", 21, 250000);
	Map* space22 = new Map_World("����", 22, 480000, 200000, 600000, 1000000, 1000000, 4, 4, 4, 4, 4);
	Map* space23 = new Map_World("����", 23, 500000, 200000, 600000, 1000000, 1000000, 4, 4, 4, 4, 4);


	Map *Space[24] = {
		space0,space1,space2,space3,space4,space5,space6,space7,space8,space9,space10,space11,space12,space13
		,space14,space15,space16,space17,space18,space19,space20,space21,space22,space23
	};
	int Player_Number = 0;

	setcolor(15, 0);
	while (1)
	{
		while (1)
		{
			cout << "\t\t\t �� ���� �÷����Ͻðڽ��ϱ�(**2-4��**) : ";
			cin >> Player_Number;
			if (2 <= Player_Number&&Player_Number <= 4)
			{
				break;
			}
		}
		Player *player = new Player[Player_Number];
		int *Player_Money = new int[Player_Number];
		//�÷��̾� ����ŭ ����!!



		for (int i = 0; i < Player_Number; i++)
		{
			player[i].SetPlayer(5000000, 0, 0);
		}

		for (int i = 0; i < Player_Number; i++)
		{
			Player_Money[i] = 5000000;
		}

		int Toll = 0;//�����
		int Land_Owner = 0;//����Ḧ ���� ���� ����

		//�� �����
		srand((unsigned int)time(NULL));


		int Double_check = 0;

		for (int i = 0; i < Player_Number; i++)
		{
			MapImage_All();
			for (int i = 0; i < Player_Number; i++)
			{
				PlayerLocation_image(i, player[i].Getplayer_Location());
			}
			for (int i = 0; i < Player_Number; i++)
			{
				Player_image(i, player[i].Getplayer_Money());
			}

			while (1)
			{
				if (player[i].Getplayer_Money() < 0)
				{
					i++;
				}
				else
				{
					break;
				}
			}

			int random1 = 0;
			int random2 = 0;
			//�ֻ��� ��������


			if (player[i].GetPlayer_Turn() == 0)
			{
				Play_dice(random1,random2);
				cout << "�÷��̾�" << i + 1 << "�� �ֻ��� �� : " << player[i].Player_Dice1(random1) << "  " << player[i].Player_Dice2(random2) << endl;
				player[i].Setplayer_Location(player[i].Player_Dice1(random1), player[i].Player_Dice2(random2));
				Player_Money[i] = player[i].Getplayer_Money();
				if (player[i].Player_Dice1(random1) == player[i].Player_Dice2(random2))
				{
					cout << "\t\t**�ֻ��� ����**" << endl;
					Double_check++;
				}
				else
				{
					Double_check = 0;
				}
			}

			//����� �������� �Ϲ� �ൿ

			else if (player[i].GetPlayer_Turn() == -2||player[i].GetPlayer_Turn()==-1)
			{
				Play_dice(random1, random2);
				cout << "�÷��̾�" << i + 1 << "�� �ֻ��� �� : " << player[i].Player_Dice1(random1) << "  " << player[i].Player_Dice2(random2) << endl;
				if (player[i].Player_Dice1(random1) == player[i].Player_Dice2(random2))
				{
					cout << "�ֻ����� �����Դϴ�.**���ε����� Ż���ϼ̾��**" << endl;
					player[i].Setplayer_Location(player[i].Player_Dice1(random1), player[i].Player_Dice2(random2));
					player[i].SetPlayer_Turn(0);
				}
			}

			//���ε������� ���� 2��
			//���ε������� ���� 1��

			else if (player[i].GetPlayer_Turn() == 1)
			{
				gotoxy(0, 35);
				cout << "1. ���迩���� ����." << endl;
				cout << "2, ���迩���� ���� �ʴ´�." << endl;
				cout << "���ϰ� ���� �ൿ�� ��ȣ�� �����ּ���" << endl;
				cin >> command;
				if (command == 1)
				{
					Map_Worldtour* Worldtour = (Map_Worldtour*)Space[18];
					cout << "���� ���� ������->";
					cin >> map;
					Worldtour->SetPlayer_Wantmap(map);
					for (int k = 0; k < 24; k++)
					{
						if (Worldtour->GetPlayer_Wantmap().compare(Space[k]->GetMap_Name()) == 0)
						{
							if(0<=k&&k<18)
							{ 
								Player_Money[i] += 750000;
							}
							
							player[i].SetWorldtour_Location(k);
							player[i].SetPlayer_Turn(0);
							for (int i = 0; i < Player_Number; i++)
							{
								PlayerLocation_image(i, player[i].Getplayer_Location());
							}
							gotoxy(0, 35);
						}
					}
				}
				else
				{
					cout << "���迩���� ���� ���߾��ФФ�" << endl;
					player[i].SetPlayer_Turn(0);
				}
			}

			//���迩�࿡���� ��

			/*Player�� �ϼ� 1)-2:���ε������� 2��
							2)-1:���ε������� 1��
							3)0:�Ϲ����� ��
							4)1:���迩�� ����
			*/


			for (int j = 0; j < 24; j++)
			{
				if (player[i].Getplayer_Location() == Space[j]->GetMap_count())
				{
					for (int i = 0; i < Player_Number; i++)
					{
						PlayerLocation_image(i, player[i].Getplayer_Location());
					}
					gotoxy(0, 40);
					cout << " ���� Player" << i + 1 << "�� ��ġ�� " << Space[j]->GetMap_Name() << endl;

					//�÷��̾��� ��ġ ���
					if (j == 0)
					{
						Map_Start* Start = (Map_Start*)Space[j];
						player[i].Setplayer_Money(Player_Money[i]+ Start->Pay());
						cout << "**Ư���� ��ĭ�� ������ ĭ�� �̸��� ���ּ���**---->";
						cin >> map;
						Start->SetPlayer_Wantmap(map);
						for (int k = 0; k < 24; k++)
						{
							if (Start->GetPlayer_Wantmap().compare(Space[k]->GetMap_Name()) == 0)
							{
								Map_World* Start_World = (Map_World*)Space[k];
								if (Start_World->GetLand_Owner() == i)
								{
									Start_World->Map_Construcion(i, Player_Money[i], Toll, k);
								}
								else
								{
									cout << "�� ĭ���� �ǹ��� ���� �� �����ϴ�" << endl;
								}
							}
						}
						player[i].Setplayer_Money(Player_Money[i]);
					}

					//�������������� ��

					else if (j == 6)
					{
						Double_check = 0;
						if (player[i].GetPlayer_Turn() == 0)
						{
							cout << "�ż��� ��ǳ���� ���� ���ε��� �������̽��ϴ�. **���ε����� 3�ϰ� ��ٸ�����!" << endl;
							player[i].SetPlayer_Turn(-2);
						}
						else if (player[i].GetPlayer_Turn() == -2)
						{
							cout << "���� ��ǳ�� ������ �ʾҾƿ�.**���ε����� 2�ϰ� ��ٸ�����! " << endl;
							player[i].SetPlayer_Turn(-1);
						}
						else if (player[i].GetPlayer_Turn() == -1)
						{
							cout << "���� ��ǳ�� ������ �ʾҾ��.**���ε����� 1�ϰ� ��ٸ�����!" << endl;
							player[i].SetPlayer_Turn(0);
						}
					}

					//���ε������� ��


					else if (j == 9 || j == 21)
					{
						Map_Casino* Casino = (Map_Casino*)Space[j];

						cout << "******ī���� ����******" << endl;
						cout << "1-20������ ���� 4���� �Է����ּ���" << endl;

						int Casino_Check = Casino->Game_Casino();
						if (Casino_Check == 0)
						{
							cout << "ī���� ���ӿ��� ���� 0���� ���߼̽��ϴ�." << endl;
							cout << "���� ���� ���߾��ФФФ�" << endl;
						}
						else if (Casino_Check == 1)
						{
							cout << "ī���� ���ӿ��� ���� 1���� ���߼̽��ϴ�." << endl;
							cout << "��" << Casino->Pay() << "�� ������ϴ�." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Casino->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 2)
						{
							cout << "ī���� ���ӿ��� ���� 2���� ���߼̽��ϴ�." << endl;
							cout << "��" << 2 * (Casino->Pay()) << "�� ������ϴ�." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 2 * (Casino->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 3)
						{
							cout << "ī���� ���ӿ��� ���� 3�� ���߼̽��ϴ�." << endl;
							cout << "��" << 4 * (Casino->Pay()) << "�� ������ϴ�." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 4 * (Casino->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 4)
						{
							cout << "ī���� ���ӿ��� ���� 4���� ���߼̽��ϴ�." << endl;
							cout << "��" << 8 * (Casino->Pay()) << "�� ������ϴ�." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Casino->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
					}

					//ī���뿡���� ��

					else if (j == 12)
					{
						Map_Cashgame* Cashgame = (Map_Cashgame*)Space[j];

						if (Cashgame->Game_Cashgame() == 1)
						{
							cout << "CASH GAME���� �̰���ϴ�." << endl;
							cout << "��" << Cashgame->Pay() << "�� ������ϴ�." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Cashgame->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Cashgame->Game_Cashgame() == 2)
						{
							cout << "CASH GAME���� ��ڳ����." << endl;
							cout << "��" << (2 * Cashgame->Pay()) << "�� ������ϴ�." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 2 * (Cashgame->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else
						{
							cout << "CASH GAME���� �����ϴ�." << endl;
							cout << "���� ���� ���߾��Ф�" << endl;
							Player_Money[i] = player[i].Getplayer_Money();
						}
					}

					//CASHGAME������ ��

					else if (j == 18)
					{
						Double_check = 0;
						if (player[i].GetPlayer_Turn() == 0)
						{
							cout << "!!!!!!���׿� �Ծ��!!!!!! �����Ͽ� ���迩���� �� �� �־��" << endl;
							player[i].SetPlayer_Turn(1);
						}
					}

					//���迩�࿡���� ��

					else
					{
						Map_World* World = (Map_World*)Space[j];
						World->Map_Construcion(i, Player_Money[i], Toll, Land_Owner);
						Player_Money[Land_Owner] += Toll;
						player[Land_Owner].Setplayer_Money(Player_Money[Land_Owner]);
						player[i].Setplayer_Money(Player_Money[i]);
						if (player[i].Getplayer_Money() <= 0)
						{
							for (int j = 0; j < 24; j++)
							{
								Map_World* Bankrupt_World = (Map_World*)Space[j];
								if (Bankrupt_World->GetLand_Owner() == i)
								{
									Bankrupt_World->Bankruptcy(i);
								}
							}
						}
					}

				}
			}
			if (player[i].Getplayer_Location() != 6 || player[i].Getplayer_Location() != 18)
			{
				if (Double_check == 1)
				{
					i--;
				}

				else if (Double_check == 2)
				{
					i--;
				}
				else if (Double_check == 3)
				{
					cout << "�ФФ��̷�!! ���� �������� �����̳׿�!!�ФФФ�" << endl;
					cout << "****���ε����� �� �ð��̿���****" << endl;
					Double_check = 0;
				}
			}
			//�ֻ��� ���� Ȯ�� �Լ�

			if (i == Player_Number - 1)
			{
				i = -1;
			}
			//Player���ʸ� �ݺ���Ű�� ���� �Լ�
			Sleep(500);
		}
		delete[] player;
		delete[] Player_Money;

	}
}