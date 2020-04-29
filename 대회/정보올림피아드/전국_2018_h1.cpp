#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

class coordinate {
public:
	int loc;
	int col;
};
coordinate co[10000];

bool comp(coordinate a,coordinate b){
	if (a.col < b.col)
		return true;
	return false;
}
int main(void) {
	//freopen("input.txt","r", stdin);
	int sum = 0;
	int n, i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> co[i].loc >> co[i].col;

	sort(co, co + n,comp);
	for (i = 0; i < n; i++) {
		int lcnt = 0;
		int tmp[100000];
		int set = co[i].col;

		j = i;
		while (set == co[j].col) {
			tmp[lcnt] = co[j].loc;
			j++;
			lcnt++;
			if (j >= n)
				break;
		}

		if (j - i <= 1)
			continue;
		i = j;
		sort(tmp, tmp + lcnt);
		int res = 0;
		for (int k = 0; k < lcnt; k++) {
			if (k == 0)
				res += tmp[k + 1] - tmp[k];
			else if (k == lcnt - 1)
				res += tmp[k] - tmp[k - 1];
			else {
				int a1 = tmp[k] - tmp[k - 1];
				int a2 = tmp[k + 1] - tmp[k];
				if (a1 < a2)
					res += a1;
				else
					res += a2;
			}
		}
		sum += res;
	}
	cout << sum << endl;
	return 0;
}

/*
4
0 1
1 2
3 1
4 1

5



9
10 2
11 3
20 2
22 1
25 1
0 1
4 2
5 2
7 2

45
*/