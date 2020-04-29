#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int w, h, p, q, t,x,y;
	cin >> w >> h;
	cin >> p >> q;
	cin >> t;
	x = t % (w * 2);
	y = t % (h * 2);
	if(x != 0)
		p = (w * 2) - (p + x);
	if(y != 0)
		q = (h * 2) - (q + y);
	cout << p << " " << q;
}