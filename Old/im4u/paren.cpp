/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string a[250];
stack <char> s;

int main()
{
	int n,i = 0,j = 0,k;
	cin >> n;
	for(k = 0;k < n;k++)
		cin >> a[k];

	for(k  = 0;k < n;k++)
	{
		j = 0;
		for(i = 0;i < a[k].size();i++)
		{
			if(a[k][i] == '(')
				s.push(a[k][i]);
			else if(a[k][i] == '{')
				s.push(a[k][i]);
			else if(a[k][i] == '<')
				s.push(a[k][i]);
			else if(a[k][i] == '[')
				s.push(a[k][i]);
			else if(s.empty() == false)
			{
				if(s.top() == '(' && a[k][i] == ')')
					s.pop();
				else if(s.top() == '{' && a[k][i] == '}')
					s.pop();
				else if(s.top() == '<' && a[k][i] == '>')
					s.pop();
				else if(s.top() == '[' && a[k][i] == ']')
					s.pop();
				else 
					j = 1;
			}
			else
				j = 1;
		}
		while(true)
		{
			if(s.empty() == false)
				s.pop();
			else
				break;
		}
		if(s.empty() == false)
			cout << "No"<<endl;
		else if(j == 1)
			cout << "No"<<endl;
		else
			cout << "Yes"<<endl;
	}
}
*/