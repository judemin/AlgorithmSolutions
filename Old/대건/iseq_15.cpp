#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int cnt = 0,wcnt = 0,arr[101];
	float result = 0;
	while(true){
		cin >> arr[cnt];
		if(arr[cnt] >= 60){
			wcnt++;
			result+=arr[cnt];
		}
		else if(arr[cnt] == EOF)
			break;
		cnt++;
	}
	cout <<wcnt << endl;
	printf("%0.2f",result/wcnt);
	return 0;
}