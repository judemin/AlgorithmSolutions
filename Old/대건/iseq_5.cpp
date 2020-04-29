#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	float a,pi = 3.14;
	scanf("%f",&a);
	printf("%0.2f %0.2f",2*a*pi,a*a*pi);
}