#include	<stdio.h>

int main(void)
{
	//int i;
	//
	//for (i = 0; i < 5; i++)
	//{
	//	printf("안녕하세요!\n");
	//}
	

	//i = 0;	//	초기값을 지정한다.
	//while (i < 5)	//	초깃값을 지정한다
	//{
	//	printf("안녕하세요!\n");	//	증감식이다.

	//	i++;
	//}

	//초깃값;
	//while (조건식)	//	초깃값을 지정한다
	//{
	//	실행문장;
	//	증감식
	//	i++;
	//}

	//	while문의 실행 순서
		//	조건식의 값이 참이면 반복할 문장 수행
		//	중괄호 ({})가 끝나는 곳에서 조건식으로 돌아와 같은 동작 반복

	//int i;
	//int hap = 0;

	//i = 1;	//	초깃값을 지정한다.


	//while (i<=10)	//	조건식이다.
	//{
	//	hap = hap + i;
	//	i++;	//	증감식이다.
	//}

	//printf("1에서 10까지의 합 : %d\n", hap);

	/*int a, b;

	while (1)
	{
		printf("더할 두 수 입력(멈추려면 ctrl+c) : ");
		scanf_s("%d %d", &a, &b);

		printf("%d + %d = %d\n", a, b, a + b);
	}*/

	//무한루프를 위한 while문
		//	조건식이 무조건 참이어야 함
		//	for ( ;; )와 동일한 역할
		//	while(1)로 표현

	//int a, b;
	//char ch;

	//while (1)
	//{
	//	printf("계산할 두수를 입력(멈추려면 ctrl + c) : ");
	//	scanf_s("%d %d", &a, &b);

	//	printf("계산할 연산자를 입력하세요 : ");
	//	scanf_s(" %c", &ch);	//	연산자를 입력 받는다. % 앞에 공백 문자를 넣는다.(공백이 앞의 enter키 값을 받음) scanf_s(" %c", &ch, 1);
	//
	//	switch (ch)	//	입력받은 ch연산자에 의해 +, -, *, /, %로 분기한다 . 그 외는 오류 메시지를 풀력한다.
	//	{
	//	case '+':
	//		printf("%d + %d = %d 입니다.\n", a, b, a + b);
	//		break;
	//	case '-':
	//		printf("%d - %d = %d 입니다.\n", a, b, a - b);
	//		break;
	//	case '*':
	//		printf("%d * %d = %d 입니다.\n", a, b, a * b);
	//		break;
	//	case '/':
	//		printf("%d / %d = %f 입니다.\n", a, b, a / (float)b);
	//		break;
	//	case '%':
	//		printf("%d %% %d = %d 입니다.\n", a, b, a % b);
	//		break;

	//	default:
	//		printf("연산자를 잘못 입력했습니다.\n	");
	//		break;
	//	}
	//}

	int menu;

	do
	{
		printf("\n 손님 주문 하시겠습니까?\n");
		printf("<1>카페라뗴<2>카푸치노<3>아메리카노<4>그만시킬래요 ==>");
		scanf_s("%d", &menu);

		switch (menu)
		{
		case 1:
			printf("#카페라떼를 주문하셧습니다.\n");
			break;
		case 2:
			printf("#카푸치노를 주문하셧습니다.\n");
			break;
		case 3:
			printf("#아메리카노를 주문하셧습니다.\n");
			break;
		case 4:
			printf("주문하신 커피 준비습니다.\n");
			break;
		default:
			printf("잘못 주문하셨습니다.\n");
			break;
		}
	} while (menu != 4);	//	선택한 메뉴가 4번이 아님녀 계속 반복해서 주문을 받는다. (4번이면 중단)

	//	do~whitle믄거ㅣ while문의 차이
		//	do~while문은 조건식을 확인하기 전에 '반복할 문장'을 수행하므로 무조건 한 번은 실행됨
		//	형식은 while문과 동일하지만 do~while문은 조건식이 아래에 위치
	
	
	return 0;
}