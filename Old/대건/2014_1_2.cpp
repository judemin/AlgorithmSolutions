#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

string a;

int sum(char nowp,int cnt,int result) {
	if (cnt >= a.length())
		return result;
	if (nowp == a[cnt])
		result += 5;
	else
		result += 10;
	sum(a[cnt],cnt+1,result);
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> a;
	cout << sum(a[0],1,10);
}