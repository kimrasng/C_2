//#include	<stdio.h>
//int plus(int v1, int v2)	//	pius() ==> 사용자정의 함수
//{
//	int result;
//	result = v1 + v2;	//	받은 두 매개변수의 합을 구한다 (2. 함수실행)
//	return result;	//	함수를 호출한 곳에 result 값을 변환한다. (3. 함수반환)
//}
//
//int main()
//{
//	int hap;
//
//	hap = pluse(100, 200);	//	매개변수 2ㅐㄱ를 지정하여 plus() 함수를 호출하고(1. 함수호출)
//	//	반환값은 hap에 저장한다. (4. 함수대입)
//	printf("100과 200의 pluse()함수 결과는 : %d\n", hap);
//
//	//	1. 합 호출 ==> 2. 함수 실행 ==> 3. 결과 변환 ==> 4. 반환값 대입
//	
//}

//#include	<stdio.h>
//
//int calc(int v1, int v2, int op)	//	매개변수 3개를 받아서 계산하는 함수이다.
//{
//	int result;
//
//	switch (op)	//	매개 변수값에 따라 1 덧셈 2 뺄셈 3곱셈 4 나늣셈을 실행한다.
//		//	%주의 casel(x)	case1(0) : case 와 1사이를 띄울것
//	{
//	case 1:
//		result = v1 + v2;
//		break;
//	case 2:
//		result = v1 - v2;
//		break;
//	case 3:
//		result = v1 * v2;
//		break;
//	case 4:
//		result = v1 / v2;
//		break;
//
//		return result;	//	계산결과를 반복한다.
//	}
//}
//
//int main()
//{
//	int res;	//	계산 결과, 연산자, 입력 숫자에 대한 변수이다.
//	int oper, a, b;
//
//	printf("계산입력(1: +, 2: -, 3: *, 4: /):");	//	연산자를 입력한다.
//	scanf_s("%d", &oper);
//
//	printf("계산할 두수를 입력 :");	//	계산할 두 숫자를 입력한다.
//	scanf_s("%d %d", a, b);
//
//	res = calc(a, b, oper);	//	매개변수 3개를 넣고 calc()함수를 호출한다. 계산결과는 res에 저장한다.
//
//	printf("계산 결과는 : %d\n", res);
//#include	<stdio.h>
//int a = 100;	//	전역 변수 선언하고 초깃값을 대입한다.
//
//void func1()
//{
//	int a = 200;	//	지역변수 a를 선언하고 초깃값을 대입한다.
//
//	printf("func1()에서 a의 값 ==> %d\n", a);	//	지역변수를 출력한다.
//}
//
//int main()
//{
//	func1();	//	함수를 호출한다.
//	printf("main()에서 a의 값 ==> %d\n", a);	//	전역변수를 출력한다.
//}
//
////	지역변수와 전역변수의 이해
//	//	지역변수: 한정된 지역(local)에서만 사용되는 변수
//	//	전역변수: 프로그램 천체(global)에서 사용되는 변수

//#include	<stdio.h>
//
//void func1()
//{
//	printf("void형 함수는 돌려 줄게 없음. \n");	//	voud형 함수이므로 반환값이 없다.
//}
//
//int func2()	//	int 형 함수이므로 반환값(정수)이 있다.
//{
//	return 100;
//}
//
//int main()
//{
//	int a;
//
//	func1();	//	void 형 함수를 호출한다.
//	
//	a = func2();	//	int 형 함수를 호출 한다.
//	printf("int형 함수에서 돌려준 값 ==> %d\n", a);
//}
//
////	반환값이 없는 함수
//	//	함수를 실행한 결과로 돌려줄 것이 없는 경우
//	//	함수의 데이터형을 void로 표시 : void형 함수를 호출할 때는 함수 이름만 쓴다

//#include	<stdio.h>
//
//void func1(int a)
//{
//	a = a + 1;	//	전달받은 a 값을 1 증가시킨 후 출력한다.
//	printf("전달받은 a ==> %d\n", a);
//}
//
//int main()
//{
//	int a = 10;	//	변수 a를 선언한다.
//	
//	funcl(a);	//	a 값을 매개변수로 넘겨 함수를 호출한다
//	printf("func1()실행후 a==>%d\n", a);	//	함수를 호출한 후 a 값을 출력한다.
//}


//#include	<stdio.h>
//
//void func1(int* a)	//	매개변수로 주솟값(포인터)을 받는다.
//{
//	*a = *a + 1;	//	a가 가리키는 곳의 실제 값 +1을 수행한다.
//	printf("전달받은 a ==> %d\n", *a);	//	a가 가리키는 곳의 실제 값을 출력한다.
//}
//
//int main()
//{
//	int a = 10;	//	a를 10으로 초기화한다.
//
//	funcl(&a);	//	함수를 호출할 때 a의 주소를 전달한다.
//	printf("func1()실행후 a==>%d\n", a);	//	함수를 호출한 후 a값을 출력한다.
//}
//
////	매개변수 전달 방법
//	//	값으로 전달(call by value)
//	//	숫자나 문자 등의 값 자체를 함수에 넘겨주는 방법
//	//	원래 값을 전달한 곳에는 아무런 영향을 미치지 않음
////	주소(또는 참조)의  전달(call by address)
//	//	주소값(address)을 변수에 넘겨주는 방법
//	//	원래 값을 전달한 곳에영향을 미침

#include	<stdio.h>

void func1(char a, char b)	//	매개변수가 값인 함수이다
{
	int imsi;
	imsi = a;	//	두 문자를 교환한다.(main 함수에는 변함이 없음)
	a = b;
	b = imsi;
}

void func2(char *a, char *b)	//	매개변수가 주소인 함수이다.
{
	int imsi;
	imsi = *a;	//	두 문자의 실제값을 교환한다.(main 함수에서는 바뀜)
	*a = *b;
	*b = imsi;
}

int main()
{
	char x = 'A', y = 'Z';	//	원래 문자를 출력한다.

	printf("원래 값 : x = %c y = %c\n", x, y);
	func1(x, y);	//	값을 전달해서 func1() 함수를 호출한다.
	printf("값을 전달한 후 : x = %c, y = %c\n", x, y);

	func2(&x, &y);	//	ㄱ주소를 전달해서 func2() 함수호출한다.
	printf("주소를 전달 후 : X = %C, y = %c\n", x, y);
}