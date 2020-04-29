#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int person_type[3] = { 0, 2,1 };
	int destination[7] = { 0, 5500,7000,8500,9500,12000,20000 };
	int a, b, c;
	int res;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0)
			break;
		res = destination[b] - (destination[b] / 10)*person_type[a];
		res *= c;
		cout << res << endl;
	}
	return 0;
}
