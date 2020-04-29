#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(void) {
	string s;
	queue <int> q;
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s;
		int tmp;
		if (s == "push") {
			cin >> tmp;
			q.push(tmp);
		}
		else if (s == "pop") {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
				continue;
			}
			cout << "-1" << endl;
		}
		else if (s == "size") {
			cout << q.size() << endl;
		}
		else if (s == "empty") {
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "back") {
			if (!q.empty()) {
				cout << q.back() << endl;
				continue;
			}
			cout << "-1" << endl;
		}
		else {
			if (!q.empty()) {
				cout << q.front() << endl;
				continue;
			}
			cout << "-1" << endl;
		}
	}
	return 0;
}