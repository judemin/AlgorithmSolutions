/*
#include<iostream>
#include<Windows.h>
using namespace std;

class calculate
{
public:
	int add(int a,int b)
	{
		return a+b;
	}
	int minus(int a,int b)
	{
		return a-b;
	}
	int sub(int a,int b)
	{
		return a*b;
	}
	//int asub(float a,float b)
	//{
	//	return a/b;
	//}
};

int main()
{
	calculate c;
	int a,b,i;
	while(true)
	{
		cout << "Simple Calculater.beta" <<endl;
		cout <<"1:µ¡¼À2:»¬¼À3:°ö¼À4:³ª´°¼À5:Áö¿ì±â6:³¡³»±â :";
		cin >> i;
		cout << "2Á¤¼öÀÔ·Â:";
		cin >> a >> b;
		if(i == 1)
			cout << c.add(a,b)<<endl;
		else if(i == 2)
			cout << c.minus(a,b)<<endl;
		else if(i == 3)
			cout << c.sub(a,b) << endl;
		else if(i == 4)
			cout << "Á¡°ËÁßÀÔ´Ï´Ù..." << endl;
		else if(i == 5)
			system("cls");
		else
		{
			cout <<"ERROR";
			break;
		}
	}
}
*/