#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,max = -1,min = 999999999,i;
	for(i = 0;i < 10;i++){
		cin >> a;
		if(a > max)
			max = a;
		if(a < min)
			min = a;
	}
	cout << max << endl << min;
	return 0;
}