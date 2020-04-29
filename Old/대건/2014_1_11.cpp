#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, tmp, arr[7];
	for (i = 0; i < 7; i++)
		cin >> arr[i];
	for(i = 0; i< 7;i++)
		for(j = i;j < 7;j++)
			if (arr[i] < arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
	cout << arr[0] << endl << arr[1];
	return 0;
}