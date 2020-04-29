#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i,a,b,c,max = -1;
	scanf("%d %d %d",&a,&b,&c);
	if(a > max)
		max = a;
	if(b > max)
		max = b;
	if(c >max)
		max = c;
	printf("%d",max);
}