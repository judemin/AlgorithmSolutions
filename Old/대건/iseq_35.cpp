#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,i,tmp;
	cin >> a >> b;
	if(a  > b){
		tmp = a;
		a = b;
		b = tmp;
	}
	for(i = 1;i <= a;i++)
		if(a % i == 0 && b % i == 0)
			tmp = i;
	cout << tmp;
	return 0;
}