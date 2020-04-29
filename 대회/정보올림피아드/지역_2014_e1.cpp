#include<iostream>
using namespace std;

int main(void) {
	int k, n, m;
	cin >> k >> n >> m;
	
	int res = k * n;
	if (res <= m)
		cout << "0" << endl;
	else
		cout << res - m << endl;
	return 0;
}