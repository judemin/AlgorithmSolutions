#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<locale>
#define N 1010
using namespace std;

int arr[N], segmentTree[N * 2] = { 0, };
int makeTree(int left,int right,int now) {
	cout << left << " " << right << " " << now << endl;
	if (left == right)
		return segmentTree[now] = arr[left];

	int mid = (left + right) / 2;

	cout << "왼쪽자식" << endl;
	segmentTree[now] += makeTree(left, mid, now * 2);
	cout << "오른쪽 자식" << endl;
	segmentTree[now] += makeTree(mid + 1, right, now * 2 + 1);

	return segmentTree[now];
}

int square(int a,int b) {
	int res = 1;
	for (int i = 0; i < b; i++)
		res *= a;
	return res;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	int n,i;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> arr[i];
	makeTree(1, n, 1);
	
	cout << endl;
	i = 1;
	int line = 1;
	while (true) {
		if (segmentTree[i] == 0)
			break;

		cout << segmentTree[i] << " ";
		if (i == square(2, line) - 1) {
			cout << endl;
			line++;
		}
		i++;
	}
	cout << endl;
}

/*
4
3 5 6 1
*/