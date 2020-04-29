#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int max = -1, min = 99999999,a;
	while (true) {
		cin >> a;
		if (a == -1)
			break;
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	cout << max - min;
	return 0;
}
