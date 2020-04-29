#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 1000010
using namespace std;

int n, m, k;
int arr[N], tree[N * 2] = { 0, };
int res[10010] = { 0, }, reCnt = 0;
int makeSegmentTree(int left, int right, int now) {
	tree[now] = 0;
	if (left == right)
		return tree[now] = arr[left];
	int mid = (left + right) / 2;
	tree[now] += makeSegmentTree(left, mid, now * 2);
	tree[now] += makeSegmentTree(mid + 1, right, now * 2 + 1);
	return tree[now];
}

int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> n >> m >> k;
	for (i = 1; i <= n; i++)
		cin >> arr[i];

	for (i = 0; i < m + k; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1)
			arr[b] = c;
		else {
			makeSegmentTree(b,c,1);
			res[reCnt++] = tree[1];
		}
	}

	for (i = 0; i < k; i++)
		cout << res[i] << endl;
}

/*
5 2 2
1
2
3
4
5
1 3 6
2 2 5
1 5 2
2 3 5

17
12
*/