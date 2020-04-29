#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 305
using namespace std;

int n, stair[N] = { 0, };
int dp[N] = { 0, };
int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> n;
	for (i = 3; i < n + 3; i++)
		cin >> stair[i];

	for (i = 3; i < n + 3; i++) {
		int val1 = stair[i] + dp[i - 2];
		int val2 = stair[i] + stair[i - 1] + dp[i - 3];

		if (val1 > val2)
			dp[i] = val1;
		else
			dp[i] = val2;
	}
	cout << dp[n + 2] << endl;
	return 0;
}