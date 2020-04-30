/*
 * 이름 : 민상연
 * 학번 : 202012348
 * 프로그램 작성일 : 2020-04-27
 * 프로그램 설명 : 과제 6의 답을 구하는 프로그램입니다.
*/
#include<stdio.h>

int main(void) {
	int flag = 0; // 프로그램의 종료 유무를 결정하는 변수
	int h, m; // 시와 분을 입력받을 변수
	int tmH, tmM; // 변수의 연산결과를 일시적으로 저장할 변수

	//printf("몇시, 몇분에 일어나기를 원하십니까? ");
	scanf("%d %d", &h, &m); //시와 분 입력받기

	if (h < 0 || h > 23) { // 시에 오류가 있는지 검사
		printf("시를 잘못 입력하셨습니다. 시는 0 ~ 24 사이에 있어야 합니다.\n");
		flag = 1; // 오류가 있을시 프로그램 종료
	}
	if (m < 0 || m > 59) { // 분에 오류가 있는지 검사
		printf("분을 잘못 입력하셨습니다. 분은 0 ~ 59 사이에 있어야 합니다.\n");
		flag = 1;
	}

	if (flag == 0) { // 입력된 값에 오류가 없을시 진입
		tmH = h;
		tmM = m - 45; // 45분 일찍 설정
		if (tmM < 0) { // 45분 일찍 설정한 시간이 범위를 넘어설 때 진입
			tmM = 60 + tmM; // 분 재설정
			tmH--; // 시 재설정

			if (tmH < 0) { // 재설정한 시간이 범위를 넘어설 때 진입
				tmH = 24 + tmH; // 시 재설정
			}
		}
		printf("%d %d\n", tmH, tmM); // 결과 출력
	}

	return 0;
}
