#include<iostream>
#define maxLen 250000
using namespace std;

int prime[maxLen + 2] = { 0, };
int sum[maxLen] = { 0, };
void isPrime() {
	int i, j;

	prime[1] = 1;
	prime[2] = 0;
	for (i = 2; i <= maxLen; i++)
		for (j = i + i; j <= maxLen; j += i)
			prime[j] = 1;
}

int main(void) {
	int i;

	isPrime();
	for (i = 0; i < maxLen; i++) {
		if (prime[i] != 1)
			sum[i]++;
		sum[i] += sum[i - 1];
	}

	while(true) {
		int tmp;
		cin >> tmp;

		if (tmp == 0)
			break;
		cout << sum[tmp * 2] - sum[tmp] << endl;
	}
	return 0;
}