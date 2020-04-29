/*
#include<iostream>
using namespace std;

int main()
{
	int n = 0,i,j,x = 0,y = 0;
	int num[20][20];
	cin >> n;
	x = n/2;
	num[y][x] = 1;
	for(i = 2;i <= n*n;i++)
	{
		y--;
		x++;
		if(y == -1)
			y = n-1;
		if(x >= n)
			x = 0;
		num[y][x] = i;
		if(i%n == 0)
			y++;
	}
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			cout <<"  "<<num[i][j];
		}
		cout <<endl;
	}
}
*/