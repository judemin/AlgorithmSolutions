#include<iostream>
#include<vector>
#include<utility>
#define N 100010
using namespace std;

int n,r1,r2;
int q[N][2] = {0,}; //0번지 종점, 1번지 이동거리 
int check[N] = {0,};
vector <pair <int,int> > cor[N];

int main(void){
	freopen("input.txt","r",stdin);
	int stloc = 0;
	int i,max = -1;
	cin >> n >> r1 >> r2;
	for(i = 0;i < n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		pair <int,int> p; // f는 종점, s는 가중치 
		p.first = b;p.second = c;
		cor[a].push_back(p);
		p.first = a;p.second = c;
		cor[b].push_back(p);
		if(a == r1)
			stloc = a;
	}
	
	int fr = 0,re = 1;
	q[0][0] = stloc;
	check[stloc] = 1;
	while(true){
		if(fr > re)
			break;
		int l = q[fr++][0];
		for(i = 0;i < cor[l].size();i++){
			int ed = cor[l][i].first;
			int val = cor[l][i].second;
			if(check[ed] == 1)
				continue;
				
			check[ed] = 1;
			q[re][1] = q[fr - 1][1] + val;
			q[re++][0] = ed;
			if(val > max)
				max = val;
				
			if(ed == r2){
				fr = re + 1;
				break;
			}
		}
	}
	cout << q[re - 1][1] - max << endl;
	return 0;
}

/*
5 1 5
1 2 1
2 3 2
3 4 3
4 5 

6



9 1 9
1 2 8
2 3 6
2 4 5
2 5 10
9 5 6
6 5 14
6 7 7
8 6 7

14
*/
