#include<iostream>
#include<string>
using namespace std;

int n, k;
int main(void) {
	int i,j,max = -1;

	cin >> n >> k;
	for (i = 1; i <= k; i++) {
		string tmp = "";
		int num = n * i;
		int layer = 10;
		for (j = 0;; j++) {
			if (num == 0)
				break;
			tmp += (num % layer) + '0';
			num /= layer;
		}

		int res = 0;
		layer = 1;
		for (j = tmp.length() - 1; j >= 0; j--) {
			res += (tmp[j] - '0') * layer;
			layer *= 10;
		}

		if (res > max)
			max = res;
		//cout << n << " " << i << endl;
		//cout << res << endl;
	}

	cout << max << endl;
}