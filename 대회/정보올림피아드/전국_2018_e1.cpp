#include<iostream>
using namespace std;

int max = -1, min = 987654321;
int main(void) {
	int n,i;
	cin >> n;
	for (i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;
	}
	cout << max - min << endl;
	return 0;
}