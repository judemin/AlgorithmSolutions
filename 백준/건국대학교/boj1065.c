#include<stdio.h>
#include<math.h>

int isHan(int n){
	if(n < 10 || n < 100)
		return 1;
	
	int a = n / 100;
	n %= 100;
	int b = n / 10;
	n %= 10;
	int c = n;
	
	if((a - b) == (b - c))
		return 1;
	return 0;
}

int result(int n){
	int i;
	int res = 0;

	for(i = 1;i <= n;i++)
		res += isHan(i);
	return res;
}

int main(void){
	int n;
	scanf("%d",&n);
	printf("%d\n",result(n));
	return 0;
}
