#define _CRT_SECURE_NO_WARNINGS
#define N 1010
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n, m;
queue <int> q;
vector <int> map[N];
int result[N], cnt = 0;
int check[N] = { 0, };
int main(void) {
	freopen("input.txt", "r", stdin);
	int i, j;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		int a, tmp[110];
		cin >> a;
		for (j = 0; j < a; j++)
			cin >> tmp[j];
		for (j = 0; j < a - 1; j++) {
			map[tmp[j]].push_back(tmp[j + 1]);
			check[tmp[j + 1]]++;
		}
	}

	for (i = 1; i <= n; i++) {
		if (check[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		result[cnt++] = q.front();
		vector <int> tmp = map[q.front()];
		for (i = 0; i < tmp.size(); i++) {
			check[tmp[i]]--;
			if (check[tmp[i]] == 0)
				q.push(tmp[i]);
		}
		q.pop();
	}

	if (cnt == n)
		for (i = 0; i < cnt; i++)
			cout << result[i] << endl;
	else
		cout << 0 << endl;

	return 0;
}

/*
6 3
3 1 4 3
4 6 2 5 4
2 2 3
*/