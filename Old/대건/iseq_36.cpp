#include<iostream>
#include<Math.h>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i;
	float a,min = 999999999,res;
	for(i = 0;i < 10;i++){
		cin >> a;
		if(abs(a) < min){
			min = abs(a);
			res=a;
		}
	}
	cout << res;
	return 0;
}