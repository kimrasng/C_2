#include	<stdio.h>

int main(void)
{
	//int i;

	//for (i = 1; i <= 100; i++)	//	100번 반복한다.
	//{
	//	printf("안녕하세요!\n");	//	 변수 i번째를 출력한다.
	//	break;	//	무조건 for문을 빠져나간다.
	//}
	//printf("for문 끝!\n"); 

	//	반복문을 탈출하는 break문
		//	for, while, do~whule과 같은 반복문을 탈출할 때 사용
		//	if 문과 결합하여 무한 루프 안에 사용
		//	무한 루프 둘다특정 조건을 만족함녀 프로그램을 종료하는 역할

	//int a, b;

	//while (1)
	//{
	//	printf("더할 두수 입력 : ");
	//	scanf_s("%d %d", &a, &b);	//	2개 이상의 수를 입력받는다/

	//	if (a == 0)	//	a의 입력값이 0이면 무조건 while문을 빠져 나간다.
	//		break;

	//	printf("%d + %d = %d\n", a, b, a + b);
	//}

	//int hap = 0;
	//int i;

	//for (i = 1; i <= 100; i++)
	//{
	//	hap = hap + i;
	//	if (hap > 1000)
	//	{
	//		break;
	//	}
	//}

	//printf("1~100까지 합에서 최초로 1000이 넘는 위치는? : %d \n", i);

	//int hap = 0;
	//int i;

	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)	//	i 값을 3으로 나눈 나머지값이 0이면(3의 배수이면) 블록을 끝으로 건너뛰고 다시 위로 올라간다
	//		continue;
	//	hap = hap + 1;
	//}

	//printf("1~100까지의 합(3의 배수 제외) : %d \n", hap);
	//	반복문으로 다시 들어가는 continue문
		//	continue문을 만나면 블록의 남은 부분을 건너뛰고 반복문을 처음부터 다시 수행

	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		hap = hap + i;

		if (hap > 2000)	//	누적된 값이 2000을 넘으면 mygoto: 로 무조건 이동한다.
		{
			goto mygoto;
		}
	}
	mygoto:	//	mygoto문이 이동할 mygoto 레이블이다.
		printf("1부터 %d까지 합하면 2000이 넘어요 : \n", i);

	//	지정한 위치로 이동하는 goto문
		//	지정된 레이블로 건너뛰게 하는 명령문
		//	프로그램의 흐름을 복잡하게 만드는 단점이 있음


	return 0;
}