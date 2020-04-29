#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	cout << a * (b % 10) << endl;
	cout << a * ((b % 100)/10) << endl;
	cout << a * (b / 100) << endl;
	cout << a*b;
}
