/*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
	int p = 0;
	int max = 0;
	int arr[100];
	int n,m,i,l,r,mi;
	cin >> n >> m;
	for(i = 0;i < n;i++)
	{
		cin >> arr[i];
		if(max < arr[i])
			max = arr[i];
	}
	l = 1;
	r = max;
	while(true)
	{
		if(l > r)
			break;
		mi = (l+r)/2;
		max = 0;
		for(i = 0;i < n;i++)
			max += arr[i]/mi;
		if(max >= m)
		{
			 if(mi > p)
				p = mi;
			 l = mi+1;
		}
		if(max < m)
			r = mi-1;
	}
	cout << p;
}
*/