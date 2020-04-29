#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;
int dir = 0, x = 0, y = 0;

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
	int n,cnt = 1, arr[101][101],i,j;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			arr[i][j] = 0;
	while (true) {
		arr[x][y] = cnt++;
		if (cnt > n*n)
			break;
		mov();
		if (y >= n || x >= n || arr[x][y] != 0) {
			oppmov();
			dir++;
			if (dir >= 4)
				dir = 0;
			mov();
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}