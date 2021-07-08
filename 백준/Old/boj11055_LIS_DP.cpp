#define _CRT_SECURE_NO_WARNINGS
#define N 1001
#include<iostream>
using namespace std;

int A[N], n;
int dVal[N];
int main(void) {
	freopen("input.txt", "r", stdin);
	int i, j;
	int res = -1;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> A[i];
	for (i = 0; i < n; i++) {
		int max = 0;
		for (j = 0; j < i; j++)
			if (A[j] < A[i] && dVal[j] > max)
				max = dVal[j];
		dVal[i] = A[i] + max;
		if (dVal[i] > res)
			res = dVal[i];
	}
	cout << res << endl;
	return 0;
}

/*
10
1 100 2 50 60 3 5 6 7 8
*/