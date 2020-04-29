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
	printf("원격 파일을 제작툴.\n");
	printf("파일 이름을 입력하세요:");
	fflush(stdin);
	gets(f_name);
	strcat(f_name,".txt");
	fp=fopen(f_name,"w");
	printf("파일을 생성중입니다");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	if(fp == NULL)
	{
		printf("파일을 열수없습니다.");
		scanf("%d",abc);
	}
	printf("\n파일 내용을 입력하세요.\n(종료를 원하시면 save를입력하세요)\n");
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
	printf("파일을 저장중입니다");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf("저장완료!정상처리되었습니다!\n");
	cout << "저장경로c드라이브"<<endl;
	getch();
	Sleep(1000);
}
*/