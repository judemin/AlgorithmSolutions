#include<iostream>
#include<vector>
#include<algorithm>
#define N 100010
using namespace std;

vector <int> cor[N];
int cloc[N];
int main(void){
	freopen ("input.txt","r",stdin);
	int n,i,j,res = 0;
	cin >> n;
	for(i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		cor[b].push_back(a);
	}
	
	for(i = 0;i <=  100000;i++){
		int tmp[N];
		int len = cor[i].size();
		if(len <= 1)
			continue;
		
		for(j = 0;j < len;j++)
			tmp[j] = cor[i][j];
		sort(tmp,tmp + len);

		res += tmp[1] - tmp[0];
		res += tmp[len  - 1] - tmp[len - 2];
		for(j = 1;j < len-1;j++){
			int val = tmp[j + 1] - tmp[j]; 
			int tmVal = tmp[j] - tmp[j-1];
			
			if(val < tmVal)
				res += val;
			else 
				res += tmVal;
		}
	}
	cout << res << endl;
	return 0;
}

/*
9
10 2
11 3
20 2
22 1
25 1
0 1
4 2
5 2
7 2

45






4
0 1
1 2
3 1
4 1

5
*/
