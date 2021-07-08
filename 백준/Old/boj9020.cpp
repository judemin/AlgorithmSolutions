#include<iostream>
#define maxLen 10001
using namespace std;

int cnt = 0;
int p[2000];
int str[maxLen] = { 0, };
int loc[maxLen] = { 0, };
void primeNum() {
	int i, j;

	str[2] = 0;
	str[3] = 0;
	for (i = 2; i < maxLen; i++) {
		for (j = i + i; j < maxLen; j += i)
				str[j] = 1;
	}

	for (i = 2; i < maxLen; i++)
		if (str[i] == 0) {
			loc[i] = cnt;
			p[cnt++] = i;
		}
}

int main(void) {
	int n, i;
	primeNum();

	cin >> n;
	for (i = 0; i < n; i++) {
		int num;
		cin >> num;

		int l, r;
		int tnum = num / 2 + 1;
		while (true) {
			if (str[tnum] == 0) {
				r = l = loc[tnum];
				break;
			}
			tnum++;
		}

		while (true) {
			bool flag = false;
			int tr = r;
			while (true) {
				if (p[l] + p[tr] > num)
					break;
				else if (p[l] + p[tr] == num) {
					cout << p[l] << " " << p[tr] << endl;
					flag = true;
					break;
				}
				tr++;
			}
			if (flag == true)
				break;
			l--;
			r = l;
		}
	}
}