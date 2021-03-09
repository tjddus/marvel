#include <iostream>
#include <string>
#include <Windows.h>
#include "Map.h"
#include "Map_detail.h"
#include "player.h"
#include "GAME.h"

using namespace std;

void gotoxy(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void setcolor(int color, int bgcolor)

{

	color &= 0xf;

	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void Game::Setting_marvel()
{
	setcolor(12, 0);
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	cout << "\t\t*******************************************************************************************" << endl;
	setcolor(15, 0);
	cout << "\t\t\t                                                                                  " << endl;
	cout << "\t\t\t                                                                                  " << endl;
	cout << "\t\t\t***          ***       **       ******** **             ************ **          " << endl;
	cout << "\t\t\t** **      ** **      ****      **     ** **           ** **         **           " << endl;
	cout << "\t\t\t**   **  **   **     **  **     **     **  **         **  **         **          " << endl;
	cout << "\t\t\t**     **     **    **    **    ********    **       **   *********  **            " << endl;
	cout << "\t\t\t**            **   **********   ** **        **     **    *********  **            " << endl;
	cout << "\t\t\t**            **  **        **  **  **        **   **     **         **             " << endl;
	cout << "\t\t\t**            ** **          ** **   **        ** **      **         **                 " << endl;
	cout << "\t\t\t**            ****            ****    ***       ***       ********** *************      " << endl;
	cout << "\t\t\t                                                                                       " << endl;
	cout << "\t\t" << endl;
	setcolor(11, 0);
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
	cout << "┏━━━━┓";
}

void Game::Map_image2()
{
	cout << "┃        ┃";
}
void Game::Map_image3()
{
	cout << "┗━━━━┛";
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
	string Space[24] = {"시작점", "방콕", "베이징", "타이페이", "두바이", "카이로", "무인도", "도쿄",
						"시드니", "카지노", "퀘백", "상파울로", "CASH GAME", "프라하", "베를린", "모스크바", "제네바",
						"로마", "세계여행", "런던", "파리", "카지노", "뉴욕", "서울"};

	system("mode con:cols=100 lines=130");
	//판 만들기
	Map_image6();
	for (int i = 12; i < 19; i++)
	{
		cout << "  " << Space[i] << "   ";
	}
	Map_image7();
	//첫번째 줄

	Map_image4();
	cout << "  " << Space[11];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t  ";
	}
	cout << "   " << Space[19];
	Map_image5();

	//두번째 줄

	Map_image4();
	cout << "   " << Space[10];
	for (int i = 0; i < 9; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[20];
	Map_image5();

	//세번째 줄

	Map_image4();
	cout << "   " << Space[9];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[21];
	Map_image5();

	//네번째 줄

	Map_image4();
	cout << "   " << Space[8];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[22];
	Map_image5();

	//다섯번째 줄

	Map_image4();
	cout << "   " << Space[7];
	for (int i = 0; i < 9; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[23];
	Map_image5();

	//여섯번째 줄

	Map_image6();
	for (int i = 6; i >= 0; i--)
	{
		cout << "   " << Space[i] << "   ";
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
		cout << "   ┏━ PLAYER" << Player_number + 1 << "━┓" << endl;
		gotoxy(15, 8 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 9 + (5 * Player_number));
		cout << "   **** 파산 ****" << endl;
		gotoxy(15, 10 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 11 + (5 * Player_number));
		cout << "   ┗━━━━━━┛" << endl;
	}
	else
	{
		gotoxy(15, 7 + (5 * Player_number));
		cout << "   ┏━ PLAYER" << Player_number + 1 << "━┓" << endl;
		gotoxy(15, 8 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 9 + (5 * Player_number));
		cout << "     돈 : " << Player_money << endl;
		gotoxy(15, 10 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 11 + (5 * Player_number));
		cout << "   ┗━━━━━━┛" << endl;
	}
	setcolor(15, 0);
}
//현재 플레이어의 재산 상태를 알져주는 함수

void Game::PlayerLocation_image(int i, int k)
{
	if (i == 0)
	{
		setcolor(10, 0);
	}
	else if (i == 1)
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
	if (0 <= k && k < 6)
	{
		gotoxy(74 - k * 12 + (2 * i), 33);
	}
	else if (6 <= k && k < 12)
	{
		gotoxy(2 + (2 * i), 33 - 5 * (k - 6));
	}
	else if (12 <= k && k < 18)
	{
		gotoxy(2 + 12 * (k - 12) + (2 * i), 3);
	}
	else if (18 <= k && k <= 23)
	{
		gotoxy(74 + (2 * i), 3 + 5 * (k - 18));
	}
	cout << i + 1 << "p";
	setcolor(15, 0);
}
//플레이어의 위치 상태를 알려주는 함수

void Play_dice(int &random1, int &random2)
{
	int command = 0;
	gotoxy(0, 35);
	cout << "**********주사위를 던지고 싶다면 아무 숫자나 눌러요**********" << endl;
	cin >> command;
	random1 = rand() % 6 + 1;
	random2 = rand() % 6 + 1;
}

//일반행동 주사위 굴리기

void Game::GAME()
{
	Map *space0 = new Map_Start("시작점", 0, 750000);
	Map *space1 = new Map_World("방콕", 1, 50000, 25000, 75000, 125000, 125000, 4, 4, 4, 4, 4);
	Map *space2 = new Map_World("베이징", 2, 65000, 25000, 75000, 125000, 125000, 4, 4, 4, 4, 4);
	Map *space3 = new Map_World("타이페이", 3, 120000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map *space4 = new Map_World("두바이", 4, 120000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map *space5 = new Map_World("카이로", 5, 135000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map *space6 = new Map_Island("무인도", 6);
	Map *space7 = new Map_World("도쿄", 7, 180000, 75000, 225000, 375000, 375000, 4, 4, 4, 4, 4);
	Map *space8 = new Map_World("시드니", 8, 180000, 75000, 225000, 375000, 375000, 4, 4, 4, 4, 4);
	Map *space9 = new Map_Casino("카지노", 9, 250000);
	Map *space10 = new Map_World("퀘백", 10, 235000, 100000, 300000, 500000, 500000, 4, 4, 4, 4, 4);
	Map *space11 = new Map_World("상파울로", 11, 235000, 100000, 300000, 500000, 500000, 4, 4, 4, 4, 4);
	Map *space12 = new Map_Cashgame("CASH GAME", 12, 500000);
	Map *space13 = new Map_World("프라하", 13, 295000, 125000, 375000, 625000, 625000, 4, 4, 4, 4, 4);
	Map *space14 = new Map_World("베를린", 14, 310000, 125000, 375000, 625000, 625000, 4, 4, 4, 4, 4);
	Map *space15 = new Map_World("모스크바", 15, 350000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map *space16 = new Map_World("제네바", 16, 365000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map *space17 = new Map_World("로마", 17, 365000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map *space18 = new Map_Worldtour("세계여행", 18, 100000);
	Map *space19 = new Map_World("런던", 19, 410000, 175000, 525000, 875000, 875000, 4, 4, 4, 4, 4);
	Map *space20 = new Map_World("파리", 20, 425000, 175000, 525000, 875000, 875000, 4, 4, 4, 4, 4);
	Map *space21 = new Map_Casino("카지노", 21, 250000);
	Map *space22 = new Map_World("뉴욕", 22, 480000, 200000, 600000, 1000000, 1000000, 4, 4, 4, 4, 4);
	Map *space23 = new Map_World("서울", 23, 500000, 200000, 600000, 1000000, 1000000, 4, 4, 4, 4, 4);

	Map *Space[24] = {
		space0, space1, space2, space3, space4, space5, space6, space7, space8, space9, space10, space11, space12, space13, space14, space15, space16, space17, space18, space19, space20, space21, space22, space23};
	int Player_Number = 0;

	setcolor(15, 0);
	while (1)
	{
		while (1)
		{
			cout << "\t\t\t 몇 명이 플레이하시겠습니까(**2-4명**) : ";
			cin >> Player_Number;
			if (2 <= Player_Number && Player_Number <= 4)
			{
				break;
			}
		}
		Player *player = new Player[Player_Number];
		int *Player_Money = new int[Player_Number];
		//플레이어 수만큼 생성!!

		for (int i = 0; i < Player_Number; i++)
		{
			player[i].SetPlayer(5000000, 0, 0);
		}

		for (int i = 0; i < Player_Number; i++)
		{
			Player_Money[i] = 5000000;
		}

		int Toll = 0;		//통행료
		int Land_Owner = 0; //통행료를 받을 땅의 주인

		//판 만들기
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
			//주사위 랜덤변수

			if (player[i].GetPlayer_Turn() == 0)
			{
				Play_dice(random1, random2);
				cout << "플레이어" << i + 1 << "의 주사위 눈 : " << player[i].Player_Dice1(random1) << "  " << player[i].Player_Dice2(random2) << endl;
				player[i].Setplayer_Location(player[i].Player_Dice1(random1), player[i].Player_Dice2(random2));
				Player_Money[i] = player[i].Getplayer_Money();
				if (player[i].Player_Dice1(random1) == player[i].Player_Dice2(random2))
				{
					cout << "\t\t**주사위 더블**" << endl;
					Double_check++;
				}
				else
				{
					Double_check = 0;
				}
			}

			//모두의 마블에서의 일반 행동

			else if (player[i].GetPlayer_Turn() == -2 || player[i].GetPlayer_Turn() == -1)
			{
				Play_dice(random1, random2);
				cout << "플레이어" << i + 1 << "의 주사위 눈 : " << player[i].Player_Dice1(random1) << "  " << player[i].Player_Dice2(random2) << endl;
				if (player[i].Player_Dice1(random1) == player[i].Player_Dice2(random2))
				{
					cout << "주사위가 더블입니다.**무인도에서 탈출하셨어요**" << endl;
					player[i].Setplayer_Location(player[i].Player_Dice1(random1), player[i].Player_Dice2(random2));
					player[i].SetPlayer_Turn(0);
				}
			}

			//무인도에서의 남은 2턴
			//무인도에서의 남은 1턴

			else if (player[i].GetPlayer_Turn() == 1)
			{
				gotoxy(0, 35);
				cout << "1. 세계여행을 간다." << endl;
				cout << "2, 세계여행을 가지 않는다." << endl;
				cout << "취하고 싶은 행동의 번호를 적어주세요" << endl;
				cin >> command;
				if (command == 1)
				{
					Map_Worldtour *Worldtour = (Map_Worldtour *)Space[18];
					cout << "가고 싶은 여행지->";
					cin >> map;
					Worldtour->SetPlayer_Wantmap(map);
					for (int k = 0; k < 24; k++)
					{
						if (Worldtour->GetPlayer_Wantmap().compare(Space[k]->GetMap_Name()) == 0)
						{
							if (0 <= k && k < 18)
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
					cout << "세계여행을 가지 못했어요ㅠㅠㅠ" << endl;
					player[i].SetPlayer_Turn(0);
				}
			}

			//세계여행에서의 턴

			/*Player의 턴수 1)-2:무인도에서의 2턴
							2)-1:무인도에서의 1턴
							3)0:일반적인 턴
							4)1:세계여행 가기
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
					cout << " 현재 Player" << i + 1 << "의 위치는 " << Space[j]->GetMap_Name() << endl;

					//플레이어의 위치 출력
					if (j == 0)
					{
						Map_Start *Start = (Map_Start *)Space[j];
						player[i].Setplayer_Money(Player_Money[i] + Start->Pay());
						cout << "**특수한 맵칸을 제외한 칸의 이름을 써주세요**---->";
						cin >> map;
						Start->SetPlayer_Wantmap(map);
						for (int k = 0; k < 24; k++)
						{
							if (Start->GetPlayer_Wantmap().compare(Space[k]->GetMap_Name()) == 0)
							{
								Map_World *Start_World = (Map_World *)Space[k];
								if (Start_World->GetLand_Owner() == i)
								{
									Start_World->Map_Construcion(i, Player_Money[i], Toll, k);
								}
								else
								{
									cout << "그 칸에는 건물을 지을 수 없습니다" << endl;
								}
							}
						}
						player[i].Setplayer_Money(Player_Money[i]);
					}

					//시작지점에서의 턴

					else if (j == 6)
					{
						Double_check = 0;
						if (player[i].GetPlayer_Turn() == 0)
						{
							cout << "매서운 태풍으로 인해 무인도에 떨어지셨습니다. **무인도에서 3턴간 기다리세요!" << endl;
							player[i].SetPlayer_Turn(-2);
						}
						else if (player[i].GetPlayer_Turn() == -2)
						{
							cout << "아직 태풍이 가시지 않았아요.**무인도에서 2턴간 기다리세요! " << endl;
							player[i].SetPlayer_Turn(-1);
						}
						else if (player[i].GetPlayer_Turn() == -1)
						{
							cout << "아직 태풍이 가시지 않았어요.**무인도에서 1턴간 기다리세요!" << endl;
							player[i].SetPlayer_Turn(0);
						}
					}

					//무인도에서의 턴

					else if (j == 9 || j == 21)
					{
						Map_Casino *Casino = (Map_Casino *)Space[j];

						cout << "******카지노 게임******" << endl;
						cout << "1-20사이의 숫자 4개를 입력해주세요" << endl;

						int Casino_Check = Casino->Game_Casino();
						if (Casino_Check == 0)
						{
							cout << "카지노 게임에서 숫자 0개를 맞추셨습니다." << endl;
							cout << "돈을 얻지 못했어요ㅠㅠㅠㅠ" << endl;
						}
						else if (Casino_Check == 1)
						{
							cout << "카지노 게임에서 숫자 1개를 맞추셨습니다." << endl;
							cout << "돈" << Casino->Pay() << "을 얻었습니다." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Casino->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 2)
						{
							cout << "카지노 게임에서 숫자 2개를 맞추셨습니다." << endl;
							cout << "돈" << 2 * (Casino->Pay()) << "을 얻었습니다." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 2 * (Casino->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 3)
						{
							cout << "카지노 게임에서 숫자 3를 맞추셨습니다." << endl;
							cout << "돈" << 4 * (Casino->Pay()) << "을 얻었습니다." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 4 * (Casino->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 4)
						{
							cout << "카지노 게임에서 숫자 4개를 맞추셨습니다." << endl;
							cout << "돈" << 8 * (Casino->Pay()) << "을 얻었습니다." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Casino->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
					}

					//카지노에서의 턴

					else if (j == 12)
					{
						Map_Cashgame *Cashgame = (Map_Cashgame *)Space[j];

						if (Cashgame->Game_Cashgame() == 1)
						{
							cout << "CASH GAME에서 이겼습니다." << endl;
							cout << "돈" << Cashgame->Pay() << "을 얻었습니다." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Cashgame->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Cashgame->Game_Cashgame() == 2)
						{
							cout << "CASH GAME에서 대박났어요." << endl;
							cout << "돈" << (2 * Cashgame->Pay()) << "을 얻었습니다." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 2 * (Cashgame->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else
						{
							cout << "CASH GAME에서 졌습니다." << endl;
							cout << "돈을 얻지 못했어요ㅠㅠ" << endl;
							Player_Money[i] = player[i].Getplayer_Money();
						}
					}

					//CASHGAME에서의 턴

					else if (j == 18)
					{
						Double_check = 0;
						if (player[i].GetPlayer_Turn() == 0)
						{
							cout << "!!!!!!공항에 왔어요!!!!!! 다음턴에 세계여행을 할 수 있어요" << endl;
							player[i].SetPlayer_Turn(1);
						}
					}

					//세계여행에서의 턴

					else
					{
						Map_World *World = (Map_World *)Space[j];
						World->Map_Construcion(i, Player_Money[i], Toll, Land_Owner);
						Player_Money[Land_Owner] += Toll;
						player[Land_Owner].Setplayer_Money(Player_Money[Land_Owner]);
						player[i].Setplayer_Money(Player_Money[i]);
						if (player[i].Getplayer_Money() <= 0)
						{
							for (int j = 0; j < 24; j++)
							{
								Map_World *Bankrupt_World = (Map_World *)Space[j];
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
					cout << "ㅠㅠㅠ이런!! 연속 세번으로 더블이네요!!ㅠㅠㅠㅠ" << endl;
					cout << "****무인도에서 쉴 시간이에요****" << endl;
					Double_check = 0;
				}
			}
			//주사위 더블 확인 함수

			if (i == Player_Number - 1)
			{
				i = -1;
			}
			//Player차례를 반복시키기 위한 함수
			Sleep(500);
		}
		delete[] player;
		delete[] Player_Money;
	}
}