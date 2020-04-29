#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int price[6] = {0,5000,6000,7000,10000,20000};
	int i,a,b,c;
	while(true){
		cin >> a >> b >> c;
		if(a == 0)
			break;
		cout <<price[a]+price[b]+price[c] << endl;
	}
}