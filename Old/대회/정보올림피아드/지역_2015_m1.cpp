#include<iostream>
using namespace std;

int A[10];
int B[10];
int main(void) {
	int i;
	int as = 0, bs = 0;
	for (i = 0; i < 10; i++)
		cin >> A[i];
	for (i = 0; i < 10; i++)
		cin >> B[i];

	for (i = 0; i < 10; i++) {
		int tmp1, tmp2;
		tmp1 = A[i];
		tmp2 = B[i];
		if (tmp1 > tmp2)
			as++;
		else if (tmp1 < tmp2)
			bs++;
	}

	if (as > bs)
		cout << "A";
	else if (as < bs)
		cout << "B";
	else
		cout << "D";
	return 0;
}