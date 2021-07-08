#include <iostream>
#define N 1003
using namespace std;

int n,t;
int k[N],s[N];
int dp[2][10002] = {0,};

int max(int a,int b){
	if(a > b)
		return a;
	return b;
}

int main(void) {
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> n >> t;
	for(i = 0;i < n;i++)
		cin >> k[i] >> s[i];
	
	int next = 1;
	int back = 0;
	for(i = 0;i < n;i++){
		for(j = k[i];j <= t;j++)
			dp[next][j] = max(dp[back][j],dp[back][j - k[i]] + s[i]);
		int tmp = next;
		next = back;
		back = tmp;
	}
	cout << dp[back][t] << endl;
	return 0;
}

/*
3 310
50 40
100 70
200 150
*/
