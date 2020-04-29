/*
#include<stdio.h>
int num[200000],result[200000];
int func(int s,int e,int i)
{
    result[i] += num[s];
    if(s == e)
        return 0;
    func(s+1,e,i);
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,q,i,j,s,e;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&num[i]);
    scanf("%d",&q)
    for(i = 0;i < q;i++)
    {
        scanf("%d %d",&s,&e);
        func(s-1,e-1,i);
    }
    for(i = 0;i < q;i++)
        printf("%d \n",result[i]);
}*/