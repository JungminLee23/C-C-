#include<stdio.h>
#include<iostream>
#include<string>    //���ڿ��� ���� ��
#include<sstream>//Ŭ������ ��ü�� ����.
#include<iomanip>
#include<conio.h>

using namespace std;

// 1. C++������ �����
/*
void main() {
	
	std::cout << "hello world" << std::endl;
	//using namespace std; �� ������� �ʾ��� ��
	// ���ξ� ÷��

	cout << "hello World" << endl;
	//using namespace std;�� ������� ��.
}
*/


//2. ���
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

	printf("***************************C��� ��� �Լ�****************************\n");
	printf("   name      kor   eng   mat   tot   avg\n");
	printf("%8s%3.0f%7.0f%6.0f%6.0f%6.1lf", name, kor, eng, mat, tot, avg);
	
	
	cout << endl << "***************************C++ ��� �Լ�****************************\n";
	cout << "    name      kor   eng    mat    tot    avg" << endl;
	cout << setw(10) << name << setw(5) << kor << setw(6) << eng << setw(6) << mat << setw(8) 
		<< tot << setw(7) <<  setprecision(3)<< avg<<endl;
}
*/

// 3.�ܼ�â�� ����� �ʰ� �Է��� �ޱ�
/*
void main()
{
	int number;
	cout << "���� �Է¹ޱ� : ";
	cin >> number;
	cout << "��� : " << number << endl;

	char dan[15];
	cout << "���� �Է� �ޱ� : ";
	cin >> dan;
	cout << "��� : " << dan << endl;
	cout << "���߷��� 0�� ��������! ";
	_getch();
	//0�� �Է��ϸ� �̰� �ܼ�â�� ����� �ʰ� �׳� �Է¸� ���� --> 0�� ���� ���� ��. �׷��Ƿ� ������ �ʿ� ����.
	cout << endl;
}
*/

// 4. string
/*
int main() {
	int n;
	stringstream ss;
	//��û ū Ŭ����! ���� �޼ҵ���� ����ִ�.-->sstream���� ��� ��
	//Ŭ���� �����̱� ������ ��ü ������ �� �� �װŰ����� ��� ��
	ss.str("12 345           6789 0 -12");
	//�̳� ���� �Լ�
	//���� ���ڿ��� ������ ���鶧���� ������ ������. ������ ����ͼ� ���ԽĿ� ��߳��ٰų�, �޸� ������ �����Ѵٰų� �׷�.
	//�ٵ� stringstream���� str�� ���� ������. ������ �˾Ƽ� �����ϰ� �����̽� �������� ����
	//���� �����̳� �޸� ������ ���ص� ��.
	
	for (int i = 0; i < 5;  i++) {
		ss >> n; // ���� �������� ��� ��.(n�� �־� ��)
		//ss�� string�ε� str�� �־��� ������ int���� n�� ����ȯ ���� �˾Ƽ� ��
		cout << n << endl;
	}
	
	return 0;
}
*/

//5. ��
/*
void main() {
	cout << setw(10) << "753-9510" << "|" << endl;
	
	cout << setiosflags(ios::left); // ���� ���ʺ��� ����

	cout << setw(10) << "753-9510" << "|"<<endl;

	cout << 3.14 << endl;

	cout << setprecision(6); //�Ҽ������� 6�ڸ��� ���
	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
	//setiosflags(ios::showpoint) : ���ڸ��� 0�� ä�� ��.(������ �� setprecision�� ���ڸ�ŭ)
	
	cout << resetiosflags(ios::left); // ������������
	cout << setw(10) << "World" << "|" << endl;
	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;




}
*/

// 6. cin.get(������, ũ��?) 
/*
void main() {
	char name[15];
	char address[20];
	cout << "�̸��� �Է��ϼ��� : ";
	
	cin.get(name, 15);
	//cin.get�� ������� �� ��� ��.(�޸� ������ ����ϸ�)
	//�ٵ� ���� ������ ���͸� �����ϰ� �ö�. �׷��� ���ۿ� ���Ͱ� �����ִ�.
	//�׷��� ��� �ö� �� �޸𸮸� ������ �Ѵ�.
	cin.ignore();
	// �޸� ����

	cout << "address : ";
	cin.get(address, 20);
	cout << "\nName : " << name << endl << "address : " << address << endl;
	
}
*/

// 7. cin.getLine(������, ������?);
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

//8. ������
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

//8-1. ������
/*
void main() {
	int a, b, c, h, s;
	a = b = h = 5;
	c = ++a + b--; // a�� ��� ���� ++�� �ϰ� b�� ��� �Ŀ� --�� ��.
	cout << "a = " << a << endl; // ��� ���� ++�� �߱� ������ 6
	cout << "b = " << b << endl; // ��� �Ŀ� --�� �߱� ������ 4
	cout << "c = " << c << endl; // ��� �� �� 6 + 5�̱� ������ 11

	s = ++h + ++h; 
	
	//++�� ���� �ϱ� ������ h�� 6���� 7�� �ǰ�
	//�� ���� ������ + �� �ؼ� 7 + 7�� �ȴ�.
	//��, s = 14�� �ȴ�.
	//
	cout << "h = " << h << endl;
	cout << "s = " << s << endl; // 14�� ����.
}
*/

// 9. �� ������
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

//10. �� ������ 2
/*
void main() {
	int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;
}
*/

//11. �Է°� �޾Ƽ� ��
/*
void main() {
	int a, b, c;
	cout << "�� ���� �Է��ϼ���  : ";
	scanf_s("%d %d", &a, &b);
	c = a > b;
	printf("C ��� : %d\n", c);
	printf("a>b ��� : %d\n", a > b);
	a++;
	printf("a�� b�� ���� : %d\n", a == b);
	printf("a�� b�� ���� �ʴ� : %d\n", a != b);
}
*/

// 12. �� ������ 3
/*
void main() {
	int a = 3, b = 2, c;
	c = a == ++b; // a�� ++b�� ���ٸ� 1, �ƴ϶�� 0
	printf("��� : %d\n", (a == b) && (--b == c)); // a�� b�� ������ true && --b�� c�� ���ٸ� true �ƴϸ� false
								 // 3 == 3 &&    2 == 1
								 //  true    &&    false 
	printf("��� : %d\n", (a != b) || (b == c));      //a�� b�� ���� �ʴٸ� true || b�� c�� ���ٸ� true
								// 3 != 2   ||  2 == 1 
								//   true    ||   false
	printf("��� : %d\n", !((a != b) || (b == c)));     // ���� ���� ture��� false, false�� true
								// !( 3!=2) ||  (2 == 1))
								// !( false) ||  (false))
}
*/


