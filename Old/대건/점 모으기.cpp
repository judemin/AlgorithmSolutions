#include<algorithm>
#include<iostream>
using namespace std;

int x, y, X[35], Y[35], XX[35], YY[35];

int main(void) {
	int n, k, sum = 0,i;
	cin >> n >> k;
	for (i = 1; i <= k; i++) {
		cin >> X[i] >> Y[i];
		XX[i] = X[i];
		YY[i] = Y[i];
	}
	sort(X + 1, X + k + 1);
	sort(Y + 1, Y + k + 1);
	x = X[(k + 1) / 2];
	y = Y[(k + 1) / 2];
	sum = 0;
	for (i = 1; i <= k; i++)
		sum += (abs(XX[i] - x) + abs(YY[i] - y));
	cout << sum;
	return 0;
}