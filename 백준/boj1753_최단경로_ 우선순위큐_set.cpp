#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
#include<utility>
#define INF 987654321
#define N 20010
using namespace std;

int v, e, k;
vector < pair<int, int> > map[N];
set < pair<int, pair <int,int> > > queue;
int least[N] = { 0, };
int check[N] = { 0, };
int min(int a, int b) {
	if (a > b)
		return b;
	return a;
}

int main(void){ 
	freopen("input.txt","r",stdin);
	int i,j;
	for (i = 0; i < N; i++)
		least[i] = INF;

	cin >> v >> e;
	cin >> k;
	for (i = 0; i < v; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		pair <int, int> p;
		p.first = b;
		p.second = c;
		map[a].push_back(p);
	}

	bool isend = false;;
	int now = k;
	least[now] = 0;
	for (i = 0; i < v; i++) {
		if (isend == true)
			break;

		check[now] = 1;
		for (j = 0; j < map[now].size(); j++) {
			int next = map[now][j].first;
			int nextVal = map[now][j].second;
			least[next] = min(least[next], least[now] + nextVal);
			pair <int, pair <int,int> > p;
			p.first = least[next];
			p.second.first = now;
			p.second.second = next;
			queue.insert(p);
		}

		while (true) {
			set < pair<int, pair<int, int> > >::iterator iter;
			iter = queue.begin();
			if (queue.empty()) {
				isend = true;
				break;
			}
			else if (check[(*iter).second.second] == 1)
				queue.erase(*iter);
			else {
				now = (*iter).second.second;
				queue.erase(*iter);
				break;
			}
		}
	}

	for (i = 1; i <= v; i++) {
		if (least[i] == INF)
			cout << "INF" << endl;
		else
			cout << least[i] << endl;
	}
}

/*
5 6
1
5 1 1
1 2 2
1 3 3
2 3 4
2 4 5
3 4 6


0
2
3
7
INF
*/