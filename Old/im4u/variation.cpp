/*
#include<stdio.h>

int main(void)
{
    int n=0,i=0,num[101];
    float variation=0,p=0;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
    {
        scanf("%d",&num[i]);
        p += num[i];
    }
    p = p/(float)n;

    for(i = 0;i < n;i++)
    {
        variation += ((float)num[i]-p)*((float)num[i]-p);
    }
    variation /= (float)n;
    printf("%.2f",variation);
}*/

//box_brick(correct)
/*int main(void)
{
    int j=0,n=0,height[51],i=0,t=0,num=0;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
    {
        scanf("%d",&height[i]);
        t += height[i];
    }
    t /= n;

    for(i = 0;i < n;i++)
    {
        if(height[i] > t)
        {
            for(j = height[i]-t;j > 0;j--)
                num++;
        }
    }

    printf("The minimum number of move is %d",num);
}*/