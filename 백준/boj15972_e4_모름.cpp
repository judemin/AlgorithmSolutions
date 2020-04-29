#include<iostream>
#include<vector>
#include<utility>
#define N 1010
using namespace std;

int n,m,h;
vector <pair <int,int> > map[N];
int main(void){
	freopen("input.txt","r",stdin);
	int i,j;
	cin >> n >> m >> h;
	
	int cnt = 0;
	for(i = 0;i < n;i++){
		pair <int,int> p;
		for(j = 0;j < m;j++){
			int a;
			cin >> a;
			cnt++;
			if(a == -1)
				continue;
				
			if(i == 0 || i == n - 1){
				p.first = 0;
				p.second = a;
			}
			else{
				p.first = cnt - m;
				p.second = a;
			}
			map[cnt].push_back(p);
			int tmp = cnt;
			cnt = p.first;
			p.first = tmp;
			map[cnt].push_back(p);
		}
		cout << cnt << endl;
	}
	
	for(i = 1;i <= n * m;i++){
		for(j = 0;j < map[i].size();j++)
			cout << i << " " << map[i][j].first << " " << map[i][j].second << endl;
	}
}

/*
2 3 5
1 -1 -1
3 2 -1
4 -1 2
-1 -1 4 3
-1 -1 -1 -1

17
*/
