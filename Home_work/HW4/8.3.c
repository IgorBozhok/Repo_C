#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	double x, y;
	char sign;
	printf("Введите 1 число : ");
	scanf_s("%lf", &x);
	printf("Введите 2 число : ");
	scanf_s("%lf", &y);
	printf("Выберете арифметическое действие для этих цифр : ");
	while (getchar() != '\n');
	scanf_s("%c", &sign);
	enum SIGN { PLUS = '+', MINUS = '-', MULTIPLY = '*', DIVIDED = '/' };
	switch (sign) {
	case PLUS:
		printf_s("%.2lf\n", x + y);
		break;
	case MINUS:
		printf_s("%.2lf\n", x - y);
		break;
	case MULTIPLY:
		printf_s("%.2lf\n", x * y);
		break;
	case DIVIDED:
		printf_s("%.2lf\n", x / y);
		break;
	default:
		printf_s("Ввели другой символ :-( \n ");

	}
	return 0;
}
