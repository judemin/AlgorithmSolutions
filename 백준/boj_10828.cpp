#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void) {
	string s;
	stack <int> st;
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s;
		int tmp;
		if (s == "push") {
			cin >> tmp;
			st.push(tmp);
		}
		else if (s == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
				continue;
			}
			cout << "-1" << endl;
		}
		else if (s == "size") {
			cout << st.size() << endl;
		}
		else if (s == "empty") {
			if (st.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else {
			if (!st.empty()) {
				cout << st.top() << endl;
				continue;
			}
			cout << "-1" << endl;
		}
	}
	return 0;
}