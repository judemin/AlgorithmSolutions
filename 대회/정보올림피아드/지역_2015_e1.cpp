#include<iostream>
using namespace std;

int main(void) {
	int i, n;
	int cnt = 0;

	cin >> n;
	for (i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		if (tmp == n)
			cnt++;
	}

	cout << cnt;
	return 0;
}