#include "1.h"

//1. �Ϲ����� ����
/*
int a;
void add(int i) {
	if (i >= 10)
		return;
	i++;
	a++;
	cout << a << endl;
	add(i); // ����Լ�
}

int main() {

	add(0);
	cout << a << endl;
	return 0;
}
*/

// 2. ����
/*

void countNum(int num) {
	if (num == 1) {
		cout << "Num : " << num << endl;
		cout << endl;
		return;
	}
	cout << "Num : " << num << endl;
	//countNum(num--); // �̷��� �ϸ� ���ѷ���
	countNum(--num);
	//countNum(num-1);
	// �̷� ������ �ָ� ��.
	// �ƴϸ� num--; �ϰ� ���.

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


// 3. ���丮�� ����

/*
1~100������ ��  S = 1! + 2! + 3!...+100!�� ���Ͽ� ����ϴ� �˰��� ����
N!�� �ڿ��� N���κ���

- N : �ڿ��� 1���� 100������ �����ϴ� ����, N�� �ʱⰪ�� 1�� ��
- F : �ڿ��� N�� ���� ����(Factorial)�� �����ϴ� ����, 1! =1�� ����
- S : �ڿ����� ������ ���� �����ϴ� ����, �ʱⰪ�� 1!=1�� ����
*/

unsigned long long s = 1;
unsigned long long f = 1;

// ���丮�� ���ϴ� �Լ�
int factorial(int num) {
	if (num == 1) {
		return num;
	}
	return num * factorial(num - 1);
}

//���丮�� ��
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
	cout << "�� ���丮����� �Է��ұ��? : ";
	cin >> num;
	fac = factorial(num);
	cout << num << "!�� ���� " << fac << "�Դϴ�." << endl;

	for (int i = 2; i <= num; i++) {
		sum += factorial(i);
	}
	cout << "���� " << sum << "�Դϴ�." << endl;
	
}

//�� ��� 
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
	cout << "1~ 20���� ���丮�� �� �� : " << S << endl;
}
*/
