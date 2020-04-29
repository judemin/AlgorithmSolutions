#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int arr[1001];
	int n, max = -1, i, j,cnt = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	cnt = 1;
	for (i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1])
			cnt++;
		else {
			if (cnt > max)
				max = cnt;
			cnt = 1;
		}
	}
	if (cnt > max)
		max = cnt;
	cout << max;
}