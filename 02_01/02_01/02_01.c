#include <stdio.h>

int main(void)
{
	//	변수선언
	int a;	//int(변수의 정수형 데이터형) (변수이름)
	int b;	
	int result;	
	
	scanf_s("%d", &a);	//	scanf의 값을 a에 넣는다
	scanf_s("%d", &b);	//	scanf의 값을 b에 넣는다

	result = a + b;
	printf("%d + %d = %d 이니다.\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d 이니다.\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d 이니다.\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d 이니다.\n", a, b, result);

	return 0;
}