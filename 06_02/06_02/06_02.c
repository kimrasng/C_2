#include	<stdio.h>

int main(void)
{
	/*
	int hap = 0;
	int i;
	int num;

	printf("�� �Է� :");
	scanf_s("%d", &num);

	for (i=1; i <= num; i++)
	{
		hap = hap + i;
	}

	printf("1���� %d������ �� : %d\n",num, hap);
	*/

	/*
	int hap = 0;
	int i;
	int num1, num2, num3;

	printf("���� ��, ����, ������ �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);	//	���� ���ڷ� �����ؼ� �� ���� ���� �Է¹޴´�.

	for (i = num1; i <= num2; i=i+num3)	//	���۹��� num1, �������� num3, �������� num3�̴�.
	{
		hap = hap + i;
	}

	printf("%d���� %d���� %d�� ������ ���� �� : %d", num1, num2, num3, hap);
	*/

	int i;
	int dan;	//	����� ���� �Է¹��� ������ �����Ѵ�.

	printf("�� �� ? ");
	scanf_s("%d", &dan);	//	����� ���� �Է¹޴´�.

	for (i = 1; i <= 9; i++)
	{
		printf("%d X %d = %2d\n", dan, i, dan * i);	//	1���� 9���� �ݺ��ϸ� �Է��� ���� ����Ѵ�.
	}

	

	return 0;
}