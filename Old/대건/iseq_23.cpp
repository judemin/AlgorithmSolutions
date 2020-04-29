#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i,j,a;
	cin >> a;
	if(a >= 10)
		cout << "Wrong Input";
	else
		for(i = 1;i <= a;i++){
			for(j = 0;j < i;j++)
				cout << j+1;
			cout << endl;
		}
	return 0;
}