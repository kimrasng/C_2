//	���� ����01

/*
int main(void)
{
	int a, b, c, d;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &c);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);
	
	return 0;
}
*/

//	���� ����02

//#include	<stdio.h>
//
//int main(void)
//{
//	int data;
//	printf("������ �Է��ϼ��� ==> ");
//	scanf_s("%d", &data);
//	printf("10���� ==> %d\n", data);
//	printf("16���� ==> %x\n", data);
//	printf("16���� ==> %o\n", data);
//
//	return 0;
//}


//	���� ����03
/*
#include	<stdio.h>

int main(void)
{
	printf("int ���� ũ�� \t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int ���� ũ�� \t\t ==> %d\n", sizeof(unsigned int));
	printf("short ���� ũ�� \t\t ==> %d\n", sizeof(short));
	printf("unsigned short ���� ũ�� \t ==> %d\n", sizeof(unsigned short));
	printf("long int ���� ũ�� \t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int ���� ũ�� \t ==> %d\n", sizeof(unsigned long int));
	printf("float ���� ũ�� \t\t ==> %d\n", sizeof(float));
	printf("double ���� ũ�� \t\t ==> %d\n", sizeof(double));
	printf("long double ���� ũ�� \t\t ==> %d\n", sizeof(long double));
	printf("char ���� ũ�� \t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char ���� ũ�� \t ==> %d\n", sizeof(unsigned char));


	return 0;
}
 */
 
//	���� ����04

/*
#include	<stdio.h>

int main(void)
{
	int a, c;
	char b;
	
	printf("ù���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &b);
	printf("�ι��� ���� �Է��ϼ��� : ");
	scanf_s("%d", &c);

	if (b == '+')
	{
		printf("%d + %d = %d �Դϴ�.\n", a, c, a + c);
	}
	if (b == '-')
	{
		printf("%d - %d = %d �Դϴ�.\n", a, c, a - c);
	}
	if (b == '*')
	{
		printf("%d * %d = %d �Դϴ�.\n", a, c, a * c);
	}
	if (b == '/')
	{
		printf("%d / %d = %d �Դϴ�.\n", a, c, a / c);
	}
	if (b == '%')
	{
		printf("%d % %d = %d �Դϴ�.\n", a, c, a % c);
	}

	return 0;
}
*/
//	���� ����05
/*
#include	<stdio.h>

int main(void)
{
	int a, c;
	char b;

	printf("ù���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %d", &b);
	printf("�ι��� ���� �Է��ϼ��� : ");
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
						printf("�����ڸ� �߸� �Է� �߽��ϴ�.");
					}
				}
			}
		}
	}


}
*/

//	���� ����06
#include	<stdio.h>

int main(void)
{
	int a, c;
	char b;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf_s("%d %c %d", &a, &b, 1, &c);

	switch (b)
	{
		case '+':
			printf("%d + %d = %d �Դϴ�.\n", a, c, a + c);
			break;
		case '-':
			printf("%d - %d = %d �Դϴ�.\n", a, c, a - c);
			break;
		case '*':
			printf("%d * %d = %d �Դϴ�.\n", a, c, a * c);
			break;
		case '/':
			printf("%d / %d = %d �Դϴ�.\n", a, c, a / c);
			break;
		case '%':
			printf("%d % %d = %d �Դϴ�.\n", a, c, a % c);
			break;

	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�.");
	}
}

//	���� ����07
//	���� ����08
//	���� ����09
//	���� ����10
//	���� ����11
//	���� ����12
//	���� ����13
//	���� ����14
//	���� ����15
//	���� ����16
//	���� ����17
//	���� ����18
//	���� ����19
//	���� ����20
//	���� ����21
//	���� ����22
//	���� ����23
//	���� ����24
//	���� ����25
//	���� ����26
//	���� ����27
//	���� ����28
//	���� ����29
//	���� ����30
//	���� ����31
//	���� ����32
//	���� ����33
//	���� ����34
//	���� ����35
//	���� ����36
//	���� ����37
//	���� ����38
//	���� ����39
//	���� ����40