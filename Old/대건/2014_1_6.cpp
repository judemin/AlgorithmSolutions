#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char arr[5] = { 'D','C','B','A','E' };
	int i, j,res,tmp;
	for (i = 0; i < 3; i++) {
		res = 0;
		for (j = 0; j < 4; j++) {
			cin >> tmp;
			res += tmp;
		}
		cout << arr[res];
	}
	return 0;
}