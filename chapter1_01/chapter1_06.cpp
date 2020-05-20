#include<iostream>
#include<iomanip>

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

// 3. 윤년 평년 구하기
// 윤년은 4로 나누어 떨어지고 // 100으로 나눠 떨어지지 않거나 400으로 나눠 떨어지면 윤년
// 아니면 평년

/*
void main() {
	int year;

	cout << "연도 수를 입력하세요 : ";
	cin >> year;
	if (year % 4==0 && (year %100 != 0 || year % 400 == 0)) {
		cout << year << "은(는) 윤년입니다." << endl;
	}
	else cout << year << "은(는) 윤년이 아닙니다." << endl;
}
*/

// 4. while문 예제
/*
void main() {
	int han;
	han = 1;
	while (han < 5) {
		cout << "Good" << endl;
		han++;
	}
}
*/

// 5. 1~100까지의 합
/*
void main() {
	int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}

	//이렇게 해도 됨.
	//while (i < 100) {
	//	i = i + 1;
	//	sum = sum + i;
	//}

	cout << "while을 이용한 합은 : " << sum << endl;

	i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i <= 100);
	cout << "do-while을 이용한 합 : " << sum;
}
*/

// 6. for문
/*
void main() {
	int i, sum = 0;

	for (i = 0; i <= 100; i++) {
		sum += i;
	}
	cout << "for문을 이용한 합 : " << sum;
}
*/

// 7. 이중 for문 예제
/*
void main() {
	int a, b;
	cout << "다중 for문" << endl;
	for (a = 1; a <= 2; a++) {
		for (b = 1; b <= 3; b++) {
			cout << "a = " << a << setw(5) << "b = " << b << endl;
		}
	}
	cout << "끝!" << endl;
}
*/

// 8. C++로 구구단. 4줄로(or 3줄)
/*
void main() {
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}
*/

//9. 단 수를 입력하고 구구단 출력(4줄)
/*
void main() {
	int dan;
	cout << "단 수를 입력하세요 : ";
	cin >> dan;
	for (int i = 1; i <= 9; i++) {
		cout << dan << " * " << i << " = " << dan * i<< endl;
	}
}
*/

// 10. 문자 하나 받음 ---> 무한 반복으로
/*
void main() {
	char mun;
	while (1) {
		cout << "문자를 입력하세요 : ";
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z') {
			cout << "정상 입력 입니다." << endl;
			break;
		}
		else {
			cout << "잘못 입력하셨습니다. 대문자를 입력하세요" << endl;
		}
	}
}
*/

// 11. EOF란
/*
void main() {
	int n;
	while (1) {
		cout << "숫자를 입력하세요 : ";
		cin >> n;
		if (n == EOF) // EOF => -1 정상종료
		{
			cout << "종료됩니다." << endl;
			break;
		}
		else continue;
	}
}
*/

// 12. 가로로 구구단 출력
/*
void main() {
	//for (int j = 1; j <= 9; j++) {
	//	for (int i = 2; i <= 9; i++) {
	//		cout << i << " * " << j << " = " << i * j  << "\t";
	//	}
	//	cout << endl;
	//}


	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << j << " * " << i << " = " << i * j << "\t";
		}
		cout << endl;
	}
}
*/

// 13. 최대공약수, 최소 공배수(유클리드 호제법)
/*
void main() {
	int u, v, gcm, lcm, m, n;
	cout << "두 수를 입력하세요 : ";
	cin >> u >> v;
	m = u;
	n = v;

	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else {
			n = n - m;
		}
	}

	gcm = m;
	lcm = u * v / gcm;
	cout << "최대 공약수는 : " << gcm << endl;
	cout << "최소 공배수는 : " << lcm << endl;	
}
*/

// 14. 최대 공약수를 찾는 법 : 큰 수를 작은 수로 나누고 그 나머지가 최대 공약수
/*
void main() {
	int u, v, gcm, lcm, s, l, na;
	cout << "두 수를 입력하세요 : ";
	cin >> u >> v;
	if (u > v) {
		s = v;
		l = u;
	}
	else {
		s = u;
		l = v;
	}
	while (s != 0) {
		na = l % s;
		l = s;
		s = na;
		gcm = l;
		lcm = u * v / gcm;
		cout << "최대 공약수는 : " << gcm << endl;
		cout << "최소 공배수는 : " << lcm << endl;
	}
}
*/

//소문자 입력 하면 대문자 입력하라 함. ---> 쭉 그럼
//대문자를 입력하면 그 입력한 문자 부터 ~ 내가 입력한 문자 전까지 쭉 나옴.
//알파벳 총 26개
/*
void main() {
	char al;
	cout << "한 문자를 입력하세요 : ";
	cin >> al;
	while (al < 65 || al > 90) {
		cout << "대문자를 입력하세요 : ";
		cin >> al;
	}

	char mun = al;

	for (int i = 0; i < 26; i++) {
		mun = al + i;
		if (mun > 'Z') {
			cout << (char)(mun - 26) <<" ";
		}
		else cout << mun << " ";
	}
}
*/
// 쌤 방법
//void main() {
//	char mun, aip;
//	int i;
//	cout << "한 문자를 입력하세요 : ";
//	while (1) {
//		cin >> mun;
//		if (mun >= 'A' && mun <= 'Z') {
//			for (i = 1; i <= 26; i++) {
//				aip = mun++;
//				cout << setw(2) << aip;
//				if (mun > 'Z') mun = mun - 26;
//			}
//			cout << endl;
//			break;
//		}
//		else {
//			cout << "대문자를 입력하세요 : ";
//			continue;
//		}
//	}
//}
