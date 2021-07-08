#include<iostream>
#include<string>
#include<map>
using namespace std;

map <string, string> m;
map <int, int> m2;
int main(void) {
	if (m2[1] == NULL)
		cout << "Int NULL" << endl;
	if (m["name"] == "")
		cout << "NULL" << endl;
	m["name"] = "b";
	m["name2"] = "a";
	cout << m.size() << endl << endl;
	map <string, string>::iterator iter;
	iter = m.begin();
	for (iter = m.begin(); iter != m.end(); iter++)
		cout << (*iter).second << endl;
}