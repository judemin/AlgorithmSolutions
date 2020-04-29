#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int N, d, k, c; //N : 접시의 수 N, 초밥의 가짓수 d, 연속해서 먹는 접시의 수 k, 쿠폰 번호 c
int arr[30001];
int ast[3001] = { 0, };//모든 초밥
int s = 0, e = 0;
int max = -1;

int returnAst() {
	int i,tmp = 0;
	for (i = 0; i < d; i++)
		if (ast[i] != 0) {
			//cout << i << " ";
			tmp++;
		}
	//cout << " + " << c << " tmp=" << tmp << endl;
	return tmp;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i;
	cin >> N >> d >> k >> c;
	e = k - 1;
	for (i = 0; i < N; i++)
		cin >> arr[i];
	for (i = 0; i < k; i++)
		ast[arr[i]]++;
	for (i = 0; i < N * 2; i++) {
		ast[arr[s]]--;
		s++; e++;
		if (s >= N) {
			s = 0;
		}
		if (e >= N) {
			e = 0;
		}
		ast[arr[e]]++;
		int tmp = returnAst();
		if (max < tmp) {
			max = tmp;
			if (ast[c] == 0)
				max++;
		}
	}
	cout << max;
}

/*
8 30 4 30
7
9
7
30
2
7
9
25
// 5

8 50 4 7
2
7
9
25
7
9
7
30
// 4
*/