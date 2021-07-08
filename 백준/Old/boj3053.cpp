#define _USE_MATH_DEFINES
#include<iostream>
#include <cmath>
using namespace std;

int main(void) {
	double r;

	cin >> r;
	printf("%.6f\n", r * r * M_PI);
	printf("%.6f\n", 2 * r * r);
	return 0;
}