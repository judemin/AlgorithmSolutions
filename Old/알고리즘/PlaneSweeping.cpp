#include<iostream>
#define N 1001
using namespace std;

int n,m,k;
int indX[N] = {0,},indY[N] = {0,};
int ox[N],oy[N];
int x[N],y[N];
int cnx = 0,cny = 0;
int main(void){
	freopen("input.txt","r",stdin);
	int i,j,l,max = -1;
	cin >> n >> m >> k;
	for(i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		ox[i] = a;oy[i] = b;
		indX[a] = 1;
		indY[b] = 1;
	}
	
	for(i = 0;i < m;i++){
		if(indX[i] == 1)
			x[cnx++] = i;
		if(indY[i] == 1)
			y[cny++] = i;
	}
	
	for(i = 0;i < cnx;i++){
		for(j = 0;j < cny;j++){
			int cnt = 0;
			int a = x[i];
			int b = y[i];
			for(l = 0;l < m;l++){
				if(ox[l] >= a && ox[l] <= a+k 
					&& oy[l] >= b && oy[l] <= b+k)
					cnt++;
			}
			if(cnt > max)
				max = cnt;
		}
	}
	cout << max << endl;
	return 0;
}

/*
1000 8 4
1 2
1 3
1 4
2 1
3 1
4 1
6 7
9 9
*/
