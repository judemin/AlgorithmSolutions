#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int N, arr[1001], i, j,tmp;
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> arr[i];
	for(i = 0;i < N;i++)
		for(j = i+1;j < N;j++)
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
	for (i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}
