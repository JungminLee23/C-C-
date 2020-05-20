#include "1.h"


int max(int a, int b) // 가인수
{
	if (a > b) return a;
	else return b;
}

void main() {
	int m, n, res;
	cout << "비교 할 두 수를 입력하세요 : ";
	cin >> m >> n;
	res = max(m, n); // 얘가 실 인수
	cout << "MAX : " << res;
}


