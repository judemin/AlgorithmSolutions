#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

char nums[10] = { '0','1','2','3','4','5','6','7','8','9' };

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, acnt = 0, cnt = 0, j, i;
	char arr[10001], tarr[10001];
	int nextt = 0, nowt = 0;
	for (i = 0; i < 10001; i++) {
		arr[i] = '0';
		tarr[i] = '0';
	}
	cin >> n;
	arr[cnt++] = '2';
	for (i = 0; i < n-1; i++) {
		nextt = 0;
		for (j = 0; j < cnt; j++) {
			nowt = arr[j] - '0';
			nowt *= 2;
			tarr[j] = nums[(nowt + nextt) % 10];
			nextt = nowt / 10;
			//cout <<"nowt : " << nowt << " nextt : " << nextt << " nums : " << nums[(nowt + nextt) % 10] << "	i : " << i << endl;
		}
		if (nextt != 0)
			tarr[cnt++] = nums[nextt];
		for (j = 0; j < cnt; j++)
			arr[j] = tarr[j];
	}
	for (i = 1; i <= cnt; i++)
		cout << arr[cnt - i];
}
