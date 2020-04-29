#include<iostream>
using namespace std;

int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int arr[101],cnt = 0,result = 0;
	while(true){
		cin >> arr[cnt];
		if(arr[cnt] == 0)
			break;
		else if(arr[cnt] < 0)
			arr[cnt] *= -1;
		result+=arr[cnt];
	}
	cout << result;
	return 0;
}