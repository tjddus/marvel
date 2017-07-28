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
	cout << "ΞΜΜΜΜΟ" ;
}

void Game::Map_image2()
{
	cout << "Ν        Ν" ;
}
void Game::Map_image3()
{
	cout << "ΡΜΜΜΜΠ" ;
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
	string Space[24] = {"獣拙繊","号壷","今戚臓","展戚凪戚","砧郊戚","朝戚稽","巷昔亀","亀底",
						"獣球艦","朝走葛","締拷","雌督随稽","CASH GAME","覗虞馬","今研鍵","乞什滴郊","薦革郊",
						"稽原","室域食楳","訓揮","督軒","朝走葛","敢水","辞随"};

	system("mode con:cols=100 lines=130");
	//毒 幻級奄
	Map_image6();
	for (int i = 12; i < 19; i++)
	{
		cout << "  " << Space[i]<< "   ";
	}
	Map_image7();
	//湛腰属 匝


	Map_image4();
	cout << "  " << Space[11];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t  ";
	}
	cout << "   " << Space[19];
	Map_image5();

	//砧腰属 匝

	Map_image4();
	cout << "   " << Space[10];
	for (int i = 0; i < 9; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[20];
	Map_image5();

	//室腰属 匝

	Map_image4();
	cout << "   " << Space[9];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[21];
	Map_image5();

	//革腰属 匝

	Map_image4();
	cout << "   " << Space[8];
	for (int i = 0; i < 8; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[22];
	Map_image5();

	//陥叱腰属 匝

	Map_image4();
	cout << "   " << Space[7];
	for (int i = 0; i < 9; i++)
	{
		cout << "\t";
	}
	cout << "   " << Space[23];
	Map_image5();

	//食叱腰属 匝

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
		cout << "   ΞΜ PLAYER" << Player_number + 1 << "ΜΟ" << endl;
		gotoxy(15, 8 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 9 + (5 * Player_number));
		cout << "   **** 督至 ****" << endl;
		gotoxy(15, 10 + (5 * Player_number));
		cout << endl;
		gotoxy(15, 11 + (5 * Player_number));
		cout << "   ΡΜΜΜΜΜΜΠ" << endl;
	}
	else
	{
		gotoxy(15, 7+(5*Player_number));
		cout << "   ΞΜ PLAYER" << Player_number + 1 << "ΜΟ" << endl;
		gotoxy(15, 8+ (5 * Player_number));
		cout << endl;
		gotoxy(15, 9+ (5 * Player_number));
		cout << "     儀 : " << Player_money << endl;
		gotoxy(15, 10+ (5 * Player_number));
		cout << endl;
		gotoxy(15, 11+ (5 * Player_number));
		cout << "   ΡΜΜΜΜΜΜΠ" << endl;
	}
	setcolor(15, 0);
}
//薄仙 巴傾戚嬢税 仙至 雌殿研 硝閃爽澗 敗呪


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
//巴傾戚嬢税 是帖 雌殿研 硝形爽澗 敗呪

void Play_dice(int& random1,int& random2 )
{
	int command = 0;
	gotoxy(0, 35);
	cout << "**********爽紫是研 揮走壱 粛陥檎 焼巷 収切蟹 喚君推**********" << endl;
	cin >> command;
    random1 = rand() % 6 + 1;
    random2 = rand() % 6 + 1;
}

//析鋼楳疑 爽紫是 閏軒奄



