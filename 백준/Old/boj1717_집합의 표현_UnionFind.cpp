#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 1000010
using namespace std;

int n, m;
int uni[N] = { 0, };
int unionFind(int now) {
	if (now == uni[now])
		return now;
	return uni[now] = unionFind(uni[now]);
}

int main(void) {
	freopen("input.txt","r",stdin);
	int i;
	cin >> n >> m;
	for (i = 0; i < N; i++)
		uni[i] = i;

	for (i = 0; i < m; i++) {
		int com, a, b;
		cin >> com >> a >> b;

		int tmp1 = unionFind(a);
		int tmp2 = unionFind(b);
		if (com == 0) 
			uni[tmp1] = uni[tmp2];
		else {
			if (uni[a] == uni[b])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	//cout << "!";
}