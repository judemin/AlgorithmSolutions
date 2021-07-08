#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int t;
int main(void) {
	freopen("input.txt", "r", stdin);
	int i, j;
	cin >> t;
	for(i = 0;i < t;i++){
		int n;
		string res = "";
		cin >> n;
		for (j = 0; j < n; j++) {
			char a;
			cin >> a;
			if (a - '0' <= res[0] - '0') {
				string tmp = " ";
				tmp[0] = a;
				res = tmp + res;
			}
			else
				res += a;
		}
		cout << res << endl;
	}
}

/*
3
3
M K U
5
A S D F G
7
B A C A B A C
*/