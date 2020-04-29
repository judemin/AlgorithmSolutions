#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, min = 987654321, res = 0, tmp;
	for (i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2 == 1) {
			res += tmp;
			if (tmp < min)
				min = tmp;
		}
	}
	if (res == 0)
		cout << -1;
	else {
		cout << res << endl << min;
	}
}