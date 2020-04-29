#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

class coordinates {
public:
	int y;
	int x;

	coordinates() {
		y = -1;
		x = -1;
	}
};

#include<iostream>
using namespace std;

int N, M, T, K;
coordinates cor[100];

int spreadSquare(int y,int x) {
	int i;

}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> N >> M >> T >> K;
	int i;
	for (i = 0; i < T; i++)
		cin >> cor[i].y >> cor[i].x;
}