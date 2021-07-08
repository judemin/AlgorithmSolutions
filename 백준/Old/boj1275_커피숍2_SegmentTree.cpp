#include<iostream>
#define N 100010
using namespace std;

int n, q;
int arr[N];
int tree[N * 2] = { 0, };
int segmentTree(int left, int right, int now) {
	tree[now] = 0;
	if (left == right)
		return tree[now] = arr[left];
	int mid = (left + right) / 2;
	int tmp1 = segmentTree(left, mid, now * 2);
	int tmp2 = segmentTree(mid + 1, right, (now * 2) + 1);
	return tree[now] = tmp1 + tmp2;
}

int main(void) {
	int i;
	cin >> n >> q;
	for (i = 1; i <= n; i++)
		cin >> arr[i];

	for (i = 0; i < q; i++) {
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		segmentTree(x, y, 1);
		cout << tree[1] << endl;
		arr[a] = b;
	}
}