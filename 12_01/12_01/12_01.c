#include	<stdio.h>

int main()
{
	//struct bibim	//	구조체형 bibim을 선언한다(아직 저장 공간이 없다).
	//{
	//	int a;
	//	float b;
	//	char c;
	//	char d[5];
	//};

	//struct bibim b1;	//	구조체 변수 b1을 선언한다(실제 저장 공간을 확보한다).

	//b1.a = 10;	//	구조체 변수의 메멉 변수에 값을 대입한다.
	//b1.b = 1.1f;
	//b1.c = 'A';
	//strcpy_s(b1.d, 5, "ABCD");

	//printf("b1.a ==> %d\n", b1.a);	//	구조체 변수의 맴버 변숫값을 출력한다
	//printf("b1.b ==> %f\n", b1.b);
	//printf("b1.c ==> %c\n", b1.c);
	//printf("b1.d ==> %s\n", b1.d);
	
	/*
	구조체의 문법
		맴버 변수 : 구조체 안에서 정의된 변수. 일반적인 변수와 동일한 방법으로 선언

		struct 구조체형 이름
		{
			데이터 형식 맴버변수_1;
			데이터 형식 맴버변수_2;
			데이터 형식 맴버변수_3;
			데이터 형식 맴버변수_4;
		};

		struct 구조체이름 구조체변수;

		구조체 문법 구조
			구조체형의 마지막은 반드시 ' };'로 끝나야 함.
			구조체형을 만들었으면 구조체형의 모양대로 구조체 변수를 선언함.
			구조체 변수는 '구조체 변수 이름.맴버 변수 이름' 형태로 쓰고 일반 변수처럼 사용함.

	*/




	//char name[10];
	//int kor;
	//int eng;
	//float avg;

	//printf("이름 : ");
	//scanf_s("%s", name, 9);
	//printf("국어 점수 : ");
	//scanf_s("%d", &kor);
	//printf("영어 점수 : ");
	//scanf_s("%d", &eng);

	//avg = (kor + eng) / 2.0f;

	//printf("\n");

	//printf("학생이름 ==> %s\n", name);
	//printf("국어점수 ==> %d\n", kor);
	//printf("영어점수 ==> %d\n", eng);
	//printf("평균점수 ==> %0.1f\n", avg);





	//	위 성적 프로그램을 구초체를 사용하여 변경함
	//struct student	//	student 구조체형을 선언한 후 맴버 변수를 선언한다 (학생 이름, 국어 점수, 영어 점수, 수학 점수, 평균점수).
	//{
	//	char name[10];
	//	int kor;
	//	int eng;
	//	float avg;

	//};

	//struct student s;	//	구조체 변수 s를 선언한다.
	//
	//printf("이름 : ");
	//scanf_s("%s", s.name, 9);
	//printf("국어 점수 : ");
	//scanf_s("%d", &s.kor);
	//printf("영어 점수 : ");
	//scanf_s("%d", &s.eng);

	//s.avg = (s.kor + s.eng) / 2.0f;

	//printf("\n ---------구조체 활용---------\n");
	//printf("학생이름 ==> %s\n", s.name);
	//printf("국어점수 ==> %d\n", s.kor);
	//printf("영어점수 ==> %d\n", s.eng);
	//printf("평균점수 ==> %0.1f\n", s.avg);





	//주조체 배열을 사용하지 않은 예

	/*char name[3][10];
	int kor[3];
	int eng[3];
	float avg[3];

	int i;

	strcpy_s(name[0], 9, "kim");
	kor[0] = 90;
	eng[0] = 80;
	avg[0] = (kor[0] + eng[0] / 2.0f);

	strcpy_s(name[1], 9, "lee");
	kor[1] = 70;
	eng[1] = 60;
	avg[1] = (kor[1] + eng[1] / 2.0f);
	
	strcpy_s(name[2], 9, "park");
	kor[2] = 50;
	eng[2] = 40;
	avg[2] = (kor[2] + eng[2] / 2.0f);

	for (i = 0; i < 3; i++)
	{
		printf("학생이름 ==> %s\n", name[i]);
		printf("국어점수 ==> %d\n", kor[i]);
		printf("영어점수 ==> %d\n", eng[i]);
		printf("평균점수 ==> %5.1f\n", avg[i]);
		printf("\n");
	}*/






	//
	//struct student	//	구조체형을 선언한다.
	//{
	//	char name;
	//	int kor;
	//	int eng;
	//	float avg;
	//};

	//struct student s[3];	//	구조체 배열 s[3]을 선언한다.

	//int i;

	//strcpy_s(s[0].name, 9, "kim");
	//s[0].kor = 90;
	//s[0].eng = 80;
	//s[0].avg = (s[0].kor + s[0].eng / 2.0f);

	//strcpy_s(s[1].name, 9, "lee");
	//s[1].kor = 70;
	//s[1].eng = 60;
	//s[1].avg = (s[1].kor + s[1].eng / 2.0f);

	//strcpy_s(s[2].name, 9, "park");
	//s[2].kor = 50;
	//s[2].eng = 40;
	//s[2].avg = (s[2].kor + s[2].eng / 2.0f);

	//printf("\n---구조체 배열---\n");

	//for (i = 0; i < 3; i++)
	//{
	//	printf("학생이름 ==> %s\n", s[i].name);
	//	printf("국어점수 ==> %d\n", s[i].kor);
	//	printf("영어점수 ==> %d\n", s[i].eng);
	//	printf("평균점수 ==> %5.1f\n", s[i].avg);
	//	printf("\n");
	//}

	

	//struct student
	//{
	//	char name[10];
	//	int kor;
	//	int eng;
	//	int avg;
	//};

	//struct student s;	//	구조체 변수 s를 선언한다.
	//struct student* p;	//	구조체 포인터 변수 p를 선언한다.

	//p = &s;	//	포인터 p에 5의 주소를 대입한다.

	//printf("이름 : ");
	//scanf_s("%s", p->name, 9);

	//printf("국어점수 : ");
	//scanf_s("%d", &p->kor);

	//printf("영어점수 : ");
	//scanf_s("%d", &p->eng);

	//printf("\n --------구조체 포인터 활용--------\n");
	//printf("학생이름 ==> %s\n", p->name);
	//printf("국어점수 ==> %d\n", p->kor);
	//printf("영어점수 ==> %d\n", p->eng);
	//printf("평균점수 ==> %5.1f\n", p->avg);
	////	구조체 포인터 : 구조체 포인터 변수도 구조체의 주솟값을 가진다.

	


	//union student	//	공용체 변수 이름 student를 선언한다.
	//{
	//	int tot;
	//	char grade;
	//};

	//union student u;	//	공융체 변수 u를 선언한다.

	//u.tot = 300;	//	300이 들어간 4바이트 중 첫번째 바이트에 엉뚱한 A(아스키 코드 65)가 들어감녀서 이상한 값이 출력됨.
	//u.grade = 'A';	//	공용체 변수의 맴버 변수에 값을 대입한다.

	////	공용체는 한 공간을 2개 이사으이 변수가 공유하므로 주의하여 사용

	//printf("\n-------굥용체 활용-------\n");
	//printf("총점 ==> %d\n", u.tot);
	//printf("등급 ==> %c\n", u.grade);

	/*
	공용체의 문법
	union 공용체이름
	{
		데이터 맴버수 1;
		데이터 맴버수 2;
		데이터 맴버수 3;
		데이터 맴버수 4;
	}
	union 공용체이름 공용체변수
	*/




	enum week	//	0부터 6까지 열거형이다.
	{
		sun,
		mun,
		tue,
		wed,
		thu,
		fri,
		sat
	};

	enum week ww;	//	변수 ww에 값을 선언한다.

	ww = sat;	//	변수 ww에 값을 대입한다.

	if (ww == sun)	//	ww가 sun(0)인지 여부에 따라 추력한다.
	{
		printf("오늘은 일요일 입니다.\n", ww);
	}
	else
	{
		printf("오늘은 일요일이 아닙니다.\n", ww);
	}

	/*
	열거형의 이해
		열거형은 형식
			단순히 1, 2, 3, 4, - 와 같은 숫자를 기호로 표현한 것
	요일을 열거형으로 표현
		0은 sum, 1은 mon, 2는 tue -등과 같이 의미가 좀더 명확해짐
		나열한 데이터의 값은 0에서부터 1씩 차래대로 증가함
	주의할 점
		sun,mon, - 등은 변수가 아니라 정숫값 0, 1, 2, ....를 의미
		열겨형 변수 ww에서 sun, mon, tue, wed, thu, fri, sat 중 하나만 대입 가능
	*/


}