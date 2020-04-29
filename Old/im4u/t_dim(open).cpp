/*
#include<iostream>
using namespace std;

int main(void)
{
	int arr[12],row[3][4],column[4][3],i,j;
	 for(i = 0;i < 12;i++)
		 cin >> arr[i];
	 for(i = 0;i < 3;i++)
	 {
		 for(j = 0;j < 4;j++)
			 row[i][j] = arr[j+(i*4)];
	 }
	 for(i = 0;i < 3;i++)
	 {
		 for(j = 0;j < 4;j++)
			 cout << row[i][j] << " ";
		 cout << endl;
	 }
	 cout << endl;
	 for(i = 0;i < 3;i++)
	 {
		 for(j = 0;j < 4;j++)
			 column[j][i] = arr[j+(i*4)];
	 }
	 for(i = 0;i < 4;i++)
	 {
		 for(j = 0;j < 3;j++)
			 cout << column[i][j] << " ";
		 cout << endl;
	 }
}
*/