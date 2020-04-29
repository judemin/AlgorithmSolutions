#include<iostream>
#include<vector> //벡터도 사용 가능
#include<queue>
using namespace std;

queue <int> q;
int main(void) {
	int n, m, i, j;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m - 1; j++) {
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front();
		if (i != n - 1)
			cout << ", ";
		q.pop();
	}
	cout << ">" << endl;
	return 0;
}