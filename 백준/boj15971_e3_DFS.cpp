#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#define N 100010
#define INF 987654321
using namespace std;

int st, ed,n;
int max = -1,res = INF;
int check[N] = { 0, };
vector < pair <int,int> > map[N];
void process(int now, int val) {
	//cout << now << endl;
	if (check[now] == 1)
		return;
	if (now == ed) {
		int tmp = val - max;
		if (res > tmp)
			res = tmp;
		return;
	}

	check[now] = 1;
	for (int i = 0; i < map[now].size(); i++) {
		int next = map[now][i].first;
		int tmp = map[now][i].second;
		if (max < tmp)
			max = tmp;
		process(next,val + tmp);
	}
}

int main(void) {
	int i;
	freopen("input.txt","r",stdin);
	cin >> n >> st >> ed;
	for (i = 0; i < n - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		pair <int, int> tmp;
		tmp.first = b;
		tmp.second = c;
		map[a].push_back(tmp);
		tmp.first = a;
		tmp.second = c;
		map[b].push_back(tmp);
	}
	process(st, 0);
	cout << res << endl;
}

/*
5 1 5
1 2 1
2 3 2
3 4 3
4 5 4

6



9 1 9
1 2 8
2 3 6
2 4 5
2 5 10
9 5 6
6 5 14
6 7 7
8 6 7

14
*/