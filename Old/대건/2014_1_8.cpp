#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, max = -1, num = 0, tmp;
	for (i = 0; i < 9; i++) {
		cin >> tmp;
		if (tmp > max) {
			max = tmp;
			num = i + 1;
		}
	}
	cout << max << endl << num;
	return 0;
}