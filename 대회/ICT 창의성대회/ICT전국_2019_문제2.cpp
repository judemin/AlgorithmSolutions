#include<iostream>
using namespace std;

int main(void) {
	int res = 0;
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
		res += i;
	cout << res << endl;
	return 0;
}