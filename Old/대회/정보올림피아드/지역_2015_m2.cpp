#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int i, cnt = 0;
	int num = 0;
	char tmp;
	string s;

	cin >> s;
	for (i = 0; i < s.length(); i++) {
		if (s[i] == '(')
			cnt++;
		else if (s[i - 1] == '(' && s[i] == ')') {
			cnt--;
			num += cnt;
		}
		else if (s[i] == ')') {
			cnt--;
			num++;
		}
	}
	cout << num << endl;
	return 0;
}