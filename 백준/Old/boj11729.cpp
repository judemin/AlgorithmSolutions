#include<iostream>
using namespace std;


void rec(int n, int s, int t, int e) {
	if (n == 1) {
		cout << s << " " << e << endl;
		return;
	}
	else {
		rec(n - 1, s, e, t);
		cout << s << " " << e << endl;
		rec(n - 1, t, s, e);
	}
}

int main(void) {
	int n, i;

	cin >> n;
	cout << (1 << n) - 1 << endl;
	rec(n, 1, 2, 3);
	return 0;
}