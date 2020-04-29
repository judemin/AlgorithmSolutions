#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#define f(x) x*x;

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, res = 0, tmp;
	for (i = 0; i < 5; i++) {
		cin >> tmp;
		res += f(tmp);
	}
	cout << res % 10;
	return 0;
}