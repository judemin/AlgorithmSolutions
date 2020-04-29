#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#define N 110
using namespace std;

int n;
int dp[N] = { 0, };
class lines {
public:
	int st;
	int ed;
}line[N];

bool comp(lines a, lines b) {
	if (a.st < b.st)
		return true;
	return false;
}

int main(void) {
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> line[i].st >> line[i].ed;
	sort(line, line + n + 1, comp);

	for (i = 1; i <= n; i++) {
		int max = 0;
		for (j = 1; j <= i - 1; j++)
			if (line[i].ed > line[j].ed && dp[j] > max)
				max = dp[j];
		dp[i] = max + 1;
	}

	int max = -1;
	for (i = 1; i <= 100; i++)
		if (max < dp[i])
			max = dp[i];
	cout << n - max << endl;
	return 0;
}

/*
8
1 8
3 9
2 2
4 1
6 4
10 10
9 7
7 6
*/