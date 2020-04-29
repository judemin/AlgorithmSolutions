#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int N,i,result = 0;
	cin >> N;
	if(N%2 == 0)
		for(i = 2;i <= N;i+=2)
			result+=i;
	else
		for(i = 1;i <= N;i+=2)
			result+=i;
	cout << result;
	return 0;
}