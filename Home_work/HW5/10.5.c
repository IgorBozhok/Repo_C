#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");
	int a;
	printf_s("¬ведите число : ");
	scanf_s("%d", &a);
	int b = 0;
	while (b <= 10) {
		
		printf_s("%d*%d=%d\n", a, b, a*b);
		b++;
	}
	return 0;
}