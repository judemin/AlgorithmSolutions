#include<iostream>
#define N 1010
using namespace std;

int t, n;
int main(void) {
	int i, j, k;
	cin >> t;
	for (i = 0; i < t; i++) {
		int res = 0;
		cin >> n;
		for (j = 0; j < n; j++) {
			int max = 0;
			int tmp;
			for (k = 0; k < 3; k++) {
				cin >> tmp;
				if (tmp > max)
					max = tmp;
			}
			res += max;
		}
		cout << res << endl;
	}
}

/*
2
4
500 800 200
300 0 300
-100 -200 -400
600 200 300
3
451 234 309
224 334 467
143 246 245
*/