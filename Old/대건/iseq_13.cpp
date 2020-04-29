#include<iostream>
using namespace std;

int A[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a;
	while(1)
	{
		cin >> a;
		if(a>12 || a<0)cout << "99" << "\n";
		if(a==0)break;
		cout << A[a] <<"\n";
	}
	return 0;
}