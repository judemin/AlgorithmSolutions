#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(void) {
	string tmp;
	set <string> listen;
	set <string> res;
	int n, m, i;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> tmp;
		listen.insert(tmp);
	}
	for (i = 0; i < m; i++) {
		cin >> tmp;
		if (listen.count(tmp) == 1)
			res.insert(tmp);
	}
	
	set <string>::iterator iter;
	int len = res.size();
	cout << len << endl;
	for (iter = res.begin(); iter != res.end(); iter++)
		cout << *iter << endl;
	return 0;
}