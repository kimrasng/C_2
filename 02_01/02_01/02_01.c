#include <stdio.h>

int main(void)
{
	//	��������
	int a;	//int(������ ������ ��������) (�����̸�)
	int b;	
	int result;	
	
	scanf_s("%d", &a);	//	scanf�� ���� a�� �ִ´�
	scanf_s("%d", &b);	//	scanf�� ���� b�� �ִ´�

	result = a + b;
	printf("%d + %d = %d �̴ϴ�.\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d �̴ϴ�.\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d �̴ϴ�.\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d �̴ϴ�.\n", a, b, result);

	return 0;
}