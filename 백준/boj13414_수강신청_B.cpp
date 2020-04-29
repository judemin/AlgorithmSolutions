#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<set>
#include<string>
#include<utility>
using namespace std;

int k, l,cnt = 0;
map < string, int > m;
set < pair<int, string> > rem;
int main(void) {
	freopen("input.txt", "r", stdin);
	int i;
	cin >> k >> l;
	for (i = 0; i < l; i++) {
		string tmp;
		cin >> tmp;
		m[tmp] = cnt++;
	}

	map < string, int >::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
		rem.insert(pair <int, string>((*iter).second, (*iter).first));

	i = 0;
	set < pair<int, string> >::iterator miter;
	for (miter = rem.begin(); i < k; miter++) {
		cout << (*miter).second << endl;
		i++;
	}
	return 0;
}

/*
3 8
20103324
20133221
20133221
20093778
20140101
01234567
20093778
20103325
*/