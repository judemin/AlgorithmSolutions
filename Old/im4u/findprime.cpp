/*
#include<iostream>
#include<string>
using namespace std;
string a;


int main()
{
	int n,j = 0,i,k = 0;
	cin >> n;
	for(i = 1;i <= n*4;i++)
	{
		for(int h = 2;h < 4*i;h++)
		{
			if((4*i+1) % h == 0)
			{
				j = 1;
				break;
			}
		}
		if(j == 0)
			k++;

		j = 0;
		if(k == n)
		{
			cout << (i*4)+1;
			break;
		}
	}
}
*/