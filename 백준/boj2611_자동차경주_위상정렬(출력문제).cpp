#define N 1002
#define stNodeNum 1
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class queue {
public:
	int node;
	int mTot = 0;
}q[N];

class check {
public:
	int num = 0;
	int mTot = 0;
}ch[N];


vector <pair <int,int> > map[N];
int trace[N];
int main(void) {
	int n, m, i;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		map[a].push_back(pair <int, int>(b, c));
		ch[b].num++;
	}

	int traceCnt = 0;
	int now = 0;
	int cnt = 1;
	q[now].node = stNodeNum;
	while (now <= cnt) {
		int loc = q[now].node;
		for (i = 0; i < map[loc].size(); i++) {
			int next = map[loc][i].first;

			if (ch[next].mTot < q[now].mTot + map[loc][i].second) {
				ch[next].mTot = q[now].mTot + map[loc][i].second;
			}
			
			ch[next].num--;
			if (ch[next].num == 0) {
				q[cnt].mTot = ch[next].mTot;
				q[cnt++].node = next;
			}
		}
		now++;
	}
	cout << ch[stNodeNum].mTot << endl;
	// 순서출력문제
	/*
	cout << "1 ";
	for (i = 0; i < cnt - 1; i++) {
		cout << trace[i] << " ";
	}
	cout << endl;
	*/
	return 0;
}

/*
8
13
1 2 5
1 3 4
2 5 2
2 6 1
3 6 3
5 6 7
5 8 9
6 8 3
4 1 6
6 4 8
7 4 5
6 7 2
8 7 4
*/