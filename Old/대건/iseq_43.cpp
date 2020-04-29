#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string a;
	int i;
	cin >> a;
	for (i = a.length() - 1; i >= 0; i--)
		cout << a[i];
	return 0;
}