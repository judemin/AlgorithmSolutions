#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int xArr[] = { 1,-1,-1,-1,1,1,-1,-1,-1,1 };
int yArr[] = { 1, 1,-1,1,1,-1,-1,1,-1,-1 };
int w, h, p, q, t;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int cnt = 0,mod = 0,ap,aq,sp,sq;
	cin >> w >> h;
	cin >> p >> q;
	cin >> t;
	ap = p; sp = p;
	aq = q; sq = q;
	while(true) {
		if (sp == p && sq == q && mod == 0 && cnt != 0)
			break;
		ap = p + xArr[mod];
		aq = q + yArr[mod];
		if (ap > w || aq > h || ap < 0 || aq < 0)
			mod++;
		else {
			cnt++;
			p = ap;
			q = aq;
		}
		if (mod > 9)
			mod = 0;
	}
	t %= cnt;
	cnt = 0;
	ap = p;
	aq = q;
	while (true) {
		if (cnt == t)
			break;
		ap = p + xArr[mod];
		aq = q + yArr[mod];
		if (ap > w || aq > h || ap < 0 || aq < 0)
			mod++;
		else {
			cnt++;
			p = ap;
			q = aq;
		}
		if (mod > 9)
			mod = 0;
	}
	cout << p << " " << q;
}