#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,c,result,avr;
	cin >> a >> b >>c;
	result = a+b+c;
	avr = result/3;
	cout << result << " " << avr << " ";
	if(avr >= 90)
		cout << "수";
	else if(avr >= 80)
		cout << "우";
	else if(avr >= 70)
		cout << "미";
	else if(avr >= 60)
		cout << "양";
	else
		cout << "가";
}