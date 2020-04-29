#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,i,tmp;
	cin >> a >> b;
	for(i = a;i <= b;i++){
		tmp = i%10;
		if(tmp == 3 || tmp == 6 || tmp == 9)
			cout << i << endl;
	}
	return 0;
}