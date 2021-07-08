#define _CRT_SECURE_NO_WARNINGS
#define N 1001
#include<iostream>
using namespace std;

int stack[N];
int main(void) {
	freopen("input.txt", "r", stdin);
	int max = -1;
	int now = 0;
	int i, n;
	cin >> n;
	for (i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (now == 0 || stack[now - 1] <= tmp)
			stack[now++] = tmp;
		else {
			if (max < now)
				max = now;
			int cnt = now - 1;
			while (cnt > -1) {
				if (stack[cnt] < tmp) {
					stack[cnt+1] = tmp;
					break;
				}
				cnt--;
			}
			if (cnt == -1)
				stack[0] = tmp;
		}
	}
	if (max < now)
		max = now;

	cout << max;
	return 0;
}

/*
8
1 6 2 5 7 3 5 6
*/