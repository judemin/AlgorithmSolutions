#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<string>
using namespace std;

int nums[10] = {'0', '1','2','3','4','5','6','7','8','9' };
int numcnt[10] = { 0, };

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b, c;
	string abc = ""; char tmp[11];
	int num[10],i,j;
	cin >> a >> b >> c;
	for (i = 0; i < 10; i++)
		num[i] = 0;
	c = a * b * c;
	abc += _itoa(c, tmp,10);
	for (i = 0; i < abc.length(); i++)
		for (j = 0; j < 10; j++)
			if (abc[i] == nums[j])
				numcnt[j]++;
	for (i = 0; i < 10; i++)
		cout << numcnt[i] << endl;
}