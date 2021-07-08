#include<iostream>
#define E 1000000009
using namespace std;

long long int all;
long long int res;
int n,k;
int multi(int a,int b){
	int i,res = 1;
	for(i = 0;i < b;i++)
		res *= a;
	return res;
}

int main(void){
	cin >> n >> k;
	int a,b;
	a = multi(k,n);
	b = multi(k,n-5) * (n - 4) * 2;
	cout << a - b;
	return 0;
}
