#include<iostream>
#define N 110
using namespace std;

int n,m;
class object{
public:
	int parent[N] = {0,};
	int chi[N];
	int cnt = 0;
}obj[N], reobj[N];

void calc(int par, int next){
	obj[next].parent[par] = 1;
	for(int i = 0;i < obj[next].cnt;i++)
		calc(par, obj[next].chi[i]);
}

void reverse(){
	for(int i = 1;i <= n;i++){
		object tmp = obj[i];
		obj[i] = reobj[i];
		reobj[i] = tmp;
	}
}

void process(){
	int i,j;
	for(i = 1;i <= n;i++){
		object tmp = obj[i];
		for(j = 0;j < tmp.cnt;j++)
			calc(i,tmp.chi[j]);
	}
}

int main(void){
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> n >> m;
	for(i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		obj[a].chi[obj[a].cnt++] = b;
		reobj[b].chi[reobj[b].cnt++] = a;
	}
	
	process();
	reverse();
	process();
	
	for(i = 1;i <= n;i++){
		int res = 0;
		for(j = 1;j <= n;j++)
			if(obj[i].parent[j] == 0 && reobj[i].parent[j] == 0)
				res++;
		cout << res - 1 << endl;
	}
	return 0;
}

/*
6
5
1 2
2 3
3 4
5 4
6 5

2
2
2
0
3
3
*/
