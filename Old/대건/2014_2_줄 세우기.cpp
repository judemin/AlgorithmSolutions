#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int line[101],cnt = 0;

void addStu(int num,int val) {
	for (int i = cnt - num; i >= num; i--)
		line[i + 1] = line[i];
	line[num] = val;

}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, i, tmp;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> tmp;
		cnt++;
		addStu(tmp,i+1);
	}
	for (i = n-1; i >= 0; i--)
		cout << line[i] << " ";
}