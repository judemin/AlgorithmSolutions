/*
#include<iostream>
#include<Windows.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int i = 0;
int kn = 0;
int don;
int y,m,d;
int day;
int j = 0;
int colo;
char dlist[7] = {'M','T','W','T','F','S','S'};
int mlist[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int c = 0;
int s = 0;

void color(int Num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Num);
}
int main(void)
{
	cout << "날자입력:";
	cin >> y >> m >> d;
	if(m > 12 || m == 0)
		m = 1;
	if(d > 31 || d == 0)
		d = 1;
	cout << "요일입력(1:월2:화3:수4:목5:금6:토7:일):";
	cin >> day;
	if(day > 7 || day == 0)
		day = 1;
	cout << "시간입력:";
	cin >> s >> c;
	if(s > 12 || s == 0)
		s = 1;
	if(c > 60 || c == 0)
		c = 1;
	cout << "초기색상입력(흰색은 15입니다):";
	cin >> colo;
	color(colo);
	system("cls");
	while(1)
	{
		kn++;
		Sleep(1000);
		i++;

		if(i == 60)
		{
			i = 1;
			c++;
		}
		if(c == 60)
		{
			c = 1;
			s++;
		}
		if(s == 13)
		{
			s = 1;
			d++;
			day++;
		}
		if(day == 8)
		{
			day = 1;
		}
		if(d > mlist[m-1])
		{
			d = 1;
			m++;
		}
		if(m == 13)
		{
			m = 1;
			y++;
		}
		system("cls");
		cout << y <<"-"<< m <<"-"<< d << " " << dlist[day-1] << ".day" << endl;
		cout << s << "시" << c<<"분"<< i << "초" << endl;

		for(j = 1;kn > j;j++)
		{
			if(kn == 60)
				kn = 0;

			cout << "|";
		}
	}
}
*/