#include	<stdio.h>

int main(void)
{
	/*int a, b, c, d;
	int hap;

	printf("1번쨰 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("2번쨰 숫자를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("3번쨰 숫자를 입력하세요 : ");
	scanf_s("%d", &c);
	printf("4번쨰 숫자를 입력하세요 : ");
	scanf_s("%d", &d);
	
	hap = a + b + c + d;

	printf("계 ==> %d\n", hap);*/

	/*int aa[4];
	int hap;

	printf("1번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[0]);
	printf("2번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[1]);
	printf("3번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[2]);
	printf("4번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[3]);

	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("합계 ==> %d\n", hpa);*/

		//배열을 사용하는 이유
		//	배열의 개념
		//		여러 개의 변수를 한 줄로 붙여넣은 것
		//		상자(변수)를 한 줄로 붙인후 상자 전체의 이름(ex.aa) 지정
		//		각각의 상자는 aa[0], aa[1], _와 같이 번호(첨자)를 붙임
		//	배열의 선언 방법
		//		데이터형식 배열_이름[개수]
		//			예) 변수 4개를 담은 정수형 배열 선언
		//				int aa[4]

	//int aa[4];	//	배열과 합계 변수, 첨자를 선언한다.
	//int hap = 0;
	//int i;

	//for (i = 0; i <= 3; i++)	//	배열 aa[0]~[3]에 숫자 4개를 입력받는다.
	//{
	//	printf("%d번째 숫자를 입력하세요 : ", i + 1);
	//	scanf_s("%d", &aa[i]);
	//}
	//
	//for (i = 0; i <= 3; i++)	//	for 문을 이용하여 숫자 갯수에 맞춘 자동 덧셈으로 수정함
	//{
	//	hap += aa[i];
	//}

	//printf("합계 ==> %d\n", hap);

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

	 //배열의 초기화
		// 배열을 정의하ㅓ는 동시에 값을 대입하는 것
		//	4개의 값을 담은 배열 aa의 초기화 (블록({})과 콤마(,)를 사용)

	//int aa[100], bb[100];	//배열 aa와 bb를 선언한다.
	//int i;

	//for (i = 0; i < 100; i++)	//	배열 aa[0], aa[1], aa[2], -, aa[99]에 0, 2, 4, -, 198이 대입된다.
	//{
	//	aa[i] = i * 2;
	//}

	//for (i = 0; i < 100; i++)	//	배열 bb[0]에 aa[99]를 대입하는 방식으로 값이 역순으로 대입된다.
	//{
	//	bb[i] = aa[99 - i];
	//}
	//printf("bb[0]sms %d, bb[99]는 %d\n", bb[0], bb[99]);
	
	int aa[] = { 10,20,30,40,50 };	//	배열을 선언한다. 변수의 개수를 지정하지 않는다.
	int count;	//	배열 크기를 저장할 변수이다.

	count = sizeof(aa) / sizeof(int);	//	배열 크기를 계산한다.

	printf("배열aa[]의 요소의 개수는 %d입니다.\n", count);

	//배열의 크기 알아내기
	//	sizeof() 함수 사용
	//	배열의 크기(요소의 개수) = sizeof(배열전체이름) / sizeof(배열의 데이터 형식)
	//	int aa[4]; 배열의 크기 알아내기
	//	배열의 크기(요소의 개수) = sizeof(aa) / sizeof(int);
	//		1. aa 배열이 메모리에서 차지하는 크기 (4바이트x5개=20바이트(를 알아낸다.
	//		2. 선언한 배열의 데이터 형식 크기(4바이트)로 나눈다.


	return 0;
}