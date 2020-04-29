/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int maxi,arr[5][5],i,j,n = 0,result = 0;
	for(i= 0;i < 5;i++)
	{
		for(j = 0;j < 5;j++)
			cin >> arr[i][j];
	}
	for(i = 0;i < 5;i++)
	{
		for(j = 0;j < 5;j++)
		{
			maxi = 0;
			if(abs(arr[i][j]) > maxi)
				maxi = abs(arr[i][j]);
		}
		for(j = 0;j < 4;j++)
		{
			if(abs(arr[i][j]) != maxi)
				result += abs(arr[i][j]);
		}
		if(result > maxi)
			n++;
		result = 0;
	}
	if(n == 0)
		cout << "yes";
	else
		cout <<"no";
}*/