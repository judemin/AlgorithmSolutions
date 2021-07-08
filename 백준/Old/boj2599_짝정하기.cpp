#include<iostream>
using namespace std;

int main(void) {
	int sum,n;
	int m1, m2, m3, w1, w2, w3;
	cin >> sum;
	cin >> m1 >> w1;
	cin >> m2 >> w2;
	cin >> m3 >> w3;

	for (n = 0; n <= sum; n++) {
		if (m1 - n >= 0 && w3 - (m1 - n) >= 0 &&
			w2 - n >= 0 && m3 - (w2 - n) >= 0 &&
			m2 - (w3 - (m1 - n)) >= 0)
			break;
	}
	if (n > sum)
		cout << "0" << endl;
	else {
		cout << "1" << endl;
		cout << n << " " << m1 - n << endl;
		cout << m2 - (w3 - (m1 - n)) << " " << w3 - (m1 - n) << endl;
		cout << m3 - (w2 - n) << " " << w2 - n << endl;
	}
	return 0;
}

/*
6
4 2
1 3
1 1
*/