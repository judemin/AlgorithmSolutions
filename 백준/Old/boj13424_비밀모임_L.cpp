#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<utility>
#define N 110
#define INF 987654321
using namespace std;

vector <pair<int, int>> map[N];
int check[N] = { 0, };
int minR[N];
int res[N] = { 0, };
int t;
void alldef() {
	int i;
	for (i = 0; i < N; i++) {
		map[i].clear();
		res[i] = 0;
	}
}

void def() {
	int i;
	for (i = 0; i < N; i++) {
		minR[i] = INF;
		check[i] = 0;
	}
	check[0] = 1;
}

int minNum(int a, int b) {
	if (a < b)
		return a;
	return b;
}

int main(void) {
	freopen("input.txt","r",stdin);
	int l, i, j;
	cin >> t;
	for (l = 0; l < t; l++) {
		alldef();
		int n, m, k;
		cin >> n >> m;
		for (i = 0; i < m; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			map[a].push_back(pair <int, int>(b, c));
			map[b].push_back(pair <int, int>(a, c));
		}

		cin >> k;
		for (i = 0; i < k; i++) {
			def();
			priority_queue <pair <int, int>> pq;
			int now;
			cin >> now;
			minR[now] = 0;
			pq.push(make_pair(minR[now],now));
			while (!pq.empty()) { //engine
				int nowCost = pq.top().first;
				now = pq.top().second;
				pq.pop();
				if (nowCost > minR[now])
					continue;
				for (j = 0; j < map[now].size(); j++) {
					if (nowCost + map[now][j].second <
						minR[map[now][j].first]) {
						minR[map[now][j].first] =
							nowCost + map[now][j].second;
						pq.push(make_pair(nowCost + map[now][j].second,
							map[now][j].first));
					}
				}
			}

			for (j = 1; j <= n; j++) {
				if (minR[j] == INF)
					continue;
				res[j] += minR[j];
			}
		}
		
		for (i = 1; i <= n; i++)
		cout << res[i] << " ";
		cout << endl;
		
		int save = 0;
		int ans = INF;
		for (i = 1; i <= n; i++)
			if (res[i] < ans) {
				save = i;
				ans = res[i];
			}
		cout << save << endl;
	}
}

/*
1
6 7
1 2 4
1 3 1
1 5 2
2 3 2
3 4 3
4 5 2
6 5 1
2
3 5
*/