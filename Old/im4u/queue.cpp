/*
#include<iostream>
#include<queue>
#include<string>
using namespace std;
queue<int> a;
string in;

void push()
{
	int i;
	cin >> i;
	a.push(i);
}
void pop()
{
	if(a.empty() == false)
		a.pop();
	else
		cout << "error"<<endl;
}
void front()
{
	if(a.empty() == false)
		cout << a.front()<<endl;
	else
		cout << "error"<<endl;
}
void empty()
{
	if(a.empty() == true)
		cout << "true"<<endl;
	else
		cout << "false"<<endl;
}
int main()
{
	int n,i,j;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> in;
		if(in == "push")
			push();
		if(in == "pop")
			pop();
		if(in == "front")
			front();
		if(in == "empty")
			empty();
	}
}
*/