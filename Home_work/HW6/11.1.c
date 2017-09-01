#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	
	printf_s("    ***        *         *****       *         ***     \n");
	printf_s(" 1)  **     2) **     3)  ***   4)  ***   5)    *      \n");
	printf_s("      *        ***         *       *****       ***   \n\n");
	printf_s("    *   *      *            *       ****         *     \n");
	printf_s(" 6) * * *   7) ***    8)  ***   9)  ***   10)  ***     \n");
	printf_s("    *   *      *            *       *         ****   \n\n");
	
	
	int Choice;
	
	while (1) {
		do {
			printf_s("Ваш выбор : ");
			scanf_s("%d", &Choice);
			printf_s("\n");
		} while (Choice <= 0 || Choice >= 11);

		switch (Choice) {

		case 1: //фигура а
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j <= i; ++j) {
					printf_s(" ");
				}
				for (int j = 7; j >= i; --j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 2: // фигура б
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j <= i; ++j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 3: // фигура в
			for (int a = 0; a < 8; ++a) {
				for (int b = 0; b <= a; ++b) {
					printf_s(" ");
				}
				for (int c = 6; c >= a; --c) {
					printf_s("*");
				}
				for (int d = 7; d >= a; --d) {
					printf_s("*");
				}
				for (int f = 0; f <= a; ++f) {
					printf_s(" ");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;
		case 4: // фигура г
			for (int a = 0; a < 8; ++a) {
				for (int b = 6; b >= a; --b) {
					printf_s(" ");
				}

				for (int c = 0; c < a; ++c) {
					printf_s("*");
				}
				for (int d = 0; d <= a; ++d) {
					printf_s("*");
				}
				for (int f = 6; f >= a; --f) {
					printf_s(" ");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 5: // Фигура д
			for (int a = 0; a < 8; ++a) {
				for (int b = 0; b < a; ++b) {
					printf_s(" ");
				}
				for (int c = 7; c >= a; --c) {
					printf_s("*");
				}
				for (int d = 6; d >= a; --d) {
					printf_s("*");
				}
				for (int f = 0; f <= a; ++f) {
					printf_s(" ");
				}
				printf_s("\n");
			}
			for (int a = 0; a < 8; ++a) {
				for (int b = 6; b >= a; --b) {
					printf_s(" ");
				}
				for (int c = 0; c < a; ++c) {
					printf_s("*");
				}
				for (int d = 0; d <= a; ++d) {
					printf_s("*");
				}
				for (int f = 7; f >= a; --f) {
					printf_s(" ");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 6:// Фигура е
			for (int a = 0; a < 8; ++a) {
				for (int b = 0; b <= a; ++b) {
					printf_s("*");
				}
				for (int c = 6; c >= a; --c) {
					printf_s(" ");
				}
				for (int d = 6; d >= a; --d) {
					printf_s(" ");
				}
				for (int f = 0; f <= a; ++f) {
					printf_s("*");
				}
				printf_s("\n");
			}
			for (int a = 0; a < 8; ++a) {
				for (int b = 6; b >= a; --b) {
					printf_s("*");
				}
				for (int c = 0; c <= a; ++c) {
					printf_s(" ");
				}
				for (int d = 0; d <= a; ++d) {
					printf_s(" ");
				}
				for (int f = 6; f >= a; --f) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 7: //фигура Ж
			for (int i = 0; i < 9; ++i) {
				for (int j = 0; j <= i; ++j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			for (int i = 0; i < 8; ++i) {
				for (int j = 7; j >= i; --j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 8: //фигура 3
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j <= i; ++j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			for (int i = 0; i < 8; ++i) {
				for (int j = 7; j >= i; --j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 9: // фигура и
			for (int i = 0; i < 8; ++i) {
				for (int j = 7; j >= i; --j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;

		case 10:  //фигура к
			for (int i = 0; i < 8; ++i) {
				for (int j = 7; j >= i; --j) {
					printf_s(" ");
				}
				for (int j = 0; j <= i; ++j) {
					printf_s("*");
				}
				printf_s("\n");
			}
			printf_s("\n");
			break;
		}
	}
	return 0;
}
