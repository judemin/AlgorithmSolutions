#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <deque>
#include<string>
using namespace std;

deque <int> dq;
int main(void) {
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		int tmp;
		string com;
		cin >> com;
		if (com == "push_front") {
			cin >> tmp;
			dq.push_front(tmp);
		}
		else if (com == "push_back") {
			cin >> tmp;
			dq.push_back(tmp);
		}
		else if (com == "pop_front") {
			if (dq.empty()) {
				cout << -1 << endl;
				continue;
			}
			dq.pop_front();
		}
		else if (com == "pop_back") {
			if (dq.empty()) {
				cout << -1 << endl;
				continue;
			}
			dq.pop_back();
		}
		else if (com == "size") {
			cout << dq.size() << endl;
		}
		else if (com == "empty") {
			if (dq.empty()) {
				cout << 1 << endl;
				continue;
			}
			cout << 0 << endl;
		}
		else if (com == "front") {
			if (dq.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << dq.front() << endl;
		}
		else if (com == "back") {
			if (dq.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << dq.back() << endl;
		}
	}
	return 0;
}