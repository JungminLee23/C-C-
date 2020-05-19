#include<iostream>

using namespace std;


// 1. switch-cas 문을 이용해서 
/*
void main() {
	int kor, eng, tot, mok;
	double avg;

	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;
	if (avg <= 100 && avg >= 0) {
		switch (mok) {
		case 10:
			cout << "A+" << endl;
			break;
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;

		
		case 5: case 4: case 3: case 2: case 1:
			cout<<"!!"<<endl;
			break;
		//다중 조건 주기
		
		default:
			cout << "F" << endl;
			break;
		}
	}
	else cout << "점수가 이상합니다." << endl;
}
*/

// 2. switch-case 2번째
/*
void main() {
	int a, b;
	char op;
	cout << "두 수를 입력하세요 : ";
	cin >> a >> b;
	cout << "연산자를 입력하세요 (+, -, *, /, %) : " << endl;
	cin >> op;

	cout << "연산 결과 : " << a << " " << op << " " << b << " = ";
	switch (op) {
	case '+':
		cout <<a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '%':
		cout << a % b << endl;
		break;
	default:
		cout << "잘못 입력하셨습니다." << endl;
	}
}
*/