#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int num,i;
	while(true){
		cin >> num;
		if(num == 0)
			break;
		for(i = 0;i < num;i++)
			cout << "*";
		cout << endl;
	}
	return 0;
}