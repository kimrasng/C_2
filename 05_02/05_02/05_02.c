#include <stdio.h>

int main(void)
{
	/*
	int a;
	
	printf("1~4�߿� ����: ");
	scanf_s("%d", &a);

	switch (a)	//	�Է��� a ���� ���� �б��Ѵ�.
	{
	case 1:	//	a�� 1�̸� �Ʒ����� �����ϰ� �״����࿡�� switch ����� ���� ������.
		printf("1�� ����\n");
		break;
	case 2:
		printf("2�� ����\n");
		break;
	case 3:
		printf("3�� ����\n");
		break;
	case 4:
		printf("4�� ����\n");
		break;
	default:	//	a�� 1, 2, 3, 4 �� �ƹ��͵� �ش���� ���� �� �����Ѵ�.
		printf("�̻��� �� ����.\n");
	}
	/*
	switch~case��
		���� ���� �̿��� �ٸ� ������ ������ ��쿡 ���
		���� �� �� �ϳ��� �����Ѵٴ� �ǹ̷� ���� �б�
		���ǰ�(������)�� ���� case�� ����
	*/
	
	int a;
	printf("����⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	
	switch (a%12)
	{
	case 0:
		printf("������ ��\n");
		break;
	case 1:
		printf("�� ��\n");
		break;
	case 2:
		printf("�� ��\n");
		break;
	case 3:
		printf("���� ��\n");
		break;
	case 4:
		printf("�� ��\n");
		break;
	case 5:
		printf("�� ��\n");
		break;
	case 6:
		printf("ȣ���� ��\n");
		break;
	case 7:
		printf("�䳢 ��\n");
		break;
	case 8:
		printf("�� ��\n");
		break;
	case 9:
		printf("�� ��\n");
		break;
	case 10:
		printf("�� ��\n");
		break;
	case 11:
		printf("�� ��\n");
		break;
	default:
		printf("?????");
		break;
	}

	/*
	break���� ����
		switch~case���� ���������� ����
		���๮�� �������� �ݵ�� �������
	*/

	return 0;
}