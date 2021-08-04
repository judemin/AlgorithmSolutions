#include<iostream>
#include<vector>
using namespace std;

int sum = 0;
vector<pair<int, int>> res;
void hanoi(int st, int ed, int n) {
	if (n == 0)
		return;
	else {
		hanoi(st, 6 - st - ed, n - 1);
		
		sum++;

		pair<int,int> tmp;
		tmp.first = st;
		tmp.second = ed;
		res.push_back(tmp);

		hanoi(6 - st - ed, ed, n - 1);
		return;
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	hanoi(1, 3, n);
	cout << sum << endl;

	for (int i = 0; i < res.size(); i++)
		cout << res[i].first << " " << res[i].second << '\n';

	return 0;
}