#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a;
	scanf("%d",&a);
	printf("%d",a*4/3);
}