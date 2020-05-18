// chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>// C++의 기본 입출력 -> stdio.h도 포함되어 있는 듯
#include <stdio.h>  //  C 기본 입출력    -> iostream을 쓰면 안써도 됨.
#include<string.h>

/*
 1. 기본 출력
void main() {
	char M, N;
	M = 'B';
	N = 'e';
	printf("%d\n", M); // 이렇게 하면 아스키코드 값으로 나옴.
	printf("%c\n", N); // e로 잘 나옴.
}
*/
//=======================================================

/*
// 2. 아스키코드?
//void main() {
//	char H, S;
//	H = 65;
//	S = 97;
//	printf("%d\n", H); // 65나옴
//	printf("%c\n", S); // a 나옴
//	H = 'z';
//	S = 'Z';
//	printf("%d\n", H); // 122나옴
//	printf("%d\n", S); // 90 나옴
//}
*/
//=======================================================


/*
 3. float 출력
void main() {
	float S, W;
	S = 32.4;
	W = 213345235.5;
	printf("%f\n%f\n", S, W);
}
*/
//=======================================================


/*
 4. float and 소수점 자리 제한
void main() {
	float circum, area;
	const float PI = 3.141592; // 변동 없는 값 : const
	float radius = 25;
	area = PI * radius*radius;
	circum = 2 * PI*radius;
	printf("Area of circle is %10.2f\n", area);
	printf("Circum of circle is %10.5f\n", circum);
}
*/
//=======================================================


/*
 5. 출력형태
void main() {
	int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d %d\n", i, i + j);
	printf("%f\n",k);
	printf("%c %d\n",ch, ch);
}
*/
//=======================================================


/*
 6. ??
void main() {
	char k, b, s;
	k = 'k';
	b = 66;
	s = 's';
	printf("%c, %c, %c\n", k, b, s);
	printf("%d, %d, %d\n", k, b, s);
}
*/
//=======================================================


/*
void main() {
	printf("%15f\n", 3.141592);
	printf("%-15f\n", 3.141592);
	printf("%15.3f\n", 3.141592);
}
*/
//=======================================================

/*
 7. 출력 형태
void main() {
	char ch = 'A';
	printf("character = %c, ASCII = %d\n\n", ch, ch);

	printf("%12d\n", 123456789);
	printf("%-3d%-3d%-3d\n", 12,34,56);
	printf("%3d%3d\n", 12, 34);
	printf("%03d%3d\n", 3, 160);
	printf("the  " "end  \n");
}
*/
//=======================================================

/*
 8. scanf 기본
void main() {
	// int java = 100; ----------> A 경우 : 일반변수 / 값이 할당될 때 마다 메모리 주소가 바뀜.
	//const int java ----------->  B 경우 : const 반드시 초기화를 시켜줘야함. 그리고 이 값이 메모리에 아예 고정이 되어있음.
	int java, c, tot;
	printf("JAVA : ");
	scanf_s("%d", &java); // --->  C경우 : &접근은 메모리에 직접 접근.(주소 접근)
	printf("JAVA 점수는 %d입니다.\n", java);
	printf("C : ");
	scanf_s("%d", &c);
	printf("C 점수는 %d입니다.\n", c);

	tot = java + c;
	printf("총점은 %d입니다.", tot);
}
*/
//=======================================================


/*
 9. 예제
void main() {
	int x, y;
	char name[20];
	
	printf("사각형의 가로, 세로 길이를 입력하세요.");
	scanf_s("%d %d", &x, &y);
	printf("사각형의 넓이 : %d \n", x*y);

	printf("==================================\n");

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name)); // scanf_s는 배열명 뒤에 sizeof(name)으로 sizeof를 줘야 함.
	
	printf("%s", name);	
}
*/

//=======================================================

/*
 10. 정삼각형 넓이 구하기
void main() {
	float x, y;
	float nul;
	printf("밑변을 입력 하시오 : ");
	scanf_s("%f", &x);
	printf("높이를 입력하시오 : ");
	scanf_s("%f", &y);

	nul = x * y / 2;
	printf("삼각형의 넓이는 %0.2f 입니다.",nul);

}
*/
//=======================================================

// 11. 정삼각형 넓이 구하기
/*
void main() {
	float x;
	float size, dul;
	printf("한 변의 길이를 입력하시오 : ");
	scanf_s("%f", &x);

	size = sqrt(3) / 4 * pow(x, 2); // 정삼각형 넓이 공식
	// sqrt --> 제곱근을 구하는 것 ||| ex> sqrt(9) => 3
	// pow --> 제곱식. || pow(10, 3) --> 10의 3승
	dul = 3 * x;

	printf("넓이 : %0.3f, 둘레 : %0.2f", size, dul);
}
*/
