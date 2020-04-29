/*#include<iostream>
using namespace std;

int main()
{
	int n,score[1001],i,j,rank[1001],temp,a=0;

	cin >> n;
	for(i = 0;i < n;i++)
		cin >> score[i];
	for(i = 0;i < n;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(score[i] < score[j])
			{
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}
	temp = 1;
	for(i  = 0;i < n;i++)
	{
		if(score[i] == score[i+1])
		{
			rank[i] = temp;
			for(j = i+1;j < n;j++)
			{
				if(score[i] == score[j])
				{
					rank[j] = temp;
					a++;
				}
			}
			i+=a;
			temp+=2;
		}
		else
		{
			rank[i] = temp;
			temp++;
		}
	}
	for(i = 0;i < n;i++)
		cout << score[i] << " "<< rank[i]<<endl;
}*/