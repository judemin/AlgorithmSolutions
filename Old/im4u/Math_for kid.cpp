/*#include<iostream>
#include<windows.h>
#include<time.h>
#include <conio.h>
using namespace std;
//80621 = ����11721 = ���󺯰�

int h;
int qr = 0;
int inpresult = 0;
int qn = 0;
int grade = 1;
int qn2 = qn;

void color(int num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),num);
}
void Qp(int a,int b,int result)
{
	qn2++;
	if(a+b == result)
	{
		cout << "�����Դϴ�!!!";
		qn--;
		qr++;
	}
	else
	{
		cout << "�ƽ��Ե� Ʋ�ȱ��� �Ф�";
		qn++;
	}
}
void Qm(int a,int b,int result)
{
	qn2++;
	if(a-b == result)
	{
		cout << "�����Դϴ�!!!";
		qn--;
		qr++;
	}
	else
	{
		cout << "�ƽ��Ե� Ʋ�ȱ��� �Ф�";
		qn++;
	}
}

int main(void)
{
	int n1 = 0;
	int n2 = 0;
	cout << "���ʴ� ưư ������ ���� ��ſ���нð�!"<<endl<<endl;
	cout << "�л��� ����� �������ּ���."<<endl<<"1:����(����)2:��ȭ��(����,����)3:�����(����,���� 1~100�ڸ���):";
	cin >> grade;
	if(grade >= 4)
	{
		grade = 1;
	}
	cout << "������ �������� �������ּ���:";
	cin >> qn;
	if(qn == 0)
	{
		qn = 999999;
	}
	qn2 = qn-1;
	cout << "�غ� �Ǽ����� �ƹ�Ű�� ��������.";
	getch();

	int i = 0,j = 3;
	while(i < j)
	{
		i++;
		system("cls");
		cout << "L";
		Sleep(10);
		cout << "O";
		Sleep(10);
		cout << "A";
		Sleep(10);
		cout << "D";
		Sleep(10);
		cout << "I";
		Sleep(10);
		cout << "N";
		Sleep(10);
		cout << "G";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
		cout << "-";
		Sleep(10);
	}
	system("cls");

	if(grade == 1)
	{
		while(1)
		{
			if(inpresult == 80621)
			{
				cout << "���α׷��� ���������մϴ�.";
				cout << "3";
				Sleep(1000);
				cout << "2";
				Sleep(1000);
				cout << "1";
				Sleep(1000);
				break;
			}
			if(inpresult == 11721)
			{
				int num;
				cout << "�����ڵ��Է�:";
				cin >> num;
				color(num);
				system("cls");
			}
			cout << "���ʴ� ưư ������ ���� ��ſ���нð�!"<<endl;
			cout << "���� ������ : " << qn << " ���ݾ��ȭ����!"<<endl<<endl;
			srand(time(NULL));
			n1 = rand()%13;
			n2 = rand()%6;

			while(1)
			{
				if(n1 == 0)
				{
					n1 = rand()%13;
				}
				if(n2 == 0)
				{
					n2 = rand()%6;
				}
				else
				{
					break;
				}
			}
			cout << n1 <<" + " << n2 << " = ";
			cin >> inpresult;
			if(inpresult == 11111)
			{
				system("cls");
				cout << "����1.3 �Ŵ���"<<endl;
				cout << "80621 = ���� 11721 = ���󺯰�";
				Sleep(3000);
				system("cls");
			}

			cout << "����Ȯ����";
			Sleep(100);
			cout << ".";
			Sleep(100);
			cout << ".";
			Sleep(100);
			cout << ".";
			Sleep(100);

			Qp(n1,n2,inpresult);
			Sleep(3000);
			system("cls");

			if(qn <= 0)
			{
				cout << qn2 <<"�� ��" << qr <<"���� ���߼̳׿�! ����ؿ�!" << endl << "�׷� �����ð��� �� ������~" << endl;
				break;
			}
		}
	}
	if(grade == 2)
	{
		while(1)
		{
			if(inpresult == 80621)
			{
				cout << "���α׷��� ���������մϴ�.";
				cout << "3";
				Sleep(1000);
				cout << "2";
				Sleep(1000);
				cout << "1";
				Sleep(1000);
				break;
			}
			if(inpresult == 11721)
			{
				int num;
				cout << "�����ڵ��Է�:";
				cin >> num;
				color(num);
				system("cls");
			}
			cout << "���ʴ� ưư ������ ���� ��ſ���нð�!"<<endl;
			cout << "���� ������ : " << qn << " ��ȭ�ݾ��ȭ����!"<<endl;

			srand(time(NULL));
			h = rand()%2;
			if(h == 0)
			{
				n1 = rand()%20;
				n2 = rand()%10;

				cout << n1 << " + " << n2 << " = ";
				cin >> inpresult;
				if(inpresult == 11111)
				{
					system("cls");
					cout << "����1.3 �Ŵ���"<<endl;
					cout << "80621 = ����11721 = ���󺯰�";
					Sleep(3000);
					system("cls");
				}

				cout << "����Ȯ����";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);

				Qp(n1,n2,inpresult);
				Sleep(3000);
				system("cls");
			}
			if(h == 1)
			{
				n1 = rand()%20;
				n2 = rand()%10;

				while(1)
				{
					if(n1 < n2)
					{
						n1 = rand()%20;
					}
					if(n1 > n2)
					{
						break;
					}
				}

				cout << n1 << " - " << n2 << " = ";
				cin >> inpresult;
				if(inpresult == 11111)
				{
					system("cls");
					cout << "����1.3 �Ŵ���"<<endl;
					cout << "80621 = ����11721 = ���󺯰�";
					Sleep(3000);
					system("cls");
				}


				cout << "����Ȯ����";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);

				Qm(n1,n2,inpresult);
				Sleep(3000);
				system("cls");
			}
			if(qn <= 0)
			{
				cout << qn2 <<"�� ��" << qr <<"���� ���߼̳׿�! ����ؿ�!" << endl << "�׷� �����ð��� �� ������~" << endl;
				break;
			}
		}
	}
	if(grade == 3)
	{
		while(1)
		{
			if(inpresult == 80621)
			{
				cout << "���α׷��� ���������մϴ�.";
				cout << "3";
				Sleep(1000);
				cout << "2";
				Sleep(1000);
				cout << "1";
				Sleep(1000);
				break;
			}
			if(inpresult == 11721)
			{
				int num;
				cout << "�����ڵ��Է�:";
				cin >> num;
				color(num);
				system("cls");
			}
			cout << "���ʴ� ưư ������ ���� ��ſ���нð�!"<<endl;
			cout << "���� ������ : " << qn << " ����ݾ��ȭ����!"<<endl;

			srand(time(NULL));
			h = rand()%2;

			if(h == 0)
			{
				n1 = rand()%100;
				n2 = rand()%100;

				cout << n1 << " + " << n2 << " = ";
				cin >> inpresult;
				if(inpresult == 11111)
				{
					system("cls");
					cout << "����1.3 �Ŵ���11721 = ���󺯰�"<<endl;
					cout << "80621 = ����";
					Sleep(3000);
					system("cls");
				}

				cout << "����Ȯ����";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);

				Qp(n1,n2,inpresult);
				Sleep(3000);
				system("cls");
			}
			if(h == 1)
			{
				n1 = rand()%100;
				n2 = rand()%100;

				while(1)
				{
					if(n1 < n2)
					{
						n1 = rand()%20;
					}
					if(n1 > n2)
					{
						break;
					}
				}

				cout << n1 << " - " << n2 << " = ";
				cin >> inpresult;
				if(inpresult == 11111)
				{
					system("cls");
					cout << "����1.3 �Ŵ���11721 = ���󺯰�"<<endl;
					cout << "80621 = ����";
					Sleep(3000);
					system("cls");
				}

				cout << "����Ȯ����";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);

				Qm(n1,n2,inpresult);
				Sleep(3000);
				system("cls");
			}
			if(qn <= 0)
			{
				cout << qn2 <<"�� ��" << qr <<"���� ���߼̳׿�! ����ؿ�!" << endl << "�׷� �����ð��� �� ������~" << endl;
				break;
			}
		}
	}
	if(grade >= 4)
	{
		cout << "Unknown Error!!!";
	}
	getch();
}*/