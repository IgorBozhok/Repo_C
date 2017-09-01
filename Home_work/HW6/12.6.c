#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num;
	printf_s("¬ведите число : ");
	scanf_s("%d", &num);
	printf_s("¬се целые числа, на которое заданное число делитьс€ без остатка : ");
	for (int i = INT_MIN; i < INT_MAX; ++i) {
		if (i%num == 0) {
			printf_s("%d ", i);
		}
	}
	return 0;
}