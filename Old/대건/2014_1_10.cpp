#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int tmp, i, mid, res = 0;
	for (i = 0; i < 5; i++) {
		cin >> tmp;
		if (i == 2)
			mid = tmp;
		res += tmp;
	}
	cout << res / 5 << endl << mid;
	return 0;
}