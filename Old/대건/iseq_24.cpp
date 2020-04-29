#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,i,j,cnt;
	cin >> a;
	for(i = 0;i < a;i++){
		for(j = i+1;j < a;j++)
			cout << "  ";
		for(j = 0;j < i*2;j++)
			cout << "* ";
		cout << "*" << endl;
	}
	return 0;
}