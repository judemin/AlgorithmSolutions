/*
#include<iostream>
using namespace std;

int main()
{
	int arr[30][30]={0},r = 0,s = 0,i = 0,j = 0;

	cin >> r >> s;
	for(i = 0;i < r;i++)
	{
		for(j = 0;j < i+1;j++)
		{
			arr[j][i] = s;
			s++;
			if(s == 10)
				s = 1;
		}
	}
	for(i = 0;i < r;i++)
	{
		for(int h= 0;h < i;h++)
		{
			cout<<"  ";
		}
		for(j = 0;j < r;j++)
		{
			if(arr[i][j] != 0)
				cout << arr[i][j] <<" ";
		}
		cout << endl;
	}
}
*/