#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string s[5];
	int i, j;
	for (i = 0; i < 5; i++)
		cin >> s[i];

	for (i = 0; i < 15; i++)
		for (j = 0; j < 5; j++) {
			if(s[j].length() > i)
				cout << s[j][i];
		}
	return 0;
}