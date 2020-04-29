#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char a[101]; string as;
	int i,cnt = 0;
	gets_s(a);
	as = a;
	for (i = 0; i < as.length(); i++) {
		if (a[i] == ' ')
			cout << " ";
		else if((int)a[i] < 94)
			printf("%c", as[i] + 32);
		else if ((int)a[i] > 94)
			printf("%c", as[i] - 32);
	}
	return 0;
}