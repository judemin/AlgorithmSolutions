#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<queue>
using namespace std;

class coordinate {
public:
	int y;
	int x;

	coordinate() {
		x = 0;
		y = 0;
	}
	coordinate(int tmpy, int tmpx) {
		x = tmpx;
		y = tmpy;
	}
};
int xArr[4] = { 1,-1,0,0 };
int yArr[4] = { 0,0,1,-1 };
int n, m;
char map[51][51];
int mapCheck[51][51];
queue<coordinate> que;

void defMapCheck() {
	int i, j;
	for (i = 0; i < 51; i++)
		for (j = 0; j < 51; j++)
			mapCheck[i][j] = 0;
}

void Printmap() {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cout << mapCheck[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j,Max = -1;
	cin >> n >> m; 
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++)
			cin >> map[i][j];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 'W')
				break;
			defMapCheck();
			que.push(coordinate(i, j));
			while (!que.empty()) {
				bool isChanged = false;
				int y = que.front().y, x = que.front().x;
				for (int k = 0; k < 4; k++) {
					int ay = y + yArr[k]; int ax = x + xArr[k];
					if (ay < 0 || ax < 0 || ay >= n || ax >= m || map[ay][ax] == 'W' || mapCheck[ay][ax] != 0)
						continue;
					mapCheck[ay][ax] = mapCheck[y][x] + 1;
					isChanged = true;
					que.push(coordinate(ay,ax));
				}
				if (isChanged == false) {
					//Printmap();
					if (Max < mapCheck[y][x])
						Max = mapCheck[y][x];
				}
				que.pop();
			}
		}
	}
	cout << Max;
} 