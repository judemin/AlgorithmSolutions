#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
#include<vector>
#define N 32010
using namespace std;

int n, m;
queue <int> q;
vector <int> he[N];
int check[N] = { 0, };
int main(void) {
	int i, j;
	freopen("input.txt", "r", stdin);
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		he[a].push_back(b);
		check[b]++;
	}

	for (i = 1; i <= n; i++)
		if (check[i] == 0)
			q.push(i);

	while (!q.empty()) {
		int now = q.front();
		for (i = 0; i < he[now].size(); i++) {
			int next = he[now][i];
			check[next]--;
			if (check[next] == 0)
				q.push(next);
		}
		cout << now << " ";
		q.pop();
	}
	cout << endl;
}