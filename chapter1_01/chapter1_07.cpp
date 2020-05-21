#include "1.h"

// 1. 함수 선언 방법
/*
int max(int a, int b) // 가인수
{
	if (a > b) return a;
	else return b;
}

void main() {
	int m, n, res;
	cout << "비교 할 두 수를 입력하세요 : ";
	cin >> m >> n;
	res = max(m, n); // 얘가 실 인수
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

	cout << "Call by value, 함수 내부" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void main() {
	int num1, num2;
	cout << "값 두 개를 입력하세요 : ";
	cin >> num1 >> num2;

	value(num1, num2);
	cout << "실제 값이 바뀌었는지 확인" << endl;
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

	//cout << "Call by value, 함수 내부(주소값)" << endl;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "============================" << endl;

	//cout << "Call by value, 함수 내부(값)" << endl;
	//cout << "a = " << *a << endl;
	//cout << "b = " << *b << endl;
	//cout << "============================" << endl;

	

	int  temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "Call by value, 함수 내부(주소값)" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "============================" << endl;

	cout << "Call by value, 함수 내부(값)" << endl;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	cout << "============================" << endl;
}

void main() {
	int num1, num2;
	cout << "값 두 개를 입력하세요 : ";
	cin >> num1 >> num2;

	cout << "main에 있는 주소 값" << endl;
	cout << "num1 : " << &num1 << endl;
	cout << "num2 : " << &num2 << endl;
	cout << "============================" << endl;

	value(&num1, &num2);

	cout << "실제 값이 바뀌었는지 확인" << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	cout << "============================" << endl;
}
*/


 // 4 전역변수?
/*
char mun, aip; // 전역변수


//실인수, 가인수 없고 return도 없는 경우.
void dae() {
	mun = mun - 32;
}

//실인수, 가인수는 없고 return값이 있는 경우.
char dae2() {
	mun = mun - 32;
	return mun;
}

void dae3(char mun) {

}


void main() {
	cout << "알파벳을 입력하세요 : ";
	cin >> mun;
	dae();
	aip = dae2();
	dae3(mun);
}
*/
