/*
#include<iostream>
#include<conio.h>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


char mch;
int mca = 0;
void color(int Num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Num);
}
class game
{
private:
public:
	void make()
	{
		int temp;
		temp = rand() %4;
		if(temp == 0)
		{
			temp = rand()%10;
			mch = '¢»';
			if(temp == 0)
				mca = 1;
			if(temp == 1)
				mca = 2;
			if(temp == 2)
				mca = 3;
			if(temp == 3)
				mca = 4;
			if(temp == 4)
				mca = 5;
			if(temp == 5)
				mca = 6;
			if(temp == 6)
				mca = 7;
			if(temp == 7)
				mca = 8;
			if(temp == 8)
				mca = 9;
			if(temp == 9)
				mca = 10;
		}
		if(temp == 1)
		{
			temp = rand()%10;
			mch = '¢¿';
			if(temp == 0)
				mca = 1;
			if(temp == 1)
				mca = 2;
			if(temp == 2)
				mca = 3;
			if(temp == 3)
				mca = 4;
			if(temp == 4)
				mca = 5;
			if(temp == 5)
				mca = 6;
			if(temp == 6)
				mca = 7;
			if(temp == 7)
				mca = 8;
			if(temp == 8)
				mca = 9;
			if(temp == 9)
				mca = 10;
		}
		if(temp == 2)
		{
			temp = rand()%10;
			mch = '¢¾';
			if(temp == 0)
				mca = 1;
			if(temp == 1)
				mca = 2;
			if(temp == 2)
				mca = 3;
			if(temp == 3)
				mca = 4;
			if(temp == 4)
				mca = 5;
			if(temp == 5)
				mca = 6;
			if(temp == 6)
				mca = 7;
			if(temp == 7)
				mca = 8;
			if(temp == 8)
				mca = 9;
			if(temp == 9)
				mca = 10;
		}
		if(temp == 3)
		{
			temp = rand()%10;
			mch = '¡ß';
			if(temp == 0)
				mca = 1;
			if(temp == 1)
				mca = 2;
			if(temp == 2)
				mca = 3;
			if(temp == 3)
				mca = 4;
			if(temp == 4)
				mca = 5;
			if(temp == 5)
				mca = 6;
			if(temp == 6)
				mca = 7;
			if(temp == 7)
				mca = 8;
			if(temp == 8)
				mca = 9;
			if(temp == 9)
				mca = 10;
		}
	}
	void load()
	{
		cout << "Starting game";Sleep(1000);Sleep(10);cout<<"|-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";cout <<"|";
		system("cls");
	}
	void process()
	{
		cout <<"Processing GameData";Sleep(1000);Sleep(10);cout<<"|-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";
		Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";Sleep(10);cout<<"-";cout <<"|";
		system("cls");
	}
};
int main(void)
{
	srand(time(NULL));
	game g;
	int winner;
	int select;

	char cch;
	int cca = 0;

	char ch1[100];
	int ca1[100];

	char ch2[100];
	int ca2[100];

	char p1card[100][10],p2card[100][10];
	char p1[100],p2[100];
	int i,j;
	int cardn = 4;
	int in;
	char tmp[10];
	int cn1 = 0,cn2 = 0;

	cout << "CardMaster.beta"<<endl;
	cout <<"No king,queen,jump,and other SORRY!"<<endl;
	cout << "Insert p1 name:";
	cin >> p1;
	cout <<"Insert p2 name:";
	cin >> p2;
	cout <<"How many start card?(3~7):";
	cin >> cardn;
	if(cardn < 3)
		cardn == 3;
	if(cardn > 7)
		cardn == 7;
	cout <<"If "<< p1 <<" ready press any key:";
	getch();
	cout <<endl<< p1<<" Ready!"<<endl;
	cout <<"If "<<p2<<" ready press any key:";
	getch();
	cout <<endl<< p2<<" Ready!"<<endl;
	Sleep(2000);
	system("cls");
	g.make();
	cch = mch;
	cca = mca;
	g.process();
	for(i = 0;i < cardn;i++)
	{
		g.make();
		ch1[i] = mch;
		ca1[i] = mca;
		cn1++;
	}
	for(i = 0;i < cardn;i++)
	{
		g.make();
		ch2[i] = mch;
		ca2[i] = mca;
		cn2++;
	}
	cout <<"Compelete!"<<endl;
	g.load();
	while(true)
	{
		cout << p1<<"¡ç"<<endl<<p2<<endl<<endl;
		cout <<"MainCard:"<<cch<<cca<<endl<<endl;
		for(i = 0;i < cn1;i++)
			cout <<i+1<<":"<< ch1[i]<<ca1[i]<<" ";

		cout <<i+1<<":GetCard"<<endl;
		while(true)
		{
			cout <<"InputCard:";
			cin >> in;
			if(in == i+1)
			{
				g.make();
				ch1[i] = mch;
				ca1[i] = mca;
				cn1++;
				break;
			}
			if(ch1[in-1] == cch || ca1[in-1] == cca)
			{
				cch = ch1[in-1];cca = ca1[in-1];
				ch1[in-1] = ch1[cn1];ca1[in-1] = ca1[cn1];
				ca1[cn1] = 0;ch1[cn1] = 0;
				cn1--;
				break;
			}
			else
				cout <<"Oops!Tryagain!"<<endl;
		}
		system("cls");
		if(cn1 == 0)
			break;



		cout << p1<<endl<<p2<<"¡ç"<<endl<<endl;
		cout <<"MainCard:"<<cch<<cca<<endl<<endl;
		for(i = 0;i < cn2;i++)
			cout <<i+1<<":"<< ch2[i]<<ca2[i]<<" ";

		cout <<i+1<<":GetCard"<<endl;
		while(true)
		{
			cout <<"InputCard:";
			cin >> in;
			if(in == i+1)
			{
				g.make();
				ch2[i] = mch;
				ca2[i] = mca;
				cn2++;
				break;
			}
			if(ch2[in-1] == cch || ca2[in-1] == cca)
			{
				cch = ch2[in-1];cca = ca2[in-1];
				ch2[in-1] = ch2[cn2];ca2[in-1] = ca2[cn2];
				ca2[cn2] = 0;ch2[cn2] = 0;
				cn2--;
				break;
			}
			else
				cout <<"Oops!Tryagain!"<<endl;
		}
		system("cls");
		if(cn2 == 0)
			break;
	}
	if(winner == 1)
		cout << p1 <<" is the winner!¡Ù¡Ù¡Ù"<<endl<<"Congratulations!";
	if(winner == 2)
		cout << p2 <<" is the winner!¡Ù¡Ù¡Ù"<<endl<<"Congratulations!";
	cout <<endl<<"Thank You For Playing!";
	cout <<endl<<"¡ØErrors And Bugs to judemin2087@naver.com";
	cout <<endl<<"Thank You!";
	getch();
}
//¢»¢¿¢¾¡ß¡æ¡ç¡Ø¡Ù
*/