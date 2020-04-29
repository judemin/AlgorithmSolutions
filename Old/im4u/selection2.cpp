/*#include<iostream>
using namespace std;

int main()
{
	int i,j,n,s,num[1001],temp,hm = 0;
	cin >> n >> s;
	for(i = 0;i < n;i++)
		cin >> num[i];
	for(i = 0;i < s;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(i = 0;i < n;i++)
		cout << num[i]<<" ";
}*/