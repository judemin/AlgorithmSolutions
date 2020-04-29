#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	float e, a, b;
	while (true) {
		cout << "Input e , a : ";
		cin >> e >> a;
		b = a * sqrt(1 - e * e);
		if (b < 0)
			b *= -1;
		cout << b << endl;
	}
}