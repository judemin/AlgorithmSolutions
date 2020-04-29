#include<stdio.h>

int A[20][20];
int stokuNum = 0;

void q(int num, int h, int w) {
	int i,j,k,h1,w1;
	for (i = 1; i <= 9; i++)
		if (A[i][w] == num || A[h][i] == num)
			return;
	for (i = h - (h - 1) % 3; i <= h - (h - 1) % 3 + 2; i++)
		for (j = w - (w - 1) % 3; j <= w - (w - 1) % 3 + 2; j++)
			if (A[i][j] == num)
				return;
	A[h][w] = num;
	if (h == 9 && w == 9) {
		for (i = 1; i <= 9; i++) {
			for (j = 1; j <= 9; j++)
				printf("%3d",A[i][j]);
			printf("\n");
		}
		printf("\n");
		A[9][9] = 0;
		stokuNum++;
		return;
	}
	for (i = 1; i <= 9; i++) {
		h1 = h;
		w1 = w;
		while (1) {
			if (w1 == 9) {
				h1++;
				w1 = 1;
			}
			else
				w1++;
			if (A[h1][w1] == 0)
				break;
		}
		q(i, h1, w1);
	}
	A[h][w] = 0;
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i,j,w1 = 0,h1 = 1;

	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			scanf("%d", A[i][j]);
	while (1) {
		if (w1 == 9) {
			h1++;
			w1 = 1;
		}
		else
			w1++;
		if (A[h1][w1] == 0)
			break;
	}
	for (i = 1; i <= 9; i++)
		q(i, 1, 1);
	printf("%d", stokuNum);
}