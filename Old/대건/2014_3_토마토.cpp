#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int cnt = 0, tcnt = 0;
int m, n, h;
int r = 0, l = 0;
int arr[101][101][101];
int xArr[6] = { 1,-1,0,0,0,0 };
int yArr[6] = { 0,0,1,-1,0,0 };
int zArr[6] = { 0,0,0,0,1,-1 };

class coordinate {
private:
public:
	int x, y, z;
};
coordinate cd[1000001];

void push(int a,int b,int c) {
	cd[r].x = a;
	cd[r].y = b;
	cd[r].z = c;
	r++;
}
void pop() {
	l++;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j,k,p;
	bool isall = true;
	cin >> m >> n >> h;
	for (i = 0; i < h; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < m; k++) {
				cin >> arr[i][j][k];
				if (arr[i][j][k] == 1)
					push(k, j, i);
				else if (arr[i][j][k] == 0)
					isall = false;
			}
	if (isall == false) {
		cnt = r;
		while (true) {
			int tx = cd[l].x, ty = cd[l].y, tz = cd[l].z;
			for (p = 0; p < 6; p++) {
				int ax = tx + xArr[p], ay = ty + yArr[p], az = tz + zArr[p]; int & tmp = arr[az][ay][ax];
				if (ax < 0 || ay < 0 || az < 0 || ax >= m || ay >= n || az >= h || tmp == 1 || tmp == -1)
					continue;
				tmp = 1;
				push(ax, ay, az);
			}
			pop();
			if (l == cnt) {
				tcnt++;
				cnt = r;
			}
			if (r == l)
				break;
		}
		isall = true;
		for (i = 0; i < h; i++)
			for (j = 0; j < n; j++)
				for (k = 0; k < m; k++)
					if (arr[i][j][k] == 0)
						isall = false;
		if (isall == false)
			cout << -1;
		else
			cout << tcnt-1;
	}
	else
		cout << 0;
}