#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int towers[500000];
int crashLoc[500000];

int main(void) {
	int n,i,j;
	cin >> n;
	for (i = 0;i < n; i++)
		cin >> towers[i];
	crashLoc[0] = 0;

	for (i = 0; i < n; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (towers[i] < towers[j]) {
				crashLoc[i] = j;
				break;
			}
			else
				j = crashLoc[j];
		}
		if (j <= 0)
			crashLoc[i] == 0;
	}
}