/*
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

class score
{
public:
	char name[10];
	int num;
	score()
	{
		num = 0;
	}
};
bool compare(score a,score b)
{
	if(a.num > b.num)
		return 1;
	else if(a.num == b.num && strcmp(a.name,b.name) < 0)
		return 1;
	else
		return 0;
}
score s[200000];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%s",&s[i].name);
		scanf("%d",&s[i].num);
	}
	sort(s,s+n,compare);
	for(i = 0;i < n;i++)
		printf("%s %d\n",s[i].name,s[i].num);
} 
*/