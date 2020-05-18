#include<iostream>

using namespace std;

// 1. 삼항 연산자
/*
void main() {
	int a, b;
	cout << "첫 번째 숫자를 입력하시오 : ";
	cin >> a;
	cout << "두 번째 숫자를 입력하시오 : ";
	cin >> b;

	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "이(가) 더 크다. " << endl : cout << b << "이(가) 더 크다" << endl;
	// 조건 ? true : false;

}
*/

// 2. 삼항 연산자 이용해서 MAX, MIN 값 구하기
/*
int main() {
	int i, j, k, MAX, MIN;
	cout << "숫자 3개를 입력하세요 : ";
	cin >> i >> j >> k; // 3개의 입력을 한꺼번에

	//삼항 연산자를 이용해서 MAX와 MIN값을 구하기 -- 내 방법
	i > (j > k ? MAX = j : MAX = k) ? MAX = i : MAX;
	cout << "MAX = " << MAX << endl;

	i > (j > k ? MIN = k : MIN = j) ? MIN : MIN = i;
	cout << "MIN = " << MIN << endl;

	cout << endl << endl;

	// 쌤 방법
	MAX = (i > j) ? (i > k ? i : k) : (j > k ? j : k);
	MIN = (i < j) ? (i < k ? i : k) : (j < k ? j : k);
	cout << "MAX = " << MAX << endl;
	cout << "MIN = " << MIN << endl;
}
*/

// 3. 잔돈?
void main() {
	int n, n1, n2, n3, n4, n5, n6;
	cout << "다섯자리 수를 입력하세요 : ";
	cin >> n;
	cout << n << "은" << endl;

	// for 문을 이용하여 하는 방법이 있음.

	n1 = n / 10000;
	n = n % 10000;
	
	n2 = n / 5000;
	n = n % 5000;

	n3 = n / 1000;
	n = n % 1000;

	n4 = n / 500;
	n = n % 500;

	n5 = n / 100;
	n = n % 100;

	n6 = n / 10;
	n = n % 10;


	cout << "만원짜리 : " << n1 << "개" << endl;
	cout << "오천원짜리 : " << n2 << "개" << endl;
	cout << "천원짜리 : " << n3 << "개" << endl;
	cout << "오백원짜리 : " << n4 << "개" << endl;
	cout << "백원짜리 : " << n5 << "개" << endl;
	cout << "십원짜리 : " << n6 << "개" << endl;
	cout << "나머지 잔돈 : " << n << "원" << endl;
}