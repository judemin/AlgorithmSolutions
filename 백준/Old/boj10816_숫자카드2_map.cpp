#define _CRT_SECURE_NO_WARNINGS
#include<map>
#include<iostream>
using namespace std;

int n, m;
map <int, int> ma;
int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (ma[a] == NULL)
			ma[a] = 1;
		else
			ma[a]++;
	}
	
	cin >> m;
	for (i = 0; i < m; i++) {
		int a;
		cin >> a;
		if (ma[a] == NULL)
			cout << 0 << " ";
		else
			cout << ma[a] << " ";
	}
	cout << endl;
	return 0;
}