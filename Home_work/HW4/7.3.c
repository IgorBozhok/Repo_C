#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");
	int a;
	printf_s("������� ����� : ");
	scanf_s("%d", &a);
	if (a > 0) {
		printf_s("%d - �������������. \n ",a);
	}
	else if (a<0) {
		printf_s("%d - �������������. \n ", a);
	}
	else if (a == 0) {
		printf_s("��� ����� 0. \n ", a);
	}
	return 0;
}