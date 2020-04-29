#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, i,cnt = 1, j,arr[100][100];
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = n-1; j >= 0; j--)
			arr[j][i] = cnt++;
	for (i = 0; i < n; i++) {
		for (j = n-1; j >= 0; j--)
			printf("%-3d", arr[i][j]);
		cout << endl;
	}
}