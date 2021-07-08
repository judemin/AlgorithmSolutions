#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int x[30010] = { 0, }, y[30010] = { 0, };
int bigger(int a, int b) {
	if (a > b)
		return a;
	return b;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	int i, j;
	int res = 0;
	int m1 = -1, m2 = -1;
	int max = -1;
	int n, m, a, b;
	cin >> n;
	for (i = 0; i < n; i++) {
		int tma, tmb;
		cin >> tma >> tmb;
		x[tma] = tmb;
		if (tma > m1)
			m1 = tma;
	}
	cin >> m;
	for (i = 0; i < m; i++) {
		int tma, tmb;
		cin >> tma >> tmb;
		y[tma] = tmb;
		if (tma > m2)
			m2 = tma;
	}
	max = bigger(m1, m2);
	cin >> a >> b;

	for (i = a; i <= b; i++) {
		int ax, ay, tmj;
		for (j = 0; j <= max; j++) {
			tmj = i + j;
			ax = x[j];
			//cout << j << " " << tmj << endl;
			if (tmj < 0 || tmj > m2)
				ay = 0;
			else
				ay = y[tmj];
			//cout << ax << " " << ay << endl << endl;
			res += ax * ay;
		}
	}
	cout << res << endl;
	return 0;
}

/*
3
0 1
1 1
2 1
3
0 1
1 2
2 3
-1
1

14



3
0 1
4 4
9 5
3
1 3
2 7
10 7
-2
2

73
*/