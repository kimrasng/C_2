#include <stdio.h>

int main(void)
{
	/*
	printf("%d\n",100-50);		// %d�� ����Ѵ� %d = 100-50
	printf("%d\n", 100 - 44);	//	\n�� �����ٷ� �̵�
	printf("%d\n", 100 - 33);
	printf("%d\n",100 - 99);
	*/

	/*
	int a, b;	//	������ ���� a b ����
	int result;	//	result ����

	a = 100;	//	a�� 100���� �ʱ�ȭ
	b = 50;		//	b�� 50���� �ʱ�ȭ

	result = a + b;	//	result ���� a+b�� ������ �ʱ�ȭ
	printf("%d + %d = %d\n", a, b, result);	//	a, b, result �� ���

	result = a - b;	//	result ���� a-b�� ������ �ʱ�ȭ
	printf("%d - %d = %d\n", a, b, result);	//	%d�� ������ ����ϱ����� �ʿ��ϴ�

	result = a * b;	//	result ���� a*b�� ������ �ʱ�ȭ
	printf("%d * %d = %d\n", a, b, result);	//	\n�� �����ٷ� �Ѿ��� ��

	result = a / b;	//	result ���� a/b�� ������ �ʱ�ȭ
	printf("%d / %d = %d\n", a, b, result);
	*/

	/*
	int a, b;
	int result;

	scanf_s("%d", &a);	//	Ű����� a�� ���� ���� �޴´� scanf_s() : �Է��Լ� &(���ۼ��� ������ �ǹ�)
	scanf_s("%d", &b);	//	Ű����� a�� ���� ���� �޴´�

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
	
	printf("ù��° ����� ���ڸ� �Է��ϼ��� ==>");
	scanf_s("%d", &a);
	printf("ù��° ����� ���ڸ� �Է��ϼ��� ==>");
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