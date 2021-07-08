#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, a, i, j, DATA[101] = { 0 };

	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a;
		DATA[a] += 1;
	}

	for (i = 1; i <= 100; i++) {
		if (DATA[i] != 0) {
			for (j = 1; j <= DATA[i]; j++)
				cout << DATA[i];
		}
	}

	return 0;
}