#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,i,j,cnt= 1;
	cin >> a;
	for(i = 0;i < a;i++){
		for(j = 0;j < a;j++)
			cout << cnt++ << " ";
		cout << endl;
	}
	return 0;
}