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
	cout << "�����Է�:";
	cin >> y >> m >> d;
	if(m > 12 || m == 0)
		m = 1;
	if(d > 31 || d == 0)
		d = 1;
	cout << "�����Է�(1:��2:ȭ3:��4:��5:��6:��7:��):";
	cin >> day;
	if(day > 7 || day == 0)
		day = 1;
	cout << "�ð��Է�:";
	cin >> s >> c;
	if(s > 12 || s == 0)
		s = 1;
	if(c > 60 || c == 0)
		c = 1;
	cout << "�ʱ�����Է�(����� 15�Դϴ�):";
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
		cout << s << "��" << c<<"��"<< i << "��" << endl;

		for(j = 1;kn > j;j++)
		{
			if(kn == 60)
				kn = 0;

			cout << "|";
		}
	}
}
*/