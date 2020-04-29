#include<iostream>
#include<String>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string str;
	int i;
	cin >> str;
	for(i = 0; i< str.length();i++){
		if(str[i] == 'A')
			cout << "*";
		else
			cout << str[i];
	}
	return 0;
}