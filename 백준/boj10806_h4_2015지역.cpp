#include<iostream>
#define N 100010
using namespace std;

int res = 0;
int num[N] = {0,};
int sig[N] = {0,};
int nSig[N] = {0};
int cnt = 0,ncnt = 0;;
int main(void){
	freopen("input.txt","r",stdin);
	int n,m,i;
	cin >> n >> m;
	for(i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		num[a]++;
		num[b]++;
	}
	
	for(i = 1;i <= n;i++){
		if(num[i] == 1)
			sig[cnt++] = i;
		else 
			nSig[ncnt++] = i;
	}
	
	res = (cnt + 1) / 2;
	cout << res << endl;
	for(i = 0;i < cnt - 1;i+=2)
		cout << sig[i] << " " << sig[i+1] << endl;
		
	if(cnt % 2 == 1)
		cout << nSig[0] << " " << sig[cnt - 1] << endl;
}

/*
6 7
1 2
1 3
2 4
2 4
4 5
3 5
5 6

1
3 6
*/
