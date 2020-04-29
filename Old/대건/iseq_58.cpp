#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<string>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i,x,am,an, m, n;
	string a = ""; char tmp[10];
	cin >> m >> n >> x;
	am = m, an = n;
	if (am > an) {
		a += _itoa(am / an, tmp, 10);
		am %= an;
	}
	else
		a += "0";
	a += ".";
	for (i = 0; i < x; i++) {
		am *= 10;
		a += _itoa(am / an, tmp, 10);
		am %= an;
	}
	cout << a;
	return 0;
}