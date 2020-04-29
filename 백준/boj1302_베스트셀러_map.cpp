#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<string>
#include<utility>
#define N 1010
using namespace std;

map <string, int> m;
int max = -1;
int main(void) {
	//freopen("input.txt","r", stdin);
	string tmp;
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> tmp;
		if (m[tmp] == NULL) {
			m[tmp] = 1;
		}
		else
			m[tmp] += 1;
	}

	map <string, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
		if ((*iter).second > max)
			max = (*iter).second;

	//cout << max << endl;
	for (iter = m.begin(); iter != m.end(); iter++)
		if ((*iter).second == max)
			cout << (*iter).first << endl;
	return 0;
}