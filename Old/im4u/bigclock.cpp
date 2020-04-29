/*
#include<stdio.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int h,m,i;
    int time[25];

    for(i = 0;i < 12;i++)
        time[i] = 12+i;
    for(i = 12;i < 24;i++)
        time[i] = i-12;
    scanf("%d:%d",&h,&m);
    if(m != 0)
        printf("0");
    else
        printf("%d",time[h]);
}*/