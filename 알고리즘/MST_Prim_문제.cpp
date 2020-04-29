#define N 100
#include<vector>
#include<utility>
#include<iostream>
using namespace std;

vector <pair<int,int>> map[N];
int check[N] = { 0, };
int main(void) {
	int n, e, i, j;
	cin >> n >> e;
	for (i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		map[a].push_back(pair<int,int>(b, c));
	}

	int res = 0;
	check[1] = 1;
	cout << 1;
	for(int k = 0;k < n - 1;k++){
		int min = 987654321 ,minL;
		for (i = 0; i < n; i++) {
			if (check[i] != 1)
				continue;
			for (j = 0; j < map[i].size(); j++) {
				int nextL = map[i][j].first;
				int wei = map[i][j].second;

				if (wei < min && check[nextL] == 0) {
					min = wei;
					minL = nextL;
				}
			}
		}
		cout << " | " << minL;
		check[minL] = 1;
		res += min;
	}
	cout << endl;
	cout << res << endl;
}

/*
6 9
1 2 5
1 3 4
2 3 2
2 4 7
3 4 6
3 5 11
4 5 3
4 6 8
5 6 8
*/