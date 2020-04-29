#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d",(a*b)/2,a*b);
}