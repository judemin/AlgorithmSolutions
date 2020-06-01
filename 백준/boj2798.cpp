#include<iostream>
using namespace std;

int sumM = -1;
int arr[101];
int main(void) {
	int i, j, k;
	int n, m;
	
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> arr[i];

	for(i = 0;i < n;i++)
		for(j = i + 1;j < n;j++)
			for (k = j + 1; k < n; k++) {
				int tmp = arr[i] + arr[j] + arr[k];
				if (tmp > m)
					continue;
				if (tmp > sumM)
					sumM = tmp;
			}

	cout << sumM << endl;
	return 0;
}