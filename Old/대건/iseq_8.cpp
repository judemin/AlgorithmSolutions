#include<stdio.h>

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i,arr[100],cnt=0;
	while(true){
		scanf("%d",&arr[cnt]);
		if(arr[cnt]==EOF)
			break;
		cnt++;
	}
	for(i=0;i < cnt;i++){
		if(arr[i] % 2 == 0)
			printf("Â¦¼ö\n");
		else
			printf("È¦¼ö\n");
	}
}