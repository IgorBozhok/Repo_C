#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int x;
	printf_s("¬ведите число :\n");
	scanf_s("%d", &x);
	if (x % 2 == 0) {
		double a = x * 3;
		printf_s("%.2lf \n ", a);
	}
	else {
		double b = (double)x/2;
		printf_s("%.2lf \n", b);
	}
	
	return 0;
}