#define INF 987654321
#define N 7 //��� ����
#include<iostream>
using namespace std;

int edge[N][N] = {
	{ 0,7,INF,INF,3,10,INF },
	{ 7,0,4,10,2,6,INF },
	{ INF,4,0,2,INF,INF,INF },
	{ INF,10,2,0,11,9,4 },
	{ 3,2,INF,11,0,INF,5 },
	{ 10,6,INF,9,INF,0,INF },
	{ INF,INF,INF,4,5,INF,0 }
}; //����ġ

   //���������� �ִܰŸ�
int dist[N] = { 0, };
int check[N] = { 0, };

bool isEnd() {
	int i;
	for (i = 0; i < N; i++)
		if (check[i] == 0)
			return false;
	return true;
}

int nextLoc() {
	int res;
	int i, min = INF;
	for (i = 0; i < N; i++) {
		if (min > dist[i] && check[i] == 0) {
			min = dist[i];
			res = i;
		}
	}
	return res;
}

int main(void) {
	//loc ��ġ val ���ݱ����� ����ġ
	int val = 0;
	int i, loc = 0;
	check[loc] = 1;
	for (i = 0; i < N; i++) {
		//�������� 0, ������������ �� �� �ִ� �Ÿ�
		dist[i] = edge[loc][i];
	}

	while (!isEnd()) {
		int tmp = nextLoc();
		check[tmp] = 1;
		loc = tmp;
		val = dist[loc];
		for (i = 0; i < N; i++) {
			if (dist[i] > edge[loc][i] + val)
				dist[i] = edge[loc][i] + val;
		}

		cout << tmp << endl;
		for (i = 0; i < N; i++)
			cout << i << " ";
		cout << endl;
		for (i = 0; i < N; i++)
			cout << dist[i] << " ";
		cout << endl << endl;
	}
	return 0;
}

//https://mattlee.tistory.com/50