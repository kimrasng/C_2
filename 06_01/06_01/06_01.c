#include	<stdio.h>

int main(void)
{
	//int i;

	//for (i=0; i < 100;i++)
	//{
	//	printf("�ȳ��ϼ���!\n");	//	�ѹ����� ���ϻ���� ���ص� �ȴ�.
	//}

	/*
	for (�ʱ갪; ���ǽ�; ������;)
	{
		�ݺ�����;
	}
	�ݺ���
		���� �� �����ؾ� �� �۾��� �� ���� �ذ����ִ� �ݺ���
		��ǥ���� �ݺ����� for���� while��

	for���� ����
		�ݺ����̶� �� �״�� ������ �ݺ��ϰ� ������ִ� ��
		������ ���� ������� ����ϴ� ���α׷��� ������.
	*/

	//int i;

	//for (i = 0; i < 3; i++)
	//{
	//	printf("�ȳ��ϼ���!\n");	//	������ ����� for���̴�.
	//	printf("�� �����׿�!\n");
	//}

	//printf("\n\n");

	//for (i = 0; i < 3; i++)
	//	printf("�ȳ��ϼ���!\n");	//	������ ������� ���� for���̴�.
	//	printf("�ȳ��ϼ���!\n");
	//	//	�� �����̻��� ��½ÿ��� �ݵ�� ������ ����Ѵ�. ==> �����ϸ� ������ ������ ����Ѵ�.

	//int i;

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d: �ȳ��ϼ���!\n", i);
	//}
	//
	//printf("\n\n");

	//for (i = 4; i >= 0; i--)	//	�ʱ갪, ���ǽ�, �������� ����Ͽ� ���ڰ��� ���δ�
	//{
	//	printf("%d : �ȳ��ϼ���!\n", i);
	//}

	//int hap, i;

	//for (i = 0; i < 11; i++)
	//{
	//	hap = hap + i;	//	���������� hap�� �ʱ�ȭ�� ������ ����
	//}
	//printf("%d", hap);

	//int hap = 0, i;

	//for (i = 0; i < 11; i++)
	//{
	//	hap = hap + i;	//	���������� hap�� �ʱ�ȭ�� ������ ����
	//}
	//printf("%d", hap);

	/*
	���� ��� ���� �߻���
		���� hap�� �ʱ�ȭ���� �ʾұ� ����

	�����Ⱚ�� ����
		�����ȿ� �̹� �ٸ� ���� �ִ� ���·� ������ ���������ν� ���������� ��� �����
		���α׷� ������ ������ �ʱ�ȭ ���� ���� ���� ����
		�������� ǥ���ϴ� ������ �ʱ�ȭ�� ���������ν� ���� �ذ�
			int hap = 0;
	*/

	int i, hap = 0;

	for ( i = 500; i < 1000; i++)
	{
		if (i % 2 == 0)
		{

		}
		else
		{
			hap = hap + i;
		}
	}

	printf("%d", hap);

	return 0;
}