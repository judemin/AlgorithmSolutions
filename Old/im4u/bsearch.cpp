/*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

long long num[500002];
long long qum[100002];
int main()
{
	long long n,q,i,j;
	long long r,l,m;

	cin >> n >> q;
	for(i = 0;i < n;i++)
		scanf("%lld",&num[i]);
	for(i = 0;i < q;i++)
		scanf("%lld",&qum[i]);
	sort(num,num+n);

	for(i = 0;i < q;i++)
	{
		l = 0;
		r = n - 1;
		while(true)
		{
			m = (l+r)/2;
			if(num[m] < qum[i])
				l = m+1;
			if(num[m] > qum[i])
				r = m-1;
			if(num[m] == qum[i])
			{
				printf("Yes\n");
				break;
			}
			if(l > r)
			{
				printf("No\n");
				break;
			}
		}
	}
}
*/