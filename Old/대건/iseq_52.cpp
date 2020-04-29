#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int cnt = 0, i, j, n = 0, arr[101][101];
	cin >> n;
	for (i = 0; i < 101; i++)
		for (j = 0; j < 101; j++)
			arr[i][j] = 0;
	arr[0][0] = 1;
	arr[1][0] = 1; arr[1][1] = 0;
	cnt = 3;
	for (i = 2; i < n; i++) {
		arr[i][0] = 1;
		for (j = 1; j < cnt; j++)
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		cnt++;
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++)
			cout << " ";
		for (j = 0; j < n; j++) {
			if (arr[i][j] == 0)
				break;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}