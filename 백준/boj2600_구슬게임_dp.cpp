#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 510
using namespace std;

int dp[N][N] = { 0, };
int b[3];
void dpTable() {
	int i, j,k;
	for (i = 0; i <= 500; i++) {
		for (j = 0; j <= 500; j++) {
			dp[i][j] = 0;
			for (k = 0; k < 3; k++) {
				if (i - b[k] >= 0 && dp[i - b[k]][j] == 0)
					dp[i][j] = 1;
				if (j - b[k] >= 0 && dp[i][j - b[k]] == 0)
					dp[i][j] = 1;
			}
		}
	}
}

int main(void) {
	freopen("input.txt","r",stdin);
	int i;
	for (i = 0; i < 3; i++)
		cin >> b[i];
	dpTable();
	for (i = 0; i < 5; i++) {
		int a, b;
		cin >> a >> b;
		if (dp[a][b] == 1)
			cout << "A" << endl;
		else
			cout << "B" << endl;
	}
	return 0;
}