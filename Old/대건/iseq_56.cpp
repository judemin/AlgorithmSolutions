#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int tri(int a) {
	return a*a*a;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int hun, ten, one, i, tmp;
	for (i = 0; i < 1000; i++) {
		hun = i / 100;
		ten = (i % 100) / 10;
		one = i % 10;
		tmp = tri(hun) + tri(ten) + tri(one);
		if (tmp == i)
			cout << i << endl;
	}
	return 0;
}