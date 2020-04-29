#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<string.h>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, cnt = 0,arr[101];
	cin >> n;
	while (true) {
		arr[cnt++] = n % 2;
		if (n / 2 == 0)
			break;
		n /= 2;
	}
	for (int i = cnt- 1; i >= 0; i--)
		cout << arr[i];
	return 0;
}