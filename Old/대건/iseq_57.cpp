#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int a[101], b[101], res[101], rres[101];
int cnt1 = 0, cnt2 = 0, cnt = 0, ccnt = 0 , tmp;

bool issame(int tmp) {
	int i;
	for (i = 0; i < ccnt;i++)
		if (tmp == rres[i])
			return true;
	return false;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j;
	for (i = 0; i < 101; i++) {
		cin >> a[i];
		if (a[i] == 0)
			break;
	}
	cnt1 = i;
	for (i = 0; i < 101; i++) {
		cin >> b[i];
		if (b[i] == 0)
			break;
	}
	cnt2 = i;
	for (i = 0; i < cnt1; i++)
		for (j = 0; j < cnt2; j++)
			if (a[i] == b[j])
				res[cnt++] = a[i];
	for (i = 0; i < cnt; i++)
		cout << res[i] << " ";
	cout << endl;
	for (i = 0; i < cnt; i++) {
		for (j = 0; j < cnt1; j++)
			if (res[i] != a[j] && issame(a[j]) == false)
				rres[ccnt++] = a[j];
		for (j = 0; j < cnt2; j++)
			if (res[i] != b[j] && issame(b[j]) == false)
				rres[ccnt++] = b[j];
	}
	for(i = 0;i < ccnt;i++)
		for(j = i;j < ccnt;j++)
			if (rres[i] > rres[j]) {
				tmp = rres[i];
				rres[i] = rres[j];
				rres[j] = tmp;
			}
	for (i = 0; i < ccnt; i++)
		cout << rres[i] << " ";
}