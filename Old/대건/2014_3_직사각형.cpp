#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, x1, y1 , x2, y2, xx1, yy1, xx2, yy2;
	for (i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> xx1 >> yy1 >> xx2 >> yy2;
		if ((x1 == xx2 && y1 == yy2) || (x2 == xx1 && y2 == yy1))
			cout << "c" << endl;
		else if (x1 == x2 || y1 == yy2 || x2 == xx1 || y2 == yy1)
			cout << "b" << endl;
		else if ((xx1 < x2 && yy1 < y2) && (xx2 > x1 && yy2 > y1))
			cout << "a" << endl;
		else
			cout << "d" << endl;
	}
}