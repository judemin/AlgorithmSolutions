#include<iostream>
#include<String>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string a;
	int i,res = 0;
	cin >> a;
	for(i=0;i<a.length();i++)
		res+=(a[i]-'0');
	cout << res;
}
//