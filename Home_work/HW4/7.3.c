#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");
	int a;
	printf_s("Введите число : ");
	scanf_s("%d", &a);
	if (a > 0) {
		printf_s("%d - положительное. \n ",a);
	}
	else if (a<0) {
		printf_s("%d - отрицательное. \n ", a);
	}
	else if (a == 0) {
		printf_s("Оно равно 0. \n ", a);
	}
	return 0;
}