#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 100010
using namespace std;

int n, m;
long long int maxTree[N * 2] = { 0, };
long long int minTree[N * 2] = { 0, };
long long int arr[N];
int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

int makeMaxTree(int left,int right,int now){
	maxTree[now] = 0;
	if (left == right)
		return arr[left];
	int mid = (left + right) / 2;
	maxTree[now] = max(makeMaxTree(left, mid, now * 2),
		makeMaxTree(mid + 1, right, now * 2 + 1));
}

int min(int a, int b) {
	if (a > b)
		return b;
	return a;
}

int makeMinTree(int left, int right, int now) {
	minTree[now] = 0;
	if (left == right)
		return arr[left];
	int mid = (left + right) / 2;
	minTree[now] = min(makeMinTree(left, mid, now * 2),
		makeMinTree(mid + 1, right, now * 2 + 1));
}


int main(void) {
	freopen("input.txt","r",stdin);
	int i;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
		cin >> arr[i];

	for (i = 0; i < m; i++) {
		long long int a, b;
		cin >> a >> b;
		makeMaxTree(a, b, 1);
		makeMinTree(a, b, 1);
		cout << minTree[1] << " " << maxTree[1] << endl;
	}
	return 0;
}

/*
10 4
75
30
100
38
50
51
52
20
81
5
1 10
3 5
6 9
8 10
*/