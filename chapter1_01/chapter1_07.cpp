#include "1.h"

// 1. �Լ� ���� ���
/*
int max(int a, int b) // ���μ�
{
	if (a > b) return a;
	else return b;
}

void main() {
	int m, n, res;
	cout << "�� �� �� ���� �Է��ϼ��� : ";
	cin >> m >> n;
	res = max(m, n); // �갡 �� �μ�
	cout << "MAX : " << res;
}
*/

// 2. Call by Value
/*
void value(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "Call by value, �Լ� ����" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void main() {
	int num1, num2;
	cout << "�� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2;

	value(num1, num2);
	cout << "���� ���� �ٲ������ Ȯ��" << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
}
*/

// 3. Call by reference
/*
void value(int * a, int * b) {
	//int * temp;
	//temp = a;

	//cout << "a : " << a << endl;
	//cout << "b : " << b << endl;
	//cout << "temp : " << temp << endl;
	//cout << "============================" << endl;
	//a = b;
	//b = temp;

	//cout << "Call by value, �Լ� ����(�ּҰ�)" << endl;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "============================" << endl;

	//cout << "Call by value, �Լ� ����(��)" << endl;
	//cout << "a = " << *a << endl;
	//cout << "b = " << *b << endl;
	//cout << "============================" << endl;

	

	int  temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "Call by value, �Լ� ����(�ּҰ�)" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "============================" << endl;

	cout << "Call by value, �Լ� ����(��)" << endl;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	cout << "============================" << endl;
}

void main() {
	int num1, num2;
	cout << "�� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2;

	cout << "main�� �ִ� �ּ� ��" << endl;
	cout << "num1 : " << &num1 << endl;
	cout << "num2 : " << &num2 << endl;
	cout << "============================" << endl;

	value(&num1, &num2);

	cout << "���� ���� �ٲ������ Ȯ��" << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	cout << "============================" << endl;
}
*/


 // 4 ��������?
/*
char mun, aip; // ��������


//���μ�, ���μ� ���� return�� ���� ���.
void dae() {
	mun = mun - 32;
}

//���μ�, ���μ��� ���� return���� �ִ� ���.
char dae2() {
	mun = mun - 32;
	return mun;
}

void dae3(char mun) {

}


void main() {
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> mun;
	dae();
	aip = dae2();
	dae3(mun);
}
*/
