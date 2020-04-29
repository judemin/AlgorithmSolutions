#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

//1 :µ¿ 2:¼­ 3:³² 4:ºÏ

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int k, arr[6] = { 0, }, i, dir[6] = {0,};
	int length = 0, height = 0, result = 0;
	cin >> k;
	for (i = 0; i < 6; i++)
		cin >> dir[i] >> arr[i];
	for (i = 2; i < 6;i++) {
		if (dir[i] == 1) {
			length += arr[i];
			result += length * height;
			length = 0;
		}
		else if (dir[i] == 3)
			height += arr[i];
		else if (dir[i] == 4) {
			height -= arr[i];
			result += length * height;
			height = 0;
		}
		cout << dir[i] << " " << arr[i] <<"	"<< height << " " << length << endl;
	}
	cout << result * k;
}