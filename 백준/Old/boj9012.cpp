#include<iostream>
#include<string>
#include<stack>
using namespace std;

int res[51];
int main(void) {
	int n, i, j;
	string s;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s;
		stack <int> st;
		for (j = 0; j < s.length(); j++) {
			if (s[j] == '(') {
				st.push(1);
			}
			else {
				if (st.empty()) {
					res[i] = 0;
					//cout << "NO" << endl;
					break;
				}
				st.pop();
			}
		}
		if (j == s.length()) {
			if (!st.empty()) {
				res[i] = 0;
				//cout << "NO";
				continue;
			}
			res[i] = 1;
			//cout << "YES" << endl;
		}
	}

	for (i = 0; i < n; i++) {
		if (res[i] == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}