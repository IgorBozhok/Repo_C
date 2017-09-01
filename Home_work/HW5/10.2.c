#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	int i = 1;
	while (i < 20) {
		setlocale(LC_ALL, "rus");
		double x, y;
		printf_s("Введите число : ");
		scanf_s("%lf", &x);
		printf_s("Введите степень числа : ");
		scanf_s("%lf", &y);
		printf_s("Степень : %.lf\n", pow(x, y));
		i++;
	}
	return 0;
}