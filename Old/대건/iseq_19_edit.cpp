#include<iostream>
#include<String>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string a,b;
	int tmp,c;
	cin >> a >> b >> c;
	a+=b;
	tmp = atoi(a.c_str());
	tmp += c;
	cout << tmp;
	return 0;
}
//