#include<iostream>
#include<deque>
using namespace std;

deque <int> dq;
int main(void) {
	dq.push_back(20);
	dq.push_back(10);
	dq.push_back(85);

	deque <int>::iterator iter;
	for (iter = dq.begin(); iter != dq.end(); iter++)
		cout << (*iter) << endl;

	cout << dq[2] << endl;
}