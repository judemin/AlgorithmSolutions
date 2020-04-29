/*
#include<iostream>
using namespace std;

int main()
{
	int num[33][33];
	int n,i,j,h = 0;
	for(i = 0;i < 33;i++)
	{
		for(j = 0;j < 33;j++)
			num[i][j] = 0;
	}
	cin >> n;
	num[1][1] = 1;
	num[2][1] = 1;num[2][2] = 1;

	for(i = 3;i <= n;i++)
	{
		for(j = 1;j <= i;j++)
			num[i][j] = num[i-1][j-1] + num[i-1][j];
	}

	for(i = 0;i < 30;i++)
	{
		for(j = 0;j < 30;j++)
		{
			if(num[i][j] != 0)
			{
				cout <<num[i][j]<<" ";
				h++;
			}
		}
		if(h == i)
		{
			cout<<endl;
			h = 0;
		}
	}
}
*/