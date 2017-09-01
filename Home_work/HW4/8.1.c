#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d, f;
	printf_s("Введите 1 оценку от 1 до 10 : ");
	scanf_s("%d", &a);
	printf_s("Введите 2 оценку от 1 до 10 :  ");
	scanf_s("%d", &b);
	printf_s("Введите 3 оценку от 1 до 10 : ");
	scanf_s("%d", &c);
	printf_s("Введите 4 оценку от 1 до 10 : ");
	scanf_s("%d", &d);
	printf_s("Введите 5 оценку от 1 до 10 : ");
	scanf_s("%d", &f);
	int Score = (a + b + c + d + f) / 5;
	if (Score >= 4) {
		printf_s("Допущен студент к экзамену, его средний балл = %d \n", Score);
	}
	else {
		printf_s("Не допущен студент к экзамену, его средний балл = %d \n", Score);
	}
	
	return 0;
}