/*
#include<stdio.h>
#include<iostream>
#include<Windows.h>

void color(int Num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Num);
}
int main()
{
	color(15);
	int h = 0,m = 0,s = 1,i = 10;
	system("cls");
	while(true)
	{
		if(s == 60)
		{
			m++;
			s = 1;
		}
		if(m == 60)
		{
			h++;
			m = 1;
		}
		if(h == 999999999)
		{
			h = 0;
			m = 0;
			s = 0;
		}
		if(i == 16)
			i = 10;
		color(15);
		system("cls");
		printf("Timer.beta \n");
		color(i);
		printf("Time Spend:");
		if(h == 0 && m == 0)
			printf("%ds",s);
		else if(h == 0)
			printf("%dm%ds",m,s);
		else
			printf("%dh%dm%ds",h,m,s);
		Sleep(1000);
		i++;
		s++;
	}
}
*/