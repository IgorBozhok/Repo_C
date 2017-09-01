#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a=1, sum=0;
	while (a <= 999) {
		a++;
		sum += a;
	}
	double sum1 = (double)sum / 1000;
	printf_s("сумму целых чисел от 1 до 1000 = %d. \n", sum);
	printf_s("Среднее арифметическое всех целых чисел от 1 до 1000 = %lf. \n", sum1);
	return 0;
}