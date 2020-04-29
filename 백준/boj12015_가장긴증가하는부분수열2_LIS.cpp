#include<iostream>
#define N 1000010
using namespace std;

int n, arr[N];
int cnt = 0, lis[N];
void print() {
	int i;
	for (i = 0; i < cnt; i++)
		cout << lis[i] << " ";
	cout << endl;
}

int main(void) {
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];

	lis[cnt++] = arr[0];
	for (i = 1; i < n; i++) {
		int now = cnt - 1;
		while (now >= 0) {
			if (lis[now] <= arr[i]) {
				if (now == cnt - 1)
					lis[cnt++] = arr[i];
				else
					lis[now] = arr[i];
				break;
			}
			now--;
		}
		if (now == -1) {
			now = 0;
			lis[now] = arr[i];
		}
		print();
	}
	cout << cnt << endl;
}

/*
6
10 20 10 30 20 50
*/