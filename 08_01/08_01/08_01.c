#include	<stdio.h>

int main(void)
{
	/*int a, b, c, d;
	int hap;

	printf("1���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("2���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("3���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &c);
	printf("4���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &d);
	
	hap = a + b + c + d;

	printf("�� ==> %d\n", hap);*/

	/*int aa[4];
	int hap;

	printf("1��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[0]);
	printf("2��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[1]);
	printf("3��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[2]);
	printf("4��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[3]);

	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("�հ� ==> %d\n", hpa);*/

		//�迭�� ����ϴ� ����
		//	�迭�� ����
		//		���� ���� ������ �� �ٷ� �ٿ����� ��
		//		����(����)�� �� �ٷ� ������ ���� ��ü�� �̸�(ex.aa) ����
		//		������ ���ڴ� aa[0], aa[1], _�� ���� ��ȣ(÷��)�� ����
		//	�迭�� ���� ���
		//		���������� �迭_�̸�[����]
		//			��) ���� 4���� ���� ������ �迭 ����
		//				int aa[4]

	//int aa[4];	//	�迭�� �հ� ����, ÷�ڸ� �����Ѵ�.
	//int hap = 0;
	//int i;

	//for (i = 0; i <= 3; i++)	//	�迭 aa[0]~[3]�� ���� 4���� �Է¹޴´�.
	//{
	//	printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
	//	scanf_s("%d", &aa[i]);
	//}
	//
	//for (i = 0; i <= 3; i++)	//	for ���� �̿��Ͽ� ���� ������ ���� �ڵ� �������� ������
	//{
	//	hap += aa[i];
	//}

	//printf("�հ� ==> %d\n", hap);

	//int aa[4] = { 100,200.300,400 };
	//int bb[] = { 100,200,300,400 };
	//int cc[4] = { 100, 200 };
	//int dd[4] = { 0 };
	//int i;

	//for (i = 0; i <= 3; i++)
	//{
	//	printf("aa[%d]==>%d\t", i, aa[i]);
	//}
	//printf("\n");
	//for (i = 0; i <= 3; i++)
	//{
	//	printf("aa[%d]==>%d\t", i, bb[i]);
	//}
	//printf("\n");
	//for (i = 0; i <= 3; i++)
	//{
	//	printf("aa[%d]==>%d\t", i, cc[i]);
	//}
	//printf("\n");
	//for (i = 0; i <= 3; i++)
	//{
	//	printf("aa[%d]==>%d\t", i, dd[i]);
	//}
	//printf("\n");

	 //�迭�� �ʱ�ȭ
		// �迭�� �����Ϥô� ���ÿ� ���� �����ϴ� ��
		//	4���� ���� ���� �迭 aa�� �ʱ�ȭ (����({})�� �޸�(,)�� ���)

	//int aa[100], bb[100];	//�迭 aa�� bb�� �����Ѵ�.
	//int i;

	//for (i = 0; i < 100; i++)	//	�迭 aa[0], aa[1], aa[2], -, aa[99]�� 0, 2, 4, -, 198�� ���Եȴ�.
	//{
	//	aa[i] = i * 2;
	//}

	//for (i = 0; i < 100; i++)	//	�迭 bb[0]�� aa[99]�� �����ϴ� ������� ���� �������� ���Եȴ�.
	//{
	//	bb[i] = aa[99 - i];
	//}
	//printf("bb[0]sms %d, bb[99]�� %d\n", bb[0], bb[99]);
	
	int aa[] = { 10,20,30,40,50 };	//	�迭�� �����Ѵ�. ������ ������ �������� �ʴ´�.
	int count;	//	�迭 ũ�⸦ ������ �����̴�.

	count = sizeof(aa) / sizeof(int);	//	�迭 ũ�⸦ ����Ѵ�.

	printf("�迭aa[]�� ����� ������ %d�Դϴ�.\n", count);

	//�迭�� ũ�� �˾Ƴ���
	//	sizeof() �Լ� ���
	//	�迭�� ũ��(����� ����) = sizeof(�迭��ü�̸�) / sizeof(�迭�� ������ ����)
	//	int aa[4]; �迭�� ũ�� �˾Ƴ���
	//	�迭�� ũ��(����� ����) = sizeof(aa) / sizeof(int);
	//		1. aa �迭�� �޸𸮿��� �����ϴ� ũ�� (4����Ʈx5��=20����Ʈ(�� �˾Ƴ���.
	//		2. ������ �迭�� ������ ���� ũ��(4����Ʈ)�� ������.


	return 0;
}