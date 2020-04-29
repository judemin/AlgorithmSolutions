/*#include<iostream>
#include<windows.h>
#include<time.h>
#include <conio.h>
using namespace std;
//80621 = 종료11721 = 색상변경

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
		cout << "정답입니다!!!";
		qn--;
		qr++;
	}
	else
	{
		cout << "아쉽게도 틀렸군요 ㅠㅠ";
		qn++;
	}
}
void Qm(int a,int b,int result)
{
	qn2++;
	if(a-b == result)
	{
		cout << "정답입니다!!!";
		qn--;
		qr++;
	}
	else
	{
		cout << "아쉽게도 틀렸군요 ㅠㅠ";
		qn++;
	}
}

int main(void)
{
	int n1 = 0;
	int n2 = 0;
	cout << "기초는 튼튼 성적은 쭉쭉 즐거운수학시간!"<<endl<<endl;
	cout << "학생의 등급을 설정해주세요."<<endl<<"1:우등반(덧샘)2:심화반(덧샘,뺄샘)3:영재반(덧샘,뺄샘 1~100자리수):";
	cin >> grade;
	if(grade >= 4)
	{
		grade = 1;
	}
	cout << "문제의 수제한을 설정해주세요:";
	cin >> qn;
	if(qn == 0)
	{
		qn = 999999;
	}
	qn2 = qn-1;
	cout << "준비가 되셨으면 아무키나 누르세요.";
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
				cout << "프로그램을 강제종료합니다.";
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
				cout << "색상코드입력:";
				cin >> num;
				color(num);
				system("cls");
			}
			cout << "기초는 튼튼 성적은 쭉쭉 즐거운수학시간!"<<endl;
			cout << "남은 문제수 : " << qn << " 우등반어린이화이팅!"<<endl<<endl;
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
				cout << "버그1.3 매뉴얼"<<endl;
				cout << "80621 = 종료 11721 = 색상변경";
				Sleep(3000);
				system("cls");
			}

			cout << "정답확인중";
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
				cout << qn2 <<"개 중" << qr <<"개를 맞추셨네요! 대단해요!" << endl << "그럼 다음시간에 또 만나요~" << endl;
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
				cout << "프로그램을 강제종료합니다.";
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
				cout << "색상코드입력:";
				cin >> num;
				color(num);
				system("cls");
			}
			cout << "기초는 튼튼 성적은 쭉쭉 즐거운수학시간!"<<endl;
			cout << "남은 문제수 : " << qn << " 심화반어린이화이팅!"<<endl;

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
					cout << "버그1.3 매뉴얼"<<endl;
					cout << "80621 = 종료11721 = 색상변경";
					Sleep(3000);
					system("cls");
				}

				cout << "정답확인중";
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
					cout << "버그1.3 매뉴얼"<<endl;
					cout << "80621 = 종료11721 = 색상변경";
					Sleep(3000);
					system("cls");
				}


				cout << "정답확인중";
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
				cout << qn2 <<"개 중" << qr <<"개를 맞추셨네요! 대단해요!" << endl << "그럼 다음시간에 또 만나요~" << endl;
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
				cout << "프로그램을 강제종료합니다.";
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
				cout << "색상코드입력:";
				cin >> num;
				color(num);
				system("cls");
			}
			cout << "기초는 튼튼 성적은 쭉쭉 즐거운수학시간!"<<endl;
			cout << "남은 문제수 : " << qn << " 영재반어린이화이팅!"<<endl;

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
					cout << "버그1.3 매뉴얼11721 = 색상변경"<<endl;
					cout << "80621 = 종료";
					Sleep(3000);
					system("cls");
				}

				cout << "정답확인중";
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
					cout << "버그1.3 매뉴얼11721 = 색상변경"<<endl;
					cout << "80621 = 종료";
					Sleep(3000);
					system("cls");
				}

				cout << "정답확인중";
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
				cout << qn2 <<"개 중" << qr <<"개를 맞추셨네요! 대단해요!" << endl << "그럼 다음시간에 또 만나요~" << endl;
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