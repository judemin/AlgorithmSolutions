#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int arr[101][101];
int C[1000];
int n,cnt = 0;

void g(int y, int x, int L) {
	int i;
	if (y >= n || x >= n )
		return;
	C[L] = arr[y][x];
	if (y == n-1 && x == n-1) {
		for (i = 0; i < L+1; i++)
			cout << C[i] << " ";
		cout << endl;
		cnt++;
		return;
	}
	for (i = y + 1; i < n; i++)
		if (arr[y][x] < arr[i][x])
			g(i, x, L + 1);
	for (i = x + 1; i < n; i++)
		if (arr[y][x] < arr[y][i])
			g(y, i, L + 1);
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, x, y, ax, ay;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> arr[i][j];
	g(0, 0, 0);
	cout << cnt;
}

//(0,0)에서 시작 (n-1,n-1)까지가는 모든경로 출력 - 오른쪽과 아래쪽 한줄로만 이동가능,점프가능
/*
5
1 3 5 2 4
14 23 20 10 22
6 12 8 17 11
18 30 15 21 19
13 37 16 39 50
*/