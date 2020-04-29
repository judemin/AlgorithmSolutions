/*
#include<stdio.h>

int main(void)
{
    int dwarf[11];
    int i,j,n=0;

    for(i = 0;i < 9;i++)
    {
        scanf("%d",&dwarf[i]);
        n += dwarf[i];
    }

    for(i = 0;i < 9;i++)
    {
        for(j = i+1;j < 9;j++)
        {
            if(n - (dwarf[i]+dwarf[j]) == 100)
            {
                dwarf[i] = -1;
                dwarf[j] = -1;
            }
        }
    }

    for(i = 0;i < 9;i++)
    {
        if(dwarf[i] != -1)
        {
            printf("%d \n",dwarf[i]);
        }
    }

    return 0;
}*/