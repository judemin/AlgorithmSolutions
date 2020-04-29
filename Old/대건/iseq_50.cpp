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
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-i; j++)
			cout << " ";
		for (j = 0; j <= i; j++)
			cout << j + 1;
		for (j = i; j > 0; j--)
			cout << j;
		cout << endl;
	}
	return 0;
}