#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,i;
	cin >> a;
	for(i = 1;i <= 9;i++)
		cout << a << " * " << i << " = " << a*i << endl;
	return 0;
}