#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void showStar(int a);
//
//int main() {
//	int star = 0;
//	printf("�� ���� �Է� : ");
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
//	printf("�ҹ��� : %c\t�빮�� %c\n", data, uData);
//	printf("�ҹ��� : %c\t�빮�� %c\n", rData, ruData);
//
//}
//
//char inputLower() {
//	char c;
//	while (1) {
//		printf("�ҹ��� �Է� : ");
//		scanf_s("%c", &c);
//		while (getchar() != '\n');
//		if (c >= 'a' && c <= 'z') {
//			break;
//		}
//		else
//			puts("���ĺ� �ҹ��ڸ� �Է��Ͻÿ�");
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
		������
		 ������ �� ����
		 �����͸� ��°� �ƴ� �޸��� �ּҰ��� �����ϴ� ����
		  > ��� or ������ �ּҰ��� ����

		������ ���� ����

			�ڷ��� * �����ͺ����̸�

		 ������ ���� ����/�ʱ�ȭ �Ŀ� *(������ ������, &�� �ݴ�)�� ����ϸ�
		 ������ ������ ����ִ� �ּҰ��� ����Ű�� ������ ���
		 ������ ������ �ڷ����� �ּҰ��� ����Ű�� ������ ����ִ� �����Ϳ� ������ �ڷ���
	*/

	//int a = 7;
	//printf("a �� : %d\n", a);
	//printf("a �ּ� : %p\n", a);
	//puts("");

	//int* pa = &a;	// int�� �����ͺ��� pa ���� �� �ʱ�ȭ
	//printf("pa �� : %p\n*pa �� : %d\n", pa, *pa);

	//double b = 1.2;
	//double* pb = &b;
	//printf("b�� �� : %.1f %.1f\n", b, *pb);
	//printf("b�� �ּ� : %p %p\n", &b, pb);

	//char c = 'a';
	//char* pc = &c;
	//printf("c�� �� : %c %c\n", c, *pc);
	//printf("c�� �ּ� :%p %p\n", &c, pc);

	//int d;
	//int* pd = &d;
	//printf ("���� �Է� : ");
	//scanf_s("%d", pd);
	//printf("�Է��� ���� : %d\n", d);

	// �߸��� ��� ����
	//int e = 0;
	//int* pe = &e;
	//printf("���� �Է� : ");
	//scanf_s("%d", &pe);		// pe ���� ���� e�� �ּҿ��� �Էµ� ������ ����
	//printf("e�� �� : %d\n", e);
	////printf("e�� �� : %p\n", pe);		// error code : pe�� �ִ� ���� e�� �ּҰ��� �ƴϴ�
	//printf("e�� �ּ� : %p\n", &e);
	//printf("e�� �ּ� : %p\n", pe);

	/*
		������ ���� ũ��
		 ������ ������ ũ��� �ڷ����� ������� ����
			32bit : 4byte	(��, visual studio������ �⺻�� 4byte)
			65bit : 8byte
	*/

	//int sa;
	//int* psa = &sa;
	//printf("sa ũ�� %d byte\n", sizeof(sa));
	//printf("psa ũ�� %d byte\n", sizeof(psa));
	//puts("");

	//double sb;
	//double* psb = &sb;
	//printf("sb ũ�� %d byte\n", sizeof(sb));
	//printf("psb ũ�� %d byte\n", sizeof(psb));
	//puts("");

	//char sc;
	//char* psc = &sc;
	//printf("sc ũ�� %d byte\n", sizeof(sc));
	//printf("psc ũ�� %d byte\n", sizeof(psc));

	/*
		������ ����
		 �ּҰ� ����Ű�� ������ �ڷ��� ũ�� ������ �������� ó��
		 (�迭�� �ִ� �����͸� �ּҰ����� ã�ư� �� ���)
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
		�迭�� ������
		 �迭�� �ڷ����� ���� �迭 �� ĭ�� ũ�Ⱑ �޶�����
		 �迭�� �ּҸ� ������ ������ �־ + index�� �Ͽ� �ش� index�� ���� �ּҸ� �� �� �ִ�
	*/

	//int ar[3] = { 1,2,3 };
	//int* p = ar;	// �迭�� �ּҴ� & ��ȣ�� �Ⱥ��δ�(�迭 �̸����� �迭�� ���� �ּ� ��� ����)
	//				// -> �迭 �̸��� ������ ������ �̸��� �����ϰ� ���

	//for (int i = 0; i < 3; i++)
	//	printf("ar[%d] : %d %d %d %d\n", i, ar[i], p[i], *(ar + 1), *(p + i));
	//			  // p + 0 = ar[0], p + 1 = ar[1], p + 2 = ar[2], > ������ �ּ�
	//puts("");
	//printf("p : %d\n", *p);
	//p += 1;
	//// ar += 1;		// error code : �޸� ������ �迭 ��ü�� �����̸� �ȵȴ�
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