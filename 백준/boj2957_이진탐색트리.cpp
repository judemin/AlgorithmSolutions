#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<set>
using namespace std;

int c,n;
set <int> s;
int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		set <int>::iterator iter;
		if (s.empty()) {
			s.insert(tmp);
			cout << 0 << endl;
			continue;
		}

		for (iter = s.begin(); iter != s.end(); iter++) {
			c++;
			if ((*iter) > tmp) {
				iter--;
				s.insert(iter, tmp);
				cout << c << endl;
				break;
			}
		}
		if (iter == s.end()) {
			s.insert(iter, tmp);
			cout << c << endl;
		}
	}
}