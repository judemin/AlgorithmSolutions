#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char arr[10] = { 'Y','B','K','E','A','R','N','D','O','G' };
	string str;
	int i;
	cin >> str;
	for (i = 0;i < str.length(); i++)
		cout << arr[str[i] - '0'];
	return 0;
}
