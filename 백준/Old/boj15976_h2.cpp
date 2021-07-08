#include<iostream>
using namespace std;

int x[30010] = {0,},y[30010] = {0,};
int main(void){
	freopen("input.txt","r",stdin);
	int i,j;
	int res = 0;
	int max = -1;
	int n,m,a,b;
	cin >> n;
	for(i = 0;i < n;i++){
		int tma,tmb;
		cin >> tma >> tmb;
		x[tma] = tmb; 
		if(tma > max)
			max = tma;
	}
	cin >> m;
	for(i = 0;i < m;i++){
		int tma,tmb;
		cin >> tma >> tmb;
		y[tma] = tmb; 
		if(tma > max)
			max = tma;
	}
	cin >> a >> b;
	
	for(i = a;i <= b;i++){
		int ax,ay,tmj;
		for(j = 0;j < n;j++){
			tmj = i + j;
			ax = x[j];
			if(tmj < 0 || tmj >= n)
				ay = 0;
			else
				ay = y[tmj];
			
			res += ax * ay;
		}
	}
	cout <<  res << endl;
	return 0;
}

/*
3
0 1
1 1
2 1
3
0 1
1 2
2 3
-1
1

14




3
0 1
4 4
9 5
3
1 3
2 7
10 7
-2
2


*/
