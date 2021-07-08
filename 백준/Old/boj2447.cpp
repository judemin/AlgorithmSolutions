#include<iostream>
using namespace std;

int arr[7000][7000] = { 0 };
void map(int u,int x,int y) {
	arr[x][y] = 1;

	if (u == 0)
		return;

	int uu = u * 2;
	map(u / 3, x, y);
	map(u / 3, x + u, y);
	map(u / 3, x + uu, y);
	map(u / 3, x, y + u);
	map(u / 3, x, y + uu);
	map(u / 3, x + uu, y + u);
	map(u / 3, x + u, y + uu);
	map(u / 3, x + uu, y + uu);
}

int main(void) {
	int n, i, j;

	cin >> n;
	map(n / 3, 0, 0);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i][j] == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}