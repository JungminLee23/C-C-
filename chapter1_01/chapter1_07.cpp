#include "1.h"


int max(int a, int b) // ���μ�
{
	if (a > b) return a;
	else return b;
}

void main() {
	int m, n, res;
	cout << "�� �� �� ���� �Է��ϼ��� : ";
	cin >> m >> n;
	res = max(m, n); // �갡 �� �μ�
	cout << "MAX : " << res;
}


