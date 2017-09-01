#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	printf_s("¬ведите число :");
	scanf_s("%d", &number);
	int sum = 0;
	int r;
	int a = number;
	while (number) {
		r = number % 10;
		sum = sum + r;
		number = number / 10;
	}
	if (pow(sum, 3) != pow(a, 2)) {
		printf_s(" уб суммы цифр числа %d равен %.lf и не равен %.lf \n",a, pow(sum, 3), pow(a, 2));
	}
	else if (pow(sum, 3) == pow(a, 2)) {
		printf_s(" уб суммы цифр числа %d равен %.lf и равен %.lf \n", a, pow(sum, 3), pow(a, 2));
	}
	return 0;
}