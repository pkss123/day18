#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void showStar(int a);
//
//int main() {
//	int star = 0;
//	printf("별 개수 입력 : ");
//	scanf_s("%d", &star);
//	while (getchar() != '\n');
//
//	showStar(star);
//}
//
//void showStar(int a) {
//	for (int i = 0; i < a; i++)
//		putchar('*');
//	puts("");
//}

//char inputLower();
//char randLower();
//char upperCase(char data);
//
//
//int main() {
//	char data, rData, uData, ruData;
//	data = inputLower();
//	rData = randLower();
//	uData = upperCase(data);
//	ruData = upperCase(rData);
//	printf("소문자 : %c\t대문자 %c\n", data, uData);
//	printf("소문자 : %c\t대문자 %c\n", rData, ruData);
//
//}
//
//char inputLower() {
//	char c;
//	while (1) {
//		printf("소문자 입력 : ");
//		scanf_s("%c", &c);
//		while (getchar() != '\n');
//		if (c >= 'a' && c <= 'z') {
//			break;
//		}
//		else
//			puts("알파벳 소문자만 입력하시오");
//	
//	}
//	return c;
//}
//
//char randLower() {
//	srand(time(NULL));
//	char a = rand() % 26 + 97;
//	
//	return a;
//}
//
//char upperCase(data) {
//		if (data >= 'a' && data <='z') {
//			data -= 32;
//		}
//		return data;
//}


int main() {

	/*
		포인터
		 변수의 한 종류
		 데이터를 담는게 아닌 메모리의 주소값을 저장하는 변수
		  > 상수 or 변수의 주소값을 저장

		포인터 변수 선언

			자료형 * 포인터변수이름

		 포인터 변수 선언/초기화 후에 *(역참조 연산자, &의 반대)를 사용하면
		 포인터 변수가 담고있는 주소값이 가리키는 공간을 사용
		 포인터 변수의 자료형은 주소값이 가리키는 변수에 들어있는 데이터와 동일한 자료형
	*/

	//int a = 7;
	//printf("a 값 : %d\n", a);
	//printf("a 주소 : %p\n", a);
	//puts("");

	//int* pa = &a;	// int형 포인터변수 pa 선언 및 초기화
	//printf("pa 값 : %p\n*pa 값 : %d\n", pa, *pa);

	//double b = 1.2;
	//double* pb = &b;
	//printf("b의 값 : %.1f %.1f\n", b, *pb);
	//printf("b의 주소 : %p %p\n", &b, pb);

	//char c = 'a';
	//char* pc = &c;
	//printf("c의 값 : %c %c\n", c, *pc);
	//printf("c의 주소 :%p %p\n", &c, pc);

	//int d;
	//int* pd = &d;
	//printf ("숫자 입력 : ");
	//scanf_s("%d", pd);
	//printf("입력한 숫자 : %d\n", d);

	// 잘못된 사용 예시
	//int e = 0;
	//int* pe = &e;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &pe);		// pe 내부 값이 e의 주소에서 입력된 값으로 변경
	//printf("e의 값 : %d\n", e);
	////printf("e의 값 : %p\n", pe);		// error code : pe에 있는 값이 e의 주소값이 아니다
	//printf("e의 주소 : %p\n", &e);
	//printf("e의 주소 : %p\n", pe);

	/*
		포인터 변수 크기
		 포인터 변수의 크기는 자료형과 관계없이 동일
			32bit : 4byte	(단, visual studio에서는 기본이 4byte)
			65bit : 8byte
	*/

	//int sa;
	//int* psa = &sa;
	//printf("sa 크기 %d byte\n", sizeof(sa));
	//printf("psa 크기 %d byte\n", sizeof(psa));
	//puts("");

	//double sb;
	//double* psb = &sb;
	//printf("sb 크기 %d byte\n", sizeof(sb));
	//printf("psb 크기 %d byte\n", sizeof(psb));
	//puts("");

	//char sc;
	//char* psc = &sc;
	//printf("sc 크기 %d byte\n", sizeof(sc));
	//printf("psc 크기 %d byte\n", sizeof(psc));

	/*
		포인터 연산
		 주소가 가리키는 변수의 자료형 크기 단위를 기준으로 처리
		 (배열에 있는 데이터를 주소값으로 찾아갈 때 사용)
	*/

	//int a;
	//int* pa = &a;
	//printf("pa\t: %p\n", pa);
	//printf("pa + 1\t: %p\n", pa + 1);
	//printf("pa + 2\t: %p\n", pa + 2);
	//puts("");

	//double b;
	//double* pb = &b;
	//printf("pb\t: %p\n", pb);
	//printf("pb + 1\t: %p\n", pb + 1);
	//printf("pb + 2\t: %p\n", pb + 2);

	/*
		배열과 포인터
		 배열의 자료형에 따라서 배열 한 칸의 크기가 달라진다
		 배열의 주소를 포인터 변수에 넣어서 + index를 하여 해당 index의 시작 주소를 알 수 있다
	*/

	//int ar[3] = { 1,2,3 };
	//int* p = ar;	// 배열의 주소는 & 기호를 안붙인다(배열 이름으로 배열의 시작 주소 출력 가능)
	//				// -> 배열 이름과 포인터 변수의 이름을 동일하게 취급

	//for (int i = 0; i < 3; i++)
	//	printf("ar[%d] : %d %d %d %d\n", i, ar[i], p[i], *(ar + 1), *(p + i));
	//			  // p + 0 = ar[0], p + 1 = ar[1], p + 2 = ar[2], > 각각의 주소
	//puts("");
	//printf("p : %d\n", *p);
	//p += 1;
	//// ar += 1;		// error code : 메모리 내부의 배열 자체가 움직이면 안된다
	//printf("p : %d\n", *p);
	//p -= 1;
	//printf("p : %d\n", *p);
	//p ++;
	//printf("p : %d\n", *p);
	//p --;
	//printf("p : %d\n", *p);

	//	  ar   [0]   [1]   [2]			p
	//		 |	1  |  2  |  3  |		| F0 |
	//		F0	  F4	F8
	//
	//		p			( F0 )	== ar			( F0 )
	//		p + 1		( F0 )	== ar + 1		( F4 )
	//		*(p + 1)	( 2 )	== *(ar + 1)	( 2 )
	//		p[1]		( 2 )	== ar[1]		( 2 )
}