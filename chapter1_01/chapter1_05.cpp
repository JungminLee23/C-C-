#include<iostream>

using namespace std;

// 1. ���� �Ǻ���
/*
void main() {
	int num;
	cout << "���ڸ� �Է����ּ���  :  ";
	cin >> num;

	// ¦�� �Ǻ�
	if (num % 2 == 0) {
		cout << num << "��(��) ¦�� �Դϴ�." << endl;
		// 10�� ��� �Ǻ�
		if (num % 5 == 0) {
			cout << num << "��(��) 10�� ��� �Դϴ�." << endl;
		}
		else {
			cout << num << "��(��) 10�� ����� �ƴմϴ�." << endl;
		}
	}
	else {
		cout << num << "��(��) Ȧ�� �Դϴ�." << endl << num << "��(��) 10�� ����� �ƴմϴ�." << endl;
	}

	cout << "���ڸ� �Է��ϼ���  :  ";
	cin >> num;
	if (num > 10) {
		cout << num << "��(��) 10���� Ů�ϴ�." << endl;
	}
	else cout << num << "��(��) 10���� �۽��ϴ�." << endl;
}
*/

// 2. �� �� �� �м�
/*
void main() {
	int num1, num2;
	cout << "ù ��° ���� �Է��ϼ��� : ";
	cin >> num1;

	cout << "�� ��° ���� �Է��ϼ��� : ";
	cin >> num2;
	
	cout << "�� ���� �� �м�  ����� : "; 

	if (num1 >= num2) {	
		if (num1 == num2) {
			cout << num1 << "�� " << num2 << "��(��) ���� �� �Դϴ�." << endl;
		}
		else cout << num1 << "��(��) �� ū �� �Դϴ�." << endl;
	}
	else  cout << num1 << "��(��) �� ���� �� �Դϴ�." << endl;
}
*/


//3. 5�� ����� �Ǳ� ���� �ʿ��� ����
/*
void main() {
	int num, a;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;

	if (num % 5 == 0) cout << num << "��(��) 5�� ���!" << endl;
	else {
		a = 5 - (num % 5);
		cout << num << "��(��) 5�� ����� �Ǳ� ���ؼ��� " << a << "�� �ʿ�!" << endl;
	}
}
*/

//4.  ��� ���� Ȯ�� + �ʿ��� ����
void main() {
	int num1, num2;

	cout << "�м��� ���ڸ� �Է� : ";
	cin >> num1;
	cout << "��� ���ڸ� �Է� : ";
	cin >> num2;
	if (num1%num2 == 0) cout << num1 << "��(��) " << num2 << "�� ��� �Դϴ�." << endl;
	else {
		cout << num1 << "��(��) " << num2 << "�� ����� �Ǳ� ���ؼ��� " << num2 - (num1%num2) << "�� �ʿ�!" << endl;
		cout << "Ȥ�� " << num1 % num2 << " �� ������ �˴ϴ�." << endl;
	}
}
