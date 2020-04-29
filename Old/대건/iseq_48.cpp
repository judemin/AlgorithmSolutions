#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

void check(char tmp, int cnt) {
	int j;
	if (cnt >= 5)
		cout << tmp << "(" << cnt << ")";
	else
		for (j = 0; j < cnt; j++)
			cout << tmp;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string a; char ta[101]; char tmp = ' '; int cnt,i;
	gets_s(ta);
	a = ta;

	for (i = 0; i < a.length(); i++) {
		if (a[i] != tmp) {
			check(tmp, cnt);
			cnt = 1;
			tmp = a[i];
		}
		else
			cnt++;
	}
	check(tmp, cnt);
	return 0;
}