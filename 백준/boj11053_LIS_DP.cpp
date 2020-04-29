#define _CRT_SECURE_NO_WARNINGS
#define N 1001
#include<iostream>
using  namespace std;

int A[N], n;
int dp[N];
int main(void) {
	freopen("input.txt", "r", stdin);
	int aMax = -1;
	int i,j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> A[i];

	for (i = 0; i < n; i++) {
		int max = 0;
		for (j = i-1; j >= 0; j--) {
			if (A[j] <= A[i]) {
				max = dp[j];
				break;
			}
		}
		dp[i] = max + 1;
		if (aMax < dp[i])
			aMax = dp[i];
	}
	cout << aMax << endl;
	return 0;
}

/*
�˻� -> n���� 0����
�� �� �ڽź��� ���� ���� ������ break;
�ڽ��� ���� ��ȣ = �ش� ���� ������ + 1
*/