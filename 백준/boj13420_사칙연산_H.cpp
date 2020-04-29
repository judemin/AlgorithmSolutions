#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int t;
long long int change(string a) {
	int res = 0,layer = 1;
	for (int i = a.length() - 1; i >= 0; i--) {
		res += (a[i] - '0') * layer;
		layer *= 10;
	}
	return res;
}

int main(void) {
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> t;
	cin.ignore();
	for (i = 0; i < t; i++) {
		long long int a1d = 1, a2d = 1, a3d = 1;
		string n1, ref, n2, ans;
		string input;
		getline(cin, input);

		int cnt = 0;
		while (true) {
			if (input[cnt] == ' ')
				break;
			if (input[cnt] == '-') {
				a1d = -1;
				cnt++;
			}
			else
				n1 += input[cnt++];
		}
		cnt++;
		ref = " ";
		ref[0] = input[cnt];
		cnt += 2;
		while (true) {
			if (input[cnt] == ' ')
				break;
			if (input[cnt] == '-') {
				a2d = -1;
				cnt++;
			}
			else
				n2 += input[cnt++];
		}
		cnt += 3;
		while (true) {
			if (cnt == input.length())
				break;
			if (input[cnt] == '-') {
				a3d = -1;
				cnt++;
			}
			else
				ans += input[cnt++];
		}

		long long int a1 = change(n1);
		long long int a2 = change(n2);
		long long int a3 = change(ans);
		a1 *= a1d;
		a2 *= a2d;
		a3 *= a3d;
		if (ref[0] == '+') {
			if (a1 + a2 == a3)
				cout << "correct" << endl;
			else
				cout << "wrong answer" << endl;
		}
		if (ref[0] == '-') {
			if (a1 - a2 == a3)
				cout << "correct" << endl;
			else
				cout << "wrong answer" << endl;
		}
		if (ref[0] == '*') {
			if (a1 * a2 == a3)
				cout << "correct" << endl;
			else
				cout << "wrong answer" << endl;
		}
		if (ref[0] == '/') {
			if (a1 / a2 == a3)
				cout << "correct" << endl;
			else
				cout << "wrong answer" << endl;
		}
	}
}