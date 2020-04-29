#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int x, y, dir = 4;
void mov() {
	if (dir == 0)
		y++;
	else if (dir == 1)
		x++;
	else if (dir == 2)
		y--;
	else
		x--;
}
void oppmov() {
	if (dir == 0)
		y--;
	else if (dir == 1)
		x--;
	else if (dir == 2)
		y++;
	else
		x++;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int c, r, k, i, j,arr[101][101],cnt = 1;
	cin >> c >> r >> k;
	if (k > c*r)
		cout << "0";
	else {
		for (i = 0; i < r; i++)
			for (j = 0; j < c; j++)
				arr[i][j] = 0;
		x = r - 1; y = 0;
		while (true) {
			arr[x][y] = cnt++;
			if (cnt == k+1) {
				cout << y+1 << " " << r-x << endl;
				break;
			}
			if (cnt > c*r)
				break;
			mov();
			if (y >= c || x >= r || arr[x][y] != 0) {
				oppmov();
				dir++;
				if (dir >= 4)
					dir = 0;
				mov();
			}
		}
	}
	return 0;
}