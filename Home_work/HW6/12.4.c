#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	int B;
	int C;
	printf_s("Введите число : ");
	scanf_s("%d", &number);
	printf_s("Все целые числа В, для которых А делиться без остатка на В*В : \n ");
		for (int i = 1; i <= number; ++i) {
			B = i*i%number;
			if (B == 0) {
				printf_s("%d, ", i);
			}
		}
		printf_s("\n");
	printf_s("Все целые числа В, для которых не делиться без остатка на В*В*В : \n ");
		for (int i = 1; i <= number; ++i) {
			C = i*i*i%number;
			if (C!= 0) {
			printf_s("%d, ", i);
		}
	}
	return 0;
}