void Game::GAME()
{
	Map* space0 = new Map_Start("獣拙繊", 0, 750000);
	Map* space1 = new Map_World("号壷", 1, 50000, 25000, 75000, 125000, 125000, 4, 4, 4, 4, 4);
	Map* space2 = new Map_World("今戚臓", 2, 65000, 25000, 75000, 125000, 125000, 4, 4, 4, 4, 4);
	Map* space3 = new Map_World("展戚凪戚", 3, 120000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map* space4 = new Map_World("砧郊戚", 4, 120000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map* space5 = new Map_World("朝戚稽", 5, 135000, 50000, 150000, 250000, 250000, 4, 4, 4, 4, 4);
	Map* space6 = new Map_Island("巷昔亀", 6);
	Map* space7 = new Map_World("亀底", 7, 180000, 75000, 225000, 375000, 375000, 4, 4, 4, 4, 4);
	Map* space8 = new Map_World("獣球艦", 8, 180000, 75000, 225000, 375000, 375000, 4, 4, 4, 4, 4);
	Map* space9 = new Map_Casino("朝走葛", 9, 250000);
	Map* space10 = new Map_World("締拷", 10, 235000, 100000, 300000, 500000, 500000, 4, 4, 4, 4, 4);
	Map* space11 = new Map_World("雌督随稽", 11, 235000, 100000, 300000, 500000, 500000, 4, 4, 4, 4, 4);
	Map* space12 = new Map_Cashgame("CASH GAME", 12, 500000);
	Map* space13 = new Map_World("覗虞馬", 13, 295000, 125000, 375000, 625000, 625000, 4, 4, 4, 4, 4);
	Map* space14 = new Map_World("今研鍵", 14, 310000, 125000, 375000, 625000, 625000, 4, 4, 4, 4, 4);
	Map* space15 = new Map_World("乞什滴郊", 15, 350000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map* space16 = new Map_World("薦革郊", 16, 365000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map* space17 = new Map_World("稽原", 17, 365000, 150000, 450000, 750000, 750000, 4, 4, 4, 4, 4);
	Map* space18 = new Map_Worldtour("室域食楳", 18, 100000);
	Map* space19 = new Map_World("訓揮", 19, 410000, 175000, 525000, 875000, 875000, 4, 4, 4, 4, 4);
	Map* space20 = new Map_World("督軒", 20, 425000, 175000, 525000, 875000, 875000, 4, 4, 4, 4, 4);
	Map* space21 = new Map_Casino("朝走葛", 21, 250000);
	Map* space22 = new Map_World("敢水", 22, 480000, 200000, 600000, 1000000, 1000000, 4, 4, 4, 4, 4);
	Map* space23 = new Map_World("辞随", 23, 500000, 200000, 600000, 1000000, 1000000, 4, 4, 4, 4, 4);


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
			cout << "\t\t\t 護 誤戚 巴傾戚馬獣畏柔艦猿(**2-4誤**) : ";
			cin >> Player_Number;
			if (2 <= Player_Number&&Player_Number <= 4)
			{
				break;
			}
		}
		Player *player = new Player[Player_Number];
		int *Player_Money = new int[Player_Number];
		//巴傾戚嬢 呪幻鏑 持失!!



		for (int i = 0; i < Player_Number; i++)
		{
			player[i].SetPlayer(5000000, 0, 0);
		}

		for (int i = 0; i < Player_Number; i++)
		{
			Player_Money[i] = 5000000;
		}

		int Toll = 0;//搭楳戟
		int Land_Owner = 0;//搭楳戟研 閤聖 競税 爽昔

		//毒 幻級奄
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
			//爽紫是 沓棋痕呪


			if (player[i].GetPlayer_Turn() == 0)
			{
				Play_dice(random1,random2);
				cout << "巴傾戚嬢" << i + 1 << "税 爽紫是 勧 : " << player[i].Player_Dice1(random1) << "  " << player[i].Player_Dice2(random2) << endl;
				player[i].Setplayer_Location(player[i].Player_Dice1(random1), player[i].Player_Dice2(random2));
				Player_Money[i] = player[i].Getplayer_Money();
				if (player[i].Player_Dice1(random1) == player[i].Player_Dice2(random2))
				{
					cout << "\t\t**爽紫是 希鷺**" << endl;
					Double_check++;
				}
				else
				{
					Double_check = 0;
				}
			}

			//乞砧税 原鷺拭辞税 析鋼 楳疑

			else if (player[i].GetPlayer_Turn() == -2||player[i].GetPlayer_Turn()==-1)
			{
				Play_dice(random1, random2);
				cout << "巴傾戚嬢" << i + 1 << "税 爽紫是 勧 : " << player[i].Player_Dice1(random1) << "  " << player[i].Player_Dice2(random2) << endl;
				if (player[i].Player_Dice1(random1) == player[i].Player_Dice2(random2))
				{
					cout << "爽紫是亜 希鷺脊艦陥.**巷昔亀拭辞 纏窒馬写嬢推**" << endl;
					player[i].Setplayer_Location(player[i].Player_Dice1(random1), player[i].Player_Dice2(random2));
					player[i].SetPlayer_Turn(0);
				}
			}

			//巷昔亀拭辞税 害精 2渡
			//巷昔亀拭辞税 害精 1渡

			else if (player[i].GetPlayer_Turn() == 1)
			{
				gotoxy(0, 35);
				cout << "1. 室域食楳聖 娃陥." << endl;
				cout << "2, 室域食楳聖 亜走 省澗陥." << endl;
				cout << "昼馬壱 粛精 楳疑税 腰硲研 旋嬢爽室推" << endl;
				cin >> command;
				if (command == 1)
				{
					Map_Worldtour* Worldtour = (Map_Worldtour*)Space[18];
					cout << "亜壱 粛精 食楳走->";
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
					cout << "室域食楳聖 亜走 公梅嬢推ばばば" << endl;
					player[i].SetPlayer_Turn(0);
				}
			}

			//室域食楳拭辞税 渡

			/*Player税 渡呪 1)-2:巷昔亀拭辞税 2渡
							2)-1:巷昔亀拭辞税 1渡
							3)0:析鋼旋昔 渡
							4)1:室域食楳 亜奄
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
					cout << " 薄仙 Player" << i + 1 << "税 是帖澗 " << Space[j]->GetMap_Name() << endl;

					//巴傾戚嬢税 是帖 窒径
					if (j == 0)
					{
						Map_Start* Start = (Map_Start*)Space[j];
						player[i].Setplayer_Money(Player_Money[i]+ Start->Pay());
						cout << "**働呪廃 己牒聖 薦須廃 牒税 戚硯聖 潤爽室推**---->";
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
									cout << "益 牒拭澗 闇弘聖 走聖 呪 蒸柔艦陥" << endl;
								}
							}
						}
						player[i].Setplayer_Money(Player_Money[i]);
					}

					//獣拙走繊拭辞税 渡

					else if (j == 6)
					{
						Double_check = 0;
						if (player[i].GetPlayer_Turn() == 0)
						{
							cout << "古辞錘 殿燃生稽 昔背 巷昔亀拭 恭嬢走写柔艦陥. **巷昔亀拭辞 3渡娃 奄陥軒室推!" << endl;
							player[i].SetPlayer_Turn(-2);
						}
						else if (player[i].GetPlayer_Turn() == -2)
						{
							cout << "焼送 殿燃戚 亜獣走 省紹焼推.**巷昔亀拭辞 2渡娃 奄陥軒室推! " << endl;
							player[i].SetPlayer_Turn(-1);
						}
						else if (player[i].GetPlayer_Turn() == -1)
						{
							cout << "焼送 殿燃戚 亜獣走 省紹嬢推.**巷昔亀拭辞 1渡娃 奄陥軒室推!" << endl;
							player[i].SetPlayer_Turn(0);
						}
					}

					//巷昔亀拭辞税 渡


					else if (j == 9 || j == 21)
					{
						Map_Casino* Casino = (Map_Casino*)Space[j];

						cout << "******朝走葛 惟績******" << endl;
						cout << "1-20紫戚税 収切 4鯵研 脊径背爽室推" << endl;

						int Casino_Check = Casino->Game_Casino();
						if (Casino_Check == 0)
						{
							cout << "朝走葛 惟績拭辞 収切 0鯵研 限蓄写柔艦陥." << endl;
							cout << "儀聖 条走 公梅嬢推ばばばば" << endl;
						}
						else if (Casino_Check == 1)
						{
							cout << "朝走葛 惟績拭辞 収切 1鯵研 限蓄写柔艦陥." << endl;
							cout << "儀" << Casino->Pay() << "聖 条醸柔艦陥." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Casino->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 2)
						{
							cout << "朝走葛 惟績拭辞 収切 2鯵研 限蓄写柔艦陥." << endl;
							cout << "儀" << 2 * (Casino->Pay()) << "聖 条醸柔艦陥." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 2 * (Casino->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 3)
						{
							cout << "朝走葛 惟績拭辞 収切 3研 限蓄写柔艦陥." << endl;
							cout << "儀" << 4 * (Casino->Pay()) << "聖 条醸柔艦陥." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 4 * (Casino->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Casino_Check == 4)
						{
							cout << "朝走葛 惟績拭辞 収切 4鯵研 限蓄写柔艦陥." << endl;
							cout << "儀" << 8 * (Casino->Pay()) << "聖 条醸柔艦陥." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Casino->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
					}

					//朝走葛拭辞税 渡

					else if (j == 12)
					{
						Map_Cashgame* Cashgame = (Map_Cashgame*)Space[j];

						if (Cashgame->Game_Cashgame() == 1)
						{
							cout << "CASH GAME拭辞 戚医柔艦陥." << endl;
							cout << "儀" << Cashgame->Pay() << "聖 条醸柔艦陥." << endl;
							player[i].Setplayer_Money(Player_Money[i] + Cashgame->Pay());
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else if (Cashgame->Game_Cashgame() == 2)
						{
							cout << "CASH GAME拭辞 企酵概嬢推." << endl;
							cout << "儀" << (2 * Cashgame->Pay()) << "聖 条醸柔艦陥." << endl;
							player[i].Setplayer_Money(Player_Money[i] + 2 * (Cashgame->Pay()));
							Player_Money[i] = player[i].Getplayer_Money();
						}
						else
						{
							cout << "CASH GAME拭辞 然柔艦陥." << endl;
							cout << "儀聖 条走 公梅嬢推ばば" << endl;
							Player_Money[i] = player[i].Getplayer_Money();
						}
					}

					//CASHGAME拭辞税 渡

					else if (j == 18)
					{
						Double_check = 0;
						if (player[i].GetPlayer_Turn() == 0)
						{
							cout << "!!!!!!因牌拭 尽嬢推!!!!!! 陥製渡拭 室域食楳聖 拝 呪 赤嬢推" << endl;
							player[i].SetPlayer_Turn(1);
						}
					}

					//室域食楳拭辞税 渡

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
					cout << "ばばば戚訓!! 尻紗 室腰生稽 希鷺戚革推!!ばばばば" << endl;
					cout << "****巷昔亀拭辞 蒐 獣娃戚拭推****" << endl;
					Double_check = 0;
				}
			}
			//爽紫是 希鷺 溌昔 敗呪

			if (i == Player_Number - 1)
			{
				i = -1;
			}
			//Player託景研 鋼差獣徹奄 是廃 敗呪
			Sleep(500);
		}
		delete[] player;
		delete[] Player_Money;

	}
}