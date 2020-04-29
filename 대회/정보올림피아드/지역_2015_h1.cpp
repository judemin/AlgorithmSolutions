#include<iostream>
using namespace std;

int a[21];
int main(void) {
	int i;
	for (i = 0; i < 20; i++)
		a[i] = i + 1;

	for(i = 0;i < 10;i++){
		int s, e;
		cin >> s >> e;
		s--; e--;
		while (s < e) {
			int tmp = a[s];
			a[s] = a[e];
			a[e] = tmp;
			e--;
			s++;
		}
	}

	for (i = 0; i < 20; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}