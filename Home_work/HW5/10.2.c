#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	int i = 1;
	while (i < 20) {
		setlocale(LC_ALL, "rus");
		double x, y;
		printf_s("������� ����� : ");
		scanf_s("%lf", &x);
		printf_s("������� ������� ����� : ");
		scanf_s("%lf", &y);
		printf_s("������� : %.lf\n", pow(x, y));
		i++;
	}
	return 0;
}