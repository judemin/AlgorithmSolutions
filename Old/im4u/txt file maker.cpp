/*
#include<stdio.h>
#include<Windows.h>
#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
	int abc;
	char f_name[255];
	char f_content[100000]; 
	FILE* fp;
	printf("���� ������ ������.\n");
	printf("���� �̸��� �Է��ϼ���:");
	fflush(stdin);
	gets(f_name);
	strcat(f_name,".txt");
	fp=fopen(f_name,"w");
	printf("������ �������Դϴ�");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	if(fp == NULL)
	{
		printf("������ ���������ϴ�.");
		scanf("%d",abc);
	}
	printf("\n���� ������ �Է��ϼ���.\n(���Ḧ ���Ͻø� save���Է��ϼ���)\n");
	while(1)
	{
		fflush(stdin);
		gets(f_content);
		if(strcmp(f_content,"save")==0)  
		{
			break;
		}
		else
		{
			fprintf(fp,"%s\n",f_content);
		}
	}
	fclose(fp);
	printf("������ �������Դϴ�");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf("����Ϸ�!����ó���Ǿ����ϴ�!\n");
	cout << "������c����̺�"<<endl;
	getch();
	Sleep(1000);
}
*/