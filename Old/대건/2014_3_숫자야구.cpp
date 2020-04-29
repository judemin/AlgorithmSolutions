#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int result[1000],cnt = 0;

void makenums() {
	int a = 1; int b = 2; int c = 3;
	while (true) {
		if (a == 9 && b == 8 && c == 8)
			break;
		if (c == 10) { b++; c = 1; }
		if (b == 10) { a++; b = 1; }
		if (a != b && b != c && c != a) {
			result[cnt++] = a * 100 + b * 10 + c;
			cout << result[cnt - 1] << " "; if (cnt % 18 == 0)cout << endl;
		}
		c++;
	}
}

int main(void) {
	makenums();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int num[101],n,i,j,strike[101],ball[101],val = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> num[i] >> strike[i] >> ball[i];
	for (i = 0; i < cnt; i++) {
		int ttmp = result[i],x = ttmp / 100, y = (ttmp % 100) / 10, z = ttmp % 10;
		for (j = 0; j < n; j++) {
			//cout << result[i] << " " << num[j] << endl;
			int tmp = num[j],a = tmp / 100, b = (tmp % 100) / 10, c = tmp % 10,stc = 0,bc = 0;
			if (x == a )stc++; if (y == b)stc++; if (z == c)stc++;
			if (x == b || x == c)bc++; if (y == a || y == c)bc++; if (z == a || z == b)bc++;
			if (stc != strike[j] || bc != ball[j])break;
		}
		if (j == n)
			val++;
	}
	cout << val;
}