#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,res1 = 0,res2 = 0,res3 = 0,i;
	for(i = 0;i < 10;i++){
		cin >> a;
		if(a >= 100)
			res3+=a;
		else if(a >= 10)
			res2+=a;
		else
			res1+=a;
	}
	cout << res1 << endl << res2 << endl << res3 << endl;
	return 0;
}