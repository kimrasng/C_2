#include <stdio.h>

int main(void)
{
	/*
	printf("%d\n",100-50);		// %d를 출력한다 %d = 100-50
	printf("%d\n", 100 - 44);	//	\n은 다음줄로 이동
	printf("%d\n", 100 - 33);
	printf("%d\n",100 - 99);
	*/

	/*
	int a, b;	//	정수형 변수 a b 생성
	int result;	//	result 생성

	a = 100;	//	a를 100으로 초기화
	b = 50;		//	b를 50으로 초기화

	result = a + b;	//	result 값을 a+b의 값으로 초기화
	printf("%d + %d = %d\n", a, b, result);	//	a, b, result 를 출력

	result = a - b;	//	result 값을 a-b의 값으로 초기화
	printf("%d - %d = %d\n", a, b, result);	//	%d는 정수를 출력하기위해 필요하다

	result = a * b;	//	result 값을 a*b의 값으로 초기화
	printf("%d * %d = %d\n", a, b, result);	//	\n은 다음줄로 넘어가라는 뜻

	result = a / b;	//	result 값을 a/b의 값으로 초기화
	printf("%d / %d = %d\n", a, b, result);
	*/

	/*
	int a, b;
	int result;

	scanf_s("%d", &a);	//	키보드로 a에 들어올 값을 받는다 scanf_s() : 입력함수 &(엠퍼센드 번지의 의미)
	scanf_s("%d", &b);	//	키보드로 a에 들어올 값을 받는다

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);
	*/

	int a, b;
	int result;
	
	printf("첫번째 계산할 숫자를 입력하세요 ==>");
	scanf_s("%d", &a);
	printf("첫번째 계산할 숫자를 입력하세요 ==>");
	scanf_s("%d", &b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);

	return 0;
}