/*
#include<stdio.h>
#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(void)
{
	printf("              -------*데스크톱 툴(Kor) v7.5*-------\n");
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
		printf("비밀번호를 입력하세요:");
		scanf("%d",&pw);
		printf("데이터 전송중");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);

		if(pw == num)
		{
			printf("사용자 인증완료\n");
			Sleep(1000);
			printf("환영합니다!\n");
			Sleep(1000);
			while(1)
			{
				printf("스톱워치/1ㅣ타이머/2ㅣ랜덤프로그램/3ㅣ\n계산기/4ㅣ환율/5ㅣ시계(nonstop)/6ㅣ간단한게임들/7ㅣ\n파일입출력/8ㅣ행운번호생성기/9ㅣ크래딧&수정사항/10ㅣ종료/11:");
				scanf("%d",&n);
				printf("\n");
				if(n >= 11)
				{
					printf("이용해주셔서 감사합니다.");
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
					printf("제작자:민상연(오류사항은01032320437로!!)\n");
					Sleep(1000);
					printf("구버젼들: v1.3 | v1.5ㅣv2.0ㅣv2.2ㅣv3.1ㅣv5.0ㅣv.7.3\n");
					printf("\n");
					Sleep(1000);
					printf("v7.3에서부터 수정된점...\n");
					Sleep(1000);
					printf("로또번호생성기 추가\n");
					printf("\n");
					Sleep(1000);
					printf("추가&수정될사항:사용자 전용아이디기능\n");
					Sleep(1000);
					printf("많이 기대해주세요~^^\n");
					Sleep(1000);
					printf("\n");
				}
				if(n == 3)
				{
					printf("숫자제한&숫자출력갯수 설정(겹칠수있습니다.):");
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
					printf("시간제한설정(분):");
					scanf("%d",&y);
					while(1)
					{
						Sleep(1000);
						s++;
						if(m == y)
						{
							printf("끝내기/1ㅣ계속하기/2:");
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
						printf("%d시간 %d분 %d초 \n",h,m,s);
					}
				}
				if(n == 2)
				{
					printf("시간입력(@분 @초):");
					scanf("%d %d",&minute,&time);
					time += minute*60;
					printf("%d초 ",time);
					while(1)
					{
						if(time == 0)
						{
							printf("\n");
							printf("타임오버!!!");
							Sleep(500);
							printf(" 타임오버!!!");
							Sleep(500);
							printf(" 타임오버!!!\n");
							Sleep(500);
							break;
						}
						Sleep(1000);
						time--;
						printf("%d초 ",time);
					}
				}
				if(n == 4)
				{
					y = 0;
					m = 0;
					i = 0;

					while(1)
					{
						printf("계산방법선택|더하기/1|빼기/2|곱하기/3|나누기/4|끝내기/5:");
						scanf("%d",&i);
						if(i >= 5)
						{
							printf("계산기종료\n");
							Sleep(1000);
							break;
						}
						printf("계산할수 2개입력:");
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
					printf("1000원 기준\n");
					Sleep(1000);
					printf("미국: 0.95달러 일본:97.56엔 중국:5.78위안 영국:0.58파운드 브라질:2.19레알 \n");
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
					printf("플레이어의 이름을 입력해주세요.\n(위이름은 1회용이며 도전!행운뽑기에사용됩니다.):");
					scanf("%s",&player);
					while(1)
					{
						printf("게임을 선택하세요(1:동전던지기2:주사위던지기3:도전!행운뽑기!4:종료):");
						scanf("%d",&game);
						if(game == 1)
						{
							int coin = rand()%2;
							printf("0:앞?1:뒤?:");
							scanf("%d",&i);
							if(i == coin)
							{
								printf("맞추셨습니다!축하해요우~\n");
							}
							else
							{
								printf("아쉽군요~\n");
							}
						}
						if(game == 2)
						{
							i = 0;
							printf("주사위의 갯수를 입력하세요(20개내):");
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
							printf("0~100까지의 숫자중에 하나만 입력하세요.");
							scanf("%d",&i);
							if(i == num)
							{
								printf("Uploading Score...");
								Sleep(5000);
								score =fopen("c:\\score.txt","a");
								fprintf(score,"%s : 당첨!!!\n",player);
								fclose(score);
								Sleep(1000);
								printf("\n당첨되셨습니다!\n");
								printf("01032320437로 연결해주세요!상품을 드립니다.\n");
								break;
							}
							else
							{
								printf("아쉽군요 다음기회에~");
								Sleep(1000);
								break;
							}
						}
						if(game >= 4)
						{
							Sleep(1000);
							printf("게임을 종료합니다.");
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
					printf("원격 파일을 제작툴.\n");
					printf("파일 이름을 입력하세요:");
					fflush(stdin);
					gets(f_name);
					strcat(f_name,".txt");
					fp=fopen(f_name,"w");
					printf("파일을 생성중입니다");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".\n");
					Sleep(1000);
					if(fp == NULL)
					{
						printf("파일을 열수없습니다.");
						scanf("%d",abc);
					}
					printf("\n파일 내용을 입력하세요. (종료시를 원하시면 save를입력하세요)\n");
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
					printf("파일을 저장중입니다");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".");
					Sleep(1000);
					printf(".\n");
					Sleep(1000);
					printf("저장완료!좋은 하루되세요~\n");
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

					printf("현재시간을 입력하세요(시/분):");
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
							printf("%d시 %d분 \n",h,m);
						}
						if(m == 60)
						{
							m = 0;
							h++;
							printf("%d시 %d분 \n",h,m);
						}

						if(h == 24)
						{
							h = 0;
						}

						Sleep(1000);
						s++;
						printf("%d초 ",s);

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
						cout << "복";Sleep(100);
						cout << "권";Sleep(100);
						cout << "&";Sleep(100);
						cout << "로";Sleep(100);
						cout << "또";Sleep(100);
						cout << "번";Sleep(100);
						cout << "호";Sleep(100);
						cout << "생";Sleep(100);
						cout << "성";Sleep(100);
						cout << "기";Sleep(100);
						cout << endl;
						cout << "명";Sleep(100);
						cout << "령";Sleep(100);
						cout << "어";Sleep(100);
						cout << "를";Sleep(100);
						cout << "입";Sleep(100);
						cout << "력";Sleep(100);
						cout << "하";Sleep(100);
						cout << "세";Sleep(100);
						cout << "요";Sleep(100);
						cout << "(";Sleep(100);
						cout << "1";Sleep(100);
						cout << ":";Sleep(100);
						cout << "생";Sleep(100);
						cout << "성";Sleep(100);
						cout << "2";Sleep(100);
						cout << ":";Sleep(100);
						cout << "종";Sleep(100);
						cout << "료";Sleep(100);
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
							cout << "생";Sleep(100);
							cout << "성";Sleep(100);
							cout << "완";Sleep(100);
							cout << "료";Sleep(100);
							cout << "!";Sleep(100);
							cout << "행";Sleep(100);
							cout << "운";Sleep(100);
							cout << "을";Sleep(100);
							cout << "빌";Sleep(100);
							cout << "어";Sleep(100);
							cout << "요";Sleep(100);
							cout << "!";Sleep(100);
							cout << endl;Sleep(100);
							cout << endl;Sleep(100);
						}
						if(select == 2)
						{
							cout << "감";Sleep(100);
							cout << "사";Sleep(100);
							cout << "합";Sleep(100);
							cout << "니";Sleep(100);
							cout << "다";Sleep(100);
							cout << ".";Sleep(100);
							cout << "안";Sleep(100);
							cout << "녕";Sleep(100);
							cout << "히";Sleep(100);
							cout << "가";Sleep(100);
							cout << "세";Sleep(100);
							cout << "요";Sleep(100);
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
			printf("알수없는 비밀번호\n");
			Sleep(1000);
			printf("다시시도해주세요\n");
			Sleep(1000);
			printf("남은기회 : %d\n",q);
			Sleep(1000);
		}
		if(q == 0)
		{
			Sleep(1000);
			printf("사용자인증 에러 \n");
			Sleep(1000);
			printf("데이터 인증 에러\n");
			Sleep(1000);
			printf("데이터초기화중");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".\n");
			Sleep(1000);
			printf("프로그램을강제종료합니다.\n");
			Sleep(3000);
		}

	}
}
*/