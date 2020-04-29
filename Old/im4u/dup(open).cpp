/*
#include<stdio.h>
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int num[20],i,j,temp;
    for(i = 0;i < 10;i++)
        scanf("%d",&num[i]);
    for(i = 0;i < 10;i++)
    {
        for(j = i+1;j < 10;j++)
        {
            if(num[i] == num[j])
                num[j] = 11;
        }
        num[i] = 11;
    }
    for(i = 0;i < 10;i++)
    {
        if(num[i] != 11)
            printf("%d ",num[i]);
    }
}
*/