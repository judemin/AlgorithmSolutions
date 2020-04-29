/*
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack<int> s;

void st(char n[10])
{
	if(strcmp(n,"n") == 0)
	{
		int i = 0;
	}
	else if(strcmp(n,"top") == 0 && s.empty() == false)
		cout << s.top()<<endl;
	else if(strcmp(n,"pop") == 0 && s.empty() == false)
		s.pop();
	else if(strcmp(n,"empty") == 0)
	{
		if(s.empty() == true)
			cout << "true"<<endl;
		if(s.empty() == false)
			cout << "false"<<endl;
	}
	else 
		cout << "error"<<endl;
}
int main()
{
	int n,i,j;
	
	char u[1000][10];
	cin >> n;
	for(i = 0;i <n;i++)
	{
		cin >> u[i];
		// strcmp(a, b) = -1, 0, 1
		if(strcmp(u[i],"push") == 0)
		{
			cin >> j;
			s.push(j);
			strcpy(u[i],"n");
		}
		st(u[i]);
	}
	return 0;
}
*/