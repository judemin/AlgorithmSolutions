#define _CRT_SECURE_NO_WARNINGS_
#include<iostream>
#define N 110
using namespace std;

int res;
int checkx[N] = { 0, };
int checkRight[N * 2] = { 0, };
int checkLeft[N * 2] = { 0, };
int n, A[N][N] = {0,};
void print() {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (A[i][j] == 0)
				cout << "¤±";
			else
				cout << "¤·";
		}
		cout << endl;
	}
	cout << endl;
}

void queen(int x, int level) {
	int i;
	if (checkx[x] == 1)
		return;
	if (checkRight[x + level] == 1)
		return;
	if (checkLeft[level - x + n] == 1)
		return;

	A[level][x] = 1;
	checkx[x] = 1;
	checkRight[x + level] = 1;
	checkLeft[level - x + n] = 1;
	if (level == n) {
		//print();
		A[level][x] = 0;
		checkx[x] = 0;
		checkRight[x + level] = 0;
		checkLeft[level - x + n] = 0;
		res++;
	}
	for (i = 1; i <= n; i++)
		queen(i, level + 1);
	A[level][x] = 0;
	checkx[x] = 0;
	checkRight[x + level] = 0;
	checkLeft[level - x + n] = 0;
}

int main(void) {
	int i;
	cin >> n;
	for(i = 1;i <= n;i++)
		queen(i, 1);
	cout << res << endl;
	return 0;
}