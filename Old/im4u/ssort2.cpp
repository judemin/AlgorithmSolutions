/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class n
{
public:
	string fname;
	string name;
};
bool compare(n a,n b)
{
	if(a.fname.size() + a.name.size() < b.fname.size() + b.name.size())
		return 1;
	else if(a.fname.size() + a.name.size() == b.fname.size() + b.name.size() && a.fname < b.fname)
		return 1;
	else if(a.fname.size() + a.name.size() == b.fname.size() + b.name.size() && a.fname == b.fname && a.name < b.name)
		return 1;
	else 
		return 0;
}
n a[200001];
int main()
{
	int n,i;
	cin >> n;
	for(i = 0;i < n;i++)
		cin >> a[i].fname>>a[i].name;
	sort(a,a+n,compare);
	for(i = 0;i < n;i++)
		cout <<a[i].fname<<" "<<a[i].name<<endl;
	return 0;
}
*/