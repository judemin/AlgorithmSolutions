/*
#include<stdio.h>
int main(void)
{
    int card[7],i,j,r = 0,t = 0,temp;

    for(i = 0;i < 6;i++)
    {
        scanf("%d",&card[i]);
    }

    for(i = 0;i < 6;i++)
    {
        for(j = i+1;j < 6-i;j++)
        {
            if(card[i] < card[j])
            {
                temp = card[i];
                card[i] = card[j];
                card[j] = temp;
            }
        }
    }

    for(i = 0;i < 4;i++)
    {
        for(j = i+1;j < 4-i;j++)
        {
            if(card[i] == card[j] && card[j] == card[j+1])
                t++;
            if(card[i]+card[j]+card[j+1] == card[i]+(card[i]+1)+(card[i]+2))
                r++;
        }
    }

    if(t == true || r == true)
        printf("gin");
    else
        printf("lose");
}*/