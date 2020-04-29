#include<iostream>
#include<string>
using namespace std;

int t;
int main(void) {
	int i, j;
	cin >> t;
	for (i = 0; i < t; i++) {
		string input;
		string a1 = "";
		string  a2 = "";
		cin >> input;

		if (input.length() == 1)
			cout << input << endl << input << endl;
		else if (input.length() == 2)
			cout << input[0] << endl << input[1] << endl;
		else {
			a1 += input[0];
			int i = 2;
			while (true) {
				if (i >= input.length())
					i %= input.length();
				if (input[i] == a1[0])
					break;
				a1 += input[i];
				i+=2;
			}

			a2 += input[1];
			i = 3;
			while (true) {
				if (i >= input.length())
					i %= input.length();
				if (input[i] == a2[0])
					break;
				a2 += input[i];
				i+=2;
			}

			cout << a1 << endl << a2 << endl;
		}
	}
}

/*
4
ABC
ABCFXZ
K
DY
*/