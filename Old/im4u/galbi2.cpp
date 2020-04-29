/*
#include<iostream>
#include<queue>
using namespace std;
queue <int> q;
int an[10000];

bool isprime(int x)
{
	int j = 0;
	if(x == 1)
		return 0;
	for(int k = 2;k*k <= x;k++)
	{
		if(x%k == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int s,e,i,j,l = 0;
	int a,b,c,d,x;
	cin >> s >> e;
	for(i = 0;i < 10000;i++)
		an[i] = -1;
	q.push(s);
	an[s] = 1;
	//an[s] = an[s]+1;
	while(true)
	{
		if(q.front() == e)
			break;
		else if(q.empty() == true)
			break;
		x = q.front();
		for(i = 0;i < 10;i++)
		{
			a = (x/10) * 10 + i;
			b = (x/100) * 100 + (i*10) + (x%10);
			c = (x/1000) * 1000 + (i*100) + (x%100);
			d = i*1000 + (x % 1000);
			if(isprime(a) && an[a] == -1)
			{
				q.push(a);
				an[a] = an[x]+1;
			}
			if(isprime(b)&& an[b] == -1)
			{
				q.push(b);
				an[b] = an[x]+1;
			}
			if(isprime(c)&& an[c] == -1)
			{
				q.push(c);
				an[c] = an[x]+1;
			}
			if(i != 0 && isprime(d)&& an[d] == -1)
			{
				q.push(d);
				an[d] = an[x]+1;
			}
		}
		if(q.empty() == false)
			q.pop();
	}
	cout << an[e];
}
*/