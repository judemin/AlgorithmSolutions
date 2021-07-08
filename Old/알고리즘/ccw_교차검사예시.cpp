#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#include<iostream>
using namespace std;

class corline {
public:
	int x1, y1;
	int x2, y2;
}l[2];

int ccw(int x1, int y1,int x2,int y2,int x3,int y3) {
	int d = ((x1 * y2) + (x2 * y3) + (x3 * y1)) -
		((x2 * y1) + (x3 * y2) + (x1 * y3));
	if (d > 0)
		return 1;
	else if (d < 0)
		return -1;
	return 0;
} // 1 반시계 -1 시계 0 평행

bool isCross() {
	int r1, r2;
	
	r1 = ccw(l[0].x1, l[0].y1, l[0].x2, l[0].y2,
		l[1].x1, l[1].y1);
	r2 = ccw(l[0].x1, l[0].y1, l[0].x2, l[0].y2,
		l[1].x2, l[1].y2);
	if (r1 == r2)
		return false;

	r1 = ccw(l[1].x1, l[1].y1, l[1].x2, l[1].y2,
		l[0].x1, l[0].y1);
	r2 = ccw(l[1].x1, l[1].y1, l[1].x2, l[1].y2,
		l[0].x2, l[0].y2);
	if (r1 == r2)
		return false;

	return true;
}

int main(void) {
	//freopen("input.txt", "r", stdin);
	int i;
	for (i = 0; i < 2; i++)
		cin >> l[i].x1 >> l[i].y1 >> l[i].x2 >> l[i].y2;
	if (isCross() == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

/*
3 8
3 5
1 3
5 3

NO



3 5
3 1
1 3
5 3

YES
*/