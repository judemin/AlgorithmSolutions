#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<String>
using namespace std;

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char a[101];
	int i,res,cnt;
	while (true){
		res = 0; cnt = 0;
		while (true) {
			cin >> a[cnt];
			if (a[cnt] == '+')
				break;
			else if (a[cnt] == 'a' || a[cnt] == 'A')
				res++;
			cnt++;
		}
		if (a[0] == '-')
			break;
		cout << res << endl;
	}
	return 0;
}	