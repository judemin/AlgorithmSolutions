#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int arr[20001];
	int n, k,i,cnt = 0;
	for (i = 0; i < 2001; i++)
		arr[i] = 0;
	cin >> n >> k;
	for (i = 1; i <= n / 2 + 1; i++)
		if (n %i == 0)
			arr[cnt++ ] = i;
	arr[cnt++] = n;
	cout << arr[k - 1];
}