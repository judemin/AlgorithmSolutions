#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int sum(int p ,int n,int m) {
	if (n == 0) {
		if (m > 0)
			m == 0;
		return m * -1;
	}
	sum(p, n-1, m - p);
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int nowm, coonum, cooprice;
	cin >> cooprice >> coonum >> nowm;
	cout << sum(cooprice, coonum, nowm);
}
