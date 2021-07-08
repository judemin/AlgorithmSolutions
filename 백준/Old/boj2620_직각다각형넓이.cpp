#include<iostream>
#define N 1001
#define IN 10001
using namespace std;

int n;
int A[2001][2001] = {0,};
int coX[N], coY[N];
int index[IN] = {0,};
int EXX[IN] = {0,}, EXY[IN] = {0,};
int X[N],Y[N];
int packX[N] = {0,},packY[N] = {0,}; // 압축률 저장 배열 
void substitution(){
	//압축하기 위해 치환하는 데이터 
	int i,cnt = 1,old = 0;
	for(i = 0;i < n;i++)
		index[coX[i]] = 1;
	cnt = 1;
	for(i = 0;i < 10000;i++){
		if(index[i] == 1){
			packX[cnt - 1] = i - old;
			old = i;
			EXX[i] = cnt;
			cnt += 2;
		}
	}
	
	for(i = 0;i < IN;i++)
		index[i] = 0;
	
	for(i = 0;i < n;i++)
		index[coY[i]] = 1;
	cnt = 1;
	old = 0;
	for(i = 0;i < 10000;i++){
		if(index[i] == 1){
			packY[cnt - 1] = i - old;
			old = i;
			EXY[i] = cnt;
			cnt += 2;
		}
	}
}

void exchange(){
	int i;
	for(i = 0;i < n;i++){
		X[i] = EXX[coX[i]];
		Y[i] = EXY[coY[i]];
	}
}

void drawLine(){
	int i,j,a,b;
	for(i = 0;i < n;i++){
		if(X[i] == X[i + 1]){
			if(Y[i] < Y[i + 1]){
				a = Y[i];
				b = Y[i + 1];
			}
			else if(Y[i] > Y[i + 1]){
				a = Y[i + 1];
				b = Y[i];
			}
			for(j = a;j <= b;j++)
				A[j][X[i]] = 1;
		} // y를 그림 
		else if(Y[i] == Y[i + 1]){
			if(X[i] < X[i + 1]){
				a = X[i];
				b = X[i + 1];
			}
			else if(X[i] > X[i + 1]){
				a = X[i + 1];
				b = X[i];
			}
			for(j = a;j <= b;j++)
				A[Y[i]][j] = 1;
		} // x를 그림 
		else {
			if(X[i] == X[0]){
				if(Y[i] < Y[0]){
					a = Y[i];
					b = Y[0];
				}
				else if(Y[i] > Y[0]){
					a = Y[0];
					b = Y[i];
				}
				for(j = a;j <= b;j++)
					A[j][X[i]] = 1;
			}
			else if(Y[i] == Y[0]){
				if(X[i] < X[0]){
					a = X[i];
					b = X[0];
				}
				else if(X[i] > X[0]){
					a = X[0];
					b = X[i];
				}
				for(j = a;j <= b;j++)
					A[Y[i]][j] = 1;
			}
		} // 끝났을때 시작점과 연결 
	}
}

void lineComRate(){
	int i,j;
	for(i = 1;i < N;i++)
		for(j = 1;j < N;j++)
			A[i][j] = packX[j] * packY[i];
}

void printMap(int tmp){
	int i, j;
	for(i = 1;i <= tmp;i++){
		for(j = 1;j <= tmp;j++){
			printf("%6d",A[i][j]);
		}
		cout << endl;
	}
}

int main(void){
	freopen("input.txt","r",stdin);
	int i;
	cin >> n;
	for(i = 0;i < n;i++)
		cin >> coX[i] >> coY[i];
	substitution();
	exchange();
	lineComRate();
	drawLine();
	printMap(10);
}

//plane sweeping
/*
8
1 1
500 1
500 600
300 600
300 200
800 200
800 400
1 400

8
1 1
5 1
5 6
3 6
3 2
8 2
8 4
1 4
*/
