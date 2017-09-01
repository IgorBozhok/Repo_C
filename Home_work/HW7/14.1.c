#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void) {
	setlocale(LC_ALL, "rus");
	int i;
	char symbol;
	int ch,ch1,ch2;
	printf_s("Введите символ ");
	scanf_s("%c", &symbol);
	printf_s(" 1) Выберите вертикальную линию.\n ");
	printf_s("2) Выберите горизонтальную линию.\n ");
	do {
		printf_s("Ваш выбор :");
		scanf_s("%d", &ch);
	} while (ch<1 || ch>2);
	switch (ch) {
	case 1:
		printf_s("Линия может выводиться : быстро, нормально и медленно.\n");
		printf_s("1) Быстро.\n");
		printf_s("2) Нормально.\n");
		printf_s("3) Медленно.\n");

		do {
			printf_s("Ваш выбор : ");
			scanf_s("%d", &ch1);
		} while (ch1 < 1 || ch1>3);
		switch (ch1) {
		case 1:
			for (i = 1; i < 11; ++i) {
				printf("%c",symbol);
				Sleep(100);
				printf("\n");
			}
			printf("\n");
			break;
		case 2:
			for (i = 1; i < 11; ++i) {
				printf("%c", symbol);
				Sleep(500);
				printf("\n");
			}
			printf("\n");
			break;
		case 3:
			for (i = 1; i < 11; ++i) {
				printf("%c", symbol);
				Sleep(1000);
				printf("\n");
			}
			printf("\n");
			break;
		}
		break;
	case 2: printf_s("Линия может выводиться : быстро, нормально и медленно.\n");
		printf_s("1) Быстро.\n");
		printf_s("2) Нормально.\n");
		printf_s("3) Медленно.\n");

		do {
			printf_s("Ваш выбор : ");
			scanf_s("%d", &ch2);
		} while (ch2 < 1 || ch2>3);
		switch (ch2) {
		case 1:
			for (i = 1; i < 11; ++i) {
				printf("%c", symbol);
				Sleep(100);
			}
			printf("\n");
			break;
		case 2:
			for (i = 1; i < 11; ++i) {
				printf("%c", symbol);
				Sleep(500);
			}
			printf("\n");
			break;
		case 3:
			for (i = 1; i < 11; ++i) {
				printf("%c", symbol);
				Sleep(1000);
			}
			printf("\n");
			break;
		}
		break;
	}
	return 0;
}