#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <algorithm>
#include<iostream>
using namespace std;
class date {
private:
public:
	int cnt;
	int sm, sd;
	int em, ed;
};
date dt[100001];
int n;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j,cnt = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> dt[i].sm >> dt[i].sd >> dt[i].em >> dt[i].ed;
	sort(dt, dt + n,
		[](date const & i, date const & j) -> bool
	{ 
		if (i.em == j.em)return i.ed < j.ed;
		else
		return i.em < j.em; 
	});

	for (i = n - 1; i >= 0; i--) {
		if ((dt[i].sm < 11 || (dt[i].sm == 11 && dt[i].sd <= 30)) && (dt[i].em > 11 || (dt[i].em == 11 && dt[i].ed >= 30)))
			break;
		n--;
	}
	int lasti = n - 1;
	i = n - 1;
	for (; i >= 0; i--) {
		int max = -1; int itmp = i;
		for (j = i; j >= 0; j--) {
			if (dt[i].em != dt[j].em)
				break;
			int tmp = (dt[j].em - dt[j].sm) * 30 + dt[j].ed - dt[j].sd;
			if (tmp > max && (dt[j].sm < dt[lasti].sm || (dt[j].sm == dt[lasti].sm && dt[j].sd <= dt[lasti].sd))  && (dt[j].em > dt[lasti].sm || (dt[j].em == dt[lasti].sm && dt[j].ed >= dt[lasti].sd))) {
				itmp = j;
				max = tmp;
			}
		}
		if (max != -1) {
			i = itmp;
			lasti = itmp;
			cnt++;
		}
		if ((dt[i].sm < 3 || (dt[i].sm == 3 && dt[i].sd <= 1)) && (dt[i].em > 3 || (dt[i].em == 3 && dt[i].ed >= 1)))
			break;
	}
	if (cnt != 0)
		cout << cnt - 1;
	else
		cout << 0;
}

/*
3/1 -> 11/30

2 15 3 23
2 28 4 25
5 2 5 31
4 12 6 5
6 3 6 15
7 14 9 1
6 15 9 3
6 15 9 27
9 14 12 24
10 5 12 31
*/