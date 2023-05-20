#include	<stdio.h>

int main(void)
{
	/*
	int hap = 0;
	int i;
	int num;

	printf("값 입력 :");
	scanf_s("%d", &num);

	for (i=1; i <= num; i++)
	{
		hap = hap + i;
	}

	printf("1부터 %d까지의 합 : %d\n",num, hap);
	*/

	/*
	int hap = 0;
	int i;
	int num1, num2, num3;

	printf("시작 값, 끝값, 증가값 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);	//	공백 문자로 구분해서 세 개의 수를 입력받는다.

	for (i = num1; i <= num2; i=i+num3)	//	시작밧은 num1, 최종값은 num3, 증가값은 num3이다.
	{
		hap = hap + i;
	}

	printf("%d에서 %d까지 %d씩 증가한 값의 합 : %d", num1, num2, num3, hap);
	*/

	int i;
	int dan;	//	계산한 단을 입력받을 변수를 선언한다.

	printf("몇 단 ? ");
	scanf_s("%d", &dan);	//	계산할 단을 입력받는다.

	for (i = 1; i <= 9; i++)
	{
		printf("%d X %d = %2d\n", dan, i, dan * i);	//	1부터 9까지 반복하며 입력한 단을 출력한다.
	}

	

	return 0;
}