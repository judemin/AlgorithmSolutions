#include<iostream>
#define N 1010
using namespace std;

int n,m;
int cnt = 0, day = 0;
int q[N * N][2];
int map[N][N] = {0,};
int check[N][N] = {0,};
int mx[4] = {0,1,0,-1};
int my[4] = {1,0,-1,0};

bool isend(){
	int i,j;
	for(i = 0;i < n;i++)
		for(j = 0;j < m;j++)
			if(map[i][j] == 0)
				return true;
	return false;
}

int main(void){
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> n >> m;
	for(i = 0;i < n;i++)
		for(j = 0;j < m;j++)
			cin >> map[i][j];
	
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			if(map[i][j] == 1){
				check[i][j] = 1;
				q[cnt][0] = i;
				q[cnt++][1] = j;
			}
		}
	}
	
	int fr = 0,re = cnt;
	while(!isend()){
		if(fr > re)
			break;
		for(i = 0;i < 4;i++){
			int ax = q[fr][0] + mx[i];
			int ay = q[fr][1] + my[i];
			if(ax >= n || ax < 0 || ay >= m || ay < 0
				|| check[ax][ay] == 1 || map[ax][ay] != 0)
				continue;
			q[re][0] = ax;
			q[re++][1] = ay;
			check[ax][ay] = 1;
			map[ax][ay] = 1;
		}
		day++;
		fr++;
	}
	cout << day << endl;
	return 0;
}

/*
6 4
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 1
*/
