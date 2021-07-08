#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#define LOWER 1
#define N 100010
using namespace std;

int n, m;
int arr[N];
int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	long long int left = LOWER;
	long long int right = arr[n - 1] * m;
	long long int mid;
	while (true) {
		if (left+1 >= right)
			break;

		mid = (left + right) / 2;

		//cout << left << " " << mid << " " << right << endl;

		long long int tot = 0;
		for (i = 0; i < n; i++)
			tot += mid / arr[i];

		if (tot >= m)
			right = mid;
		else if (tot < m)
			left = mid;

		//cout << tot << endl;
	}
	cout << right << endl;
	return 0;
}

/*
7 10
3
8
3
6
9
2
4
*/