/*
#include<stdio.h>
#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(void)
{
	printf("              -------*����ũ�� ��(Kor) v7.5*-------\n");
	int n = 0;
	int i = 60;
	int time = 0;
	int minute = 0;
	int j = 0;
	int y;
	int m = 0;
	int s = 0;
	int h = 0;
	int u,l;
	int num = 8680;

	int pw = 0;
	int ni = 0;
	int q=5,e=0;

	for(q = 5;q >= 0;q--)
	{
		printf("��й�ȣ�� �Է��ϼ���:");
		scanf("%d",&pw);
		printf("������ ������");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);

		if(pw == num)
		{
			printf("����� �����Ϸ�\n");
			Sleep(1000);
			printf("ȯ���մϴ�!\n");
			Sleep(1000);
			while(1)
			{
				printf("�����ġ/1��Ÿ�̸�/2�ӷ������α׷�/3��\n����/4��ȯ��/5�ӽð�(nonstop)/6�Ӱ����Ѱ��ӵ�/7��\n���������/8������ȣ������/9��ũ����&��������/10������/11:");
				scanf("%d",&n);
				printf("\n");
				if(n >= 11)
				{
					printf("�̿����ּż� �����մϴ�.");
					Sleep(1000);
					printf("B");
					Sleep(1000);
					printf("Y");
					Sleep(1000);
					printf("E\n");
					Sleep(1000);
					break;
				}
				if(n == 10)
				{
					printf("������:�λ�(����������01032320437��!!)\n");
					Sleep(1000);
					printf("��������: v1.3 | v1.5��v2.0��v2.2��v3.1��v5.0��v.7.3\n");
					printf("\n");
					Sleep(1000);
					printf("v7.3�������� ��������...\n");
					Sleep(1000);
					printf("�ζǹ�ȣ������ �߰�\n");
					printf("\n");
					Sleep(1000);
					printf("�߰�&�����ɻ���:����� ������̵���\n");
					Sleep(1000);
					printf("���� ������ּ���~^^\n");
					Sleep(1000);
					printf("\n");
				}
				if(n == 3)
				{
					printf("��������&������°��� ����(��ĥ���ֽ��ϴ�.):");
					scanf("%d %d",&u,&l);
					for(;l > 0;l--)
					{
						printf("%d ",rand()%u);
						Sleep(100);
					}
					printf("\n");
				}
				if(n == 1)
				{
					printf("�ð����Ѽ���(��):");
					scanf("%d",&y);
					while(1)
					{
						Sleep(1000);
						s++;
						if(m == y)
						{
							printf("������/1�Ӱ���ϱ�/2:");
							scanf("%d",&j);
							if(j == 1)
							{
								break;
							}
						}
						if(s == 60)
						{
							s = 0;
							m++;
						}
						if(m == 60)
						{
							m = 0;
							h++;
						}
						printf("%d�ð� %d�� %d�� \n",h,m,s);
					}
				}
				if(n == 2)
				{
					printf("�ð��Է�(@�� @��):");
					scanf("%d %d",&minute,&time);
					time += minute*60;
					printf("%d�� ",time);
					while(1)
					{
						if(time == 0)
						{
							printf("\n");
							printf("Ÿ�ӿ���!!!");
							Sleep(500);
							printf(" Ÿ�ӿ���!!!");
							Sleep(500);
							printf(" Ÿ�ӿ���!!!\n");
							Sleep(500);
							break;
						}
						Sleep(1000);
						time--;
						printf("%d�� ",time);
					}
				}
				if(n == 4)
				{
					y = 0;
					m = 0;
					i = 0;

					while(1)
					{
						printf("���������|���ϱ�/1|����/2|���ϱ�/3|������/4|������/5:");
						scanf("%d",&i);
						if(i >= 5)
						{
							printf("��������\n");
							Sleep(1000);
							break;
						}
						printf("����Ҽ� 2���Է�:");
						scanf("%d %d",&m,&y);

						if(i == 1)
						{
							printf("%d + %d = ",m,y);
							Sleep(1000);
							printf("%d\n",m+y);
						}
						if(i == 2)
						{
							printf("%d - %d = ",m,y);
							Sleep(1000);
							printf("%d\n",m-y);
						}
						if(i == 3)
						{
							printf("%d * %d = ",m,y);
							Sleep(1000);
							printf("%d\n",m*y);
						}
						if(i == 4)
						{
							printf("%d / %d = ",m,y);
							Sleep(1000);
							printf("%d\n",m/y);
						}
					}
				}
				if(n == 5)
				{
					printf("1000�� ����\n");
					Sleep(1000);
					printf("�̱�: 0.95�޷� �Ϻ�:97.56�� �߱�:5.78���� ����:0.58�Ŀ�� �����:2.19���� \n");
					Sleep(1000);
					printf("\n");
				}

				if(n == 7)
				{
					int sc = 0;
					int i;
					int game;
					char player;
					int num;
					int arr[20];
					FILE *score;
					printf("�÷��̾��� �̸��� �Է����ּ���.\n(���̸��� 1ȸ���̸� ����!���̱⿡���˴ϴ�.):");
					scanf("%s",&player);
					while(1)
					{
						printf("������ �����ϼ���(1:����������2:�ֻ���������3:����!���̱�!4:����):");
						scanf("%d",&game);
						if(game == 1)
						{
							int coin = rand()%2;
							printf("0:��?1:��?:");
							scanf("%d",&i);
							if(i == coin)
							{
								printf("���߼̽��ϴ�!�����ؿ��~\n");
							}
							else
							{
								printf("�ƽ�����~\n");
							}
						}
						if(game == 2)
						{
							i = 0;
							printf("�ֻ����� ������ �Է��ϼ���(20����):");
							scanf("%d",&i);
							for(num = 0;num < i;num++)
							{
								arr[num] = rand()%7;
								while(1)
								{
									if(arr[num] == 0)
									{
										arr[num] = rand()%7;
									}
									else
									{
										break;
									}
								}
								Sleep(1000);
								printf("%d ",arr[num]);
							}
						}
						if(game == 3)
						{
							int num = rand()%101;
							printf("0~100������ �����߿� �ϳ��� �Է��ϼ���.");
							scanf("%d",&i);
							if(i == num)
							{
								printf("Uploading Score...");
								Sleep(5000);
								score =fopen("c:\\score.txt","a");
								fprintf(score,"%s : ��÷!!!\n",player);
								fclose(score);
								Sleep(1000);
								printf("\n��÷�Ǽ̽��ϴ�!\n");
								printf("01032320437�� �������ּ���!��ǰ�� �帳�ϴ�.\n");
								break;
							}
							else
							{
								printf("�ƽ����� ������ȸ��~");
								Sleep(1000);
								break;
							}
						}
						if(game >= 4)
						{
							Sleep(1000);
							printf("������ �����մϴ�.");
							Sleep(1000);
							break;
						}
					}
				}
				if(n == 8)
				{
					int abc;
					char f_name[255];
					char f_content[100000]; 
					FILE* fp;
					printf("���� ������ ������.\n");
					printf("���� �̸��� �Է��ϼ���:");
					fflush(stdin);
					gets(f_name);
					strcat(f_name,".txt");
					fp=fopen(f_name,"w");
					printf("������ �������Դϴ�");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".\n");
					Sleep(1000);
					if(fp == NULL)
					{
						printf("������ ���������ϴ�.");
						scanf("%d",abc);
					}
					printf("\n���� ������ �Է��ϼ���. (����ø� ���Ͻø� save���Է��ϼ���)\n");
					while(1)
					{
						fflush(stdin);
						gets(f_content);
						if(strcmp(f_content,"save")==0)  
						{
							break;
						}
						else
						{
							fprintf(fp,"%s\n",f_content);
						}
					}
					fclose(fp);
					printf("������ �������Դϴ�");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".\n");
					Sleep(1000);
					printf("����Ϸ�!���� �Ϸ�Ǽ���~\n");
					Sleep(1000);
				}
				if(n == 6)
				{
					int s,m,h;
					int i,j;

					j = 0;
					i = 0;
					h = 0;
					m = 0;
					s = 0;
					printf("Desktop Clock \n");

					printf("����ð��� �Է��ϼ���(��/��):");
					scanf("%d %d",&h,&m,&s);

					if(h > 24)
					{
						h = 89001284;
						printf("Proogram Error\n");
						i = 1;
					}
					if(m > 60)
					{

						m = 89001284;
						printf("Proogram Error\n");
						i = 1;
					}

					while(i == 0)
					{
						if(s == 60)
						{
							s = 0;
							m++;
							printf("%d�� %d�� \n",h,m);
						}
						if(m == 60)
						{
							m = 0;
							h++;
							printf("%d�� %d�� \n",h,m);
						}

						if(h == 24)
						{
							h = 0;
						}

						Sleep(1000);
						s++;
						printf("%d�� ",s);

						if(s == 60)
						{
							printf("\n");
						}
					}
					Sleep(3000);
					scanf("%d",j);
				}
				if(n == 9)
				{
					while(1)
					{
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "&";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "ȣ";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << endl;
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "(";Sleep(100);
						cout << "1";Sleep(100);
						cout << ":";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << "2";Sleep(100);
						cout << ":";Sleep(100);
						cout << "��";Sleep(100);
						cout << "��";Sleep(100);
						cout << ")";Sleep(100);
						cout << ":";Sleep(100);
						int select;
						cin >> select;
						cout << endl;
						if(select == 1)
						{
							int num = 0;
							int a = 0;
							int xy = 100000;
							while(1)
							{
								while(1)
								{
									srand((unsigned int) (NULL));
									xy--;
									if(xy == 0)
									{
										xy = 100000;
										break;
									}
								}
								num = rand()%46;
								Sleep(1000);
								cout << num << ' ';
								a++;
								if(a == 6)
								{
									cout << '+' << ' ';
								}
								if(a == 7)
								{
									cout << endl;
									break;
								}
							}
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "!";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "!";Sleep(100);
							cout << endl;Sleep(100);
							cout << endl;Sleep(100);
						}
						if(select == 2)
						{
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << ".";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "��";Sleep(100);
							cout << "^";Sleep(100);
							cout << "^";Sleep(100);
							cout << endl;Sleep(100);
							break;
						}
					}
				}
				system("cls");

			}
			break;
		}
		if(pw != num)
		{
			printf("�˼����� ��й�ȣ\n");
			Sleep(1000);
			printf("�ٽýõ����ּ���\n");
			Sleep(1000);
			printf("������ȸ : %d\n",q);
			Sleep(1000);
		}
		if(q == 0)
		{
			Sleep(1000);
			printf("��������� ���� \n");
			Sleep(1000);
			printf("������ ���� ����\n");
			Sleep(1000);
			printf("�������ʱ�ȭ��");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".\n");
			Sleep(1000);
			printf("���α׷������������մϴ�.\n");
			Sleep(3000);
		}

	}
}
*/