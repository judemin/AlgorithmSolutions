#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<utility>
#include<set>
#define N 32010
#define M 100010
using namespace std;

int n, m;
int num[N] = { 0, };
set < pair<int, int> > s;//first: ÀÎµ¦½º second Å°
int main(void) {
	int i;
	freopen("input.txt", "r", stdin);
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		num[b] = num[a] + 1;
	}

	for (i = 1; i <= n; i++) {
		pair <int, int> p;
		p.first = num[i];
		p.second = i;
		s.insert(p);
	}
	set < pair<int, int> >::iterator iter;
	for(iter = s.begin(); iter != s.end();iter++)
		cout << (*iter).second << " ";
	cout << endl;
	return 0;
}

/*
3 2
1 3
2 3

1 2 3
*/