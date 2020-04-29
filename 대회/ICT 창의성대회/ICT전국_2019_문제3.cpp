#include<iostream>
using namespace std;

int input[5];
void proces(int n){
	if (n == 1) {
		cout << "number one" << endl;
		return;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			cout << "composite number" << endl;
			return;
		}
	}
	cout << "prime number" << endl;
	return;
}

int main(void) {
	int i;
	for (i = 0; i < 5; i++)
		cin >> input[i];
	for (i = 0; i < 5; i++)
		proces(input[i]);
	return 0;
}