/*
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include<conio.h>
using namespace std;

int main()
{
	int grade;
	int hard,c = 0,n = 0,yon = 1;
	int a,i,j,h,k,arr[20][20],input,result;
	srand(time(NULL));
	cout <<"Moment Detection Skill Test v2.3(English)"<<endl<<"Press -1 while test to exit"<<endl<< "(Num:1~100)1:Easy 2:Normal 3:Hard"<<" ";
	cin >> hard;
	if(hard == 1)
		yon = 1;
	else if(hard == 2)
		yon = 1;
	else if(hard == 3)
		yon = 1;
	else
		yon = -1;
	cout << "If you are ready press any key";
	getch();
	system("cls");
	if(yon == true)
	{
		cout <<"Test will start after 3 second:";
		for(a = 3;a > 0;a--)
		{
			cout << a;
			Sleep(1000);
		}
		while(true)
		{
			for(h = 0;h < 20;h++)
			{
				for(k = 0;k < 20;k++)
					arr[h][k] = -1;
			}
			i = rand() %21;
			j = rand() %21;
			arr[i][j] = rand()%100;
			result = arr[i][j];
			for(h = 0;h < 20;h++)
			{
				for(k = 0;k < 20;k++)
				{
					if(arr[h][k] == -1)
						cout << " ";
					else
						cout << arr[h][k];
				}
				cout << endl;
			}
			if(hard == 1)
				Sleep(50);
			if(hard == 2)
				Sleep(30);
			if(hard == 3)
				Sleep(1);
			system("cls");
			cout << "Input number that you saw:";
			cin >> input;
			if(input < 0 || input > 100)
			{
				cout <<"ERROR:Unappropriate Number" << endl;
				input == 0;
			}
			if(input == -1)
			{
				grade = (c+n)/2;
				cout <<c<<"Correct"<<" "<<n<<"Wrong"<<endl<< "Average:"<<grade<<endl;
				if(c > grade)
					cout <<"Yor Grade is : High"<<endl;
				if(c < grade)
					cout <<"Yor Grade is : Low"<<endl;
				if(c == grade)
					cout <<"Yor Grade is : Middle"<<endl;
				cout <<"Nice Job"<<endl;
				Sleep(1000);
				break;
			}
			else if(input == result)
			{
				cout << "Correct!"<<endl;
				c++;
			}
			else
			{
				cout << "Not Correct!"<<endl;
				cout <<"Answer is:"<<result<<endl;
				n++;
			}
			cout <<c<<"Correct"<<" "<<n<<"Wrong"<<endl;
			cout << "If you are ready press any key";
			getch();
			system("cls");
			cout <<"Next Number:";
			for(a = 3;a > 0;a--)
			{
				cout << a;
				Sleep(1000);
			}
			system("cls");
		}
	}
	if(yon == -1)
		cout << "ERROR:No Such Command"<< endl;
} 
*/