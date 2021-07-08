#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#define N 110
using namespace std;

int n;
int input[N][N] = { 0, };
int leftN[N][N] = { 0, }, rightN[N][N] = { 0, };
int opti[N][N];
vector <int> trace[N][N];
// 1 left 2 rgiht 3 down
void print() {
	int i, j;
	cout << "Left" << endl;
	for (i = 1; i <= n; i++) {
		for(j = 1;j <= n;j++)
			printf("%-4d", leftN[i][j]);
		cout << endl;
	}
	cout << endl;

	cout << "Right" << endl;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			printf("%-4d", rightN[i][j]);
		cout << endl;
	}
	cout << endl;

	cout << "Optimization" << endl;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			printf("%-4d", opti[i][j]);
		cout << endl;
	}
	cout << endl;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	int i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> input[i][j];

	for (i = 1; i <= n; i++) {

		int LD[N] = {0,};
		for (j = 1; j <= n; j++) {
			if (leftN[i][j - 1] > opti[i - 1][j]) {
				leftN[i][j] = input[i][j] + leftN[i][j - 1];
				LD[j] = 1;
			}
			else {
				leftN[i][j] = input[i][j] + opti[i - 1][j];
				LD[j] = 3;
			}
		}

		int RD[N] = { 0, };
		for (j = n; j > 0; j--) {
			if (i != 1 && rightN[i][j + 1] > opti[i - 1][j]) {
				rightN[i][j] = input[i][j] + rightN[i][j + 1];
				RD[j] = 2;
			}
			else {
				rightN[i][j] = input[i][j] + opti[i - 1][j];
				RD[j] = 3;
			}
		}

		for (j = 1; j <= n; j++) {
			if (leftN[i][j] > rightN[i][j]) {
				opti[i][j] = leftN[i][j];
				if (LD[j] == 1)
					trace[i][j] = trace[i][j - 1];
				else 
					trace[i][j] = trace[i - 1][j];
				trace[i][j].push_back(LD[j]);
			}
			else {
				opti[i][j] = rightN[i][j];
				if (RD[j] == 2)
					trace[i][j] = trace[i][j + 1];
				else
					trace[i][j] = trace[i - 1][j];
				trace[i][j].push_back(RD[j]);
			}
		}
	}

	print();
	cout << opti[n][n] << endl;
	for (i = 1; i < trace[n][n].size(); i++) {
		if (trace[n][n][i] == 2)
			cout << "R";
		else if (trace[n][n][i] == 1)
			cout << "L";
		else
			cout << "D";
	}
	cout << endl;
	return 0;
}

/*
3
12 -10 70
-20 20 -20
19 100 7

5
10 25 7 8 13
68 24 -78 63 32
12 -69 100 -29 -25
-16 -22 -57 -33 99
7 -76 -11 77 15
*/