#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#define mapMax 10001
using namespace std; 

int n, l, m,map[mapMax][mapMax];
int xLen[101], yLen[101],lCnt = 0;
int yPnt[mapMax], xPnt[mapMax],xpCnt = 0,ypCnt = 0;

void genLen() {
	int i,tmp;
	tmp = l / 2;
	for (i = 1; i < tmp; i++) {
		xLen[lCnt] = i;
		yLen[lCnt] = tmp - i;
		lCnt++;
	}
}

bool doesPntExist(int x, int y,int mod) { //mod = 1 -> x    mod = 2 -> y
	int i,pCnt = ypCnt;
	if (mod == 1)
		pCnt = xpCnt;
	for (i = 0; i < pCnt; i++) {
		if (xPnt[i] == x && mod == 1)
			return true;
		if (yPnt[i] == y && mod == 2)
			return true;
	}
	return false;
}

int retMaxFish(int sy, int sx, int yLim, int xLim) {
	int max = -1, i, j,sum;
	if (sy + yLim < n && sx + xLim < n) {
		sum = 0;
		for (i = sy; i <= sy + yLim; i++)
			for (j = sx; j <= sx + xLim; j++)
				if (map[i][j] == 1)
					sum++;
		if (sum > max)
			max = sum;
	}
	return max;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j,max = -1;
	cin >> n >> l >> m;
	genLen();
	for (i = 0; i < m; i++) {
		int tmx, tmy;
		cin >> tmx >> tmy;
		map[tmy--][tmx--] = 1;
		if (doesPntExist(tmx, tmy, 1) == false)
			xPnt[xpCnt++] = tmx;
		if (doesPntExist(tmx, tmy, 2) == false)
			yPnt[ypCnt++] = tmy;
	}

	for (i = 0; i < ypCnt; i++) {
		int y = yPnt[i];
		for (j = 0; j < xpCnt; j++) {
			int x = xPnt[j];
			for (int k = 0; k < lCnt; k++) {
				int tmp = retMaxFish(y, x, yLen[k], xLen[k]);
				if (tmp > max)
					max = tmp;
			}
		}
	}
	cout << max;
	return 0;
}