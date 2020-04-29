#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int st, sm,spm;
	cin >> st >> sm;
	cin >> spm;
	sm += spm;
	st += sm / 60;
	sm %= 60;
	st %= 24;
	cout << st << " " << sm;
}