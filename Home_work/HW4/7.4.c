#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");
	int a, b;
	printf_s("������� 1 ����� : ");
	scanf_s("%d", &a);
	printf_s("������� 2 ����� : ");
	scanf_s("%d", &b);
	if (a > b) {
		printf_s("%d %d \n",b,a);
	}
	else if (a<b) {
		printf_s("%d %d \n", a, b);
	}
	else if (a==b) {
		printf_s("%d=%d \n", a, b);
	}
	return 0;
}