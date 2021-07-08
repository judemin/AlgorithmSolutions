#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

class ball {
public:
	int c;
	int s;
	int res = 0;
	int ind;
};

bool compS(ball x, ball y) {
	return x.s > y.s;
}

bool compI(ball x, ball y) {
	return x.ind < y.ind;
}

long long int ci[200001] = { 0, };
long long int si[2002] = { 0, };
ball b[200001];
long long int totsi;
int main(void) {
	//freopen("input.txt", "r", stdin);
	int i, n;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> b[i].c >> b[i].s;
		ci[b[i].c] += b[i].s;
		si[b[i].s] += b[i].s;
		b[i].ind = i;
		totsi += b[i].s;
	}

	sort(b, b + n, compS);
	for (i = 0; i < n; i++) {
		b[i].res = totsi -
			(ci[b[i].c] + si[b[i].s]) + b[i].s;
		ci[b[i].c] -= b[i].s;
		si[b[i].s] -= b[i].s;
		totsi -= b[i].s;
	}

	sort(b, b + n, compI);
	for (i = 0; i < n; i++)
		cout << b[i].res << endl;
	return 0;
}

/*
4
1 10
3 15
1 3
4 8
*/