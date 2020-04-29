#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int aall = 0, ball = 0, call = 0;
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, i,a,b,c;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a >> b >> c;
		aall += a; ball += b; call + c;
	}
	if (aall > ball && aall > call)
		cout << "1 " << aall;
	else if (ball > aall && ball > call)
		cout << "2 " << ball;
	else if (call > ball && call > aall)
		cout << "3 " << call;
	else {
		cout << "0 ";
		if (aall > ball && aall > call)
			cout << aall;
		else if (ball > aall && ball > call)
			cout << ball;
		else
			cout << call;
	}
}