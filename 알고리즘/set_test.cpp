#include<iostream>
#include<set>
using namespace std;

int main(void) {
	set <int> s;
	set <int>::iterator iter;

	s.insert(50);
	s.insert(30);
	s.insert(10);
	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	s.erase(30);
	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	cout << endl;

	multiset <int> ms;
	multiset <int>::iterator msiter;

	ms.insert(10);
	ms.insert(30);
	ms.insert(30);
	ms.insert(50);

	for (iter = ms.begin(); iter != ms.end(); iter++)
		cout << *iter << " ";
	cout << endl;
}