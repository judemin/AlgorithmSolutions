/*
#include<iostream>
#include<queue>
using namespace std;

int f[300];

bool isprime(int x)
{
	int j = 0;
	if(x == 1)
		return 0;
	for(int k = 2;k*k <= x;k++)
	{
		if(x%k == 0)
			j = 1;
	}
	if(j == 1)
		return 0;
	else 
		return 1;
}

int main()
{
	f[300] = 100000000000;
	int n,i,j = 0,k = 2,l = 2;
	cin >> n;
	f[0] = 2;
	f[1] = 3;
	l = 2;
	for(i=5; i<=100000;i++)
	{
		if(isprime(i))
		{
			int k = 0;
			if(i < 10)
				k = 1;
			if(i > 10 && i < 100)
				k = 2;
			if(i > 100 && i < 1000)
				k = 3;
			if(i > 1000 && i < 10000)
				k = 4;
			if(i > 10000 && i < 100000)
				k = 5;
			int x = i;
			int check = 0;
			for(j=1; j<=k-1; j++)
			{
				x = x / 10;
				if(isprime(x) == 0)
				{
					check = 1;
				}
			}
			if(check == 0)
			{
				f[l] = i;
				l++;
			}
		}
	}
	int y[10] = {0, 1, 10, 100, 1000, 10000, 100000};
	i = 0;
	while(true)
	{
		if(f[i] > y[n+1])
			break;
		if(f[i] < y[n+1] && f[i] > y[n])
			cout << f[i]<<endl;
		i++;
	}
	return 0;
}
*/