#include <iostream>
#define N 100010
using namespace std;

int n, k;
int arr[N];
int maxN = -987654321;
int minN = 987654321;
int min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

int main() {
	int i;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> arr[i];

		if (maxN <= arr[i])
			maxN = arr[i];
		if (minN >= arr[i])
			minN = arr[i];
	}

	if (k == 1)
		cout << minN << endl;
	else if (k == 2) {
		maxN = -987654321;
		int minS[N];
		int minE[N];

		minS[0] = arr[0];
		for (i = 1; i < n; i++) {
			if (minS[i - 1] < arr[i])
				minS[i] = minS[i - 1];
			else
				minS[i] = arr[i];
		}

		minE[n - 1] = arr[n - 1];
		for (i = n - 2; i >= 0; i--)
			minE[i] = min(minE[i + 1], arr[i]);

		int tmp = 0;
		for (i = 0; i < n - 1; i++) {
			tmp = max(minS[i], minE[i + 1]);
			if (tmp > maxN)
				maxN = tmp;
		}
		cout << maxN << endl;
	}
	else
		cout << maxN << endl;
	return 0;
}

/*
5 2
2 4 1 6 5
*/