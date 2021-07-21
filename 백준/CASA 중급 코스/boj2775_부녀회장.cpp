#include<iostream>
#define MAX_LEN 15
using namespace std;

int main(void) {
	int t, k, n;
	int i, j, l, p;

	cin >> t;
	for (i = 0; i < t; i++) {
		int map[MAX_LEN][MAX_LEN];

		cin >> k >> n; // n호까지 있음
		for (j = 0; j < n; j++)
			map[0][j] = j + 1;

		for (j = 1; j <= k; j++) {
			for (l = 0; l < n; l++) {
				int tmp = 0;

				for (p = 0; p <= l; p++)
					tmp += map[j - 1][p];

				map[j][l] = tmp;
			}
		}

		cout << map[k][n - 1] << endl;
	}
	return 0;
}