#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 10005
using namespace std;

int n, A[N] = { 0, };
int dp[N] = { 0, };
int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> n;
	for (i = 3; i < n + 3; i++)
		cin >> A[i];

	for (i = 3; i < n + 3; i++) {
		int v1 = A[i] + dp[i - 2];
		int v2 = A[i] + A[i - 1] + dp[i - 3];

		if (v1 > v2) {
			dp[i] = v1;
			continue;
		}
		dp[i] = v2;

		v1 = dp[i]; v2 = dp[i - 1];
		if (v1 > v2) {
			dp[i] = v1;
			continue;
		}
		dp[i] = v2;
	}

	int max = -1;
	for (i = 3; i < n + 3; i++)
		if (dp[i] > max)
			max = dp[i];
	cout << max << endl;
	return 0;
}