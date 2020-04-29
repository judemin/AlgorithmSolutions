#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, i, j;
	cin >> n;
	for (i = 0; i < (n / 2)+1; i++) {
		for (j = i; j < (n / 2); j++)
			cout << "  ";
		for (j = 0; j <= i * 2; j++)
			cout << "* ";
		cout << endl;
	}
	for (i = (n / 2)-1; i >= 0; i--) {
		for (j = i; j < (n / 2); j++)
			cout << "  ";
		for (j = 0; j <= i * 2; j++)
			cout << "* ";
		cout << endl;
	}
	return 0;
}