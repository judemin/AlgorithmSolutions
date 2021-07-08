#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<utility>
#include<vector>
#define V 20001
#define INF 987654321
using namespace std;

vector <pair<int,int>> map[V];
int check[V] = { 0, };
int Min[V] = { INF, };
int v,e;

int main(void) {
	freopen("input.txt", "r", stdin);
	int i, j, k;
	cin >> v >> e;
	cin >> k;
	k--;
	for (i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		pair <int, int> p;
		p.first = b - 1; //다음 경로
		p.second = c; //가중치
		map[a - 1].push_back(p);
	}

	for (i = 0; i < v; i++)
		Min[i] = INF;

	int now = k;
	Min[now] = 0;
	for(j = 0;j < v;j++){
		check[now] = 1;
		for (i = 0; i < map[now].size(); i++) {
			int next = map[now][i].first;
			int val = map[now][i].second;

			if (Min[next] > Min[now] + val)
				Min[next] = Min[now] + val;
		}
		
		int nMin = 987654321;
		for (i = 0; i < v; i++) {
			if (Min[i] < nMin && check[i] == 0) {
				now = i;
				nMin = Min[i];
			}
		}
	}

	for (i = 0; i < v; i++) {
		if (Min[i] == INF)
			cout << "INF" << endl;
		else
			cout << Min[i] << endl;
	}
	return 0;
}

//Timeout