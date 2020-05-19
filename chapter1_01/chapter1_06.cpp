#include<iostream>
#include<iomanip>

using namespace std;


// 1. switch-cas ���� �̿��ؼ� 
/*
void main() {
	int kor, eng, tot, mok;
	double avg;

	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
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
		//���� ���� �ֱ�
		
		default:
			cout << "F" << endl;
			break;
		}
	}
	else cout << "������ �̻��մϴ�." << endl;
}
*/

// 2. switch-case 2��°
/*
void main() {
	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ��� (+, -, *, /, %) : " << endl;
	cin >> op;

	cout << "���� ��� : " << a << " " << op << " " << b << " = ";
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
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
}
*/

// 3. ���� ��� ���ϱ�
// ������ 4�� ������ �������� // 100���� ���� �������� �ʰų� 400���� ���� �������� ����
// �ƴϸ� ���

/*
void main() {
	int year;

	cout << "���� ���� �Է��ϼ��� : ";
	cin >> year;
	if (year % 4==0 && (year %100 != 0 || year % 400 == 0)) {
		cout << year << "��(��) �����Դϴ�." << endl;
	}
	else cout << year << "��(��) ������ �ƴմϴ�." << endl;
}
*/

// 4. while�� ����
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

// 5. 1~100������ ��
/*
void main() {
	int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}

	//�̷��� �ص� ��.
	//while (i < 100) {
	//	i = i + 1;
	//	sum = sum + i;
	//}

	cout << "while�� �̿��� ���� : " << sum << endl;

	i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i <= 100);
	cout << "do-while�� �̿��� �� : " << sum;
}
*/

// 6. for��
/*
void main() {
	int i, sum = 0;

	for (i = 0; i <= 100; i++) {
		sum += i;
	}
	cout << "for���� �̿��� �� : " << sum;
}
*/

// 7. ���� for�� ����
/*
void main() {
	int a, b;
	cout << "���� for��" << endl;
	for (a = 1; a <= 2; a++) {
		for (b = 1; b <= 3; b++) {
			cout << "a = " << a << setw(5) << "b = " << b << endl;
		}
	}
	cout << "��!" << endl;
}
*/

// 8. C++�� ������. 4�ٷ�(or 3��)
/*
void main() {
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}
*/

//9. �� ���� �Է��ϰ� ������ ���(4��)
/*
void main() {
	int dan;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> dan;
	for (int i = 1; i <= 9; i++) {
		cout << dan << " * " << i << " = " << dan * i<< endl;
	}
}
*/

// 10. ���� �ϳ� ���� ---> ���� �ݺ�����
/*
void main() {
	char mun;
	while (1) {
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z') {
			cout << "���� �Է� �Դϴ�." << endl;
			break;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�. �빮�ڸ� �Է��ϼ���" << endl;
		}
	}
}
*/

// 11. EOF��
/*
void main() {
	int n;
	while (1) {
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> n;
		if (n == EOF) // EOF => -1 ��������
		{
			cout << "����˴ϴ�." << endl;
			break;
		}
		else continue;
	}
}
*/

// 12. ���η� ������ ���
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

// 13. �˰���?
// Ȧ�������� ��, ¦�������� ��

/*
void main() {
	// i -> 1~100����
	// asum = 1~100���� Ȧ�� ��
	// bsum = 1~100���� ¦�� ��
	// sw => ����ġ ����(¦������ Ȧ������ Ȯ��)

	int asum = 0, bsum = 0, sw = 0, i = 1;
	
	while ( i <= 100) {
		sw = i % 2;
		if (sw == 1) {
			asum += i;
		}
		else bsum += i;
		i++;
	}
	cout << "asum = " << asum << " bsum = " << bsum;
}

// �˰��� �����ִ� ������� Ǯ�ڸ� �̷���
//void main() {
// sw�� 0�̸� ¦�� 1�̸� Ȧ��
//	int i = 0, asum = 0, bsum = 0, sw = 1;
//	do {
//		i++;
//		if (sw == 0) {
//			asum += i;
//			sw = 1;
//		}
//		else {
//			bsum += i;
//			sw = 0;
//		}
//	} while (i < 100);
//}

*/

// 14. �˰��� 2
void main() {
	// -,+ �� �����Ƽ� �����ϸ鼭 1~100���� ����.
	int sum = 0, num = 1, sw = 1;
	while (num <= 100) {
		// ��� 1.
		//if (sw == 1) //Ȧ��
		//{
		//	sum += num;
		//	sw = 0;
		//}
		//else //¦��
		//{
		//	sum -= num;
		//	sw = 1;
		//}

		// ��� 2.
		sum += sw*num;
		sw *=-1;
		num++;
	}
	cout << "����� " << sum << endl;
}