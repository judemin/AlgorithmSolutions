#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	int n, i, j;
	cin >> n;;
	for (i = 0; i < n; i++) {
		multiset <int> ms;
		multiset <int>::iterator iter;
		int m, num;
		char com;
		cin >> m;
		for (j = 0; j < m; j++) {
			cin >> com >> num;
			if (com == 'I')
				ms.insert(num);
			else if (com == 'D' && !ms.empty()) {
				int tmp;
				if (num == -1) {
					iter = ms.begin();
					ms.erase(*iter);
				}
				else {
					iter = ms.end();
					iter--;
					ms.erase(*iter);
				}
			}
		}
		if (ms.empty())
			cout << "EMPTY" << endl;
		else {
			multiset <int>::iterator iter;
			iter = ms.end();
			iter--;
			cout << *iter << " ";
			iter = ms.begin();
			cout << *iter << endl;
		}
	}
}

/*
2
7
I 16
I -5643
D -1
D 1
D 1
I 123
D -1
9
I -45
I 653
D 1
I -642
I 45
I 97
D 1
D -1
I 333
*/