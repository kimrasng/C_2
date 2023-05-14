//	예제 모음01

/*
int main(void)
{
	int a, b, c, d;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &c);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);
	
	return 0;
}
*/

//	예제 모음02

//#include	<stdio.h>
//
//int main(void)
//{
//	int data;
//	printf("정수를 입력하세요 ==> ");
//	scanf_s("%d", &data);
//	printf("10진수 ==> %d\n", data);
//	printf("16진수 ==> %x\n", data);
//	printf("16진수 ==> %o\n", data);
//
//	return 0;
//}


//	예제 모음03
/*
#include	<stdio.h>

int main(void)
{
	printf("int 형의 크기 \t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int 형의 크기 \t\t ==> %d\n", sizeof(unsigned int));
	printf("short 형의 크기 \t\t ==> %d\n", sizeof(short));
	printf("unsigned short 형의 크기 \t ==> %d\n", sizeof(unsigned short));
	printf("long int 형의 크기 \t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int 형의 크기 \t ==> %d\n", sizeof(unsigned long int));
	printf("float 형의 크기 \t\t ==> %d\n", sizeof(float));
	printf("double 형의 크기 \t\t ==> %d\n", sizeof(double));
	printf("long double 형의 크기 \t\t ==> %d\n", sizeof(long double));
	printf("char 형의 크기 \t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char 형의 크기 \t ==> %d\n", sizeof(unsigned char));


	return 0;
}
 */
 
//	예제 모음04

/*
#include	<stdio.h>

int main(void)
{
	int a, c;
	char b;
	
	printf("첫번쨰 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf_s(" %c", &b);
	printf("두번쨰 수를 입력하세요 : ");
	scanf_s("%d", &c);

	if (b == '+')
	{
		printf("%d + %d = %d 입니다.\n", a, c, a + c);
	}
	if (b == '-')
	{
		printf("%d - %d = %d 입니다.\n", a, c, a - c);
	}
	if (b == '*')
	{
		printf("%d * %d = %d 입니다.\n", a, c, a * c);
	}
	if (b == '/')
	{
		printf("%d / %d = %d 입니다.\n", a, c, a / c);
	}
	if (b == '%')
	{
		printf("%d % %d = %d 입니다.\n", a, c, a % c);
	}

	return 0;
}
*/
//	예제 모음05
/*
#include	<stdio.h>

int main(void)
{
	int a, c;
	char b;

	printf("첫번쨰 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("계산할 연사자를 입력하세요 : ");
	scanf_s(" %d", &b);
	printf("두번쨰 수를 입력하세요 : ");
	scanf_s("%d", &c);
	
	if ( b == '+' )
	{
		printf("%d + %d = %d", a, c, a + c);
	}
	else {
		if (b == '-')
		{
			printf("%d + %d = %d", a, c, a - c);
		}
		else {
			if (b == '*')
			{
				printf("%d + %d = %d", a, c, a * c);
			}
			else {
				if (b == '/')
				{
					printf("%d + %d = %d", a, c, a / c);
				}
				else {
					if (b == '%')
					{
						printf("%d + %d = %d", a, c, a % c);
					}
					else {
						printf("연산자를 잘못 입력 했습니다.");
					}
				}
			}
		}
	}


}
*/

//	예제 모음06
#include	<stdio.h>

int main(void)
{
	int a, c;
	char b;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf_s("%d %c %d", &a, &b, 1, &c);

	switch (b)
	{
		case '+':
			printf("%d + %d = %d 입니다.\n", a, c, a + c);
			break;
		case '-':
			printf("%d - %d = %d 입니다.\n", a, c, a - c);
			break;
		case '*':
			printf("%d * %d = %d 입니다.\n", a, c, a * c);
			break;
		case '/':
			printf("%d / %d = %d 입니다.\n", a, c, a / c);
			break;
		case '%':
			printf("%d % %d = %d 입니다.\n", a, c, a % c);
			break;

	default:
		printf("연산자를 잘못 입력했습니다.");
	}
}

//	예제 모음07
//	예제 모음08
//	예제 모음09
//	예제 모음10
//	예제 모음11
//	예제 모음12
//	예제 모음13
//	예제 모음14
//	예제 모음15
//	예제 모음16
//	예제 모음17
//	예제 모음18
//	예제 모음19
//	예제 모음20
//	예제 모음21
//	예제 모음22
//	예제 모음23
//	예제 모음24
//	예제 모음25
//	예제 모음26
//	예제 모음27
//	예제 모음28
//	예제 모음29
//	예제 모음30
//	예제 모음31
//	예제 모음32
//	예제 모음33
//	예제 모음34
//	예제 모음35
//	예제 모음36
//	예제 모음37
//	예제 모음38
//	예제 모음39
//	예제 모음40