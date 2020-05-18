#include<stdio.h>
#include<iostream>
#include<string>    //문자열에 관한 것
#include<sstream>//클래스형 객체를 만듦.
#include<iomanip>
#include<conio.h>

using namespace std;

// 1. C++에서의 입출력
/*
void main() {
	
	std::cout << "hello world" << std::endl;
	//using namespace std; 를 사용하지 않았을 때
	// 접두어 첨부

	cout << "hello World" << endl;
	//using namespace std;를 사용했을 때.
}
*/


//2. 출력
/*
void main() {
	char name[] = "Lee jung min";
	float kor, eng, mat, tot;
	double avg;
	kor = 90;
	eng = 85;
	mat = 70;
	tot = kor + eng + mat;
	avg = tot / 3.0;

	printf("***************************C언어 출력 함수****************************\n");
	printf("   name      kor   eng   mat   tot   avg\n");
	printf("%8s%3.0f%7.0f%6.0f%6.0f%6.1lf", name, kor, eng, mat, tot, avg);
	
	
	cout << endl << "***************************C++ 출력 함수****************************\n";
	cout << "    name      kor   eng    mat    tot    avg" << endl;
	cout << setw(10) << name << setw(5) << kor << setw(6) << eng << setw(6) << mat << setw(8) 
		<< tot << setw(7) <<  setprecision(3)<< avg<<endl;
}
*/

// 3.콘솔창에 띄우지 않고 입력을 받기
/*
void main()
{
	int number;
	cout << "숫자 입력받기 : ";
	cin >> number;
	cout << "출력 : " << number << endl;

	char dan[15];
	cout << "문자 입력 받기 : ";
	cin >> dan;
	cout << "출력 : " << dan << endl;
	cout << "멈추려면 0을 누르세요! ";
	_getch();
	//0을 입력하면 이걸 콘솔창에 띄우지 않고 그냥 입력만 들어가게 --> 0을 담지 않을 것. 그러므로 변수가 필요 없음.
	cout << endl;
}
*/

// 4. string
/*
int main() {
	int n;
	stringstream ss;
	//엄청 큰 클래스! 많은 메소드들이 들어있다.-->sstream에서 들고 옴
	//클래스 형태이기 때문에 객체 생성을 한 후 그거가지고 써야 함
	ss.str("12 345           6789 0 -12");
	//겁나 편한 함수
	//보통 문자열을 받으면 공백때문에 문제가 많아짐. 공백을 끌고와서 정규식에 어긋난다거나, 메모리 공간을 낭비한다거나 그럼.
	//근데 stringstream에서 str은 뭔가 강력함. 공백을 알아서 제거하고 스페이스 기준으로 나눔
	//공백 걱정이나 메모리 걱정을 안해도 됨.
	
	for (int i = 0; i < 5;  i++) {
		ss >> n; // 띄어쓰기 기준으로 들고 옴.(n에 넣어 줌)
		//ss는 string인데 str로 넣었기 때문에 int형인 n에 형변환 없이 알아서 들어감
		cout << n << endl;
	}
	
	return 0;
}
*/

//5. 흠
/*
void main() {
	cout << setw(10) << "753-9510" << "|" << endl;
	
	cout << setiosflags(ios::left); // 이제 왼쪽부터 찍어라

	cout << setw(10) << "753-9510" << "|"<<endl;

	cout << 3.14 << endl;

	cout << setprecision(6); //소수점까지 6자리로 줘라
	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
	//setiosflags(ios::showpoint) : 빈자리를 0을 채워 줌.(위에서 쓴 setprecision의 숫자만큼)
	
	cout << resetiosflags(ios::left); // 왼쪽정렬해제
	cout << setw(10) << "World" << "|" << endl;
	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;




}
*/

// 6. cin.get(변수명, 크기?) 
/*
void main() {
	char name[15];
	char address[20];
	cout << "이름을 입력하세요 : ";
	
	cin.get(name, 15);
	//cin.get은 공백까지 다 들고 들어감.(메모리 공간이 허용하면)
	//근데 엔터 전까지 엔터를 제외하고 올라감. 그래서 버퍼에 엔터가 남아있다.
	//그래서 들고 올라간 후 메모리를 비워줘야 한다.
	cin.ignore();
	// 메모리 비우기

	cout << "address : ";
	cin.get(address, 20);
	cout << "\nName : " << name << endl << "address : " << address << endl;
	
}
*/

// 7. cin.getLine(변수명, 사이즈?);
/*
void main() {
	char name[15];
	char address[20];
	cout << "What's your name?";
	cin.getline(name, 15);
	cout << "address?";
	cin.getline(address, 20);
	cout << "\nName : " << name << endl;
	cout << "Address : " << address << endl;
}
*/

//8. 연산자
/*
void main() {
	int a = 10, b = 5, c, d, e;

	printf("1. a = %d, b = %d\n", a++, b); // a = 10, b = 5
	printf("2. a = %d, b = %d\n", a++, --b); // a = 11, b = 4
	printf("3. a = %d, b = %d\n", ++a, b);// a = 13, b = 4
	
	c = a;
	printf("4. c = %d\n", c);
	d = c % b;
	printf("5. d = %d\n", d);
}
*/

//8-1. 연산자
/*
void main() {
	int a, b, c, h, s;
	a = b = h = 5;
	c = ++a + b--; // a는 계산 전에 ++를 하고 b는 계산 후에 --를 함.
	cout << "a = " << a << endl; // 계산 전에 ++을 했기 때문에 6
	cout << "b = " << b << endl; // 계산 후에 --를 했기 때문에 4
	cout << "c = " << c << endl; // 계산 할 때 6 + 5이기 때문에 11

	s = ++h + ++h; 
	
	//++를 먼저 하기 때문에 h가 6에서 7이 되고
	//그 다음 순위인 + 를 해서 7 + 7이 된다.
	//즉, s = 14가 된다.
	//
	cout << "h = " << h << endl;
	cout << "s = " << s << endl; // 14가 나옴.
}
*/

// 9. 논리 연산자
/*
void main() {
	int h, s;
	h = 3;
	s = h > 2;
	cout << s << endl;
	s = h < 2;
	cout << s << endl;
	s = 2 == 3;
	cout << s << endl;
}
*/

//10. 논리 연산자 2
/*
void main() {
	int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;
}
*/

//11. 입력값 받아서 비교
/*
void main() {
	int a, b, c;
	cout << "두 값을 입력하세요  : ";
	scanf_s("%d %d", &a, &b);
	c = a > b;
	printf("C 결과 : %d\n", c);
	printf("a>b 결과 : %d\n", a > b);
	a++;
	printf("a와 b가 같다 : %d\n", a == b);
	printf("a와 b가 같지 않다 : %d\n", a != b);
}
*/

// 12. 논리 연산자 3
/*
void main() {
	int a = 3, b = 2, c;
	c = a == ++b; // a랑 ++b가 같다면 1, 아니라면 0
	printf("결과 : %d\n", (a == b) && (--b == c)); // a랑 b가 같으면 true && --b랑 c가 같다면 true 아니면 false
								 // 3 == 3 &&    2 == 1
								 //  true    &&    false 
	printf("결과 : %d\n", (a != b) || (b == c));      //a랑 b가 같지 않다면 true || b랑 c가 같다면 true
								// 3 != 2   ||  2 == 1 
								//   true    ||   false
	printf("결과 : %d\n", !((a != b) || (b == c)));     // 위에 값이 ture라면 false, false면 true
								// !( 3!=2) ||  (2 == 1))
								// !( false) ||  (false))
}
*/


