#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int dicecnt[6] = { 0, },n,i,j,res,max = -1,tmp;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 6; j++)
			dicecnt[j] = 0;
		for (j = 0; j < 3; j++) {
			cin >> tmp;
			dicecnt[tmp-1]++;
		}
		for (j = 0; j < 6; j++) {
			if (dicecnt[j] == 3) {
				res = 10000 + (j+1) * 1000;
				break;
			}
			else if (dicecnt[j] == 2) {
				res = 1000 + (j+1) * 100;
				break;
			}
		}
		if (j == 6)
			for (int k = 5; k >= 0; k--)
				if (dicecnt[k] != 0) {
					res = 100 * (k+1);
					break;
				}
		if (res > max)
			max = res;
	}
	cout << max;
}