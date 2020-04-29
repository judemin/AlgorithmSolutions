/*
#include<iostream>
using namespace std;

int main()
{
	int num[20][20] = {0};
	int n,i = 0,j = 0,nm=1,x = 0,y = 0;
	int k;
	cin >> n;
	k = n;
	while(true)
	{
		for(i=0 ;i < k;i++)
		{
			num[y][x] = nm;
			nm++;
			x++;
		}

		x--;
		y++;
		k--;

		if(nm - 1 == n*n)
			break;

		for(j=0 ;j < k;j++)
		{
			num[y][x] = nm;
			nm++;
			y++;
		}

		y--;
		x--;

		if(nm-1 == n*n)
			break;

		for(i=0;i<k;i++)
		{
			num[y][x] = nm;
			nm++;
			x--;
		}

		x++;
		y--;
		k--;

		if(nm -1== n*n)
			break;

		for(i=0;i<k;i++)
		{
			num[y][x] = nm;
			nm++;
			y--;
		}

		y++;
		x++;

		if(nm-1 == n*n)
			break;
	}

	for(i = 0;i < n;i++)
	{
		cout <<"    ";

		for(j = 0;j < n;j++)
			cout <<"    "<<num[i][j];

		cout << endl;
	}
}
*/