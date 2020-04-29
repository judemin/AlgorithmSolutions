#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x,y,i, loca, locb,result = 0;
	int n, shopa[101], shopb[101];
	cin >> x >> y;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> shopa[i] >> shopb[i];
	cin >> loca >> locb;
	for (i = 0; i < n; i++) {
		int re1 = 0, re2 = 0;
		if ((loca == 1 && shopa[i] == 2) || (loca == 2 && shopa[i] == 1)) {
			re1 = y + locb + shopb[i];
			re2 = y + x - locb + x - shopb[i];
		}
		else if ((loca == 3 && shopa[i] == 4) || (loca == 4 && shopa[i] == 3)) {
			re1 = x + locb + shopb[i];
			re2 = x + y - locb + y - shopb[i];
		}
		else if (loca == shopa[i]) {
			re1 = abs(locb - shopb[i]);
			re2 = 987654321;
		}
		else {
			re2 = 987654321;
			if ((loca == 1 && shopa[i] == 4))
				re1 = (x - locb) + shopb[i];
			else if ((loca == 1 && shopa[i] == 3))
				re1 = locb + shopb[i];

			else if ((loca == 2 && shopa[i] == 4))
				re1 = (x - locb) + (y - shopb[i]);
			else if ((loca == 2 && shopa[i] == 3))
				re1 = locb + (y - shopb[i]);

			else if ((loca == 3 && shopa[i] == 1))
				re1 = locb + shopb[i];
			else if ((loca == 3 && shopa[i] == 2))
				re1 = (y - locb) + shopb[i];

			else if ((loca == 4 && shopa[i] == 1))
				re1 = locb + (x - shopb[i]);
			else if ((loca == 4 && shopa[i] == 2))
				re1 = (y - locb) + ( x - shopb[i]);
		}
		if (re1 <= re2)
			result += re1;
		else
			result += re2;
	}
	cout << result;
}