#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string a, b = "",c = "";
	int i; bool isb = true;
	cin >> a;
	for (i = 0; i < a.length(); i++) {
		if (a[i] == '@')
			isb = false;
		else if (isb == true)
			b += a[i];
		else
			c += a[i];
	}
	cout << c << "@" << b;
	return 0;
}