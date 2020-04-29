/*
#include<stdio.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,j,num[1001],dnum = 0,temp;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&num[i]);

    for(i = 0;i < n;i++)
    {
        for(j = i+1;j < n;j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(i = 0;i < n;i++)
    {
        if(num[i] != num[i+1])
            dnum++;
    }
    printf("%d",dnum);
}*/