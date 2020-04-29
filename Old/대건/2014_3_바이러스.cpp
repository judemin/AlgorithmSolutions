#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int nearArray[101][101];
int check[101];
int cpuNum, cnt = 0;

void sum(int nowN) {
	check[nowN] = 1;
	int i;
	for (i = 0; i < cpuNum; i++) {
		if (nearArray[nowN][i] == 1 && check[i] != 1) {
			cnt++;
			sum(i);
		}
	}
}

void printArray() {
	int i,j;
	for (i = 0; i < cpuNum; i++) {
		for (j = 0; j < cpuNum; j++)
			cout << nearArray[i][j] << " ";
		cout << endl;
	}
}

int main(void) {
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	int i, j, nodeNum;
	cin >> cpuNum;
	cin >> nodeNum;
	for (i = 0; i < 101; i++)
		for (j = 0; j < 101; j++)
			nearArray[i][j] = 0;
	for (i = 0; i < nodeNum; i++) {
		int t1, t2;
		cin >> t1 >> t2;
		t1--; t2--;
		nearArray[t1][t2] = 1;
	}
	sum(0);
	cout << cnt;
}