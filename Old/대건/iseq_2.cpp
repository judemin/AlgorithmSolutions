#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d %d %d",a+b,a-b,a*b,a/b);
}