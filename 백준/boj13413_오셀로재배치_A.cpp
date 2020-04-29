#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#define N 100010
using namespace std;

int t;
// W1 B0
int main(void) {
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> t;
	for(i = 0;i < t;i++){
		int arr[N], dir[N];
		int aW = 0,aB = 0;
		int dW = 0, dB = 0;
		string ori, dori;
		int n;
		cin >> n;
		cin >> ori >> dori;
		for (j = 0; j < n; j++) {
			if (ori[j] == 'B') {
				arr[j] = 0;
				aB++;
			}
			else {
				arr[j] = 1;
				aW++;
			}

			if (dori[j] == 'B') {
				dir[j] = 0;
				dB++;
			}
			else {
				dir[j] = 1;
				dW++;
			}
		}

		int cnt = 0;
		if (aB > dB) {
			for (j = 0; j < n; j++)
				if (arr[j] == 0 && dir[j] == 1) {
					arr[j] = 1;
					cnt++;
					aB--;
					if (aB == dB)
						break;
				}
		}
		else if (aB < dB) {
			for (j = 0; j < n; j++)
				if (arr[j] == 1 && dir[j] == 0) {
					arr[j] = 0;
					cnt++;
					aB++;
					if (aB == dB)
						break;
				}
		}

		int res = 0;
		for (j = 0; j < n; j++)
			if (arr[j] != dir[j])
				res++;
		cnt += (res / 2);
		cout << cnt << endl;
	}
}