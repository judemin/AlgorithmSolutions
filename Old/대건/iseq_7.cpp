#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b;
	scanf("%d %d",&a,&b);
	if(a > b)
		printf("%d",a);
	else
		printf("%d",b);
}