#include	<stdio.h>
#include	<string.h>	//	strcpy() �Լ��� ���ڿ� ���� (���� ���� �Լ� ���� #include <string.h> (�ش�����) ����
						//	strlen(), strcmp(), strcat() ==> ���ڿ� ���� �Լ�

int main(void)
{
	/*
	char str1[10];	//	������ �迭 str1�� str2�� �����Ѵ�.
	char str2[10];
	char str3[10] = "CookBook";	//	������ �迭 str3�� �����԰� ���ÿ� ���ڿ��� �����ϳ���.

	strcpy_s(str1, 10, "Basic=C");
	//	strcpy(str1, "Basic-C"); ���� �ַ�� Ž���� / ���� / �Ӽ� / ���콺 ������ �ۼ����� SDL�˻� ���� �ƴϿ��
	//	�Ǵ� strcpy_s(str1, 10, "Basic-c");	str1�� ������ũ�� 10�� �ִ´�
	strcpy_s(str2, 10, str3);	//	str3�� ���� str2�� �����Ѵ�.

	printf("str1 == > %s\n", str1);	//	������ �迭 str1, str2 str3�� ����Ѵ�.
	printf("str2 == > %s\n", str2);
	printf("str3 == > %s\n", str3);
	*/
	
	char str[10] = "0123456789";	//	�� �ڸ��� str �迭�� ���� 10���� �����Ѵ� (�ι��ڰ� ����).
	printf("str ==> %s\n", str);	//	str�� ������ ����Ѵ�.

	str[0] = 'I';	//	str �迭�� ���� 6���� �� ���ڸ� �Է��Ѵ�.,""���ڿ�, ''�� �ѱ��ڸ� �ִ´�.
	str[1] = 'T';
	str[2] = 'C';
	str[3] = 'o';
	str[4] = 'o';
	str[5] = 'k';
	str[6] = '\0';

	printf("str ==> %s\n", str);	//	str�� ������ ����Ѵ�. (�������)
	printf("str[7] ==> %c\n", str[7]);	//	str[7]�� �� ����(�����Ⱚ:�ι��� ������ ���̱� ����)�� ����Ѵ�.
	printf("str[50] ==> %c\n", str[50]);	//	str[50]�� �� ���� (�̻��� ��)�� ����Ѵ�.

	return 0;
}