#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf_s("Введите число от 0 до 500 : ");
	scanf_s("%d", &a);
	int sum = a;
	int b = a;
	if (a>= 0 && a <= 500) {
		while (a <=499) {
			a++;
			sum += a;
			/*printf_s("%d\n", a);*/
		}
			printf_s("Сумму целых чисел от %d до 500 = %d\n", b, sum);
		}
	else {
		printf_s("Вы ввели %d ,а нужно от 0 до 500!!!! \n", a);
	}
	
	return 0;
}