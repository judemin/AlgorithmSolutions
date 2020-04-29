#include<iostream>
#define N 100
using namespace std;

int n, m;
int single;
int save[N][N] = {0,};
int result[N];
void process(int next,int quan) {
	int i;
	for (i = 1; i <= n; i++) {
		if (save[next][i] < 1)
			continue;
		if (i < single)
			result[i] += save[next][i] * quan;
		else
			process(i, quan * save[next][i]);
	}
}

int main(void) {
	int i;
	cin >> n >> m;
	int min = 987654321;
	for (i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		save[x][y] = z;
		if (x < min)
			min = x;
	}
	single = min;

	process(n,1);
	for (i = 1; i < single; i++)
		cout << i << " " << result[i] << endl;
	return 0;
}