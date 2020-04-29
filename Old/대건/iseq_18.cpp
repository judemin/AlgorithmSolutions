#include<iostream>
#include<String>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string str;
	int i,result = 0;
	for(i = 0;i < 5;i++){
		cin >> str;
		result+=str.length();
	}
	cout << result;
	return 0;
}