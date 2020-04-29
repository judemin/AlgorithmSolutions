#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, x, y,cnt = 1,arr[100][100],i,j,ax,ay;
	cin >> n;
	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			arr[i][j] = -1;
	x = 0; y = n / 2;
	for (i = 0; i < n*n; i++) {
		arr[x--][y++] = cnt++;
		if (x < 0)
			x = n - 1;
		if (y > n - 1)
			y = 0;
		if (arr[x][y] != -1) {
			x = ++ax;
			y = ay;
		}
		ax = x; ay = y;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%-3d", arr[i][j]);
		cout << endl;
	}
}