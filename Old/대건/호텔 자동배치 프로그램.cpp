#include<iostream>
#include<algorithm>
using namespace std;

#define R 2000001

struct schedule {
	int s, e;
	int num;
};
int r,cnt = 0;
int check[R];
schedule sche[R];

bool compare(schedule a, schedule b) { return a.e < b.e; }

int main() {
	int i,choi = 0;
	cin >> r;
	for (i = 0; i < r; i++) {
		cin >> sche[i].s >> sche[i].e;
		sche[i].num = i + 1;
	}
	sort(sche, sche + r,compare);
	check[cnt++] = sche[0].num;
	for (i = 1; i < r; i++) {
		if (sche[choi].e < sche[i].s) {
			choi = i;
			check[cnt++] = sche[i].num;
		}
	}
	for (i = 0; i < cnt; i++)
		cout << sche[i].num << " ";
	cout << endl << cnt;
}

/*
6
15 17
25 45
5 13
13 21
14 26
3 20
*/