#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	double x, y;
	char sign;
	printf("������� 1 ����� : ");
	scanf_s("%lf", &x);
	printf("������� 2 ����� : ");
	scanf_s("%lf", &y);
	printf("�������� �������������� �������� ��� ���� ���� : ");
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
		printf_s("����� ������ ������ :-( \n ");

	}
	return 0;
}
