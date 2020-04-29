#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int arr[1001];
	int n, i;
	arr[0] = 1;
	arr[1] = 1;
	cin >> n;
	for (i = 2; i < n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[n-1];
	return 0;
}