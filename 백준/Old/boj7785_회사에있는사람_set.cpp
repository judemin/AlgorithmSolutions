#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(void) {
	int n,i;
	set <string> s;
	cin >> n;
	for (i = 0; i < n; i++) {
		string tmp;
		string com;
		cin >> tmp >> com;
		if (com == "enter")
			s.insert(tmp);
		else
			s.erase(tmp);
	}

	set <string>::iterator iter;
	iter = s.end();
	iter--;
	for (; iter != s.begin(); iter--)
		cout << *iter << endl;
	cout << *iter << endl;
	return 0;
}

/*
4
Baha enter
Askar enter
Baha leave
Artem enter
*/