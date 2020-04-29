#include<iostream>
using namespace std;

class coordinate {
public:
	int x, y;
}cor[3];

int ccw(coordinate c1, coordinate c2, coordinate c3) { 
	int d;
	d = (c1.x * c2.y + c2.x * c3.y + c3.x * c1.y)
		- (c2.x * c1.y + c3.x * c2.y + c1.x * c3.y);
	if (d > 0)
		return 1;
	else if (d < 0)
		return -1;
	return 0;
} //-1 시계 0 평행 1 반시계

int main(void) {
	int i,res;
	for (i = 0; i < 3; i++)
		cin >> cor[i].x >> cor[i].y;
	cout << ccw(cor[0], cor[1], cor[2]) << endl;
	return 0;
}

/*
1 1
5 5
7 3

-1



1 1
3 3
5 5

0



1 1
7 3
5 5

1
*/