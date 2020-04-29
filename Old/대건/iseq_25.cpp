#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i,j,a;
	cin >> a;
	for(i = 0;i < a;i++){
		for(j = 0;j < i;j++)
			cout << " ";
		for(j = i;j < a;j++)
			cout << j+1 ;
		cout << endl;
	}
	return 0;
}