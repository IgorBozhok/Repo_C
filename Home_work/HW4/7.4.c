#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");
	int a, b;
	printf_s("¬ведите 1 число : ");
	scanf_s("%d", &a);
	printf_s("¬ведите 2 число : ");
	scanf_s("%d", &b);
	if (a > b) {
		printf_s("%d %d \n",b,a);
	}
	else if (a<b) {
		printf_s("%d %d \n", a, b);
	}
	else if (a==b) {
		printf_s("%d=%d \n", a, b);
	}
	return 0;
}