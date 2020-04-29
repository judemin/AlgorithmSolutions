#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b;
	cin >> a >> b;
	cout << a+b;
	if(a+b >= 140)
		cout << " 합격";
	else
		cout << " 불합격";
}