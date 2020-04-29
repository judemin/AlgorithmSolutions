#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int arr[101][101];

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, x, y, i, j,k,res = 0;
	cin >> n;
	for (i = 0; i < 101; i++)
		for (j = 0; j < 101; j++)
			arr[i][j] = 0;
	for (i = 0; i < n; i++) {
		cin >> x >> y;
		for (j = 101-y; j > 91-y; j--)
			for (k = x-1; k < x+9; k++)
				arr[j][k]++;
	}
	for (i = 0; i < 101; i++)
		for (j = 0; j < 101; j++)
			if (arr[i][j] != 0)
				res++;
	cout << res;
}
