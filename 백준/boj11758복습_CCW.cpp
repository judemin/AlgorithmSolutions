#include<iostream>
using namespace std;

int ccw(int x1,int y1,int x2,int y2,int x3,int y3) {
	int dir = ((x1 * y2) + (x2 * y3) + (x3 * y1)) -
		((x2 * y1) + (x3 * y2) + (x1 * y3));
	if (dir > 0)
		return 1;
	else if (dir < 0)
		return -1;
	return 0;
}//1 반시계, -1 시계, 0 직선

int main(void) {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cout << ccw(x1, y1, x2, y2, x3, y3) << endl;
}