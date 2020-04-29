#include<iostream>
#include<String>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string str;
	cin >> str;
	printf("%c %d",str[2],str[2]);
	return 0;
}