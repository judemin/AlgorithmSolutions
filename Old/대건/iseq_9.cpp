#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,i,result = 0;
	scanf("%d",&a);
	for(i = 1;i <= a;i++)
		if(i%3 == 0)
			result+=i;
	printf("%d",result);
}