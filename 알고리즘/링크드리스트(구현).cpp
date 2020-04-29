#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define N 10
using namespace std;

struct  NODE{
	int v;
	NODE * next;
};

NODE * matrix[N];
int main(void) {
	freopen("input.txt", "r", stdin);
	int i,n,room,num;

	for (i = 0; i < N; i++) {
		matrix[i] = new NODE; 
		matrix[i]->v = -1;
		matrix[i]->next = NULL;
	}

	NODE * imsi;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> room >> num;
		imsi = new NODE;
		imsi->v = num;
		imsi->next = matrix[room]->next;
		matrix[room]->next = imsi;
	}

	for (i = 1; i <= n; i++) {
		cout << i << " : ";
		NODE  * tmp = matrix[i];
		while (tmp->next != NULL) {
			tmp = tmp->next;
			cout << tmp->v << " ";
		}
		cout << endl;
	}
	return 0;
}

//넥스탑 비밀번호 1111 2222
/*
5
3 2
3 5
1 7
3 8
5 4
*/