#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");

	unsigned int a;
	printf_s("¬ведите любое положительное число : ");
	scanf_s("%d", &a);
	int b = 0;
	int d = 1;
	int r;
	while (a) {
		r = a % 10;
		if (r != 6 && r != 3)
		{
			b = b + d* (a % 10);
			d = d * 10;
		}

		a = a / 10;

	}
	printf_s("%d", b);
	return 0;
}
	
		