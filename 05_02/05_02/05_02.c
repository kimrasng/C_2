#include <stdio.h>

int main(void)
{
	/*
	int a;
	
	printf("1~4중에 선택: ");
	scanf_s("%d", &a);

	switch (a)	//	입력한 a 값에 따라서 분기한다.
	{
	case 1:	//	a가 1이면 아래행을 수행하고 그다음행에서 switch 블록을 빠져 나간다.
		printf("1을 선택\n");
		break;
	case 2:
		printf("2을 선택\n");
		break;
	case 3:
		printf("3을 선택\n");
		break;
	case 4:
		printf("4을 선택\n");
		break;
	default:	//	a가 1, 2, 3, 4 중 아무것도 해당되지 않을 떄 수행한다.
		printf("이상한 걸 선택.\n");
	}
	/*
	switch~case문
		참과 거짓 이외의 다른 선택이 가능한 경우에 사용
		여러 개 중 하나를 선택한다는 의미로 다중 분기
		조건값(정숫값)에 따라 case문 실행
	*/
	
	int a;
	printf("출생년도를 입력하세요 : ");
	scanf_s("%d", &a);
	
	switch (a%12)
	{
	case 0:
		printf("원숭이 띠\n");
		break;
	case 1:
		printf("닭 띠\n");
		break;
	case 2:
		printf("개 띠\n");
		break;
	case 3:
		printf("돼지 띠\n");
		break;
	case 4:
		printf("쥐 띠\n");
		break;
	case 5:
		printf("소 띠\n");
		break;
	case 6:
		printf("호랑이 띠\n");
		break;
	case 7:
		printf("토끼 띠\n");
		break;
	case 8:
		printf("용 띠\n");
		break;
	case 9:
		printf("뱀 띠\n");
		break;
	case 10:
		printf("말 띠\n");
		break;
	case 11:
		printf("양 띠\n");
		break;
	default:
		printf("?????");
		break;
	}

	/*
	break문의 역할
		switch~case문을 빠져나가는 역할
		실행문의 마지막에 반드시 써줘야함
	*/

	return 0;
}