#include "1.h"

//1. 일반적인 형태
/*
int a;
void add(int i) {
	if (i >= 10)
		return;
	i++;
	a++;
	cout << a << endl;
	add(i); // 재귀함수
}

int main() {

	add(0);
	cout << a << endl;
	return 0;
}
*/

// 2. 차이
/*

void countNum(int num) {
	if (num == 1) {
		cout << "Num : " << num << endl;
		cout << endl;
		return;
	}
	cout << "Num : " << num << endl;
	//countNum(num--); // 이렇게 하면 무한루프
	countNum(--num);
	//countNum(num-1);
	// 이런 식으로 주면 됨.
	// 아니면 num--; 하고 재귀.

}

void countNumFor(int num) {
	for (; num >= 1; num--) {
		cout << "(for) Num : " << num << endl;
	}
	cout << endl;
}

void countNumWhile(int num) {
	while (num >= 1) {
		cout << "(while)Num : " << num << endl;
		num--;
	}
	cout << endl;
}

int main() {
	countNum(5);
	countNumFor(5);
	countNumWhile(5);
	return 0;
}
*/


// 3. 팩토리얼 연산

/*
1~100까지의 합  S = 1! + 2! + 3!...+100!을 구하여 출력하는 알고리즘 제시
N!는 자연수 N으로부터

- N : 자연수 1부터 100까지를 보관하는 변수, N의 초기값을 1로 둠
- F : 자연수 N에 대한 누승(Factorial)을 보관하는 변수, 1! =1로 설정
- S : 자연수의 누승의 합을 보관하는 변수, 초기값은 1!=1로 설정
*/

unsigned long long s = 1;
unsigned long long f = 1;

// 팩토리얼 구하는 함수
int factorial(int num) {
	if (num == 1) {
		return num;
	}
	return num * factorial(num - 1);
}

//팩토리얼 합
/*
int factorialSum(int num) {
	if (num == 1) {
		return 1;
	}

	return num * factorialSum(num - 1) + factorialSum(num-1);
}
*/

void main() {
	int num;
	unsigned long long fac;
	unsigned long long sum = 1;
	cout << "몇 팩토리얼까지 입력할까요? : ";
	cin >> num;
	fac = factorial(num);
	cout << num << "!의 값은 " << fac << "입니다." << endl;

	for (int i = 2; i <= num; i++) {
		sum += factorial(i);
	}
	cout << "합은 " << sum << "입니다." << endl;
	
}

//쌤 방법 
/*
void main() {
	int N = 1;
	long long F = 1;
	long long S = 0;
	while (N < 20) {
		N++;
		F = F * N;
		S = S + F;

		cout << N << "! : " << F << endl;
	}
	cout << "1~ 20까지 팩토리얼 총 합 : " << S << endl;
}
*/
