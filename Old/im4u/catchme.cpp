/*
#include<iostream>
#include<queue>
using namespace std;
int ans[100001];
queue <int> q;

int main()
{
	int s,i,j,e;
	cin >> s >> e;
	for(i = 0;i < 100001;i++)
		ans[i] = -1;
	q.push(s);
	ans[s] = 0;
	while(true)
	{
		if(q.empty() == false)
		{
			if(0 <= q.front()-1 && q.front()-1 <= 100000 && ans[q.front()-1] == -1)
			{
				ans[q.front()-1]=ans[q.front()]+1;
				q.push(q.front()-1);
			}
			if(0 <= q.front()+1 && q.front()+1 <= 100000 && ans[q.front()+1] == -1)
			{
				ans[q.front()+1]=ans[q.front()]+1;
				q.push(q.front()+1);
			}
			if(0 <= q.front()*2 && q.front()*2 <= 100000 && ans[q.front()*2] == -1)
			{
				ans[q.front()*2]=ans[q.front()]+1;
				q.push(q.front()*2);
			}
			if(q.front() == e)
				break;
		}
		else 
			break;
		q.pop();
	}
	cout << ans[e] << endl;
}
*/