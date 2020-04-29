/*
#include<iostream>
#include<queue>
using namespace std;
queue <int> q;

int an[10000];
int main()
{
	int y;
	int a,b[10];
	int n,i,j;
	int x,l = 0;
	for(i = 0;i < 10000;i++)
		an[i] = -1;
	cin >> a >> y;
	cin >> n;
	for(i = 0;i < n;i++)
		cin >> b[i];
	q.push(a);
	an[a] = 0;
	while(true)
	{
		if(q.empty() == true)
		{
			cout << "-1";
			break;
		}
		if(q.front() == y)
		{
			cout << an[q.front()];
			break;
		}
		for(i = 0;i < n;i++)
		{
			if(an[(q.front()+b[i])%10000] == -1)
			{
				x = (q.front()+b[i])%10000;
				q.push(x);
				an[x] = an[q.front()]+1;
			}
		}
		q.pop();
	}
}
*/