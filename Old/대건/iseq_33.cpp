#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a;
	cin >> a;
	if(a % 400 == 0)
		cout << "����";
	else if(a % 100 != 0 && a % 4 == 0)
		cout << "����";
	else
		cout << "���";
	return 0;
}