/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

class frac
{
public:
	int mother;
	int son;
	float result;
};
bool compare(frac a,frac b)
{
	a.result = 1.0 * a.son / a.mother;
	b.result = 1.0 * b.son / b.mother;
	if(a.result < b.result)
		return 1;
	else if(a.result == b.result && a.son < b.son)
		return 1;
	else
		return 0;
}
frac f[200002];
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&f[i].son);
		scanf("%d",&f[i].mother);
	}
	sort(f,f+n,compare);
	for(i =0;i < n;i++)
		printf("%d/%d \n",f[i].son,f[i].mother);
}
*/