#include<iostream>
using namespace std;

bool isPrime(int a){
	int i;
	for(i = 2;i < a;i++)
		if(a%i == 0)
			return false;
	return true;
}

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int M,N,i;
	cin >> M >> N;
	for(i = M;i <= N;i++)
		if(isPrime(i) == true)
			cout << i << " ";
	return 0;
}