#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int arr[1001];

bool sum(int day, int k, int cnt) {
	if (cnt == day)
		return true;
	arr[cnt] = k;

	if (arr[cnt] > arr[cnt - 1])
		return false;
	sum(day, arr[cnt - 1] - k, cnt + 1);
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int d,i,k;
	cin >> d >> k;
	arr[0] = k;
	for (i = 1; i < k; i++) {
		if (k - i > i)
			if (sum(d, k - i, 1) == true)
				break;
	}
	for (i = d-1; i >= 0; i--)
		cout << arr[i] << " ";
}

/*
6 41
41 25 16 9 72

7 218
10 21 31 52 83 135 218
*/