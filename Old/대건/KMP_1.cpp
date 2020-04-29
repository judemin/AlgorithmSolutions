#include<stdio.h>
#include<string.h>
#define N 15
char str1[N] = ("ababcababaaa");
int check[N];
int main() {
	int k, n;
	for (int i = strlen(str1) - 1; i >= 0; i--) {
		str1[i + 1] = str1[i];
	}
	n = strlen(str1) - 1;
	str1[0] = 'Z';
	check[0] = -1;
	for (int i = 1; i <= n; i++) {
		k = check[i - 1];
		while (true) {
			if (str1[k + 1] == str1[i]) {
				check[i] = k + 1;
				break;
			}
			else if (k == -1) {
				check[i] = 0;
				break;
			}
			else {
				k = check[k];
			}
		}
	}
	return 0;
}