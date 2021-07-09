#include<iostream>
using namespace std;

int main(void) {
	int t, h, w, n;
	int y, x, i;

	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> h >> w >> n;
		x = (n / h) + 1;
		if ((n % h) == 0)
			x--;

		y = (n % h);
		if (y == 0)
			y = h;

		cout << y;
		if (x < 10)
			cout << "0" << x << endl;
		else
			cout << x << endl;
	}
	return 0;
}