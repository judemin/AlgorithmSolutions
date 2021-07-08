#include<iostream>
#include<cmath>
#define sqr(x) (x)*(x)
using namespace std;

int main(void) {
	double x1, x2, y1, y2, r1, r2;
	int n,i;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1;
		cin >> x2 >> y2 >> r2;
		double d = sqr(x1 - x2) + sqr(y1 - y2);
		double rr = r1 + r2;
		double rrr = abs(r1 - r2);
		d = sqrt(d);

		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				cout << -1 << endl;
			else
				cout << 0 << endl;
		}
		else {
			if (d > rr || d < rrr)
				cout << 0 << endl;
			else if (d == rr || d == rrr)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
	}

	return 0;
}