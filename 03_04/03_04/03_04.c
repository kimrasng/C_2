#include	<stdio.h>
#include	<string.h>	//	strcpy() 함수로 문자열 대입 (문자 관련 함수 사용시 #include <string.h> (해더파일) 사입
						//	strlen(), strcmp(), strcat() ==> 문자열 관련 함수

int main(void)
{
	/*
	char str1[10];	//	문자형 배열 str1과 str2를 선언한다.
	char str2[10];
	char str3[10] = "CookBook";	//	문자형 배열 str3을 선언함과 동시에 문자열을 대입하나다.

	strcpy_s(str1, 10, "Basic=C");
	//	strcpy(str1, "Basic-C"); 사용시 솔루션 탐색기 / 파일 / 속성 / 마우스 오른쪽 송성에서 SDL검사 예를 아니요로
	//	또는 strcpy_s(str1, 10, "Basic-c");	str1의 데이터크기 10을 넣는다
	strcpy_s(str2, 10, str3);	//	str3의 값을 str2에 복사한다.

	printf("str1 == > %s\n", str1);	//	문자형 배열 str1, str2 str3을 출력한다.
	printf("str2 == > %s\n", str2);
	printf("str3 == > %s\n", str3);
	*/
	
	char str[10] = "0123456789";	//	열 자리의 str 배열에 글자 10개를 대입한다 (널문자가 없음).
	printf("str ==> %s\n", str);	//	str의 내용을 출력한다.

	str[0] = 'I';	//	str 배열에 글자 6개와 널 문자를 입력한다.,""문자열, ''는 한글자를 넣는다.
	str[1] = 'T';
	str[2] = 'C';
	str[3] = 'o';
	str[4] = 'o';
	str[5] = 'k';
	str[6] = '\0';

	printf("str ==> %s\n", str);	//	str의 내용을 출력한다. (정상출력)
	printf("str[7] ==> %c\n", str[7]);	//	str[7]의 한 글자(쓰레기값:널문자 이후의 값이기 때문)를 출력한다.
	printf("str[50] ==> %c\n", str[50]);	//	str[50]의 한 글자 (이상한 값)를 출력한다.

	return 0;
}