#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

string mov(string a, char mod) {
	char tmp; int i;
	string b = a;
	if (mod == 'R') {
		tmp = a[a.length() - 1];
		for (i = 1; i < a.length(); i++)
			b[i] = a[i - 1];
		b[0] = tmp;
		return b;
	}
	tmp = a[0];
	for (i = a.length()-2; i >= 0; i--)
		b[i] = a[i + 1];
	b[a.length()-1] = tmp;
	return b;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char com; string a;
	int num, i, j;
	cin >> a >> com >> num;
	for (i = 0; i < num; i++)
		a = mov(a, com);
	cout << a;
	return 0;
}