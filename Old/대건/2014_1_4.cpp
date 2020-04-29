#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, in[5], out[5], max = -1,tmp = 0;
	for (i = 0; i < 4; i++)
		cin >> out[i] >> in[i];
	for (i = 0; i < 4; i++) {
		tmp += in[i] - out[i];
		if (tmp > max)
			max = tmp;
	}
	cout << max;
	return 0;
}