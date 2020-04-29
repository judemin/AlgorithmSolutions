/*
#include<conio.h>
#include<iostream>
#include<Windows.h>
#include<stdio.h>
using namespace std;

void color(int Num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Num);
}
int main()
{
	color(15);
	int h = 0,m =0,s = 0,i = 15;
	cout <<"CountDown.beta"<<endl;
	cout <<"Input Hour:";
	cin >> h ;
	cout <<"Input Minute:";
	cin >>m;
	cout <<"Input Second:";
	cin >>s;
	if(h > 99999999)
		h = 99999999;
	if(s > 59)
	{
		m+=s/60;
		s = s%60;
	}
	if(m > 59)
	{
		m+=h/60;
		m = m%60;
	}
	while(true)
	{
		if(m > 0 && s == 0)
		{
			m--;
			s = 59;
		}
		if(h  > 0 && m == 0)
		{
			h--;
			m = 59;
		}
		if(h <= 0 && m <= 0 && s <= 0)
		{
			color(15);
			system("cls");
			cout <<"Time Ends";
			Sleep(500);
			cout <<"!";
			Sleep(500);
			cout <<"!";
			Sleep(500);
			cout <<"!"<<endl;
			break;
		}
		if(i == 16)
			i = 10;
		color(i);
		i++;
		system("cls");
		cout <<"CountDown.beta" <<endl;
		cout <<"Time Left:";
		if(h <= 0 && m <= 0)
			printf("%ds",s);
		else if(h <= 0)
			printf("%dm%ds",m,s);
		else
			printf("%dh%dm%ds",h,m,s);
		s--;
		Sleep(1000);
	}
	getch();
}
*/