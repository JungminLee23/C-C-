#include "1.h"

int a;
void add(int i) {
	if (i >= 10)
		return;
	i++;
	a++;
	add(i); // ����Լ�
}

int main() {

	add(0);
	cout << a << endl;
	return 0;
}