/*
#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
using namespace std;

void color(int Num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Num);
}
int main()
{
	color(15);
	int ln[7];
	int num;
	int i;
	int ke;
	int temp;
	srand(time(NULL));
	while(1)
	{
		cout << "언어를 설정해주세요(1:한글2:영어)"<<endl<<"Choose your Language(1:Korean2:English):";
		cin >> ke;

		if(ke == 1)
			break;
		else if(ke == 2)
			break;
	}
	while(1)
	{
		system("cls");
		if(ke == 1)
		{
			while(1)
			{
				cout << "행";Sleep(100);cout << "운";Sleep(100);cout << "번";Sleep(100);cout << "호";Sleep(100);
				cout << "생";Sleep(100);cout << "성";Sleep(100);cout << "기";Sleep(100);cout << "v";Sleep(100);
				cout << "1";Sleep(100);cout << ".";cout << "2" << endl;Sleep(500);

				cout << "1:생성2:색상변경3:지우기4:종료:";
				cin >> i;
				if(i == 1)
				{
					cout << endl;
					cout << "생성중";
					for(num = 0;num < 6;num++)
					{
						ln[num] = rand()%46;
						while(1)
						{
							if(ln[num] == 0)
								ln[num] = rand()%46;
							else
								break;
						}
						cout << ".";
						Sleep(100);
					}
					cout << endl;


					for(num = 0;num < 6;num++)
					{
						for(int j = num+1;j < 6;j++)
						{ 
							while(1)
							{
								if(ln[num] == ln[j])
								{
									ln[num] = rand()%46;
								}
								else
									break;
							}
						}
					}

					for(num = 0;num < 6;num++)
					{
						for(int j = num+1;j < 6;j++)
						{
							if(ln[num] > ln[j])
							{
								temp = ln[num];
								ln[num] = ln[j];
								ln[j] = temp;
							}
						}
					}

					for(num = 0;num < 6;num++)
					{
						cout << ln[num] << " ";
						Sleep(150);
					}
					Sleep(100);
					cout << endl;
					cout << endl;
				}

				else if(i == 2)
				{
					cout << "색상코드입력(흰색은 15번입니다):";
					cin >> num;
					color(num);
				} 
				else if(i == 3)
				{
					system("cls");
				}
				else
				{
					system("cls");
					cout<<"만든이:민상연"<<endl<<"감사합니다!";
					getch();
					break;
				}
			}
		}
		if(ke == 2)
		{
			cout << "L";Sleep(100);cout << "u";Sleep(100);cout << "c";Sleep(100);cout << "k";Sleep(100);
			cout << "y";Sleep(100);cout << "N";Sleep(100);cout << "u";Sleep(100);cout << "m";Sleep(100);
			cout << "b";Sleep(100);cout << "e";cout << "r";Sleep(100);
			cout << "C";Sleep(100);cout << "r";Sleep(100);cout << "e";Sleep(100);cout << "a";Sleep(100);
			cout << "t";Sleep(100);cout << "e";Sleep(100);cout << "r";Sleep(100);cout << " v";Sleep(100);
			cout << "1.";Sleep(100);cout << "2"<<endl;Sleep(500);

			cout << "1:Create2:ChangeColor3:Erase4:End:";
			cin >> i;
			if(i == 1)
			{
				cout << endl;
				cout << "Creating";
				for(num = 0;num < 6;num++)
				{
					ln[num] = rand()%46;
					while(1)
					{
						if(ln[num] == 0)
							ln[num] = rand()%46;
						else
							break;
					}
					cout << ".";
					Sleep(100);
				}
				cout << endl;


				for(num = 0;num < 6;num++)
				{
					for(int j = num+1;j < 6;j++)
					{ 
						while(1)
						{
							if(ln[num] == ln[j])
							{
								ln[num] = rand()%46;
							}
							else
								break;
						}
					}
				}

				for(num = 0;num < 6;num++)
				{
					for(int j = num+1;j < 6;j++)
					{
						if(ln[num] > ln[j])
						{
							temp = ln[num];
							ln[num] = ln[j];
							ln[j] = temp;
						}
					}
				}

				for(num = 0;num < 6;num++)
				{
					cout << ln[num] << " ";
					Sleep(150);
				}
				Sleep(100);
				cout << endl;
				cout << endl;
			}

			else if(i == 2)
			{
				cout << "InsertColorCode(White is Number15):";
				cin >> num;
				color(num);
			} 
			else if(i == 3)
			{
				system("cls");
			}
			else
			{
				system("cls");
				cout<<"Made by:MinSangYeon"<<endl<<"Thank you!";
				getch();
				break;
			}
		}
		if(i >= 4)
			break;
		else if(i == 0)
			break;
	}
}
*/