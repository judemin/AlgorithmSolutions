/*
#include<iostream>
using namespace std;

int main()
{
	int x,y ,arr[64][64],i,j;
	cin >> y >> x;
	for(i = 0;i < y;i++)
		arr[i][0] = 1;
	for(i  = 0;i < x;i++)
		arr[0][i] = 1;

	for(i = 1;i < y;i++)
	{
		for(j = 1;j < x;j++)
			arr[i][j] = arr[i][j-1]+arr[i-1][j];
	}
	for(i = 0;i < y;i++)
	{
		for(j = 0;j < x;j++)
			cout << arr[i][j]<< " ";
		cout <<endl;
	}
}
*/