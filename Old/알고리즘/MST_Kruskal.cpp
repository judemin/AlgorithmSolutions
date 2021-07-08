#include<algorithm>
#include<iostream>
#define N 102
using namespace std;

class Nodes{
public:
	int st;
	int ed;
	int edge;
}node[N];

bool compare(Nodes a, Nodes b){
	if(a.edge < b.edge)
		return true;
	return false;
}

int u[N] = {0,};
int unionFind(int tmp){
	if(u[tmp] == tmp)
		return tmp;		
	return u[tmp] = unionFind(u[tmp]);
}

int main(void){
	freopen("input.txt","r",stdin);
	int res = 0;
	int uniCnt = 0;
	int k,n,i; //k:노드수 n:간선수 
	cin >> k >> n;
	for(i = 1;i <= k;i++)
		u[i] = i;
	
	for(i = 0;i < n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		node[i].st = a;
		node[i].ed = b;
		node[i].edge = c;
	}
	sort(node,node + n,compare);
	
	/*
	for(i = 0;i < n;i++)
		cout << node[i].st << " " << node[i].ed << " " << node[i].edge << endl;
	cout << endl;
	*/
	
	for(i = 0;i < n;i++){
		int tmp1 = unionFind(node[i].st);
		int tmp2 = unionFind(node[i].ed);
		if(tmp1 == tmp2)
			continue;
		u[tmp2] = tmp1;
		uniCnt++;
		res += node[i].edge;
		if(uniCnt == k-1)
			break;
	}
	cout << res << endl;
	return 0;
}

/*
7 12
1 2 18
1 3 8
1 4 2
1 6 10
2 4 12
2 5 4
3 6 5
4 6 3
4 5 14
4 7 30
5 7 26
6 7 16

42
*/
