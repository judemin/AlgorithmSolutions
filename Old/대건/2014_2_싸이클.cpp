#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int exist[1001],cnt = 0;
bool isexist(int a){
	int i;
	for (i = 0; i < cnt; i++)
		if (exist[i] == a)
			return true;
	return false;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, p, i, j,re;
	cin >> n >> p;
	re = n;
	while (true) {
		re *= n;
		re %= p;
		if (isexist(re) == true) {
			cout << cnt;
			break;
		}
		exist[cnt++] = re;
	}
	return 0;
}