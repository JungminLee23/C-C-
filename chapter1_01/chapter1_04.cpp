#include<iostream>

using namespace std;

// 1. ���� ������
/*
void main() {
	int a, b;
	cout << "ù ��° ���ڸ� �Է��Ͻÿ� : ";
	cin >> a;
	cout << "�� ��° ���ڸ� �Է��Ͻÿ� : ";
	cin >> b;

	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "��(��) �� ũ��. " << endl : cout << b << "��(��) �� ũ��" << endl;
	// ���� ? true : false;

}
*/

// 2. ���� ������ �̿��ؼ� MAX, MIN �� ���ϱ�
/*
int main() {
	int i, j, k, MAX, MIN;
	cout << "���� 3���� �Է��ϼ��� : ";
	cin >> i >> j >> k; // 3���� �Է��� �Ѳ�����

	//���� �����ڸ� �̿��ؼ� MAX�� MIN���� ���ϱ� -- �� ���
	i > (j > k ? MAX = j : MAX = k) ? MAX = i : MAX;
	cout << "MAX = " << MAX << endl;

	i > (j > k ? MIN = k : MIN = j) ? MIN : MIN = i;
	cout << "MIN = " << MIN << endl;

	cout << endl << endl;

	// �� ���
	MAX = (i > j) ? (i > k ? i : k) : (j > k ? j : k);
	MIN = (i < j) ? (i < k ? i : k) : (j < k ? j : k);
	cout << "MAX = " << MAX << endl;
	cout << "MIN = " << MIN << endl;
}
*/

// 3. �ܵ�?
void main() {
	int n, n1, n2, n3, n4, n5, n6;
	cout << "�ټ��ڸ� ���� �Է��ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;

	// for ���� �̿��Ͽ� �ϴ� ����� ����.

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


	cout << "����¥�� : " << n1 << "��" << endl;
	cout << "��õ��¥�� : " << n2 << "��" << endl;
	cout << "õ��¥�� : " << n3 << "��" << endl;
	cout << "�����¥�� : " << n4 << "��" << endl;
	cout << "���¥�� : " << n5 << "��" << endl;
	cout << "�ʿ�¥�� : " << n6 << "��" << endl;
	cout << "������ �ܵ� : " << n << "��" << endl;
}