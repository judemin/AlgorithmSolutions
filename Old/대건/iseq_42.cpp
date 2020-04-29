#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	srand((unsigned int)time(NULL));
	rand() % 7 + 1;
	int n, i, arr[6] = {0,0,0,0,0,0};
	cin >> n;
	for (i = 0; i < n; i++)
		arr[(rand() % 6 + 0)]++;
	for (i = 0; i < 6; i++) {
		cout << i+1 << " " << arr[i] << " ";
		printf("%0.2f \n", (float)arr[i] * (100 / (float)n));
	}
}
