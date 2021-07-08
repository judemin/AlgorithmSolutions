#include<iostream>
using namespace std;

int fac(int now) {
	if (now == 1)
		return now;
	return fac(now - 1) * now;
}

int main(void) {
	int n;

	cin >> n;
	if (n == 0)
		cout << 1 << endl;
	else
		cout << fac(n) << endl;
	return 0;
}