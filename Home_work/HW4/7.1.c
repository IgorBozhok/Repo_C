#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	printf_s("Введите число : ");
	scanf_s("%d", &number);
	if (number % 2 == 0) {
		printf_s("Число четное \n");
	}
	else {
			printf_s("Число нечетное.\n");
		}
	return 0;
}