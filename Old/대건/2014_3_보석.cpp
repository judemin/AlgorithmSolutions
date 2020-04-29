#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<string>
using namespace std;

int map[101][101];
int adirs[101], bdirs[101];
int adir[101], bdir[101];
int aArr[4] = {1,1,-1,-1};
int bArr[4] = {1,-1,1,-1};
int rx, ry,max = -1,cnt,x,y;

void deflt(int a) {
	cnt = 0;
	if (a > max) {
		max = a;
		rx = x; ry = y;
	}
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m, t, k, i, j, l, a, b, tmp;
	cin >> n >> m >> t >> k;
	for (i = 0; i < t; i++) {
		cin >> a >> b;
		adirs[i] = a; bdirs[i] = b;
		adir[i] = a; bdir[i] = b;
	}
	for(i = 0;i < t;i++)
		for (j = i + 1; j < t; j++) {
			if (adir[i] > adir[j]) {
				tmp = adir[j];
				adir[j] = adir[i];
				adir[i] = tmp;
			}
			if (bdir[i] > bdir[j]) {
				tmp = bdir[j];
				bdir[j] = bdir[i];
				bdir[i] = tmp;
			}
		}
	for (i = 0; i < t; i++) {
		x = adir[i], y = bdir[i];
		deflt(-1);
		for (j = 0; j < t; j++)
			if ((adirs[j] >= x && adirs[j] <= x + k * aArr[0]) && (bdirs[j] >= y && bdirs[j] <= y + k * bArr[0]))
				cnt++;
		deflt(cnt);
		for (j = 0; j < t; j++)
			if ((adirs[j] >= x && adirs[j] <= x + k * aArr[1]) && (bdirs[j] <= y && bdirs[j] >= y + k * bArr[1]))
				cnt++;
		deflt(cnt);
		for (j = 0; j < t; j++)
			if ((adirs[j] <= x && adirs[j] >= x + k * aArr[2]) && (bdirs[j] >= y && bdirs[j] <= y + k * bArr[2]))
				cnt++;
		deflt(cnt);
		for (j = 0; j < t; j++)
			if ((adirs[j] <= x && adirs[j] >= x + k * aArr[3]) && (bdirs[j] <= y && bdirs[j] >= y + k * bArr[3]))
				cnt++;
		deflt(cnt);
	}
	cout << rx << " " << ry << endl << max;
}