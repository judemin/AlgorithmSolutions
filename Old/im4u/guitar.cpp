/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;
stack<int> s;

int num[200001];
int main()
{
	int n,p,i,ct = 0;
	cin >> n >> p;
	for(i = 0;i <n;i++)
		cin >> num[i];

	s.push(num[0]);
	ct++;
	for(i = 1;i < n;i++)
	{
		if(s.top() < num[i] && s.empty() == false)
		{
			s.push(num[i]);
			ct++;
		}
		else
		{
			while(true)
			{
				if(s.empty() == true)
				{
					s.push(num[i]);
					ct++;
					break;
				}
				if(s.top() == num[i]&&s.empty() == false)
					break;
				if(s.empty() == false&&s.top() < num[i])
				{
					s.push(num[i]);
					ct++;
					break;
				}
				if(s.empty() == false)
				{
					s.pop();
					ct++;
				}
			}
		}
	}
	cout << ct;
}
*/