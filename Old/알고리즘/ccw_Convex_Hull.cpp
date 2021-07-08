#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<stack>
#define N 110
using namespace std;

int n;
class coordinate {
public:
	int x, y;
}cor[N];

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
	int d = ((x1 * y2) + (x2 * y3) + (x3 * y1))
		- ((x2 * y1) + (x3 * y2) + (x1 * y3));
	if (d > 0)
		return 1;
	if (d < 0)
		return -1;
	return 0;
} // 1 반시계 -1 시계 0 평행

bool compare(coordinate a, coordinate b) {
	if (a.x < b.x)
		return true;
	return false;
}

stack <coordinate> st;
int main(void) {
	int i;
	freopen("input.txt", "r", stdin);
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> cor[i].x >> cor[i].y;
	sort(cor, cor + n, compare);
	
	coordinate c1 = cor[0];
	st.push(c1);
	st.push(cor[1]);
	coordinate cNow = st.top();
	for (i = 2; i < n; i++) {
		st.push(cor[i]);
		if(i != 2)
			coordinate cNow = st.top();
		while (true) {
			if (ccw(c1.x, c1.y, cNow.x, cNow.y, cor[i].x, cor[i].y) != -1 || st.size() == 1)
				break;
			st.pop();
			cNow = st.top();
		}
	}

	int tmp = st.size();
	for (i = 0; i < tmp; i++) {
		cout << st.top().x << " " << st.top().y << endl;
		st.pop();
	}
	return 0;
}

/*
8
1 1
2 3
3 4
3 2
5 4
7 1
6 5
6 3
*/