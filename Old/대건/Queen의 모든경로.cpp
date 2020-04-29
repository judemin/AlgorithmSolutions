#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

//ü���� ���� n*n���� �ִ�� ��ġ�ɼ��ִ� ������ ���
/*
��) 4*4�� �ǿ�����
	0 1 0 0
	0 0 0 1
	1 0 0 0
	0 0 1 0

	 0 0 1 0
	 1 0 0 0
	 0 0 0 1
	 0 1 0 0

	 �̷��� 2������ �ִ�

*/

#include <stdio.h>
#include<iostream>
using namespace std;
int n=5,cnt;
int check1[101]; 
int check2[201];
int check3[201];

void q(int x, int y)
{
	if(check1[x]==1)return;
	if (check2[x + y] == 1)return;
	if (check3[x - y + n] == 1)return;

	check1[x] = check2[x + y] = check3[x - y + n] = 1;

	if (y == n)
	{
		cnt++;
		check1[x] = check2[x + y] = check3[x - y + n] = 0;
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		q(i, y + 1);
	}
	
	check1[x] = check2[x + y] = check3[x - y + n] = 0;

}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		q(i, 1);
	}
	printf("%d", cnt);
	return 0;
}