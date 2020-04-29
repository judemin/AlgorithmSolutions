#include<iostream>
using namespace std;

int t;
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main(void) {
	int i, j;
	cin >> t;
	for (i = 0; i < t; i++) {
		int n,cnt = 1;

		cin >> n;
		for (j = 2; j < n / 2; j++) {
			int a = j;
			int b = n / j;
			if (gcd(a, b) == 1 && n % j == 0 && a < b) {
				//cout << a << " " << b << endl;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}

/*
3
30
16
60060
*/