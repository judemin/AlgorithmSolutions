#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
using namespace std;

int board[5][5];
int numLoc[25][2];

void printBoard() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			cout << board[i][j] << " ";
		cout << endl;
	}
}

bool isBingo() {
	int i, j,tot = 0,count;

	for (int i = 0; i < 5; i++)
	{
		count = 0;
		for (int j = 0; j < 5; j++)
			if (board[i][j] == 1)
				count++;
		if (count == 5)
			tot++;
	}
	for (int i = 0; i < 5; i++)
	{
		count = 0;
		for (int j = 0; j < 5; j++)
			if (board[j][i] == 1)
				count++;
		if (count == 5)
			tot++;
	}
	count = 0;
	for (int i = 0; i < 5; i++)
		if (board[i][i] == 1)
			count++;
	if (count == 5)
		tot++;
	count = 0;
	for (int i = 0; i < 5; i++)
		if (board[i][4 - i] == 1)
			count++;
	if (count == 5)
		tot++;
	if (tot >= 3)
		return true;
	return false;
}

int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout); 
	int i, j;
	for(i = 0;i < 5;i++)
		for (j = 0; j < 5; j++) {
			int tmp;
			cin >> tmp;
			numLoc[tmp - 1][0] = i;
			numLoc[tmp - 1][1] = j;
		}

	for (i = 0; i < 25; i++) {
		int tmp;
		cin >> tmp;
		board[numLoc[tmp - 1][0]][numLoc[tmp - 1][1]] = 1;
		if (isBingo() == true) {
			cout << i + 1;
			break;
		}
	}
}


/*
tot = 0; //ºù°í °³¼ö

for (int i = 0; i < 5; i++)
{
	count = 0;
	for (int j = 0; j < 5; j++)
	{
		if (A[i][j] == 1)count++;
	}
	if (count == 5)tot++;
}
for (int i = 0; i < 5; i++)
{
	count = 0;
	for (int j = 0; j < 5; j++)
	{
		if (A[j][i] == 1)count++;
	}
	if (count == 5)tot++;
}

count = 0;
for (int i = 0; i < 5; i++)
{
	if (A[i][i] == 1)count++;
}
if (count == 5)tot++;
count = 0;
for (int i = 0; i < 5; i++)
{
	if (A[i][4 - i] == 1)count++;
}
if (count == 5)tot++;
if (tot >= 3)return 1;



 */