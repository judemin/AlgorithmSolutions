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
		cout << "��";
	else if(avr >= 80)
		cout << "��";
	else if(avr >= 70)
		cout << "��";
	else if(avr >= 60)
		cout << "��";
	else
		cout << "��";
}