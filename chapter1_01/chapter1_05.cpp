#include<iostream>

using namespace std;

// 1. 숫자 판별법
/*
void main() {
	int num;
	cout << "숫자를 입력해주세요  :  ";
	cin >> num;

	// 짝수 판별
	if (num % 2 == 0) {
		cout << num << "은(는) 짝수 입니다." << endl;
		// 10의 배수 판별
		if (num % 5 == 0) {
			cout << num << "은(는) 10의 배수 입니다." << endl;
		}
		else {
			cout << num << "은(는) 10의 배수가 아닙니다." << endl;
		}
	}
	else {
		cout << num << "은(는) 홀수 입니다." << endl << num << "은(는) 10의 배수가 아닙니다." << endl;
	}

	cout << "숫자를 입력하세요  :  ";
	cin >> num;
	if (num > 10) {
		cout << num << "은(는) 10보다 큽니다." << endl;
	}
	else cout << num << "은(는) 10보다 작습니다." << endl;
}
*/

// 2. 두 수 비교 분석
/*
void main() {
	int num1, num2;
	cout << "첫 번째 수를 입력하세요 : ";
	cin >> num1;

	cout << "두 번째 수를 입력하세요 : ";
	cin >> num2;
	
	cout << "두 수의 비교 분석  결과는 : "; 

	if (num1 >= num2) {	
		if (num1 == num2) {
			cout << num1 << "과 " << num2 << "은(는) 같은 수 입니다." << endl;
		}
		else cout << num1 << "이(가) 더 큰 수 입니다." << endl;
	}
	else  cout << num1 << "이(가) 더 작은 수 입니다." << endl;
}
*/


//3. 5의 배수가 되기 위해 필요한 숫자
/*
void main() {
	int num, a;
	cout << "숫자를 입력하세요 : ";
	cin >> num;

	if (num % 5 == 0) cout << num << "는(은) 5의 배수!" << endl;
	else {
		a = 5 - (num % 5);
		cout << num << "는(이) 5의 배수가 되기 위해서는 " << a << "가 필요!" << endl;
	}
}
*/

//4.  배수 관계 확인 + 필요한 숫자
/*
void main() {
	int num1, num2;

	cout << "분석할 숫자를 입력 : ";
	cin >> num1;
	cout << "배수 숫자를 입력 : ";
	cin >> num2;
	if (num1%num2 == 0) cout << num1 << "은(는) " << num2 << "의 배수 입니다." << endl;
	else {
		cout << num1 << "은(이) " << num2 << "의 배수가 되기 위해서는 " << num2 - (num1%num2) << "가 필요!" << endl;
		cout << "혹은 " << num1 % num2 << " 를 버리면 됩니다." << endl;
	}
}
*/

// 5.  아스키코드로 if문
/*
void main() {
	char ch;
	cout << "문자를 입력하세요 : ";
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z') { //65-90
		cout << "Upper case" << endl;
	}
	else if (ch >= 'a' && ch <= 'z') { //  97-122
		cout << "Lower case" << endl;
	}
	else cout << "No Good" << endl;
}
*/

// 6. if - else 문
/*
void main() {
	int kor, eng, tot;
	double avg;
	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	if (avg <= 100 && avg >= 0) {
		if (avg >= 90) {
			cout << "A" << endl;
		}
		else if (avg >= 80) {
			cout << "B" << endl;
		}
		else if (avg >= 70) {
			cout << "C" << endl;
		}
		else if (avg >= 60) {
			cout << "D" << endl;
		}
		else if (avg < 60) {
			cout << "F" << endl;
		}
	}
	else {
		cout << "what?" << endl;
	}
}
*/
